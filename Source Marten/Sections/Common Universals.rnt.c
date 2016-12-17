/* A VPL Section File */
/*

Common Universals.rnt.c
Copyright: 2002 Scott B. Anderson

*/

Nat4 VPLU_Make_20_Clone_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Make_20_Clone_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 171 271 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 108 33 113 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 48 25 64 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 43 59 48 64 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 49 140 65 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"has method?");
/* IO - VPL Terminal : { 44 181 49 186 }*/
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

/* Start Operations: { 60 60 }{ 240 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 71 82 87 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"methods");
/* IO - VPL Terminal : { 66 114 71 119 }*/
/* IO - VPL Root : { 87 114 92 119 }*/
/* End Operation */

/* Begin Operation: { 70 183 86 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Clone");
/* IO - VPL Root : { 86 196 91 201 }*/
/* End Operation */

/* Begin Operation: { 115 146 131 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 110 158 115 163 }*/
/* IO - VPL Terminal : { 110 172 115 177 }*/
/* IO - VPL Root : { 131 166 136 171 }*/
/* End Operation */

/* Begin Operation: { 155 163 171 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 150 166 155 171 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 182 19 190 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
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

/* Begin Operation: { 80 81 96 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Clone");
/* IO - VPL Terminal : { 75 108 80 113 }*/
/* IO - VPL Root : { 96 108 101 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_breakpoint_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 119 21 127 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 110 119 115 }*/
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
/* Synchro [3 to 2] */
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

/* Begin Operation: { 52 93 68 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 47 114 52 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 85 76 101 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Clone");
/* IO - VPL Terminal : { 80 114 85 119 }*/
/* IO - VPL Root : { 101 114 106 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 118 20 126 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 113 114 118 119 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 453 734 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 93 69 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"copy");
/* IO - VPL Terminal : { 48 114 53 119 }*/
/* IO - VPL Root : { 69 114 74 119 }*/
/* End Operation */

/* Begin Operation: { 97 20 105 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 92 114 97 119 }*/
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


Nat4 VPLU_Make_20_Class_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Make_20_Class_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 289 308 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 125 49 130 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 47 94 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 73 67 78 72 }*/
/* IO - VPL Root : { 94 67 99 72 }*/
/* End Operation */

/* Begin Operation: { 120 52 136 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"string");
/* IO - VPL Terminal : { 115 67 120 72 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 140 94 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"has-class?");
/* IO - VPL Terminal : { 73 178 78 183 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 99 179 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,NULL);
/* IO - VPL Terminal : { 156 113 161 118 }*/
/* IO - VPL Terminal : { 156 125 161 130 }*/
/* IO - VPL Root : { 180 119 185 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_inject_to(tempOperation,environment,2);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 199 126 204 131 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Make_20_Count_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Make_20_Count_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 173 289 }{ 251 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 91 33 96 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 54 70 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"how many?");
/* IO - VPL Terminal : { 49 91 54 96 }*/
/* IO - VPL Root : { 70 91 75 96 }*/
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
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 70 69 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 48 91 53 96 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 94 84 110 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 89 114 94 119 }*/
/* IO - VPL Root : { 110 114 115 119 }*/
/* End Operation */

/* Begin Operation: { 130 20 138 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 125 114 130 119 }*/
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
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 83 72 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 51 114 56 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 98 20 106 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 114 98 119 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 114 67 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 67 116 72 121 }*/
/* End Operation */

/* Begin Operation: { 96 22 104 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 91 116 96 121 }*/
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

/* Begin Operation: { 107 125 123 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 123 127 128 132 }*/
/* End Operation */

/* Begin Operation: { 152 75 168 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"make-list");
/* IO - VPL Terminal : { 147 91 152 96 }*/
/* IO - VPL Terminal : { 147 109 152 114 }*/
/* IO - VPL Terminal : { 147 127 152 132 }*/
/* IO - VPL Root : { 168 109 173 114 }*/
/* End Operation */

/* Begin Operation: { 192 21 200 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 187 109 192 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_To_20_CString_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_To_20_CString_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 88 193 }{ 405 325 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 110 33 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 40 69 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"byte-length");
/* IO - VPL Terminal : { 46 85 51 90 }*/
/* IO - VPL Root : { 70 85 75 90 }*/
/* End Operation */

/* Begin Operation: { 92 70 108 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 87 85 92 90 }*/
/* IO - VPL Root : { 108 85 113 90 }*/
/* End Operation */

/* Begin Operation: { 124 152 140 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 140 154 145 159 }*/
/* End Operation */

/* Begin Operation: { 95 28 111 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"char");
/* IO - VPL Root : { 111 38 116 43 }*/
/* End Operation */

/* Begin Operation: { 131 20 147 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 126 51 131 56 }*/
/* IO - VPL Terminal : { 126 84 131 89 }*/
/* IO - VPL Root : { 147 68 152 73 }*/
/* End Operation */

/* Begin Operation: { 169 130 185 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-text");
/* IO - VPL Terminal : { 164 141 169 146 }*/
/* IO - VPL Terminal : { 164 154 169 159 }*/
/* IO - VPL Terminal : { 164 167 169 172 }*/
/* IO - VPL Terminal : { 164 180 169 185 }*/
/* IO - VPL Root : { 185 150 190 155 }*/
/* IO - VPL Root : { 185 172 190 177 }*/
/* End Operation */

/* Begin Operation: { 183 221 199 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 199 223 204 228 }*/
/* End Operation */

/* Begin Operation: { 183 245 199 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 199 247 204 252 }*/
/* End Operation */

/* Begin Operation: { 228 177 244 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-integer");
/* IO - VPL Terminal : { 223 191 228 196 }*/
/* IO - VPL Terminal : { 223 207 228 212 }*/
/* IO - VPL Terminal : { 223 223 228 228 }*/
/* IO - VPL Terminal : { 223 239 228 244 }*/
/* IO - VPL Root : { 244 202 249 207 }*/
/* IO - VPL Root : { 244 229 249 234 }*/
/* End Operation */

/* Begin Operation: { 316 31 324 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 311 122 316 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,1,3,6);
	result = connect_root_to_terminal(ptrA,1,0,4,6);
	result = connect_root_to_terminal(ptrA,1,5,1,9);
	result = connect_root_to_terminal(ptrA,2,6,2,9);
	result = connect_root_to_terminal(ptrA,1,7,3,9);
	result = connect_root_to_terminal(ptrA,1,8,4,9);
	result = connect_root_to_terminal(ptrA,1,5,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 405 325 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 110 33 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 34 75 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"byte-length");
/* IO - VPL Terminal : { 52 79 57 84 }*/
/* IO - VPL Root : { 76 79 81 84 }*/
/* End Operation */

/* Begin Operation: { 92 64 108 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 87 79 92 84 }*/
/* IO - VPL Root : { 108 79 113 84 }*/
/* End Operation */

/* Begin Operation: { 129 36 145 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"NewPtrClear");
/* IO - VPL Terminal : { 124 79 129 84 }*/
/* IO - VPL Root : { 145 79 150 84 }*/
/* End Operation */

/* Begin Operation: { 126 159 142 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 142 161 147 166 }*/
/* End Operation */

/* Begin Operation: { 171 137 187 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-text");
/* IO - VPL Terminal : { 166 148 171 153 }*/
/* IO - VPL Terminal : { 166 161 171 166 }*/
/* IO - VPL Terminal : { 166 174 171 179 }*/
/* IO - VPL Terminal : { 166 187 171 192 }*/
/* IO - VPL Root : { 187 157 192 162 }*/
/* IO - VPL Root : { 187 179 192 184 }*/
/* End Operation */

/* Begin Operation: { 228 109 244 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"char");
/* IO - VPL Root : { 244 119 249 124 }*/
/* End Operation */

/* Begin Operation: { 273 41 289 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"set-external-type");
/* IO - VPL Terminal : { 268 79 273 84 }*/
/* IO - VPL Terminal : { 268 119 273 124 }*/
/* End Operation */

/* Begin Operation: { 316 31 324 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 311 122 316 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,1,3,5);
	result = connect_root_to_terminal(ptrA,1,0,4,5);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,3,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_To_20_PString_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_To_20_PString_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 88 193 }{ 467 331 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 110 33 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 65 69 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"byte-length");
/* IO - VPL Terminal : { 46 110 51 115 }*/
/* IO - VPL Root : { 70 110 75 115 }*/
/* End Operation */

/* Begin Operation: { 46 189 62 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"255");
/* IO - VPL Root : { 62 198 67 203 }*/
/* End Operation */

/* Begin Operation: { 91 174 107 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"min");
/* IO - VPL Terminal : { 86 185 91 190 }*/
/* IO - VPL Terminal : { 86 198 91 203 }*/
/* IO - VPL Root : { 107 192 112 197 }*/
/* End Operation */

/* Begin Operation: { 127 115 143 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 122 130 127 135 }*/
/* IO - VPL Root : { 143 130 148 135 }*/
/* End Operation */

/* Begin Operation: { 127 10 143 85 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"unsigned char");
/* IO - VPL Root : { 143 45 148 50 }*/
/* End Operation */

/* Begin Operation: { 164 20 180 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 159 51 164 56 }*/
/* IO - VPL Terminal : { 159 84 164 89 }*/
/* IO - VPL Root : { 180 68 185 73 }*/
/* End Operation */

/* Begin Operation: { 187 151 203 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 203 153 208 158 }*/
/* End Operation */

/* Begin Operation: { 187 167 203 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 203 169 208 174 }*/
/* End Operation */

/* Begin Operation: { 232 123 248 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-integer");
/* IO - VPL Terminal : { 227 137 232 142 }*/
/* IO - VPL Terminal : { 227 153 232 158 }*/
/* IO - VPL Terminal : { 227 169 232 174 }*/
/* IO - VPL Terminal : { 227 185 232 190 }*/
/* IO - VPL Root : { 248 148 253 153 }*/
/* IO - VPL Root : { 248 175 253 180 }*/
/* End Operation */

/* Begin Operation: { 300 162 316 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-text");
/* IO - VPL Terminal : { 295 173 300 178 }*/
/* IO - VPL Terminal : { 295 186 300 191 }*/
/* IO - VPL Terminal : { 295 199 300 204 }*/
/* IO - VPL Terminal : { 295 212 300 217 }*/
/* IO - VPL Root : { 316 182 321 187 }*/
/* IO - VPL Root : { 316 204 321 209 }*/
/* End Operation */

/* Begin Operation: { 349 31 357 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 344 122 349 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,9);
	result = connect_root_to_terminal(ptrA,1,7,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
	result = connect_root_to_terminal(ptrA,1,3,4,9);
	result = connect_root_to_terminal(ptrA,1,6,1,10);
	result = connect_root_to_terminal(ptrA,2,9,2,10);
	result = connect_root_to_terminal(ptrA,1,3,3,10);
	result = connect_root_to_terminal(ptrA,1,0,4,10);
	result = connect_root_to_terminal(ptrA,1,6,1,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Create_20_Nib_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Create_20_Nib_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 234 334 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 155 33 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 17 67 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 46 66 51 71 }*/
/* IO - VPL Root : { 67 66 72 71 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 138 68 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To CFStringRef");
/* IO - VPL Terminal : { 47 187 52 192 }*/
/* IO - VPL Root : { 68 187 73 192 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 63 117 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"CreateNibReference");
/* IO - VPL Terminal : { 96 103 101 108 }*/
/* IO - VPL Terminal : { 96 145 101 150 }*/
/* IO - VPL Root : { 117 103 122 108 }*/
/* IO - VPL Root : { 117 145 122 150 }*/
/* End Operation */

/* Begin Operation: { 137 87 153 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"load window data");
/* IO - VPL Terminal : { 132 103 137 108 }*/
/* IO - VPL Terminal : { 132 145 137 150 }*/
/* IO - VPL Terminal : { 132 187 137 192 }*/
/* IO - VPL Root : { 153 121 158 126 }*/
/* IO - VPL Root : { 153 167 158 172 }*/
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

/* Start Operations: { 119 201 }{ 203 332 } */
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

/* Begin Operation: { 53 32 69 63 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 48 45 53 50 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 60 123 76 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,3,"CreateWindowFromNib");
/* IO - VPL Terminal : { 55 156 60 161 }*/
/* IO - VPL Terminal : { 55 191 60 196 }*/
/* IO - VPL Terminal : { 55 226 60 231 }*/
/* IO - VPL Root : { 76 156 81 161 }*/
/* IO - VPL Root : { 76 191 81 196 }*/
/* IO - VPL Root : { 76 226 81 231 }*/
/* End Operation */

/* Begin Operation: { 115 50 131 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"DisposeNibReference");
/* IO - VPL Terminal : { 110 114 115 119 }*/
/* IO - VPL Root : { 131 114 136 119 }*/
/* End Operation */

/* Begin Operation: { 117 213 133 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report");
/* IO - VPL Terminal : { 112 237 117 242 }*/
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

/* Begin Operation: { 51 23 67 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"CreateWindowFromNib");
/* IO - VPL Root : { 67 81 72 86 }*/
/* End Operation */

/* Begin Operation: { 96 50 112 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 91 81 96 86 }*/
/* IO - VPL Terminal : { 91 114 96 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 20 145 212 } */
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

/* Begin Operation: { 172 20 180 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 167 82 172 87 }*/
/* IO - VPL Terminal : { 167 146 172 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,3,2,2,5);
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

/* Begin Operation: { 41 137 57 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 57 148 62 153 }*/
/* End Operation */

/* Begin Operation: { 48 18 64 74 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report");
/* IO - VPL Terminal : { 43 42 48 47 }*/
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

/* Begin Operation: { 51 29 67 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"CreateNibReference");
/* IO - VPL Root : { 67 81 72 86 }*/
/* End Operation */

/* Begin Operation: { 96 50 112 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 91 81 96 86 }*/
/* IO - VPL Terminal : { 91 114 96 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 20 145 212 } */
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

/* Begin Operation: { 86 22 94 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 81 84 86 89 }*/
/* IO - VPL Terminal : { 81 148 86 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 184 47 192 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 179 94 184 99 }*/
/* IO - VPL Terminal : { 179 183 184 188 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Open_20_Nib_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Open_20_Nib_20_Window_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 70 33 75 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 51 71 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Create Nib Window");
/* IO - VPL Terminal : { 50 70 55 75 }*/
/* IO - VPL Terminal : { 50 150 55 155 }*/
/* IO - VPL Root : { 71 72 76 77 }*/
/* IO - VPL Root : { 71 150 76 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 59 112 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"open up window");
/* IO - VPL Terminal : { 91 91 96 96 }*/
/* IO - VPL Terminal : { 91 131 96 136 }*/
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

/* Begin Operation: { 48 40 64 71 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 43 53 48 58 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 51 164 67 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 46 175 51 180 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 87 104 103 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"ShowWindow");
/* IO - VPL Terminal : { 82 146 87 151 }*/
/* IO - VPL Root : { 103 146 108 151 }*/
/* End Operation */

/* Begin Operation: { 123 19 131 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 134 20 142 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 129 72 134 77 }*/
/* IO - VPL Terminal : { 129 150 134 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Rect_20_Size_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Rect_20_Size_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 300 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 113 33 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 72 74 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Rect-to-list");
/* IO - VPL Terminal : { 53 113 58 118 }*/
/* IO - VPL Root : { 74 113 79 118 }*/
/* End Operation */

/* Begin Operation: { 93 87 109 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 88 113 93 118 }*/
/* IO - VPL Root : { 109 91 114 96 }*/
/* IO - VPL Root : { 109 105 114 110 }*/
/* IO - VPL Root : { 109 118 114 123 }*/
/* IO - VPL Root : { 109 132 114 137 }*/
/* End Operation */

/* Begin Operation: { 146 71 162 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 141 80 146 85 }*/
/* IO - VPL Terminal : { 141 91 146 96 }*/
/* IO - VPL Root : { 162 85 167 90 }*/
/* End Operation */

/* Begin Operation: { 147 123 163 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 142 132 147 137 }*/
/* IO - VPL Terminal : { 142 143 147 148 }*/
/* IO - VPL Root : { 163 137 168 142 }*/
/* End Operation */

/* Begin Operation: { 181 90 197 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 176 101 181 106 }*/
/* IO - VPL Terminal : { 176 118 181 123 }*/
/* IO - VPL Root : { 197 110 202 115 }*/
/* End Operation */

/* Begin Operation: { 214 67 230 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-Point");
/* IO - VPL Terminal : { 209 110 214 115 }*/
/* IO - VPL Root : { 230 110 235 115 }*/
/* End Operation */

/* Begin Operation: { 250 22 258 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 245 110 250 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,4,2,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Boolean_20_To_20_Integer_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Boolean_20_To_20_Integer_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 97 103 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 108 33 113 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 14 79 82 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"boolean?");
/* IO - VPL Terminal : { 58 46 63 51 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 79 120 95 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 95 122 100 127 }*/
/* End Operation */

/* Begin Operation: { 79 134 95 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 95 136 100 141 }*/
/* End Operation */

/* Begin Operation: { 124 96 140 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"choose");
/* IO - VPL Terminal : { 119 108 124 113 }*/
/* IO - VPL Terminal : { 119 122 124 127 }*/
/* IO - VPL Terminal : { 119 136 124 141 }*/
/* IO - VPL Root : { 140 122 145 127 }*/
/* End Operation */

/* Begin Operation: { 161 17 169 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 107 161 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
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
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 112 76 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 76 114 81 119 }*/
/* End Operation */

/* Begin Operation: { 105 20 113 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 100 114 105 119 }*/
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


Nat4 VPLU_Integer_20_To_20_Boolean_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Integer_20_To_20_Boolean_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 57 29 73 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"number?");
/* IO - VPL Terminal : { 52 60 57 65 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 58 154 74 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 53 156 58 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 101 102 117 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 117 114 122 119 }*/
/* End Operation */

/* Begin Operation: { 146 21 154 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 141 114 146 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
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

/* Begin Operation: { 50 100 66 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 66 115 71 120 }*/
/* End Operation */

/* Begin Operation: { 88 21 96 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 83 115 88 120 }*/
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


Nat4 VPLU_Coerce_20_Boolean_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Coerce_20_Boolean_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 56 77 72 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"boolean?");
/* IO - VPL Terminal : { 51 109 56 114 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 97 19 105 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 92 109 97 114 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 109 200 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 83 69 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"number?");
/* IO - VPL Terminal : { 48 114 53 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 90 55 106 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Integer To Boolean");
/* IO - VPL Terminal : { 85 114 90 119 }*/
/* IO - VPL Root : { 106 114 111 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 67 80 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default FALSE");
/* IO - VPL Terminal : { 59 114 64 119 }*/
/* IO - VPL Root : { 80 113 85 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 105 130 121 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"FALSE");
/* IO - VPL Terminal : { 100 145 105 150 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 139 19 147 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 134 113 139 118 }*/
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 102 77 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
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


Nat4 VPLU_Coerce_20_Integer_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Coerce_20_Integer_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 345 698 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 112 33 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 87 71 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"NULL?");
/* IO - VPL Terminal : { 50 112 55 117 }*/
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

/* Begin Operation: { 61 48 77 75 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 56 59 61 64 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 64 146 80 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NONE");
/* IO - VPL Terminal : { 59 158 64 163 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 96 87 112 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"UNDEFINED");
/* IO - VPL Terminal : { 91 114 96 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 136 24 144 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Begin Operation: { 97 110 113 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 113 112 118 117 }*/
/* End Operation */

/* Begin Operation: { 142 23 150 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 112 142 117 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 375 719 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 43 72 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"boolean?");
/* IO - VPL Terminal : { 51 74 56 79 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 102 55 118 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Boolean To Integer");
/* IO - VPL Terminal : { 97 114 102 119 }*/
/* IO - VPL Root : { 118 114 123 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 347 588 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 83 69 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 48 114 53 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 116 20 124 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 111 114 116 119 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 147 308 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 57 70 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"real?");
/* IO - VPL Terminal : { 49 80 54 85 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 87 99 103 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Int");
/* IO - VPL Terminal : { 82 115 87 120 }*/
/* IO - VPL Root : { 103 115 108 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 122 21 130 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 117 115 122 120 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 378 655 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 79 74 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"external?");
/* IO - VPL Terminal : { 53 114 58 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 93 70 109 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-pointer");
/* IO - VPL Terminal : { 88 114 93 119 }*/
/* IO - VPL Root : { 109 114 114 119 }*/
/* End Operation */

/* Begin Operation: { 129 20 137 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 124 114 129 119 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 259 289 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 53 75 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 54 81 59 86 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 113 65 129 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"string-address");
/* IO - VPL Terminal : { 108 114 113 119 }*/
/* IO - VPL Root : { 129 114 134 119 }*/
/* End Operation */

/* Begin Operation: { 152 70 168 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-pointer");
/* IO - VPL Terminal : { 147 114 152 119 }*/
/* IO - VPL Root : { 168 114 173 119 }*/
/* End Operation */

/* Begin Operation: { 196 20 204 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 191 114 196 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
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

/* Begin Operation: { 55 56 71 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"object-to-address");
/* IO - VPL Terminal : { 50 114 55 119 }*/
/* IO - VPL Root : { 71 114 76 119 }*/
/* End Operation */

/* Begin Operation: { 98 20 106 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 114 98 119 }*/
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


Nat4 VPLU_Coerce_20_Real_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Coerce_20_Real_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 54 50 70 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"real?");
/* IO - VPL Terminal : { 49 73 54 78 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 108 20 116 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 103 111 108 116 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 30 73 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Coerce Integer");
/* IO - VPL Terminal : { 52 78 57 83 }*/
/* IO - VPL Root : { 73 78 78 83 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 152 73 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1.0");
/* IO - VPL Root : { 73 159 78 164 }*/
/* End Operation */

/* Begin Operation: { 99 101 115 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"*");
/* IO - VPL Terminal : { 94 108 99 113 }*/
/* IO - VPL Terminal : { 94 117 99 122 }*/
/* IO - VPL Root : { 115 113 120 118 }*/
/* End Operation */

/* Begin Operation: { 143 19 151 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 113 143 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Coerce_20_Number_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Coerce_20_Number_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 62 60 78 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"number?");
/* IO - VPL Terminal : { 57 91 62 96 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 19 114 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 107 106 112 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 57 72 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 51 85 56 90 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 92 73 108 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-string");
/* IO - VPL Terminal : { 87 114 92 119 }*/
/* IO - VPL Root : { 108 114 113 119 }*/
/* End Operation */

/* Begin Operation: { 126 83 142 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"number?");
/* IO - VPL Terminal : { 121 114 126 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 158 20 166 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 153 114 158 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
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

/* Begin Operation: { 54 43 70 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"boolean?");
/* IO - VPL Terminal : { 49 75 54 80 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 88 55 104 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Boolean To Integer");
/* IO - VPL Terminal : { 83 114 88 119 }*/
/* IO - VPL Root : { 104 114 109 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 122 20 130 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 117 114 122 119 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 66 75 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Coerce Integer");
/* IO - VPL Terminal : { 54 114 59 119 }*/
/* IO - VPL Root : { 75 114 80 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 20 116 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 103 114 108 119 }*/
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


Nat4 VPLU_Replace_20_NULL_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Replace_20_NULL_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 446 611 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 79 33 84 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 33 69 80 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 48 54 53 59 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 53 118 69 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 48 123 53 128 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 87 73 103 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 82 101 87 106 }*/
/* IO - VPL Terminal : { 82 131 87 136 }*/
/* IO - VPL Root : { 103 117 108 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 130 20 138 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 125 117 130 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 482 653 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 51 83 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"is NULL?");
/* IO - VPL Terminal : { 62 82 67 87 }*/
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

/* Start Operations: { 560 706 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 34 68 61 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 47 45 52 50 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 50 168 66 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NONE");
/* IO - VPL Terminal : { 45 180 50 185 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 88 35 104 43 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 83 37 88 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 83 168 99 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"UNDEFINED");
/* IO - VPL Terminal : { 78 195 83 200 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 129 40 145 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"\"");
/* IO - VPL Terminal : { 124 44 129 49 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 126 165 142 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 121 170 126 175 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 170 24 178 216 } */
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 524 849 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 174 70 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 47 211 52 216 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 57 77 73 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Clone");
/* IO - VPL Terminal : { 52 115 57 120 }*/
/* IO - VPL Root : { 73 115 78 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 102 21 110 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 97 115 102 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 524 849 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 77 73 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Clone");
/* IO - VPL Terminal : { 52 115 57 120 }*/
/* IO - VPL Root : { 73 115 78 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_breakpoint_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 102 21 110 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 97 115 102 120 }*/
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


Nat4 VPLU_Replace_20_NULL_20_No_20_Copy_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Replace_20_NULL_20_No_20_Copy_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 446 611 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 79 33 84 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 33 69 80 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 48 54 53 59 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 53 118 69 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 48 123 53 128 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 87 73 103 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 82 101 87 106 }*/
/* IO - VPL Terminal : { 82 131 87 136 }*/
/* IO - VPL Root : { 103 117 108 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 130 20 138 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 125 117 130 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 482 653 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 51 83 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"is NULL?");
/* IO - VPL Terminal : { 62 82 67 87 }*/
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

/* Start Operations: { 560 706 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 34 68 61 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 47 45 52 50 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 50 168 66 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NONE");
/* IO - VPL Terminal : { 45 180 50 185 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 88 35 104 43 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 83 37 88 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 83 168 99 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"UNDEFINED");
/* IO - VPL Terminal : { 78 195 83 200 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 129 40 145 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"\"");
/* IO - VPL Terminal : { 124 44 129 49 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 126 165 142 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 121 170 126 175 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 170 24 178 216 } */
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 524 849 }{ 200 300 } */
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
	result = connect_root_to_terminal(ptrA,2,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__22_Check_22__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__22_Check_22__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 249 647 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 110 33 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 127 80 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 59 155 64 160 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 160 21 168 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 155 110 160 115 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 293 683 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 132 67 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 46 166 51 171 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 86 81 102 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 81 114 86 119 }*/
/* IO - VPL Root : { 102 114 107 119 }*/
/* End Operation */

/* Begin Operation: { 122 20 130 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 117 114 122 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
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

/* Begin Operation: { 56 94 72 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 51 114 56 119 }*/
/* IO - VPL Root : { 72 114 77 119 }*/
/* End Operation */

/* Begin Operation: { 55 152 71 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,">>");
/* IO - VPL Root : { 71 156 76 161 }*/
/* End Operation */

/* Begin Operation: { 54 46 70 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"<<");
/* IO - VPL Root : { 70 50 75 55 }*/
/* End Operation */

/* Begin Operation: { 100 88 116 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 95 96 100 101 }*/
/* IO - VPL Terminal : { 95 114 100 119 }*/
/* IO - VPL Terminal : { 95 134 100 139 }*/
/* IO - VPL Root : { 116 113 121 118 }*/
/* End Operation */

/* Begin Operation: { 133 19 141 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 128 113 133 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__22_Prefix_22__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__22_Prefix_22__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 250 295 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 148 33 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 62 76 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 55 93 60 98 }*/
/* IO - VPL Root : { 76 93 81 98 }*/
/* End Operation */

/* Begin Operation: { 101 59 117 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"prefix");
/* IO - VPL Terminal : { 96 75 101 80 }*/
/* IO - VPL Terminal : { 96 93 101 98 }*/
/* IO - VPL Root : { 117 75 122 80 }*/
/* IO - VPL Root : { 117 93 122 98 }*/
/* End Operation */

/* Begin Operation: { 149 132 165 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 144 139 149 144 }*/
/* IO - VPL Terminal : { 144 148 149 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 191 17 199 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__22_Split_20_At_22__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__22_Split_20_At_22__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 311 292 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 81 33 86 }*/
/* IO - VPL Root : { 28 149 33 154 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 123 73 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"in\"");
/* IO - VPL Terminal : { 52 135 57 140 }*/
/* IO - VPL Terminal : { 52 149 57 154 }*/
/* IO - VPL Root : { 73 142 78 147 }*/
/* End Operation */

/* Begin Operation: { 92 173 108 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 87 175 92 180 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 94 84 110 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"-1");
/* IO - VPL Terminal : { 89 99 94 104 }*/
/* IO - VPL Root : { 110 99 115 104 }*/
/* End Operation */

/* Begin Operation: { 136 65 152 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"prefix");
/* IO - VPL Terminal : { 131 81 136 86 }*/
/* IO - VPL Terminal : { 131 99 136 104 }*/
/* IO - VPL Root : { 152 81 157 86 }*/
/* IO - VPL Root : { 152 99 157 104 }*/
/* End Operation */

/* Begin Operation: { 173 118 189 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 168 149 173 154 }*/
/* IO - VPL Root : { 189 149 194 154 }*/
/* End Operation */

/* Begin Operation: { 220 83 236 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"prefix");
/* IO - VPL Terminal : { 215 99 220 104 }*/
/* IO - VPL Terminal : { 215 117 220 122 }*/
/* IO - VPL Root : { 236 99 241 104 }*/
/* IO - VPL Root : { 236 117 241 122 }*/
/* End Operation */

/* Begin Operation: { 273 18 281 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 268 57 273 62 }*/
/* IO - VPL Terminal : { 268 113 273 118 }*/
/* IO - VPL Terminal : { 268 177 273 182 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,2,6,3,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__22_Suffix_22__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__22_Suffix_22__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 250 295 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 148 33 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 62 76 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 55 93 60 98 }*/
/* IO - VPL Root : { 76 93 81 98 }*/
/* End Operation */

/* Begin Operation: { 108 59 124 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 103 75 108 80 }*/
/* IO - VPL Terminal : { 103 93 108 98 }*/
/* IO - VPL Root : { 124 75 129 80 }*/
/* IO - VPL Root : { 124 93 129 98 }*/
/* End Operation */

/* Begin Operation: { 149 132 165 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 144 139 149 144 }*/
/* IO - VPL Terminal : { 144 148 149 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 191 17 199 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__22_Trim_22__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__22_Trim_22__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 107 60 }{ 279 296 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 83 71 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"LTrim\"");
/* IO - VPL Terminal : { 50 115 55 120 }*/
/* IO - VPL Root : { 71 115 76 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 83 114 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"RTrim\"");
/* IO - VPL Terminal : { 93 115 98 120 }*/
/* IO - VPL Root : { 114 115 119 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 144 22 152 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 139 115 144 120 }*/
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


Nat4 VPLU__22_LTrim_22__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__22_LTrim_22__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 282 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 48 131 64 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 64 134 69 139 }*/
/* End Operation */

/* Begin Operation: { 93 98 109 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"prefix");
/* IO - VPL Terminal : { 88 115 93 120 }*/
/* IO - VPL Terminal : { 88 134 93 139 }*/
/* IO - VPL Root : { 109 115 114 120 }*/
/* IO - VPL Root : { 109 134 114 139 }*/
/* End Operation */

/* Begin Operation: { 137 64 153 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Is Whitespace?");
/* IO - VPL Terminal : { 132 115 137 120 }*/
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

/* Start Operations: { 118 278 }{ 246 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 83 74 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-ascii");
/* IO - VPL Terminal : { 53 114 58 119 }*/
/* IO - VPL Root : { 74 114 79 119 }*/
/* End Operation */

/* Begin Operation: { 96 26 112 43 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 91 32 96 37 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 96 86 112 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 91 114 96 119 }*/
/* IO - VPL Root : { 112 114 117 119 }*/
/* End Operation */

/* Begin Operation: { 99 179 115 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"33");
/* IO - VPL Root : { 115 185 120 190 }*/
/* End Operation */

/* Begin Operation: { 136 138 152 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,">=");
/* IO - VPL Terminal : { 131 148 136 153 }*/
/* IO - VPL Terminal : { 131 160 136 165 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 57 173 73 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"is-alnum");
/* IO - VPL Terminal : { 52 206 57 211 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 181 19 189 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 177 102 193 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"LTrim\"");
/* IO - VPL Terminal : { 172 134 177 139 }*/
/* IO - VPL Root : { 193 134 198 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 215 18 223 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 210 113 215 118 }*/
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


Nat4 VPLU__22_RTrim_22__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__22_RTrim_22__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 282 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 48 130 64 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 64 133 69 138 }*/
/* End Operation */

/* Begin Operation: { 87 99 103 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 82 115 87 120 }*/
/* IO - VPL Terminal : { 82 133 87 138 }*/
/* IO - VPL Root : { 103 115 108 120 }*/
/* IO - VPL Root : { 103 133 108 138 }*/
/* End Operation */

/* Begin Operation: { 137 82 153 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Is Whitespace?");
/* IO - VPL Terminal : { 132 133 137 138 }*/
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

/* Start Operations: { 118 278 }{ 246 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 83 74 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-ascii");
/* IO - VPL Terminal : { 53 114 58 119 }*/
/* IO - VPL Root : { 74 114 79 119 }*/
/* End Operation */

/* Begin Operation: { 96 26 112 43 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 91 32 96 37 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 96 86 112 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 91 114 96 119 }*/
/* IO - VPL Root : { 112 114 117 119 }*/
/* End Operation */

/* Begin Operation: { 99 179 115 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"33");
/* IO - VPL Root : { 115 185 120 190 }*/
/* End Operation */

/* Begin Operation: { 136 138 152 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,">=");
/* IO - VPL Terminal : { 131 148 136 153 }*/
/* IO - VPL Terminal : { 131 160 136 165 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 57 173 73 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"is-alnum");
/* IO - VPL Terminal : { 52 206 57 211 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 181 19 189 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 177 83 193 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"RTrim\"");
/* IO - VPL Terminal : { 172 115 177 120 }*/
/* IO - VPL Root : { 193 115 198 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 215 20 223 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 210 115 215 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__22_Parse_22__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__22_Parse_22__universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 45 85 50 90 }*/
/* IO - VPL Root : { 45 177 50 182 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 91 94 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"\"Parse\"");
/* IO - VPL Terminal : { 73 108 78 113 }*/
/* IO - VPL Terminal : { 73 133 78 138 }*/
/* IO - VPL Root : { 94 106 99 111 }*/
/* IO - VPL Root : { 94 133 99 138 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 78 80 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Split At\"");
/* IO - VPL Terminal : { 59 102 64 107 }*/
/* IO - VPL Terminal : { 59 128 64 133 }*/
/* IO - VPL Root : { 80 95 85 100 }*/
/* IO - VPL Root : { 80 114 85 119 }*/
/* IO - VPL Root : { 80 133 85 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 28 114 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 90 106 95 }*/
/* IO - VPL Terminal : { 101 154 106 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
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
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 79 70 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 70 84 75 89 }*/
/* End Operation */

/* Begin Operation: { 99 22 107 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 94 84 99 89 }*/
/* IO - VPL Terminal : { 94 148 99 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
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

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 133 119 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__2822_All_20_In_2229__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__2822_All_20_In_2229__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 218 366 }{ 225 304 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
/* IO - VPL Root : { 28 190 33 195 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 121 72 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 51 150 56 155 }*/
/* IO - VPL Root : { 72 150 77 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 67 122 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"search each");
/* IO - VPL Terminal : { 101 76 106 81 }*/
/* IO - VPL Terminal : { 101 123 106 128 }*/
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Root : { 122 106 127 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 608 312 }{ 200 300 } */
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

/* Begin Operation: { 72 101 88 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"test one");
/* IO - VPL Terminal : { 67 118 72 123 }*/
/* IO - VPL Terminal : { 67 146 72 151 }*/
/* IO - VPL Terminal : { 67 160 72 165 }*/
/* IO - VPL Root : { 88 131 93 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 272 159 }{ 250 302 } */
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

/* Begin Operation: { 52 147 68 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"prefix");
/* IO - VPL Terminal : { 47 162 52 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 50 53 66 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 45 84 50 89 }*/
/* IO - VPL Root : { 66 84 71 89 }*/
/* End Operation */

/* Begin Operation: { 91 50 107 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"prefix");
/* IO - VPL Terminal : { 86 66 91 71 }*/
/* IO - VPL Terminal : { 86 84 91 89 }*/
/* IO - VPL Root : { 107 66 112 71 }*/
/* IO - VPL Root : { 107 84 112 89 }*/
/* End Operation */

/* Begin Operation: { 127 98 143 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"=");
/* IO - VPL Terminal : { 122 105 127 110 }*/
/* IO - VPL Terminal : { 122 114 127 119 }*/
/* IO - VPL Root : { 143 110 148 115 }*/
/* End Operation */

/* Begin Operation: { 165 51 181 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Boolean To Integer");
/* IO - VPL Terminal : { 160 110 165 115 }*/
/* IO - VPL Root : { 181 110 186 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 16 212 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 199 110 204 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 272 159 }{ 250 302 } */
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

/* Begin Operation: { 52 147 68 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"suffix");
/* IO - VPL Terminal : { 47 162 52 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 50 53 66 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 45 84 50 89 }*/
/* IO - VPL Root : { 66 84 71 89 }*/
/* End Operation */

/* Begin Operation: { 95 50 111 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 90 66 95 71 }*/
/* IO - VPL Terminal : { 90 84 95 89 }*/
/* IO - VPL Root : { 111 66 116 71 }*/
/* IO - VPL Root : { 111 84 116 89 }*/
/* End Operation */

/* Begin Operation: { 127 98 143 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"=");
/* IO - VPL Terminal : { 122 105 127 110 }*/
/* IO - VPL Terminal : { 122 114 127 119 }*/
/* IO - VPL Root : { 143 110 148 115 }*/
/* End Operation */

/* Begin Operation: { 165 51 181 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Boolean To Integer");
/* IO - VPL Terminal : { 160 110 165 115 }*/
/* IO - VPL Root : { 181 110 186 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 16 212 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 199 110 204 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 332 646 }{ 200 300 } */
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

/* Begin Operation: { 54 95 70 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"in\"");
/* IO - VPL Terminal : { 49 107 54 112 }*/
/* IO - VPL Terminal : { 49 121 54 126 }*/
/* IO - VPL Root : { 70 114 75 119 }*/
/* End Operation */

/* Begin Operation: { 94 112 110 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 89 114 94 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kFailure);
/* End Operation */

/* Begin Operation: { 135 20 143 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 130 114 135 119 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 112 129 128 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 107 131 112 136 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 142 21 150 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 82 142 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 150 17 158 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 145 106 150 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,3,0,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__2822_ALL_20_IN_2229__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__2822_ALL_20_IN_2229__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 218 366 }{ 271 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 124 33 129 }*/
/* IO - VPL Root : { 28 192 33 197 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 95 72 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 51 124 56 129 }*/
/* IO - VPL Root : { 72 124 77 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 99 89 115 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"uppercase");
/* IO - VPL Terminal : { 94 124 99 129 }*/
/* IO - VPL Root : { 115 124 120 129 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 146 84 162 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"search each");
/* IO - VPL Terminal : { 141 93 146 98 }*/
/* IO - VPL Terminal : { 141 124 146 129 }*/
/* IO - VPL Terminal : { 141 163 146 168 }*/
/* IO - VPL Root : { 162 123 167 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 608 312 }{ 250 299 } */
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

/* Begin Operation: { 75 86 91 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"uppercase");
/* IO - VPL Terminal : { 70 121 75 126 }*/
/* IO - VPL Root : { 91 121 96 126 }*/
/* End Operation */

/* Begin Operation: { 119 104 135 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"test one");
/* IO - VPL Terminal : { 114 121 119 126 }*/
/* IO - VPL Terminal : { 114 142 119 147 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Root : { 135 134 140 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 272 159 }{ 250 302 } */
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

/* Begin Operation: { 52 147 68 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"prefix");
/* IO - VPL Terminal : { 47 162 52 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 50 53 66 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 45 84 50 89 }*/
/* IO - VPL Root : { 66 84 71 89 }*/
/* End Operation */

/* Begin Operation: { 91 50 107 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"prefix");
/* IO - VPL Terminal : { 86 66 91 71 }*/
/* IO - VPL Terminal : { 86 84 91 89 }*/
/* IO - VPL Root : { 107 66 112 71 }*/
/* IO - VPL Root : { 107 84 112 89 }*/
/* End Operation */

/* Begin Operation: { 127 98 143 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"=");
/* IO - VPL Terminal : { 122 105 127 110 }*/
/* IO - VPL Terminal : { 122 114 127 119 }*/
/* IO - VPL Root : { 143 110 148 115 }*/
/* End Operation */

/* Begin Operation: { 165 51 181 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Boolean To Integer");
/* IO - VPL Terminal : { 160 110 165 115 }*/
/* IO - VPL Root : { 181 110 186 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 16 212 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 199 110 204 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 272 159 }{ 250 302 } */
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

/* Begin Operation: { 52 147 68 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"suffix");
/* IO - VPL Terminal : { 47 162 52 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 50 53 66 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 45 84 50 89 }*/
/* IO - VPL Root : { 66 84 71 89 }*/
/* End Operation */

/* Begin Operation: { 95 50 111 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 90 66 95 71 }*/
/* IO - VPL Terminal : { 90 84 95 89 }*/
/* IO - VPL Root : { 111 66 116 71 }*/
/* IO - VPL Root : { 111 84 116 89 }*/
/* End Operation */

/* Begin Operation: { 127 98 143 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"=");
/* IO - VPL Terminal : { 122 105 127 110 }*/
/* IO - VPL Terminal : { 122 114 127 119 }*/
/* IO - VPL Root : { 143 110 148 115 }*/
/* End Operation */

/* Begin Operation: { 165 51 181 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Boolean To Integer");
/* IO - VPL Terminal : { 160 110 165 115 }*/
/* IO - VPL Root : { 181 110 186 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 16 212 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 199 110 204 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 332 646 }{ 210 271 } */
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

/* Begin Operation: { 58 98 74 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"in\"");
/* IO - VPL Terminal : { 53 110 58 115 }*/
/* IO - VPL Terminal : { 53 124 58 129 }*/
/* IO - VPL Root : { 74 117 79 122 }*/
/* End Operation */

/* Begin Operation: { 98 115 114 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 93 117 98 122 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kFailure);
/* End Operation */

/* Begin Operation: { 139 23 147 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 134 117 139 122 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 159 132 175 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 154 134 159 139 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 189 21 197 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 184 82 189 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,3,0,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 24 198 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 123 190 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Average_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Average_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 200 52 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 112 33 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 72 77 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default List");
/* IO - VPL Terminal : { 56 112 61 117 }*/
/* IO - VPL Root : { 77 112 82 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 203 119 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 98 210 103 215 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 101 46 117 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Sum)");
/* IO - VPL Terminal : { 96 70 101 75 }*/
/* IO - VPL Root : { 117 70 122 75 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 121 117 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 96 151 101 156 }*/
/* IO - VPL Root : { 117 151 122 156 }*/
/* End Operation */

/* Begin Operation: { 138 94 154 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 133 104 138 109 }*/
/* IO - VPL Terminal : { 133 116 138 121 }*/
/* IO - VPL Root : { 154 111 159 116 }*/
/* End Operation */

/* Begin Operation: { 175 20 183 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 170 111 175 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
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

/* Begin Operation: { 53 112 69 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 69 114 74 119 }*/
/* End Operation */

/* Begin Operation: { 98 20 106 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 114 98 119 }*/
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


Nat4 VPLU__28_Check_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Check_29__universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 60 89 76 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 55 110 60 115 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 99 89 115 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 94 109 99 114 }*/
/* IO - VPL Root : { 115 109 120 114 }*/
/* End Operation */

/* Begin Operation: { 139 20 147 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 134 109 139 114 }*/
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


Nat4 VPLU__28_Check_20_Bounds_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Check_20_Bounds_29__universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 52 74 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 53 73 58 78 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 96 43 112 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 91 73 96 78 }*/
/* IO - VPL Root : { 112 73 117 78 }*/
/* End Operation */

/* Begin Operation: { 132 130 148 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,">=");
/* IO - VPL Terminal : { 127 139 132 144 }*/
/* IO - VPL Terminal : { 127 150 132 155 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 165 19 173 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Ends_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Ends_29__universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 52 103 68 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 47 110 52 115 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 48 18 64 84 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 43 49 48 54 }*/
/* IO - VPL Root : { 64 38 69 43 }*/
/* IO - VPL Root : { 64 60 69 65 }*/
/* End Operation */

/* Begin Operation: { 52 156 68 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-r");
/* IO - VPL Terminal : { 47 188 52 193 }*/
/* IO - VPL Root : { 68 176 73 181 }*/
/* IO - VPL Root : { 68 198 73 203 }*/
/* End Operation */

/* Begin Operation: { 96 21 104 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 91 67 96 72 }*/
/* IO - VPL Terminal : { 91 159 96 164 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Flatten_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Flatten_29__universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 63 152 79 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 79 159 84 164 }*/
/* End Operation */

/* Begin Operation: { 108 77 124 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"flatten components");
/* IO - VPL Terminal : { 103 109 108 114 }*/
/* IO - VPL Terminal : { 103 159 108 164 }*/
/* IO - VPL Root : { 124 160 129 165 }*/
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

/* Begin Operation: { 54 25 70 72 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 49 46 54 51 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 50 131 66 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Flatten)");
/* IO - VPL Terminal : { 45 163 50 168 }*/
/* IO - VPL Root : { 66 163 71 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 88 131 104 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(join)");
/* IO - VPL Terminal : { 83 146 88 151 }*/
/* IO - VPL Terminal : { 83 163 88 168 }*/
/* IO - VPL Root : { 104 155 109 160 }*/
/* End Operation */

/* Begin Operation: { 131 18 139 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 126 112 131 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
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
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 80 85 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 64 100 69 105 }*/
/* IO - VPL Terminal : { 64 122 69 127 }*/
/* IO - VPL Root : { 85 111 90 116 }*/
/* End Operation */

/* Begin Operation: { 114 17 122 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 109 111 114 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 150 19 158 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 145 108 150 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_From_20_String_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_From_20_String_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 216 325 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 111 71 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 71 113 76 118 }*/
/* End Operation */

/* Begin Operation: { 100 66 116 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"search string");
/* IO - VPL Terminal : { 95 82 100 87 }*/
/* IO - VPL Terminal : { 95 113 100 118 }*/
/* IO - VPL Terminal : { 95 144 100 149 }*/
/* IO - VPL Root : { 116 86 121 91 }*/
/* IO - VPL Root : { 116 114 121 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
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

/* Start Operations: { 277 355 }{ 286 293 } */
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

/* Begin Operation: { 63 74 79 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 58 105 63 110 }*/
/* IO - VPL Root : { 79 105 84 110 }*/
/* End Operation */

/* Begin Operation: { 96 98 112 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,">");
/* IO - VPL Terminal : { 91 105 96 110 }*/
/* IO - VPL Terminal : { 91 114 96 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 133 52 150 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"in-relative\"");
/* IO - VPL Terminal : { 127 74 132 79 }*/
/* IO - VPL Terminal : { 127 98 132 103 }*/
/* IO - VPL Terminal : { 127 122 132 127 }*/
/* IO - VPL Root : { 151 98 156 103 }*/
/* End Operation */

/* Begin Operation: { 171 130 187 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 166 145 171 150 }*/
/* IO - VPL Root : { 187 145 192 150 }*/
/* End Operation */

/* Begin Operation: { 174 44 190 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"extract");
/* IO - VPL Terminal : { 169 56 174 61 }*/
/* IO - VPL Terminal : { 169 74 174 79 }*/
/* IO - VPL Terminal : { 169 93 174 98 }*/
/* IO - VPL Root : { 190 61 195 66 }*/
/* IO - VPL Root : { 190 83 195 88 }*/
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

/* Start Operations: { 286 461 }{ 200 300 } */
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

/* Begin Operation: { 53 93 69 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 48 95 53 100 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 52 142 68 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 47 151 52 156 }*/
/* IO - VPL Terminal : { 47 162 52 167 }*/
/* IO - VPL Root : { 68 156 73 161 }*/
/* End Operation */

/* Begin Operation: { 108 54 124 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"middle");
/* IO - VPL Terminal : { 103 66 108 71 }*/
/* IO - VPL Terminal : { 103 80 108 85 }*/
/* IO - VPL Terminal : { 103 94 108 99 }*/
/* IO - VPL Root : { 124 80 129 85 }*/
/* End Operation */

/* Begin Operation: { 98 135 114 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 114 150 119 155 }*/
/* End Operation */

/* Begin Operation: { 143 24 151 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 86 143 91 }*/
/* IO - VPL Terminal : { 138 150 143 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 329 430 }{ 200 300 } */
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

/* Begin Operation: { 52 147 68 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"-1");
/* IO - VPL Terminal : { 47 162 52 167 }*/
/* IO - VPL Root : { 68 162 73 167 }*/
/* End Operation */

/* Begin Operation: { 93 50 109 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"prefix");
/* IO - VPL Terminal : { 88 66 93 71 }*/
/* IO - VPL Terminal : { 88 84 93 89 }*/
/* IO - VPL Root : { 109 66 114 71 }*/
/* IO - VPL Root : { 109 84 114 89 }*/
/* End Operation */

/* Begin Operation: { 93 133 109 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 109 145 114 150 }*/
/* End Operation */

/* Begin Operation: { 138 19 146 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 133 81 138 86 }*/
/* IO - VPL Terminal : { 133 145 138 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 214 71 230 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 209 83 214 88 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 251 19 259 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 246 81 251 86 }*/
/* IO - VPL Terminal : { 246 145 251 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,2,0,3,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
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

/* Begin Operation: { 53 99 69 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"-1");
/* IO - VPL Terminal : { 48 114 53 119 }*/
/* IO - VPL Root : { 69 114 74 119 }*/
/* End Operation */

/* Begin Operation: { 95 50 111 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"prefix");
/* IO - VPL Terminal : { 90 66 95 71 }*/
/* IO - VPL Terminal : { 90 84 95 89 }*/
/* IO - VPL Root : { 111 66 116 71 }*/
/* IO - VPL Root : { 111 84 116 89 }*/
/* End Operation */

/* Begin Operation: { 135 22 143 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 130 84 135 89 }*/
/* IO - VPL Terminal : { 130 148 135 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 142 16 150 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 108 142 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,2,2,2);
	result = connect_root_to_terminal(ptrA,2,0,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_One_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_One_29__universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 58 40 74 87 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 53 61 58 66 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 58 130 74 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 53 160 58 165 }*/
/* IO - VPL Root : { 74 160 79 165 }*/
/* End Operation */

/* Begin Operation: { 98 158 114 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"1");
/* IO - VPL Terminal : { 93 160 98 165 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 127 86 143 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 122 112 127 117 }*/
/* IO - VPL Root : { 143 112 148 117 }*/
/* End Operation */

/* Begin Operation: { 167 20 175 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 162 112 167 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Safe_20_Get_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Safe_20_Get_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 227 388 }{ 263 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 73 33 78 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 43 71 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 50 73 55 78 }*/
/* IO - VPL Root : { 71 73 76 78 }*/
/* End Operation */

/* Begin Operation: { 95 27 111 35 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 90 29 95 34 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 54 132 70 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 70 134 75 139 }*/
/* End Operation */

/* Begin Operation: { 99 120 115 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Between");
/* IO - VPL Terminal : { 94 134 99 139 }*/
/* IO - VPL Terminal : { 94 150 99 155 }*/
/* IO - VPL Terminal : { 94 166 99 171 }*/
/* IO - VPL Root : { 115 151 120 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 139 139 155 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 134 151 139 156 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 181 84 197 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"get-nth");
/* IO - VPL Terminal : { 176 102 181 107 }*/
/* IO - VPL Terminal : { 176 122 181 127 }*/
/* IO - VPL Root : { 197 112 202 117 }*/
/* End Operation */

/* Begin Operation: { 218 20 226 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 213 112 218 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Safe_20_Set_2129__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Safe_20_Set_2129__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 310 391 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 52 33 57 }*/
/* IO - VPL Root : { 28 113 33 118 }*/
/* IO - VPL Root : { 28 180 33 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 22 75 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 54 52 59 57 }*/
/* IO - VPL Root : { 75 52 80 57 }*/
/* End Operation */

/* Begin Operation: { 97 93 113 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,">=");
/* IO - VPL Terminal : { 92 102 97 107 }*/
/* IO - VPL Terminal : { 92 113 97 118 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 136 86 152 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"set-nth!");
/* IO - VPL Terminal : { 131 100 136 105 }*/
/* IO - VPL Terminal : { 131 116 136 121 }*/
/* IO - VPL Terminal : { 131 132 136 137 }*/
/* IO - VPL Root : { 152 116 157 121 }*/
/* End Operation */

/* Begin Operation: { 173 23 181 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 168 116 173 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Safe_20_Split_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Safe_20_Split_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 227 388 }{ 263 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 73 33 78 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 43 71 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 50 73 55 78 }*/
/* IO - VPL Root : { 71 73 76 78 }*/
/* End Operation */

/* Begin Operation: { 95 27 111 35 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 90 29 95 34 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 54 132 70 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 70 134 75 139 }*/
/* End Operation */

/* Begin Operation: { 99 120 115 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Between");
/* IO - VPL Terminal : { 94 134 99 139 }*/
/* IO - VPL Terminal : { 94 150 99 155 }*/
/* IO - VPL Terminal : { 94 166 99 171 }*/
/* IO - VPL Root : { 115 151 120 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 139 139 155 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 134 151 139 156 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 179 77 195 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"split-nth");
/* IO - VPL Terminal : { 174 98 179 103 }*/
/* IO - VPL Terminal : { 174 121 179 126 }*/
/* IO - VPL Root : { 195 98 200 103 }*/
/* IO - VPL Root : { 195 121 200 126 }*/
/* End Operation */

/* Begin Operation: { 218 20 226 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 213 76 218 81 }*/
/* IO - VPL Terminal : { 213 152 218 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,6,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Sum_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Sum_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 276 293 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 112 33 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 72 77 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default List");
/* IO - VPL Terminal : { 56 112 61 117 }*/
/* IO - VPL Root : { 77 112 82 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 188 117 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 96 195 101 200 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 104 81 120 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 99 112 104 117 }*/
/* IO - VPL Root : { 120 101 125 106 }*/
/* IO - VPL Root : { 120 130 125 135 }*/
/* End Operation */

/* Begin Operation: { 147 52 163 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Coerce Number");
/* IO - VPL Terminal : { 142 101 147 106 }*/
/* IO - VPL Root : { 163 101 168 106 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 189 84 205 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"add each");
/* IO - VPL Terminal : { 184 101 189 106 }*/
/* IO - VPL Terminal : { 184 129 189 134 }*/
/* IO - VPL Root : { 205 101 210 106 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
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

/* Begin Operation: { 61 97 77 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Coerce Number");
/* IO - VPL Terminal : { 56 146 61 151 }*/
/* IO - VPL Root : { 77 146 82 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 103 119 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 98 110 103 115 }*/
/* IO - VPL Terminal : { 98 119 103 124 }*/
/* IO - VPL Root : { 119 115 124 120 }*/
/* End Operation */

/* Begin Operation: { 146 21 154 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 141 115 146 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 233 21 241 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 228 112 233 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
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

/* Begin Operation: { 52 112 68 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 68 114 73 119 }*/
/* End Operation */

/* Begin Operation: { 97 20 105 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 92 114 97 119 }*/
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


Nat4 VPLU__28_To_20_Block_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_To_20_Block_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 108 272 }{ 243 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 79 33 84 }*/
/* IO - VPL Root : { 28 148 33 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 49 70 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 49 79 54 84 }*/
/* IO - VPL Root : { 70 79 75 84 }*/
/* End Operation */

/* Begin Operation: { 95 48 111 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Block Allocate");
/* IO - VPL Terminal : { 90 79 95 84 }*/
/* IO - VPL Terminal : { 90 112 95 117 }*/
/* IO - VPL Root : { 111 95 116 100 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 126 125 142 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 142 127 147 132 }*/
/* End Operation */

/* Begin Operation: { 171 97 187 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"fill list");
/* IO - VPL Terminal : { 166 109 171 114 }*/
/* IO - VPL Terminal : { 166 127 171 132 }*/
/* IO - VPL Terminal : { 166 147 171 152 }*/
/* IO - VPL Root : { 187 108 192 113 }*/
/* IO - VPL Root : { 187 127 192 132 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
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

/* Begin Operation: { 58 114 74 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Coerce Integer");
/* IO - VPL Terminal : { 53 162 58 167 }*/
/* IO - VPL Root : { 74 162 79 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 96 69 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 69 98 74 103 }*/
/* End Operation */

/* Begin Operation: { 98 52 114 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-integer");
/* IO - VPL Terminal : { 93 66 98 71 }*/
/* IO - VPL Terminal : { 93 82 98 87 }*/
/* IO - VPL Terminal : { 93 98 98 103 }*/
/* IO - VPL Terminal : { 93 114 98 119 }*/
/* IO - VPL Root : { 114 77 119 82 }*/
/* IO - VPL Root : { 114 104 119 109 }*/
/* End Operation */

/* Begin Operation: { 156 15 164 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 151 77 156 82 }*/
/* IO - VPL Terminal : { 151 141 156 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,1,4,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 217 15 225 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 212 108 217 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,4,2,4);
	result = connect_root_to_terminal(ptrA,1,0,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_To_20_String_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_To_20_String_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 174 219 }{ 252 303 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 48 63 64 76 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 64 67 69 72 }*/
/* End Operation */

/* Begin Operation: { 93 50 109 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"join elements");
/* IO - VPL Terminal : { 88 67 93 72 }*/
/* IO - VPL Terminal : { 88 97 93 102 }*/
/* IO - VPL Terminal : { 88 129 93 134 }*/
/* IO - VPL Root : { 109 68 114 73 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
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

/* Begin Operation: { 54 84 70 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Check\"");
/* IO - VPL Terminal : { 49 114 54 119 }*/
/* IO - VPL Root : { 70 114 75 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 89 116 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 95 100 100 105 }*/
/* IO - VPL Terminal : { 95 114 100 119 }*/
/* IO - VPL Terminal : { 95 129 100 134 }*/
/* IO - VPL Root : { 116 114 121 119 }*/
/* End Operation */

/* Begin Operation: { 146 20 154 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 141 114 146 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,3,0,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 124 121 140 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"\"length\"");
/* IO - VPL Terminal : { 119 152 124 157 }*/
/* IO - VPL Root : { 140 152 145 157 }*/
/* End Operation */

/* Begin Operation: { 162 52 178 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 157 68 162 73 }*/
/* IO - VPL Terminal : { 157 86 162 91 }*/
/* IO - VPL Root : { 178 68 183 73 }*/
/* IO - VPL Root : { 178 86 183 91 }*/
/* End Operation */

/* Begin Operation: { 208 19 216 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 203 112 208 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,2,0,3,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Without_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Without_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 274 469 }{ 251 282 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 123 73 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 52 152 57 157 }*/
/* IO - VPL Root : { 73 152 78 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 141 119 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 98 152 103 157 }*/
/* IO - VPL Terminal : { 98 165 103 170 }*/
/* IO - VPL Root : { 119 159 124 164 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 150 63 166 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get non");
/* IO - VPL Terminal : { 145 76 150 81 }*/
/* IO - VPL Terminal : { 145 103 150 108 }*/
/* IO - VPL Root : { 166 77 171 82 }*/
/* IO - VPL Root : { 166 104 171 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
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

/* Begin Operation: { 52 144 68 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 47 146 52 151 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 105 20 113 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 100 82 105 87 }*/
/* IO - VPL Terminal : { 100 146 105 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 19 212 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 199 114 204 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Detach_20_Item_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Detach_20_Item_29__universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 76 35 81 }*/
/* IO - VPL Root : { 30 157 35 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 131 80 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 59 143 64 148 }*/
/* IO - VPL Terminal : { 59 157 64 162 }*/
/* IO - VPL Root : { 80 151 85 156 }*/
/* End Operation */

/* Begin Operation: { 106 178 122 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 101 181 106 186 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 106 51 122 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"detach-nth");
/* IO - VPL Terminal : { 101 76 106 81 }*/
/* IO - VPL Terminal : { 101 103 106 108 }*/
/* IO - VPL Root : { 122 76 127 81 }*/
/* IO - VPL Root : { 122 103 127 108 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 76 148 81 }*/
/* IO - VPL Terminal : { 143 150 148 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Default_20_Zero_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Default_20_Zero_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 42 137 58 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 58 139 63 144 }*/
/* End Operation */

/* Begin Operation: { 87 81 103 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 82 109 87 114 }*/
/* IO - VPL Terminal : { 82 139 87 144 }*/
/* IO - VPL Root : { 103 125 108 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 126 19 134 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 121 108 126 113 }*/
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



	return kNOERROR;
}


Nat4 VPLU_Default_20_TRUE_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Default_20_TRUE_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 42 127 58 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 58 139 63 144 }*/
/* End Operation */

/* Begin Operation: { 87 81 103 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 82 109 87 114 }*/
/* IO - VPL Terminal : { 82 139 87 144 }*/
/* IO - VPL Root : { 103 125 108 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 126 19 134 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 121 108 126 113 }*/
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



	return kNOERROR;
}


Nat4 VPLU_Default_20_FALSE_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Default_20_FALSE_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 42 124 58 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 58 139 63 144 }*/
/* End Operation */

/* Begin Operation: { 87 81 103 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 82 109 87 114 }*/
/* IO - VPL Terminal : { 82 139 87 144 }*/
/* IO - VPL Root : { 103 125 108 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 126 19 134 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 121 108 126 113 }*/
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



	return kNOERROR;
}


Nat4 VPLU_Default_20_NULL_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Default_20_NULL_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 42 128 58 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 58 139 63 144 }*/
/* End Operation */

/* Begin Operation: { 87 81 103 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 82 109 87 114 }*/
/* IO - VPL Terminal : { 82 139 87 144 }*/
/* IO - VPL Root : { 103 125 108 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 126 19 134 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 121 108 126 113 }*/
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



	return kNOERROR;
}


Nat4 VPLU_Default_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Default_20_List_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 51 45 67 72 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 46 56 51 61 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 52 147 68 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NONE");
/* IO - VPL Terminal : { 47 159 52 164 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 86 80 102 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 81 109 86 114 }*/
/* IO - VPL Root : { 102 109 107 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 119 19 127 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 109 119 114 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 107 73 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 73 114 78 119 }*/
/* End Operation */

/* Begin Operation: { 102 20 110 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 97 114 102 119 }*/
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


Nat4 VPLU_Is_20_MacOS_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Is_20_MacOS_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 222 306 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 89 71 105 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"MacOS Version");
/* IO - VPL Root : { 105 119 110 124 }*/
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

/* Start Operations: { 60 60 }{ 252 303 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 41 76 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"gestaltSystemVersion");
/* IO - VPL Root : { 76 99 81 104 }*/
/* End Operation */

/* Begin Operation: { 97 81 113 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"Gestalt");
/* IO - VPL Terminal : { 92 99 97 104 }*/
/* IO - VPL Terminal : { 92 119 97 124 }*/
/* IO - VPL Root : { 113 99 118 104 }*/
/* IO - VPL Root : { 113 119 118 124 }*/
/* End Operation */

/* Begin Operation: { 140 31 156 62 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 135 44 140 49 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 89 183 105 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 105 185 110 190 }*/
/* End Operation */

/* Begin Operation: { 89 163 105 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 105 165 110 170 }*/
/* End Operation */

/* Begin Operation: { 134 127 150 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-integer");
/* IO - VPL Terminal : { 129 145 134 150 }*/
/* IO - VPL Terminal : { 129 165 134 170 }*/
/* IO - VPL Terminal : { 129 185 134 190 }*/
/* IO - VPL Root : { 150 145 155 150 }*/
/* IO - VPL Root : { 150 165 155 170 }*/
/* IO - VPL Root : { 150 185 155 190 }*/
/* End Operation */

/* Begin Operation: { 178 78 194 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"dec 2 hex");
/* IO - VPL Terminal : { 173 126 178 131 }*/
/* IO - VPL Root : { 194 126 199 131 }*/
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

/* Start Operations: { 60 60 }{ 490 360 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 245 75 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"16");
/* IO - VPL Root : { 75 250 80 255 }*/
/* End Operation */

/* Begin Operation: { 59 222 75 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"10");
/* IO - VPL Root : { 75 227 80 232 }*/
/* End Operation */

/* Begin Operation: { 55 131 71 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 50 164 55 169 }*/
/* IO - VPL Root : { 71 164 76 169 }*/
/* End Operation */

/* Begin Operation: { 104 163 120 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,2,"string-to-base");
/* IO - VPL Terminal : { 99 194 104 199 }*/
/* IO - VPL Terminal : { 99 227 104 232 }*/
/* IO - VPL Terminal : { 99 250 104 255 }*/
/* IO - VPL Root : { 120 195 125 200 }*/
/* IO - VPL Root : { 120 229 125 234 }*/
/* End Operation */

/* Begin Operation: { 107 295 123 303 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 123 297 128 302 }*/
/* End Operation */

/* Begin Operation: { 148 213 164 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 143 229 148 234 }*/
/* IO - VPL Terminal : { 143 247 148 252 }*/
/* IO - VPL Root : { 164 229 169 234 }*/
/* IO - VPL Root : { 164 247 169 252 }*/
/* End Operation */

/* Begin Operation: { 191 206 207 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-string");
/* IO - VPL Terminal : { 186 247 191 252 }*/
/* IO - VPL Root : { 207 247 212 252 }*/
/* End Operation */

/* Begin Operation: { 151 165 167 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 167 167 172 172 }*/
/* End Operation */

/* Begin Operation: { 192 133 208 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 187 149 192 154 }*/
/* IO - VPL Terminal : { 187 167 192 172 }*/
/* IO - VPL Root : { 208 149 213 154 }*/
/* IO - VPL Root : { 208 167 213 172 }*/
/* End Operation */

/* Begin Operation: { 235 126 251 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-string");
/* IO - VPL Terminal : { 230 167 235 172 }*/
/* IO - VPL Root : { 251 167 256 172 }*/
/* End Operation */

/* Begin Operation: { 281 108 297 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-string");
/* IO - VPL Terminal : { 276 149 281 154 }*/
/* IO - VPL Root : { 297 149 302 154 }*/
/* End Operation */

/* Begin Operation: { 321 214 337 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"pack");
/* IO - VPL Terminal : { 316 223 321 228 }*/
/* IO - VPL Terminal : { 316 234 321 239 }*/
/* IO - VPL Terminal : { 316 247 321 252 }*/
/* IO - VPL Root : { 337 234 342 239 }*/
/* End Operation */

/* Begin Operation: { 358 16 366 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 353 110 358 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,1,3,4);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,1,6,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,2,9,1,10);
	result = connect_root_to_terminal(ptrA,1,9,1,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
	result = connect_root_to_terminal(ptrA,1,10,2,12);
	result = connect_root_to_terminal(ptrA,1,7,3,12);
	result = connect_root_to_terminal(ptrA,1,12,1,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 220 32 228 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 215 126 220 131 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,4,3,6);
	result = connect_root_to_terminal(ptrA,3,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [6 to 6] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 49 53 65 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 44 82 49 87 }*/
/* IO - VPL Root : { 65 82 70 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 131 69 147 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Up To Version?");
/* IO - VPL Terminal : { 126 89 131 94 }*/
/* IO - VPL Terminal : { 126 119 131 124 }*/
/* IO - VPL Terminal : { 126 146 131 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 262 379 }{ 289 298 } */
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

/* Begin Operation: { 52 150 68 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 47 162 52 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 103 107 119 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 98 137 103 142 }*/
/* IO - VPL Root : { 119 137 124 142 }*/
/* End Operation */

/* Begin Operation: { 140 93 156 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"split-nth");
/* IO - VPL Terminal : { 135 114 140 119 }*/
/* IO - VPL Terminal : { 135 137 140 142 }*/
/* IO - VPL Root : { 156 114 161 119 }*/
/* IO - VPL Root : { 156 137 161 142 }*/
/* End Operation */

/* Begin Operation: { 181 59 197 87 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 176 66 181 71 }*/
/* IO - VPL Terminal : { 176 75 181 80 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 213 21 221 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 262 379 }{ 200 300 } */
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

/* Begin Operation: { 51 58 67 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"check all");
/* IO - VPL Terminal : { 46 75 51 80 }*/
/* IO - VPL Terminal : { 46 103 51 108 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 287 456 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 96 68 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"<");
/* IO - VPL Terminal : { 47 103 52 108 }*/
/* IO - VPL Terminal : { 47 112 52 117 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 87 21 95 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
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

/* Begin Operation: { 54 105 70 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 49 112 54 117 }*/
/* IO - VPL Terminal : { 49 121 54 126 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 86 21 94 213 } */
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

/* Begin Operation: { 86 19 94 211 } */
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

/* Begin Operation: { 166 26 174 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Beep_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Beep_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 50 62 66 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,0,"AlertSoundPlay");
/* End Operation */

/* Begin Operation: { 89 21 97 213 } */
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 112 76 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 76 114 81 119 }*/
/* End Operation */

/* Begin Operation: { 105 83 121 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"SysBeep");
/* IO - VPL Terminal : { 100 114 105 119 }*/
/* End Operation */

/* Begin Operation: { 142 20 150 212 } */
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


Nat4 VPLU_Speak_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Speak_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 374 156 }{ 291 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 109 33 114 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 79 76 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Check\"");
/* IO - VPL Terminal : { 55 109 60 114 }*/
/* IO - VPL Root : { 76 109 81 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 72 114 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"To PString");
/* IO - VPL Terminal : { 93 109 98 114 }*/
/* IO - VPL Root : { 114 109 119 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 68 164 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"SpeakString");
/* IO - VPL Terminal : { 143 109 148 114 }*/
/* IO - VPL Root : { 164 109 169 114 }*/
/* End Operation */

/* Begin Operation: { 188 107 204 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 183 109 188 114 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 187 162 203 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"wait");
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);

	{
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

/* Begin Operation: { 51 76 67 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,1,"SpeechBusy");
/* IO - VPL Root : { 67 116 72 121 }*/
/* End Operation */

/* Begin Operation: { 91 114 107 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 86 116 91 121 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 127 21 135 213 } */
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

/* Begin Operation: { 220 18 228 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Simple_20_Speak_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Simple_20_Speak_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 64 33 69 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 117 68 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"interrupt?");
/* IO - VPL Terminal : { 47 152 52 157 }*/
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

/* Start Operations: { 60 60 }{ 221 293 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 102 72 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 51 114 56 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 94 94 110 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"wait");
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);

	{
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

/* Begin Operation: { 51 76 67 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,1,"SpeechBusy");
/* IO - VPL Root : { 67 116 72 121 }*/
/* End Operation */

/* Begin Operation: { 91 114 107 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 86 116 91 121 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 127 21 135 213 } */
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

/* Begin Operation: { 139 24 147 216 } */
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

/* Begin Operation: { 52 40 68 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Speak");
/* IO - VPL Terminal : { 47 64 52 69 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 90 21 98 213 } */
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



	return kNOERROR;
}


Nat4 VPLU_Between_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Between_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 169 33 174 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 57 70 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"<=");
/* IO - VPL Terminal : { 49 66 54 71 }*/
/* IO - VPL Terminal : { 49 77 54 82 }*/
/* IO - VPL Root : { 70 71 75 76 }*/
/* End Operation */

/* Begin Operation: { 55 149 71 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"<=");
/* IO - VPL Terminal : { 50 158 55 163 }*/
/* IO - VPL Terminal : { 50 169 55 174 }*/
/* IO - VPL Root : { 71 164 76 169 }*/
/* End Operation */

/* Begin Operation: { 91 101 107 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"and");
/* IO - VPL Terminal : { 86 112 91 117 }*/
/* IO - VPL Terminal : { 86 125 91 130 }*/
/* IO - VPL Root : { 107 118 112 123 }*/
/* End Operation */

/* Begin Operation: { 139 19 147 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 134 118 139 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Between_20_Bounds_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Between_20_Bounds_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 61 33 66 }*/
/* IO - VPL Root : { 28 113 33 118 }*/
/* IO - VPL Root : { 28 171 33 176 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 50 72 90 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"min");
/* IO - VPL Terminal : { 51 61 56 66 }*/
/* IO - VPL Terminal : { 51 74 56 79 }*/
/* IO - VPL Root : { 72 68 77 73 }*/
/* End Operation */

/* Begin Operation: { 56 145 72 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"max");
/* IO - VPL Terminal : { 51 157 56 162 }*/
/* IO - VPL Terminal : { 51 171 56 176 }*/
/* IO - VPL Root : { 72 164 77 169 }*/
/* End Operation */

/* Begin Operation: { 92 83 108 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Between");
/* IO - VPL Terminal : { 87 97 92 102 }*/
/* IO - VPL Terminal : { 87 113 92 118 }*/
/* IO - VPL Terminal : { 87 129 92 134 }*/
/* IO - VPL Root : { 108 114 113 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 21 150 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 114 142 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Between_20_Wrap_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Between_20_Wrap_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 61 33 66 }*/
/* IO - VPL Root : { 28 116 33 121 }*/
/* IO - VPL Root : { 28 177 33 182 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 47 79 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Between");
/* IO - VPL Terminal : { 58 61 63 66 }*/
/* IO - VPL Terminal : { 58 77 63 82 }*/
/* IO - VPL Terminal : { 58 93 63 98 }*/
/* IO - VPL Root : { 79 78 84 83 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 66 119 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 98 78 103 83 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 147 18 155 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 142 116 147 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
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

/* Begin Operation: { 49 131 65 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,">");
/* IO - VPL Terminal : { 44 138 49 143 }*/
/* IO - VPL Terminal : { 44 147 49 152 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 119 19 127 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 113 119 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
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

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 55 114 60 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Random_20_Between_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Random_20_Between_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 198 483 }{ 260 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 72 76 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,0,1,"rand");
/* IO - VPL Root : { 76 92 81 97 }*/
/* End Operation */

/* Begin Operation: { 62 141 78 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 57 150 62 155 }*/
/* IO - VPL Terminal : { 57 161 62 166 }*/
/* IO - VPL Root : { 78 155 83 160 }*/
/* End Operation */

/* Begin Operation: { 100 123 116 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"*");
/* IO - VPL Terminal : { 95 130 100 135 }*/
/* IO - VPL Terminal : { 95 139 100 144 }*/
/* IO - VPL Root : { 116 135 121 140 }*/
/* End Operation */

/* Begin Operation: { 138 112 154 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"round");
/* IO - VPL Terminal : { 133 135 138 140 }*/
/* IO - VPL Root : { 154 135 159 140 }*/
/* End Operation */

/* Begin Operation: { 174 97 190 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 169 106 174 111 }*/
/* IO - VPL Terminal : { 169 117 174 122 }*/
/* IO - VPL Root : { 190 112 195 117 }*/
/* End Operation */

/* Begin Operation: { 213 18 221 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 208 112 213 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Flip_20_Coin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Flip_20_Coin_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 53 93 69 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 69 95 74 100 }*/
/* End Operation */

/* Begin Operation: { 53 129 69 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 69 131 74 136 }*/
/* End Operation */

/* Begin Operation: { 98 61 114 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Random Between");
/* IO - VPL Terminal : { 93 95 98 100 }*/
/* IO - VPL Terminal : { 93 131 98 136 }*/
/* IO - VPL Root : { 114 114 119 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 135 115 151 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"=");
/* IO - VPL Terminal : { 130 122 135 127 }*/
/* IO - VPL Terminal : { 130 131 135 136 }*/
/* IO - VPL Root : { 151 126 156 131 }*/
/* End Operation */

/* Begin Operation: { 175 21 183 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 170 112 175 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Roll_20_Dice_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Roll_20_Dice_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 295 653 }{ 305 299 } */
/* Begin Operation: { 20 21 28 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 63 33 68 }*/
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 173 33 178 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 74 74 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"default count");
/* IO - VPL Terminal : { 53 118 58 123 }*/
/* IO - VPL Root : { 74 118 79 123 }*/
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
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 49 142 65 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 65 144 70 149 }*/
/* End Operation */

/* Begin Operation: { 94 86 110 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 89 114 94 119 }*/
/* IO - VPL Terminal : { 89 144 94 149 }*/
/* IO - VPL Root : { 110 130 115 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 20 150 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 114 142 119 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 102 79 118 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Count");
/* IO - VPL Terminal : { 97 118 102 123 }*/
/* IO - VPL Root : { 118 118 123 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 177 76 266 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"default rolls");
/* IO - VPL Terminal : { 55 219 60 224 }*/
/* IO - VPL Root : { 76 219 81 224 }*/
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
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 49 142 65 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 65 144 70 149 }*/
/* End Operation */

/* Begin Operation: { 94 86 110 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 89 114 94 119 }*/
/* IO - VPL Terminal : { 89 144 94 149 }*/
/* IO - VPL Root : { 110 130 115 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 20 150 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 114 142 119 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 101 180 117 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Count");
/* IO - VPL Terminal : { 96 219 101 224 }*/
/* IO - VPL Root : { 117 219 122 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 129 23 145 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"default sides");
/* IO - VPL Terminal : { 124 63 129 68 }*/
/* IO - VPL Root : { 145 64 150 69 }*/
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
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 49 142 65 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"6");
/* IO - VPL Root : { 65 144 70 149 }*/
/* End Operation */

/* Begin Operation: { 94 86 110 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 89 114 94 119 }*/
/* IO - VPL Terminal : { 89 144 94 149 }*/
/* IO - VPL Root : { 110 130 115 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 20 150 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 114 142 119 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 164 77 180 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"make rands");
/* IO - VPL Terminal : { 159 96 164 101 }*/
/* IO - VPL Terminal : { 159 118 164 123 }*/
/* IO - VPL Terminal : { 159 139 164 144 }*/
/* IO - VPL Root : { 180 116 185 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,3,iList);
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
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 162 33 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 75 62 91 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"make rolls");
/* IO - VPL Terminal : { 70 83 75 88 }*/
/* IO - VPL Terminal : { 70 114 75 119 }*/
/* IO - VPL Root : { 91 97 96 102 }*/
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
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 46 90 62 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 62 92 67 97 }*/
/* End Operation */

/* Begin Operation: { 91 58 107 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Random Between");
/* IO - VPL Terminal : { 86 92 91 97 }*/
/* IO - VPL Terminal : { 86 128 91 133 }*/
/* IO - VPL Root : { 107 111 112 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 133 17 141 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 128 111 133 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 134 19 142 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 129 113 134 118 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 93 220 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(One)");
/* IO - VPL Terminal : { 199 116 204 121 }*/
/* IO - VPL Root : { 220 116 225 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 18 254 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 241 116 246 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,2,2,6);
	result = connect_root_to_terminal(ptrA,1,4,3,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Rad_20_To_20_Deg_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Rad_20_To_20_Deg_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 106 242 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 47 110 63 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,0,1,"pi");
/* IO - VPL Root : { 63 123 68 128 }*/
/* End Operation */

/* Begin Operation: { 80 101 96 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 75 111 80 116 }*/
/* IO - VPL Terminal : { 75 123 80 128 }*/
/* IO - VPL Root : { 96 118 101 123 }*/
/* End Operation */

/* Begin Operation: { 79 154 95 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"180");
/* IO - VPL Root : { 95 163 100 168 }*/
/* End Operation */

/* Begin Operation: { 125 111 141 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"*");
/* IO - VPL Terminal : { 120 118 125 123 }*/
/* IO - VPL Terminal : { 120 127 125 132 }*/
/* IO - VPL Root : { 141 123 146 128 }*/
/* End Operation */

/* Begin Operation: { 173 17 181 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 168 110 173 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Deg_20_To_20_Rad_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Deg_20_To_20_Rad_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 216 421 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 110 33 115 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 40 129 56 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"180");
/* IO - VPL Root : { 56 138 61 143 }*/
/* End Operation */

/* Begin Operation: { 77 100 93 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 72 110 77 115 }*/
/* IO - VPL Terminal : { 72 122 77 127 }*/
/* IO - VPL Root : { 93 117 98 122 }*/
/* End Operation */

/* Begin Operation: { 78 154 94 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,0,1,"pi");
/* IO - VPL Root : { 94 167 99 172 }*/
/* End Operation */

/* Begin Operation: { 123 110 139 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"*");
/* IO - VPL Terminal : { 118 117 123 122 }*/
/* IO - VPL Terminal : { 118 126 123 131 }*/
/* IO - VPL Root : { 139 122 144 127 }*/
/* End Operation */

/* Begin Operation: { 166 23 174 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 161 113 166 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_test_2D_bit_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_test_2D_bit_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 243 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 151 33 156 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 41 131 57 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 57 133 62 138 }*/
/* End Operation */

/* Begin Operation: { 86 117 102 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"power");
/* IO - VPL Terminal : { 81 133 86 138 }*/
/* IO - VPL Terminal : { 81 151 86 156 }*/
/* IO - VPL Root : { 102 142 107 147 }*/
/* End Operation */

/* Begin Operation: { 131 53 147 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"test-one?");
/* IO - VPL Terminal : { 126 75 131 80 }*/
/* IO - VPL Terminal : { 126 99 131 104 }*/
/* IO - VPL Root : { 147 88 152 93 }*/
/* End Operation */

/* Begin Operation: { 176 26 184 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 171 116 176 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_bit_2D_without_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_bit_2D_without_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 100 224 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 154 33 159 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 128 76 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"test-one?");
/* IO - VPL Terminal : { 55 150 60 155 }*/
/* IO - VPL Terminal : { 55 174 60 179 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 61 63 77 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 56 72 61 77 }*/
/* IO - VPL Terminal : { 56 83 61 88 }*/
/* IO - VPL Root : { 77 77 82 82 }*/
/* End Operation */

/* Begin Operation: { 87 141 103 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 103 153 108 158 }*/
/* End Operation */

/* Begin Operation: { 132 18 140 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 127 77 132 82 }*/
/* IO - VPL Terminal : { 127 153 132 158 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
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

/* Begin Operation: { 55 131 71 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 71 146 76 151 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 82 100 87 }*/
/* IO - VPL Terminal : { 95 146 100 151 }*/
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



	return kNOERROR;
}


Nat4 VPLU_Half_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Half_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 106 33 111 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 45 116 61 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 61 118 66 123 }*/
/* End Operation */

/* Begin Operation: { 90 96 106 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 85 106 90 111 }*/
/* IO - VPL Terminal : { 85 118 90 123 }*/
/* IO - VPL Root : { 106 113 111 118 }*/
/* End Operation */

/* Begin Operation: { 126 18 134 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 121 104 126 109 }*/
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



	return kNOERROR;
}


Nat4 VPLU_Int_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Int_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 72 85 88 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"trunc");
/* IO - VPL Terminal : { 67 108 72 113 }*/
/* IO - VPL Root : { 88 99 93 104 }*/
/* IO - VPL Root : { 88 115 93 120 }*/
/* End Operation */

/* Begin Operation: { 123 19 131 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 118 107 123 112 }*/
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


Nat4 VPLU_Odd_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Odd_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 237 527 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 37 64 53 72 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 53 66 58 71 }*/
/* End Operation */

/* Begin Operation: { 82 44 98 82 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 77 54 82 59 }*/
/* IO - VPL Terminal : { 77 66 82 71 }*/
/* IO - VPL Root : { 98 61 103 66 }*/
/* End Operation */

/* Begin Operation: { 47 121 63 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Int");
/* IO - VPL Terminal : { 42 137 47 142 }*/
/* IO - VPL Root : { 63 137 68 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 82 125 98 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"idiv");
/* IO - VPL Terminal : { 77 137 82 142 }*/
/* IO - VPL Terminal : { 77 151 82 156 }*/
/* IO - VPL Root : { 98 137 103 142 }*/
/* IO - VPL Root : { 98 151 103 156 }*/
/* End Operation */

/* Begin Operation: { 118 98 134 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"!=");
/* IO - VPL Terminal : { 113 106 118 111 }*/
/* IO - VPL Terminal : { 113 116 118 121 }*/
/* IO - VPL Root : { 134 112 139 117 }*/
/* End Operation */

/* Begin Operation: { 159 23 167 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 154 112 159 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_x_2A_pi_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_x_2A_pi_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 62 37 78 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default Zero");
/* IO - VPL Terminal : { 57 79 62 84 }*/
/* IO - VPL Root : { 78 79 83 84 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 146 80 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,0,1,"pi");
/* IO - VPL Root : { 80 159 85 164 }*/
/* End Operation */

/* Begin Operation: { 113 96 129 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"*");
/* IO - VPL Terminal : { 108 103 113 108 }*/
/* IO - VPL Terminal : { 108 112 113 117 }*/
/* IO - VPL Root : { 129 108 134 113 }*/
/* End Operation */

/* Begin Operation: { 151 19 159 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 146 108 151 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Unique_20_Name_20_From_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Unique_20_Name_20_From_20_List_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 212 491 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 151 33 156 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 59 74 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find #s");
/* IO - VPL Terminal : { 53 74 58 79 }*/
/* IO - VPL Terminal : { 53 97 58 102 }*/
/* IO - VPL Root : { 74 86 79 91 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 120 80 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"in\"");
/* IO - VPL Terminal : { 59 132 64 137 }*/
/* IO - VPL Terminal : { 59 146 64 151 }*/
/* IO - VPL Root : { 80 139 85 144 }*/
/* End Operation */

/* Begin Operation: { 104 137 120 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 99 139 104 144 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 102 58 118 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"more?");
/* IO - VPL Terminal : { 97 82 102 87 }*/
/* IO - VPL Root : { 118 82 123 87 }*/
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

/* Start Operations: { 60 60 }{ 268 287 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 41 129 57 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\" #\"");
/* IO - VPL Root : { 57 139 62 144 }*/
/* End Operation */

/* Begin Operation: { 86 91 102 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Split At\"");
/* IO - VPL Terminal : { 81 114 86 119 }*/
/* IO - VPL Terminal : { 81 139 86 144 }*/
/* IO - VPL Root : { 102 108 107 113 }*/
/* IO - VPL Root : { 102 127 107 132 }*/
/* IO - VPL Root : { 102 146 107 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 129 105 145 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-string");
/* IO - VPL Terminal : { 124 146 129 151 }*/
/* IO - VPL Root : { 145 146 150 151 }*/
/* End Operation */

/* Begin Operation: { 175 39 191 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 170 70 175 75 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 219 22 227 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 214 116 219 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,3,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
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

/* Begin Operation: { 53 112 69 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 69 114 74 119 }*/
/* End Operation */

/* Begin Operation: { 98 20 106 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 93 114 98 119 }*/
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

/* Begin Operation: { 162 19 170 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 157 113 162 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
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

/* Begin Operation: { 108 123 124 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"sync");
/* IO - VPL Terminal : { 103 135 108 140 }*/
/* IO - VPL Terminal : { 103 151 108 156 }*/
/* IO - VPL Root : { 124 144 129 149 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 293 562 }{ 200 300 }*/
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

/* Begin Operation: { 52 75 68 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 47 82 52 87 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 114 19 122 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 109 113 114 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 330 600 }{ 350 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 91 81 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 81 103 86 108 }*/
/* End Operation */

/* Begin Operation: { 110 73 126 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"sort");
/* IO - VPL Terminal : { 105 82 110 87 }*/
/* IO - VPL Terminal : { 105 103 110 108 }*/
/* IO - VPL Root : { 126 93 131 98 }*/
/* End Operation */

/* Begin Operation: { 137 73 153 81 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 153 75 158 80 }*/
/* End Operation */

/* Begin Operation: { 182 65 198 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find");
/* IO - VPL Terminal : { 177 75 182 80 }*/
/* IO - VPL Terminal : { 177 93 182 98 }*/
/* IO - VPL Root : { 198 74 203 79 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 114 272 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 135 83 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 62 146 67 151 }*/
/* IO - VPL Terminal : { 62 159 67 164 }*/
/* IO - VPL Root : { 83 153 88 158 }*/
/* End Operation */

/* Begin Operation: { 107 151 123 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 102 153 107 158 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 153 19 161 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 148 113 153 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
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

/* Begin Operation: { 56 98 72 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 51 113 56 118 }*/
/* IO - VPL Root : { 72 113 77 118 }*/
/* End Operation */

/* Begin Operation: { 104 19 112 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 99 113 104 118 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 219 153 235 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\" #\"");
/* IO - VPL Root : { 235 163 240 168 }*/
/* End Operation */

/* Begin Operation: { 219 41 235 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 214 74 219 79 }*/
/* IO - VPL Root : { 235 74 240 79 }*/
/* End Operation */

/* Begin Operation: { 263 137 279 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 258 146 263 151 }*/
/* IO - VPL Terminal : { 258 163 263 168 }*/
/* IO - VPL Terminal : { 258 181 263 186 }*/
/* IO - VPL Root : { 279 162 284 167 }*/
/* End Operation */

/* Begin Operation: { 306 28 314 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 301 122 306 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,5,2,7);
	result = connect_root_to_terminal(ptrA,1,6,3,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 21 156 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 112 148 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Get_20_Setting_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Get_20_Setting_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 367 494 }{ 272 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 73 33 78 }*/
/* IO - VPL Root : { 28 145 33 150 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 73 83 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"search each");
/* IO - VPL Terminal : { 62 95 67 100 }*/
/* IO - VPL Terminal : { 62 130 67 135 }*/
/* IO - VPL Root : { 83 95 88 100 }*/
/* IO - VPL Root : { 83 129 88 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 256 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 56 71 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 50 82 55 87 }*/
/* IO - VPL Root : { 71 72 76 77 }*/
/* IO - VPL Root : { 71 94 76 99 }*/
/* End Operation */

/* Begin Operation: { 101 130 117 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"=");
/* IO - VPL Terminal : { 96 137 101 142 }*/
/* IO - VPL Terminal : { 96 146 101 151 }*/
/* IO - VPL Root : { 117 145 122 150 }*/
/* End Operation */

/* Begin Operation: { 140 169 156 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 135 181 140 186 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 191 19 199 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 186 94 191 99 }*/
/* IO - VPL Terminal : { 186 145 191 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 107 117 123 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 102 129 107 134 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 153 22 161 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 148 110 153 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Set_20_Setting_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Set_20_Setting_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 189 411 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 67 33 72 }*/
/* IO - VPL Root : { 28 121 33 126 }*/
/* IO - VPL Root : { 28 179 33 184 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 46 69 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"add to list?");
/* IO - VPL Terminal : { 48 67 53 72 }*/
/* IO - VPL Terminal : { 48 101 53 106 }*/
/* IO - VPL Root : { 69 66 74 71 }*/
/* IO - VPL Root : { 69 101 74 106 }*/
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

/* Start Operations: { 60 60 }{ 302 289 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 71 78 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Count");
/* IO - VPL Terminal : { 57 110 62 115 }*/
/* IO - VPL Root : { 78 110 83 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 111 57 127 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find first match");
/* IO - VPL Terminal : { 106 82 111 87 }*/
/* IO - VPL Terminal : { 106 110 111 115 }*/
/* IO - VPL Terminal : { 106 142 111 147 }*/
/* IO - VPL Root : { 127 110 132 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
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

/* Begin Operation: { 59 40 75 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 54 66 59 71 }*/
/* IO - VPL Root : { 75 55 80 60 }*/
/* IO - VPL Root : { 75 82 80 87 }*/
/* End Operation */

/* Begin Operation: { 105 146 121 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 100 153 105 158 }*/
/* IO - VPL Terminal : { 100 162 105 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 153 20 161 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 148 114 153 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
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

/* Begin Operation: { 56 104 72 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 72 115 77 120 }*/
/* End Operation */

/* Begin Operation: { 101 21 109 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 96 115 101 120 }*/
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

/* Begin Operation: { 154 136 170 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 149 167 154 172 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 240 25 248 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 235 87 240 92 }*/
/* IO - VPL Terminal : { 235 151 240 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,0,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 295 279 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 158 66 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 66 169 71 174 }*/
/* End Operation */

/* Begin Operation: { 95 138 111 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 90 146 95 151 }*/
/* IO - VPL Terminal : { 90 169 95 174 }*/
/* IO - VPL Root : { 111 158 116 163 }*/
/* End Operation */

/* Begin Operation: { 142 62 158 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 137 82 142 87 }*/
/* IO - VPL Terminal : { 137 104 142 109 }*/
/* IO - VPL Root : { 158 93 163 98 }*/
/* End Operation */

/* Begin Operation: { 181 119 197 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 176 149 181 154 }*/
/* IO - VPL Root : { 197 149 202 154 }*/
/* End Operation */

/* Begin Operation: { 250 23 258 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 245 85 250 90 }*/
/* IO - VPL Terminal : { 245 149 250 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 53 151 69 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 48 164 53 169 }*/
/* IO - VPL Terminal : { 48 179 53 184 }*/
/* IO - VPL Root : { 69 171 74 176 }*/
/* End Operation */

/* Begin Operation: { 95 81 111 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Safe Set!)");
/* IO - VPL Terminal : { 90 99 95 104 }*/
/* IO - VPL Terminal : { 90 119 95 124 }*/
/* IO - VPL Terminal : { 90 139 95 144 }*/
/* IO - VPL Root : { 111 119 116 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 151 18 159 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 146 119 151 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
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



	return kNOERROR;
}


Nat4 VPLU__28_Remove_20_Setting_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Remove_20_Setting_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 189 411 }{ 288 311 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 67 33 72 }*/
/* IO - VPL Root : { 28 164 33 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 77 68 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Count");
/* IO - VPL Terminal : { 47 116 52 121 }*/
/* IO - VPL Root : { 68 116 73 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 63 119 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find first match");
/* IO - VPL Terminal : { 98 88 103 93 }*/
/* IO - VPL Terminal : { 98 116 103 121 }*/
/* IO - VPL Terminal : { 98 148 103 153 }*/
/* IO - VPL Root : { 119 116 124 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
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

/* Begin Operation: { 59 40 75 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 54 66 59 71 }*/
/* IO - VPL Root : { 75 55 80 60 }*/
/* IO - VPL Root : { 75 82 80 87 }*/
/* End Operation */

/* Begin Operation: { 105 146 121 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 100 153 105 158 }*/
/* IO - VPL Terminal : { 100 162 105 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 153 20 161 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 148 114 153 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
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

/* Begin Operation: { 56 104 72 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 72 115 77 120 }*/
/* End Operation */

/* Begin Operation: { 101 21 109 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 96 115 101 120 }*/
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

/* Begin Operation: { 144 156 160 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 139 187 144 192 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 146 43 162 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"detach-nth");
/* IO - VPL Terminal : { 141 67 146 72 }*/
/* IO - VPL Terminal : { 141 93 146 98 }*/
/* IO - VPL Root : { 162 67 167 72 }*/
/* IO - VPL Root : { 162 93 167 98 }*/
/* End Operation */

/* Begin Operation: { 180 122 196 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 175 148 180 153 }*/
/* IO - VPL Root : { 196 137 201 142 }*/
/* IO - VPL Root : { 196 164 201 169 }*/
/* End Operation */

/* Begin Operation: { 217 33 225 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 212 87 217 92 }*/
/* IO - VPL Terminal : { 212 164 217 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,0,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,2,5,2,6);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_New_20_Callback_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_New_20_Callback_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 59 33 64 }*/
/* IO - VPL Root : { 28 117 33 122 }*/
/* IO - VPL Root : { 28 182 33 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 77 80 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default List");
/* IO - VPL Terminal : { 59 117 64 122 }*/
/* IO - VPL Root : { 80 117 85 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 102 140 118 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default Zero");
/* IO - VPL Terminal : { 97 182 102 187 }*/
/* IO - VPL Root : { 118 182 123 187 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 140 98 156 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"pack");
/* IO - VPL Terminal : { 135 101 140 106 }*/
/* IO - VPL Terminal : { 135 117 140 122 }*/
/* IO - VPL Terminal : { 135 137 140 142 }*/
/* IO - VPL Root : { 156 118 161 123 }*/
/* End Operation */

/* Begin Operation: { 178 21 186 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 173 118 178 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Add_20_Attachment_20_To_20_Callback_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Add_20_Attachment_20_To_20_Callback_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 309 264 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 69 33 74 }*/
/* IO - VPL Root : { 28 122 33 127 }*/
/* IO - VPL Root : { 28 179 33 184 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 21 72 68 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 51 42 56 47 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 57 106 73 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 52 113 57 118 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 92 38 108 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 87 69 92 74 }*/
/* IO - VPL Root : { 108 58 113 63 }*/
/* IO - VPL Root : { 108 80 113 85 }*/
/* End Operation */

/* Begin Operation: { 129 56 145 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"need?");
/* IO - VPL Terminal : { 124 80 129 85 }*/
/* IO - VPL Root : { 145 69 150 74 }*/
/* IO - VPL Root : { 145 91 150 96 }*/
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
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 107 68 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 47 114 52 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 84 83 100 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 79 114 84 119 }*/
/* IO - VPL Root : { 100 103 105 108 }*/
/* IO - VPL Root : { 100 125 105 130 }*/
/* End Operation */

/* Begin Operation: { 122 20 130 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 117 82 122 87 }*/
/* IO - VPL Terminal : { 117 146 122 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
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

/* Begin Operation: { 56 103 72 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 72 110 77 115 }*/
/* End Operation */

/* Begin Operation: { 101 20 109 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 96 82 101 87 }*/
/* IO - VPL Terminal : { 96 146 101 151 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 171 137 187 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 166 157 171 162 }*/
/* IO - VPL Terminal : { 166 179 171 184 }*/
/* IO - VPL Root : { 187 168 192 173 }*/
/* End Operation */

/* Begin Operation: { 211 44 227 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"attach-l");
/* IO - VPL Terminal : { 206 58 211 63 }*/
/* IO - VPL Terminal : { 206 74 211 79 }*/
/* IO - VPL Terminal : { 206 91 211 96 }*/
/* IO - VPL Root : { 227 74 232 79 }*/
/* End Operation */

/* Begin Operation: { 255 18 263 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 250 118 255 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,3,0,2,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,2,4,3,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
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

/* Begin Operation: { 52 32 68 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 47 66 52 71 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 90 40 106 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Attachment Value");
/* IO - VPL Terminal : { 85 66 90 71 }*/
/* IO - VPL Terminal : { 85 114 90 119 }*/
/* IO - VPL Terminal : { 85 162 90 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 133 17 141 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 128 66 133 71 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,3,0,3,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
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

/* Begin Operation: { 54 38 70 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 49 66 54 71 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 55 142 71 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 50 162 55 167 }*/
/* IO - VPL Root : { 71 162 76 167 }*/
/* End Operation */

/* Begin Operation: { 97 99 113 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 92 108 97 113 }*/
/* IO - VPL Terminal : { 92 131 97 136 }*/
/* IO - VPL Root : { 113 119 118 124 }*/
/* End Operation */

/* Begin Operation: { 140 25 148 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 135 119 140 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
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



	return kNOERROR;
}


Nat4 VPLU_Execute_20_Callback_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Execute_20_Callback_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 207 337 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 29 73 76 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 52 50 57 55 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 57 118 73 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"options");
/* IO - VPL Terminal : { 52 146 57 151 }*/
/* IO - VPL Root : { 73 129 78 134 }*/
/* IO - VPL Root : { 73 147 78 152 }*/
/* IO - VPL Root : { 73 168 78 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 305 443 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 29 71 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 50 59 55 64 }*/
/* IO - VPL Root : { 71 59 76 64 }*/
/* End Operation */

/* Begin Operation: { 95 57 111 65 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"1");
/* IO - VPL Terminal : { 90 59 95 64 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 54 122 70 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 49 148 54 153 }*/
/* IO - VPL Root : { 70 148 75 153 }*/
/* End Operation */

/* Begin Operation: { 109 108 125 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 125 115 130 120 }*/
/* End Operation */

/* Begin Operation: { 109 161 125 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 125 163 130 168 }*/
/* End Operation */

/* Begin Operation: { 154 21 162 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 67 154 72 }*/
/* IO - VPL Terminal : { 149 115 154 120 }*/
/* IO - VPL Terminal : { 149 163 154 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 305 443 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 29 71 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 50 59 55 64 }*/
/* IO - VPL Root : { 71 59 76 64 }*/
/* End Operation */

/* Begin Operation: { 95 57 111 65 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"2");
/* IO - VPL Terminal : { 90 59 95 64 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 54 122 70 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 49 148 54 153 }*/
/* IO - VPL Root : { 70 133 75 138 }*/
/* IO - VPL Root : { 70 164 75 169 }*/
/* End Operation */

/* Begin Operation: { 109 161 125 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 125 163 130 168 }*/
/* End Operation */

/* Begin Operation: { 154 21 162 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 67 154 72 }*/
/* IO - VPL Terminal : { 149 115 154 120 }*/
/* IO - VPL Terminal : { 149 163 154 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 305 443 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 29 71 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 50 59 55 64 }*/
/* IO - VPL Root : { 71 59 76 64 }*/
/* End Operation */

/* Begin Operation: { 95 57 111 65 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"3");
/* IO - VPL Terminal : { 90 59 95 64 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 54 117 70 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,3,"unpack");
/* IO - VPL Terminal : { 49 143 54 148 }*/
/* IO - VPL Root : { 70 129 75 134 }*/
/* IO - VPL Root : { 70 145 75 150 }*/
/* IO - VPL Root : { 70 163 75 168 }*/
/* End Operation */

/* Begin Operation: { 154 21 162 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 149 67 154 72 }*/
/* IO - VPL Terminal : { 149 115 154 120 }*/
/* IO - VPL Terminal : { 149 163 154 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,3,3,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 110 94 126 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"call");
/* IO - VPL Terminal : { 105 102 110 107 }*/
/* IO - VPL Terminal : { 105 112 110 117 }*/
/* IO - VPL Terminal : { 105 122 110 127 }*/
/* IO - VPL Root : { 126 112 131 117 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 158 21 166 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 153 112 158 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
	result = connect_root_to_terminal(ptrA,3,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 210 454 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 19 75 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 54 53 59 58 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 60 138 76 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"method call?");
/* IO - VPL Terminal : { 55 179 60 184 }*/
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

/* Begin Operation: { 92 91 108 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Call");
/* IO - VPL Terminal : { 87 114 92 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 126 105 142 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 142 112 147 117 }*/
/* End Operation */

/* Begin Operation: { 171 18 179 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 166 112 171 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
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
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 23 75 84 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 54 51 59 56 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 59 131 75 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,NULL);
/* IO - VPL Terminal : { 54 178 59 183 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_inject_to(tempOperation,environment,1);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 94 107 110 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 110 114 115 119 }*/
/* End Operation */

/* Begin Operation: { 139 20 147 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 134 114 139 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
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

/* Begin Operation: { 61 107 77 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
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


Nat4 VPLU_Execute_20_Callback_20_With_20_Attachments_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Execute_20_Callback_20_With_20_Attachments_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 222 398 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 53 76 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"add each attachment");
/* IO - VPL Terminal : { 55 76 60 81 }*/
/* IO - VPL Terminal : { 55 157 60 162 }*/
/* IO - VPL Root : { 76 76 81 81 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
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

/* Begin Operation: { 60 120 76 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 55 146 60 151 }*/
/* IO - VPL Root : { 76 134 81 139 }*/
/* IO - VPL Root : { 76 159 81 164 }*/
/* End Operation */

/* Begin Operation: { 106 41 122 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Add Attachment To Callback");
/* IO - VPL Terminal : { 101 82 106 87 }*/
/* IO - VPL Terminal : { 101 125 106 130 }*/
/* IO - VPL Terminal : { 101 168 106 173 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 170 22 178 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 165 116 170 121 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 105 22 121 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Execute Callback");
/* IO - VPL Terminal : { 100 76 105 81 }*/
/* IO - VPL Root : { 121 76 126 81 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 153 23 161 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 148 118 153 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__28_Unique_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_Unique_29__universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 50 173 66 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 66 179 71 184 }*/
/* End Operation */

/* Begin Operation: { 53 84 69 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 48 114 53 119 }*/
/* IO - VPL Root : { 69 114 74 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 95 95 111 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"(Unique)");
/* IO - VPL Terminal : { 90 114 95 119 }*/
/* IO - VPL Terminal : { 90 142 95 147 }*/
/* IO - VPL Root : { 111 143 116 148 }*/
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

/* Start Cases: { 184 289 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 248 290 } */
/* Begin Operation: { 21 21 29 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 29 83 34 88 }*/
/* IO - VPL Root : { 29 147 34 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 68 135 84 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 63 147 68 152 }*/
/* IO - VPL Terminal : { 63 161 68 166 }*/
/* IO - VPL Root : { 84 155 89 160 }*/
/* End Operation */

/* Begin Operation: { 110 152 126 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 105 155 110 160 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 112 39 128 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 107 60 112 65 }*/
/* IO - VPL Terminal : { 107 83 112 88 }*/
/* IO - VPL Root : { 128 72 133 77 }*/
/* End Operation */

/* Begin Operation: { 153 24 161 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 148 118 153 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
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

/* Begin Operation: { 147 19 155 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 142 113 147 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Is_20_Or_20_Is_20_Descendant_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Is_20_Or_20_Is_20_Descendant_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 257 273 } */
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
	tempOperation = operation_to_local(tempOperation,environment,"get type");
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

/* Begin Operation: { 78 93 95 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 107 137 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Start Operations: { 60 60 }{ 150 269 } */
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

/* Begin Operation: { 78 157 95 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 72 189 77 194 }*/
/* IO - VPL Root : { 96 189 101 194 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 74 137 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Check For Any Match");
/* IO - VPL Terminal : { 114 118 119 123 }*/
/* IO - VPL Terminal : { 114 164 119 169 }*/
/* IO - VPL Root : { 138 141 143 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 96 78 }{ 346 290 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 129 95 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get type");
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 162 101 167 }*/
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

/* Begin Operation: { 78 93 95 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 107 137 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Start Operations: { 60 60 }{ 150 269 } */
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

/* Begin Operation: { 120 86 137 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Terminal : { 114 112 119 117 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 120 163 137 261 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"descendants");
/* IO - VPL Terminal : { 114 210 119 215 }*/
/* IO - VPL Root : { 138 210 143 215 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-l");
/* IO - VPL Terminal : { 156 162 161 167 }*/
/* IO - VPL Terminal : { 156 186 161 191 }*/
/* IO - VPL Root : { 180 174 185 179 }*/
/* End Operation */

/* Begin Operation: { 204 72 221 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 198 84 203 89 }*/
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Root : { 222 92 227 97 }*/
/* End Operation */

/* Begin Operation: { 246 82 263 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 240 92 245 97 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 246 173 263 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 264 191 269 196 }*/
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 191 287 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 96 78 }{ 346 290 } */
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
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
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

/* Begin Operation: { 162 123 179 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"FALSE");
/* IO - VPL Terminal : { 156 141 161 146 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 204 38 212 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU__22_Replace_22__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__22_Replace_22__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 184 288 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 88 95 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"repeat keys");
/* IO - VPL Terminal : { 72 115 77 120 }*/
/* IO - VPL Terminal : { 72 144 77 149 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 267 199 }{ 191 273 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 92 95 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"replace all");
/* IO - VPL Terminal : { 72 116 77 121 }*/
/* IO - VPL Terminal : { 72 142 77 147 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);

	{
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
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 74 95 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"do individual key");
/* IO - VPL Terminal : { 72 110 77 115 }*/
/* IO - VPL Terminal : { 72 148 77 153 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 108 481 }{ 301 283 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 129 95 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Check\"");
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 162 101 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 120 130 137 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Root : { 138 150 143 155 }*/
/* IO - VPL Root : { 138 172 143 177 }*/
/* End Operation */

/* Begin Operation: { 162 74 179 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Split At\"");
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 124 161 129 }*/
/* IO - VPL Root : { 180 91 185 96 }*/
/* IO - VPL Root : { 180 110 185 115 }*/
/* IO - VPL Root : { 180 129 185 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 105 221 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 198 117 203 122 }*/
/* IO - VPL Terminal : { 198 131 203 136 }*/
/* IO - VPL Terminal : { 198 145 203 150 }*/
/* IO - VPL Root : { 222 132 227 137 }*/
/* End Operation */

/* Begin Operation: { 246 38 254 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 132 245 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,3,3,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 108 481 }{ 200 300 } */
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
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
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

/* Begin Operation: { 120 86 137 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Terminal : { 114 112 119 117 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

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

/* Begin Operation: { 78 88 95 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"repeat keys");
/* IO - VPL Terminal : { 72 115 77 120 }*/
/* IO - VPL Terminal : { 72 144 77 149 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 267 199 }{ 191 273 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 92 95 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"replace all");
/* IO - VPL Terminal : { 72 116 77 121 }*/
/* IO - VPL Terminal : { 72 142 77 147 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);

	{
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
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 74 95 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"do individual key");
/* IO - VPL Terminal : { 72 110 77 115 }*/
/* IO - VPL Terminal : { 72 148 77 153 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 108 481 }{ 301 283 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 129 95 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Check\"");
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 162 101 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 120 130 137 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Root : { 138 150 143 155 }*/
/* IO - VPL Root : { 138 172 143 177 }*/
/* End Operation */

/* Begin Operation: { 162 74 179 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Split At\"");
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 124 161 129 }*/
/* IO - VPL Root : { 180 91 185 96 }*/
/* IO - VPL Root : { 180 110 185 115 }*/
/* IO - VPL Root : { 180 129 185 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 105 221 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 198 117 203 122 }*/
/* IO - VPL Terminal : { 198 131 203 136 }*/
/* IO - VPL Terminal : { 198 145 203 150 }*/
/* IO - VPL Root : { 222 132 227 137 }*/
/* End Operation */

/* Begin Operation: { 246 38 254 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 132 245 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,3,3,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 108 481 }{ 200 300 } */
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
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
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

/* Begin Operation: { 120 86 137 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Terminal : { 114 112 119 117 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 94 137 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"changed?");
/* IO - VPL Terminal : { 114 111 119 116 }*/
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 149 119 154 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
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

/* Start Operations: { 222 141 }{ 210 268 } */
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

/* Begin Operation: { 78 70 95 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 72 82 77 87 }*/
/* IO - VPL Terminal : { 72 96 77 101 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
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
	result = connect_root_to_terminal(ptrA,2,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 222 141 }{ 210 268 } */
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

/* Begin Operation: { 78 107 95 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Replace\"");
/* IO - VPL Terminal : { 72 131 77 136 }*/
/* IO - VPL Terminal : { 72 157 77 162 }*/
/* IO - VPL Root : { 96 145 101 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,0,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Get_20_Return_20_String_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Get_20_Return_20_String_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 78 82 95 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"common keys");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
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

/* Begin Operation: { 78 120 95 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"CR");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 114 137 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 13 )");
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
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

/* Begin Operation: { 78 120 95 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"LF");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 114 137 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 10 )");
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
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

/* Begin Operation: { 78 115 95 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"CRLF");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 105 137 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 13 10 )");
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
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

/* Begin Operation: { 78 118 95 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Mac");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 114 137 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 13 )");
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
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

/* Begin Operation: { 78 116 95 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Unix");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 114 137 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 10 )");
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
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

/* Begin Operation: { 78 104 95 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Windows");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 105 137 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 13 10 )");
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 246 276 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 51 95 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 72 74 77 79 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
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

/* Start Operations: { 155 462 }{ 246 276 } */
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
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 97 137 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-ascii");
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Start Operations: { 155 462 }{ 246 276 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 96 95 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 106 137 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 114 130 119 135 }*/
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

/* Start Operations: { 60 60 }{ 246 276 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 114 95 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 13 )");
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

/* Begin Operation: { 120 89 137 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-ascii");
/* IO - VPL Terminal : { 114 130 119 135 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Normalize_20_Returns_20_In_20_String_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Normalize_20_Returns_20_In_20_String_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 186 333 }{ 320 341 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 99 50 104 }*/
/* IO - VPL Root : { 45 163 50 168 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 104 95 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Return String");
/* IO - VPL Terminal : { 72 164 77 169 }*/
/* IO - VPL Root : { 96 164 101 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 126 137 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"form keys");
/* IO - VPL Terminal : { 114 164 119 169 }*/
/* IO - VPL Root : { 138 163 143 168 }*/
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

/* Start Operations: { 60 60 }{ 251 276 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 68 95 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CRLF");
/* IO - VPL Terminal : { 72 92 77 97 }*/
/* IO - VPL Root : { 96 92 101 97 }*/
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

/* Start Operations: { 185 418 }{ 324 293 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 120 95 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"CRLF");
/* IO - VPL Root : { 96 135 101 140 }*/
/* End Operation */

/* Begin Operation: { 120 75 137 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Return String");
/* IO - VPL Terminal : { 114 135 119 140 }*/
/* IO - VPL Root : { 138 135 143 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 50 179 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 156 62 161 67 }*/
/* IO - VPL Terminal : { 156 76 161 81 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 172 179 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 156 187 161 192 }*/
/* IO - VPL Terminal : { 156 204 161 209 }*/
/* IO - VPL Root : { 180 196 185 201 }*/
/* End Operation */

/* Begin Operation: { 204 106 221 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 198 130 203 135 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 185 418 }{ 198 313 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 120 95 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
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

/* Begin Operation: { 120 81 137 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CR");
/* IO - VPL Terminal : { 114 92 119 97 }*/
/* IO - VPL Terminal : { 114 110 119 115 }*/
/* IO - VPL Root : { 138 101 143 106 }*/
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

/* Start Operations: { 60 60 }{ 325 276 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 153 95 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"CR");
/* IO - VPL Root : { 96 163 101 168 }*/
/* End Operation */

/* Begin Operation: { 120 103 137 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Return String");
/* IO - VPL Terminal : { 114 163 119 168 }*/
/* IO - VPL Root : { 138 163 143 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 99 179 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 156 111 161 116 }*/
/* IO - VPL Terminal : { 156 125 161 130 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 186 179 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 156 201 161 206 }*/
/* IO - VPL Terminal : { 156 218 161 223 }*/
/* IO - VPL Root : { 180 210 185 215 }*/
/* End Operation */

/* Begin Operation: { 204 76 221 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 122 203 127 }*/
/* IO - VPL Root : { 222 110 227 115 }*/
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 325 276 } */
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

/* Begin Operation: { 162 110 179 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"LF");
/* IO - VPL Terminal : { 156 122 161 127 }*/
/* IO - VPL Terminal : { 156 136 161 141 }*/
/* IO - VPL Root : { 180 130 185 135 }*/
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

/* Start Operations: { 60 60 }{ 325 276 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 154 95 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"LF");
/* IO - VPL Root : { 96 164 101 169 }*/
/* End Operation */

/* Begin Operation: { 120 104 137 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Return String");
/* IO - VPL Terminal : { 114 164 119 169 }*/
/* IO - VPL Root : { 138 164 143 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 99 179 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 156 111 161 116 }*/
/* IO - VPL Terminal : { 156 125 161 130 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 186 179 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 156 201 161 206 }*/
/* IO - VPL Terminal : { 156 218 161 223 }*/
/* IO - VPL Root : { 180 210 185 215 }*/
/* End Operation */

/* Begin Operation: { 204 76 221 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 122 203 127 }*/
/* IO - VPL Root : { 222 110 227 115 }*/
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 325 276 } */
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
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 75 179 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Replace\"");
/* IO - VPL Terminal : { 156 99 161 104 }*/
/* IO - VPL Terminal : { 156 125 161 130 }*/
/* IO - VPL Root : { 180 113 185 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 132 203 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Parse_20_Returns_20_Into_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Parse_20_Returns_20_Into_20_List_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 296 298 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Normalize Returns In String");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Terminal : { 72 156 77 161 }*/
/* IO - VPL Root : { 96 119 101 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 81 137 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Return String");
/* IO - VPL Terminal : { 114 141 119 146 }*/
/* IO - VPL Root : { 138 141 143 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 99 179 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Parse\"");
/* IO - VPL Terminal : { 156 119 161 124 }*/
/* IO - VPL Terminal : { 156 141 161 146 }*/
/* IO - VPL Root : { 180 130 185 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Get_20_External_20_Constant_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Get_20_External_20_Constant_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 78 71 95 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 72 94 77 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 57 137 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get External Constant");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 201 303 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 72 95 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 72 106 77 111 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 264 275 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 68 95 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 72 99 77 104 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 59 137 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-external-constant");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
/* End Operation */

/* Begin Operation: { 162 114 179 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
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
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 248 287 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 50 95 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 72 81 77 86 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 157 95 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"byte-length");
/* IO - VPL Terminal : { 72 202 77 207 }*/
/* IO - VPL Root : { 96 202 101 207 }*/
/* End Operation */

/* Begin Operation: { 120 192 137 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"4");
/* IO - VPL Terminal : { 114 202 119 207 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 69 179 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"string-to-integer");
/* IO - VPL Terminal : { 156 130 161 135 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 122 264 } */
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


Nat4 VPLU__28_bit_2D_or_29__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU__28_bit_2D_or_29__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 248 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 98 95 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 190 137 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 114 200 119 205 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 120 95 137 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Root : { 138 117 143 122 }*/
/* IO - VPL Root : { 138 141 143 146 }*/
/* End Operation */

/* Begin Operation: { 162 102 179 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"bit-or");
/* IO - VPL Terminal : { 156 117 161 122 }*/
/* IO - VPL Terminal : { 156 141 161 146 }*/
/* IO - VPL Root : { 180 130 185 135 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 120 95 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
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



	return kNOERROR;
}





	Nat4 tempAttribute_Key_20_Sort_20_Helper_2F_Key[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};


Nat4 VPLC_Key_20_Sort_20_Helper_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Key_20_Sort_20_Helper_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Key",tempClass,tempAttribute_Key_20_Sort_20_Helper_2F_Key,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Key_20_Sort_20_Helper_2F_Sort_20_Key_20_Helper_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Key_20_Sort_20_Helper_2F_Sort_20_Key_20_Helper_20_List_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 304 295 } */
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
	tempOperation = operation_to_universal(tempOperation,environment,"Default FALSE");
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 162 101 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 111 137 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Key");
/* IO - VPL Root : { 138 122 143 127 }*/
/* End Operation */

/* Begin Operation: { 162 88 179 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"sort");
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 110 161 115 }*/
/* IO - VPL Terminal : { 156 122 161 127 }*/
/* IO - VPL Root : { 180 110 185 115 }*/
/* End Operation */

/* Begin Operation: { 204 94 221 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Value");
/* IO - VPL Terminal : { 198 121 203 126 }*/
/* IO - VPL Root : { 222 111 227 116 }*/
/* IO - VPL Root : { 222 130 227 135 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Key_20_Sort_20_Helper_2F_Sort_20_Key_2D_Value_20_List_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Key_20_Sort_20_Helper_2F_Sort_20_Key_2D_Value_20_List_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 249 328 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 44 95 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"create instances");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 98 101 103 }*/
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

/* Start Operations: { 60 60 }{ 210 291 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 166 95 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 72 198 77 203 }*/
/* IO - VPL Root : { 96 198 101 203 }*/
/* End Operation */

/* Begin Operation: { 78 36 95 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Key Sort Helper");
/* IO - VPL Terminal : { 72 91 77 96 }*/
/* IO - VPL Root : { 96 91 101 96 }*/
/* End Operation */

/* Begin Operation: { 120 97 137 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Key");
/* IO - VPL Terminal : { 114 110 119 115 }*/
/* IO - VPL Terminal : { 114 125 119 130 }*/
/* IO - VPL Root : { 138 118 143 123 }*/
/* End Operation */

/* Begin Operation: { 120 172 137 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Value");
/* IO - VPL Terminal : { 114 189 119 194 }*/
/* IO - VPL Terminal : { 114 208 119 213 }*/
/* IO - VPL Root : { 138 199 143 204 }*/
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
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 72 137 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Sort Key Helper List");
/* IO - VPL Terminal : { 114 120 119 125 }*/
/* IO - VPL Terminal : { 114 170 119 175 }*/
/* IO - VPL Root : { 138 145 143 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 51 170 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 145 161 150 }*/
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



	return kNOERROR;
}


Nat4 VPLU_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 283 264 }{ 266 297 } */
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

/* Begin Operation: { 78 70 95 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"default /Get Name");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
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

/* Begin Operation: { 78 128 95 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"/Get Name\"");
/* IO - VPL Root : { 96 164 101 169 }*/
/* End Operation */

/* Begin Operation: { 120 98 137 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 164 119 169 }*/
/* IO - VPL Root : { 138 147 143 152 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 51 137 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"create key list");
/* IO - VPL Terminal : { 114 82 119 87 }*/
/* IO - VPL Terminal : { 114 115 119 120 }*/
/* IO - VPL Root : { 138 99 143 104 }*/
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

/* Start Operations: { 60 60 }{ 265 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 82 95 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,NULL);
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Terminal : { 72 116 77 121 }*/
/* IO - VPL Root : { 96 108 101 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_inject_to(tempOperation,environment,2);
/* End Operation */

/* Begin Operation: { 120 79 137 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Key Sort Helper");
/* IO - VPL Terminal : { 114 134 119 139 }*/
/* IO - VPL Root : { 138 134 143 139 }*/
/* End Operation */

/* Begin Operation: { 162 80 179 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Key");
/* IO - VPL Terminal : { 156 93 161 98 }*/
/* IO - VPL Terminal : { 156 108 161 113 }*/
/* IO - VPL Root : { 180 101 185 106 }*/
/* End Operation */

/* Begin Operation: { 162 159 179 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Value");
/* IO - VPL Terminal : { 156 176 161 181 }*/
/* IO - VPL Terminal : { 156 195 161 200 }*/
/* IO - VPL Root : { 180 186 185 191 }*/
/* End Operation */

/* Begin Operation: { 204 40 212 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 134 203 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 20 179 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Key Sort Helper/Sort Key Helper List");
/* IO - VPL Terminal : { 156 95 161 100 }*/
/* IO - VPL Terminal : { 156 172 161 177 }*/
/* IO - VPL Root : { 180 134 185 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 40 212 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 134 203 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */






Nat4	loadClasses_Common_20_Universals(V_Environment environment);
Nat4	loadClasses_Common_20_Universals(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Key Sort Helper",environment);
	if(result == NULL) return kERROR;
	VPLC_Key_20_Sort_20_Helper_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Common_20_Universals(V_Environment environment);
Nat4	loadUniversals_Common_20_Universals(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Make Clone",environment);
	if(result == NULL) return kERROR;
	VPLU_Make_20_Clone_universal_load(result,environment);

	result = method_new("Make Class",environment);
	if(result == NULL) return kERROR;
	VPLU_Make_20_Class_universal_load(result,environment);

	result = method_new("Make Count",environment);
	if(result == NULL) return kERROR;
	VPLU_Make_20_Count_universal_load(result,environment);

	result = method_new("To CString",environment);
	if(result == NULL) return kERROR;
	VPLU_To_20_CString_universal_load(result,environment);

	result = method_new("To PString",environment);
	if(result == NULL) return kERROR;
	VPLU_To_20_PString_universal_load(result,environment);

	result = method_new("Create Nib Window",environment);
	if(result == NULL) return kERROR;
	VPLU_Create_20_Nib_20_Window_universal_load(result,environment);

	result = method_new("Open Nib Window",environment);
	if(result == NULL) return kERROR;
	VPLU_Open_20_Nib_20_Window_universal_load(result,environment);

	result = method_new("Rect Size",environment);
	if(result == NULL) return kERROR;
	VPLU_Rect_20_Size_universal_load(result,environment);

	result = method_new("Boolean To Integer",environment);
	if(result == NULL) return kERROR;
	VPLU_Boolean_20_To_20_Integer_universal_load(result,environment);

	result = method_new("Integer To Boolean",environment);
	if(result == NULL) return kERROR;
	VPLU_Integer_20_To_20_Boolean_universal_load(result,environment);

	result = method_new("Coerce Boolean",environment);
	if(result == NULL) return kERROR;
	VPLU_Coerce_20_Boolean_universal_load(result,environment);

	result = method_new("Coerce Integer",environment);
	if(result == NULL) return kERROR;
	VPLU_Coerce_20_Integer_universal_load(result,environment);

	result = method_new("Coerce Real",environment);
	if(result == NULL) return kERROR;
	VPLU_Coerce_20_Real_universal_load(result,environment);

	result = method_new("Coerce Number",environment);
	if(result == NULL) return kERROR;
	VPLU_Coerce_20_Number_universal_load(result,environment);

	result = method_new("Replace NULL",environment);
	if(result == NULL) return kERROR;
	VPLU_Replace_20_NULL_universal_load(result,environment);

	result = method_new("Replace NULL No Copy",environment);
	if(result == NULL) return kERROR;
	VPLU_Replace_20_NULL_20_No_20_Copy_universal_load(result,environment);

	result = method_new("\"Check\"",environment);
	if(result == NULL) return kERROR;
	VPLU__22_Check_22__universal_load(result,environment);

	result = method_new("\"Prefix\"",environment);
	if(result == NULL) return kERROR;
	VPLU__22_Prefix_22__universal_load(result,environment);

	result = method_new("\"Split At\"",environment);
	if(result == NULL) return kERROR;
	VPLU__22_Split_20_At_22__universal_load(result,environment);

	result = method_new("\"Suffix\"",environment);
	if(result == NULL) return kERROR;
	VPLU__22_Suffix_22__universal_load(result,environment);

	result = method_new("\"Trim\"",environment);
	if(result == NULL) return kERROR;
	VPLU__22_Trim_22__universal_load(result,environment);

	result = method_new("\"LTrim\"",environment);
	if(result == NULL) return kERROR;
	VPLU__22_LTrim_22__universal_load(result,environment);

	result = method_new("\"RTrim\"",environment);
	if(result == NULL) return kERROR;
	VPLU__22_RTrim_22__universal_load(result,environment);

	result = method_new("\"Parse\"",environment);
	if(result == NULL) return kERROR;
	VPLU__22_Parse_22__universal_load(result,environment);

	result = method_new("(\"All In\")",environment);
	if(result == NULL) return kERROR;
	VPLU__2822_All_20_In_2229__universal_load(result,environment);

	result = method_new("(\"ALL IN\")",environment);
	if(result == NULL) return kERROR;
	VPLU__2822_ALL_20_IN_2229__universal_load(result,environment);

	result = method_new("(Average)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Average_29__universal_load(result,environment);

	result = method_new("(Check)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Check_29__universal_load(result,environment);

	result = method_new("(Check Bounds)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Check_20_Bounds_29__universal_load(result,environment);

	result = method_new("(Ends)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Ends_29__universal_load(result,environment);

	result = method_new("(Flatten)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Flatten_29__universal_load(result,environment);

	result = method_new("(From String)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_From_20_String_29__universal_load(result,environment);

	result = method_new("(One)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_One_29__universal_load(result,environment);

	result = method_new("(Safe Get)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Safe_20_Get_29__universal_load(result,environment);

	result = method_new("(Safe Set!)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Safe_20_Set_2129__universal_load(result,environment);

	result = method_new("(Safe Split)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Safe_20_Split_29__universal_load(result,environment);

	result = method_new("(Sum)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Sum_29__universal_load(result,environment);

	result = method_new("(To Block)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_To_20_Block_29__universal_load(result,environment);

	result = method_new("(To String)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_To_20_String_29__universal_load(result,environment);

	result = method_new("(Without)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Without_29__universal_load(result,environment);

	result = method_new("(Detach Item)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Detach_20_Item_29__universal_load(result,environment);

	result = method_new("Default Zero",environment);
	if(result == NULL) return kERROR;
	VPLU_Default_20_Zero_universal_load(result,environment);

	result = method_new("Default TRUE",environment);
	if(result == NULL) return kERROR;
	VPLU_Default_20_TRUE_universal_load(result,environment);

	result = method_new("Default FALSE",environment);
	if(result == NULL) return kERROR;
	VPLU_Default_20_FALSE_universal_load(result,environment);

	result = method_new("Default NULL",environment);
	if(result == NULL) return kERROR;
	VPLU_Default_20_NULL_universal_load(result,environment);

	result = method_new("Default List",environment);
	if(result == NULL) return kERROR;
	VPLU_Default_20_List_universal_load(result,environment);

	result = method_new("Is MacOS?",environment);
	if(result == NULL) return kERROR;
	VPLU_Is_20_MacOS_3F__universal_load(result,environment);

	result = method_new("Beep",environment);
	if(result == NULL) return kERROR;
	VPLU_Beep_universal_load(result,environment);

	result = method_new("Speak",environment);
	if(result == NULL) return kERROR;
	VPLU_Speak_universal_load(result,environment);

	result = method_new("Simple Speak",environment);
	if(result == NULL) return kERROR;
	VPLU_Simple_20_Speak_universal_load(result,environment);

	result = method_new("Between",environment);
	if(result == NULL) return kERROR;
	VPLU_Between_universal_load(result,environment);

	result = method_new("Between Bounds",environment);
	if(result == NULL) return kERROR;
	VPLU_Between_20_Bounds_universal_load(result,environment);

	result = method_new("Between Wrap",environment);
	if(result == NULL) return kERROR;
	VPLU_Between_20_Wrap_universal_load(result,environment);

	result = method_new("Random Between",environment);
	if(result == NULL) return kERROR;
	VPLU_Random_20_Between_universal_load(result,environment);

	result = method_new("Flip Coin",environment);
	if(result == NULL) return kERROR;
	VPLU_Flip_20_Coin_universal_load(result,environment);

	result = method_new("Roll Dice",environment);
	if(result == NULL) return kERROR;
	VPLU_Roll_20_Dice_universal_load(result,environment);

	result = method_new("Rad To Deg",environment);
	if(result == NULL) return kERROR;
	VPLU_Rad_20_To_20_Deg_universal_load(result,environment);

	result = method_new("Deg To Rad",environment);
	if(result == NULL) return kERROR;
	VPLU_Deg_20_To_20_Rad_universal_load(result,environment);

	result = method_new("test-bit?",environment);
	if(result == NULL) return kERROR;
	VPLU_test_2D_bit_3F__universal_load(result,environment);

	result = method_new("bit-without",environment);
	if(result == NULL) return kERROR;
	VPLU_bit_2D_without_universal_load(result,environment);

	result = method_new("Half",environment);
	if(result == NULL) return kERROR;
	VPLU_Half_universal_load(result,environment);

	result = method_new("Int",environment);
	if(result == NULL) return kERROR;
	VPLU_Int_universal_load(result,environment);

	result = method_new("Odd?",environment);
	if(result == NULL) return kERROR;
	VPLU_Odd_3F__universal_load(result,environment);

	result = method_new("x*pi",environment);
	if(result == NULL) return kERROR;
	VPLU_x_2A_pi_universal_load(result,environment);

	result = method_new("Unique Name From List",environment);
	if(result == NULL) return kERROR;
	VPLU_Unique_20_Name_20_From_20_List_universal_load(result,environment);

	result = method_new("(Get Setting)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Get_20_Setting_29__universal_load(result,environment);

	result = method_new("(Set Setting)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Set_20_Setting_29__universal_load(result,environment);

	result = method_new("(Remove Setting)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Remove_20_Setting_29__universal_load(result,environment);

	result = method_new("New Callback",environment);
	if(result == NULL) return kERROR;
	VPLU_New_20_Callback_universal_load(result,environment);

	result = method_new("Add Attachment To Callback",environment);
	if(result == NULL) return kERROR;
	VPLU_Add_20_Attachment_20_To_20_Callback_universal_load(result,environment);

	result = method_new("Execute Callback",environment);
	if(result == NULL) return kERROR;
	VPLU_Execute_20_Callback_universal_load(result,environment);

	result = method_new("Execute Callback With Attachments",environment);
	if(result == NULL) return kERROR;
	VPLU_Execute_20_Callback_20_With_20_Attachments_universal_load(result,environment);

	result = method_new("(Unique)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_Unique_29__universal_load(result,environment);

	result = method_new("Is Or Is Descendant?",environment);
	if(result == NULL) return kERROR;
	VPLU_Is_20_Or_20_Is_20_Descendant_3F__universal_load(result,environment);

	result = method_new("\"Replace\"",environment);
	if(result == NULL) return kERROR;
	VPLU__22_Replace_22__universal_load(result,environment);

	result = method_new("Get Return String",environment);
	if(result == NULL) return kERROR;
	VPLU_Get_20_Return_20_String_universal_load(result,environment);

	result = method_new("Normalize Returns In String",environment);
	if(result == NULL) return kERROR;
	VPLU_Normalize_20_Returns_20_In_20_String_universal_load(result,environment);

	result = method_new("Parse Returns Into List",environment);
	if(result == NULL) return kERROR;
	VPLU_Parse_20_Returns_20_Into_20_List_universal_load(result,environment);

	result = method_new("Get External Constant",environment);
	if(result == NULL) return kERROR;
	VPLU_Get_20_External_20_Constant_universal_load(result,environment);

	result = method_new("(bit-or)",environment);
	if(result == NULL) return kERROR;
	VPLU__28_bit_2D_or_29__universal_load(result,environment);

	result = method_new("Key Sort Helper/Sort Key Helper List",environment);
	if(result == NULL) return kERROR;
	VPLU_Key_20_Sort_20_Helper_2F_Sort_20_Key_20_Helper_20_List_universal_load(result,environment);

	result = method_new("Key Sort Helper/Sort Key-Value List",environment);
	if(result == NULL) return kERROR;
	VPLU_Key_20_Sort_20_Helper_2F_Sort_20_Key_2D_Value_20_List_universal_load(result,environment);

	result = method_new("Key Sort Helper/Sort Instances With Key Method",environment);
	if(result == NULL) return kERROR;
	VPLU_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method_universal_load(result,environment);

	return kNOERROR;

}



Nat4	loadPersistents_Common_20_Universals(V_Environment environment);
Nat4	loadPersistents_Common_20_Universals(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Common_20_Universals(V_Environment environment);
Nat4	load_Common_20_Universals(V_Environment environment)
{

	loadClasses_Common_20_Universals(environment);
	loadUniversals_Common_20_Universals(environment);
	loadPersistents_Common_20_Universals(environment);
	return kNOERROR;

}

