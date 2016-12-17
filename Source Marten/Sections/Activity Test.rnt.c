/* A VPL Section File */
/*

Activity Test.rnt.c
Copyright: 2002 Scott B. Anderson

*/

Nat4 VPLU_TEST_20_Activity_20_Simple_20_Sync_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_TEST_20_Activity_20_Simple_20_Sync_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 222 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 61 72 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Activity Test Data");
/* IO - VPL Terminal : { 51 121 56 126 }*/
/* IO - VPL Root : { 72 121 77 126 }*/
/* End Operation */

/* Begin Operation: { 92 128 108 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 108 143 113 148 }*/
/* End Operation */

/* Begin Operation: { 129 111 145 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Do");
/* IO - VPL Terminal : { 124 121 129 126 }*/
/* IO - VPL Terminal : { 124 143 129 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 171 19 179 211 } */
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 246 9 }{ 269 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 12 69 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Activity Abstract");
/* IO - VPL Terminal : { 48 70 53 75 }*/
/* IO - VPL Root : { 69 70 74 75 }*/
/* End Operation */

/* Begin Operation: { 131 6 147 66 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin");
/* IO - VPL Terminal : { 126 26 131 31 }*/
/* IO - VPL Terminal : { 126 48 131 53 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 172 68 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"12000");
/* IO - VPL Root : { 68 188 73 193 }*/
/* End Operation */

/* Begin Operation: { 87 165 103 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 103 168 108 173 }*/
/* End Operation */

/* Begin Operation: { 132 132 148 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"count to");
/* IO - VPL Terminal : { 127 148 132 153 }*/
/* IO - VPL Terminal : { 127 168 132 173 }*/
/* IO - VPL Terminal : { 127 188 132 193 }*/
/* IO - VPL Root : { 148 167 153 172 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 359 43 }{ 466 298 } */
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

/* Begin Operation: { 62 97 78 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 57 114 62 119 }*/
/* IO - VPL Root : { 78 114 83 119 }*/
/* End Operation */

/* Begin Operation: { 111 138 127 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 106 149 111 154 }*/
/* IO - VPL Terminal : { 106 162 111 167 }*/
/* IO - VPL Root : { 127 156 132 161 }*/
/* End Operation */

/* Begin Operation: { 153 28 169 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Progress Percent");
/* IO - VPL Terminal : { 148 66 153 71 }*/
/* IO - VPL Terminal : { 148 130 153 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 174 78 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 57 182 62 187 }*/
/* IO - VPL Terminal : { 57 192 62 197 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 194 93 210 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Counting number: ");
/* IO - VPL Root : { 210 141 215 146 }*/
/* End Operation */

/* Begin Operation: { 196 201 212 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 191 236 196 241 }*/
/* IO - VPL Root : { 212 236 217 241 }*/
/* End Operation */

/* Begin Operation: { 239 125 255 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 234 141 239 146 }*/
/* IO - VPL Terminal : { 234 159 239 164 }*/
/* IO - VPL Root : { 255 151 260 156 }*/
/* End Operation */

/* Begin Operation: { 272 32 288 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 267 66 272 71 }*/
/* IO - VPL Terminal : { 267 133 272 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 337 20 353 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Synchronize");
/* IO - VPL Terminal : { 332 66 337 71 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 337 140 353 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Dispatch Event");
/* End Operation */

/* Begin Operation: { 387 20 395 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 382 114 387 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,1,1,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 200 41 216 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Finish");
/* IO - VPL Terminal : { 195 70 200 75 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 233 20 241 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_TEST_20_Activity_20_Simple_20_ASync_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_TEST_20_Activity_20_Simple_20_ASync_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 108 930 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 47 53 63 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Activity Test Data");
/* IO - VPL Terminal : { 42 113 47 118 }*/
/* IO - VPL Root : { 63 113 68 118 }*/
/* End Operation */

/* Begin Operation: { 86 117 102 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 102 129 107 134 }*/
/* End Operation */

/* Begin Operation: { 131 100 147 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Do");
/* IO - VPL Terminal : { 126 113 131 118 }*/
/* IO - VPL Terminal : { 126 129 131 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 19 170 211 } */
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


Nat4 VPLU_TEST_20_Activity_20_Staged_20_Sync_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_TEST_20_Activity_20_Staged_20_Sync_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 222 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 55 72 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Activity Staged Test");
/* IO - VPL Terminal : { 51 121 56 126 }*/
/* IO - VPL Root : { 72 121 77 126 }*/
/* End Operation */

/* Begin Operation: { 92 128 108 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 108 143 113 148 }*/
/* End Operation */

/* Begin Operation: { 129 111 145 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Do");
/* IO - VPL Terminal : { 124 121 129 126 }*/
/* IO - VPL Terminal : { 124 143 129 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 171 19 179 211 } */
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 246 9 }{ 269 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 12 69 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Activity Abstract");
/* IO - VPL Terminal : { 48 70 53 75 }*/
/* IO - VPL Root : { 69 70 74 75 }*/
/* End Operation */

/* Begin Operation: { 131 6 147 66 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin");
/* IO - VPL Terminal : { 126 26 131 31 }*/
/* IO - VPL Terminal : { 126 48 131 53 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 172 68 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"12000");
/* IO - VPL Root : { 68 188 73 193 }*/
/* End Operation */

/* Begin Operation: { 87 165 103 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 103 168 108 173 }*/
/* End Operation */

/* Begin Operation: { 132 132 148 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"count to");
/* IO - VPL Terminal : { 127 148 132 153 }*/
/* IO - VPL Terminal : { 127 168 132 173 }*/
/* IO - VPL Terminal : { 127 188 132 193 }*/
/* IO - VPL Root : { 148 167 153 172 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 359 43 }{ 466 298 } */
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

/* Begin Operation: { 62 97 78 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 57 114 62 119 }*/
/* IO - VPL Root : { 78 114 83 119 }*/
/* End Operation */

/* Begin Operation: { 111 138 127 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 106 149 111 154 }*/
/* IO - VPL Terminal : { 106 162 111 167 }*/
/* IO - VPL Root : { 127 156 132 161 }*/
/* End Operation */

/* Begin Operation: { 153 28 169 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Progress Percent");
/* IO - VPL Terminal : { 148 66 153 71 }*/
/* IO - VPL Terminal : { 148 130 153 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 174 78 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 57 182 62 187 }*/
/* IO - VPL Terminal : { 57 192 62 197 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 194 93 210 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Counting number: ");
/* IO - VPL Root : { 210 141 215 146 }*/
/* End Operation */

/* Begin Operation: { 196 201 212 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 191 236 196 241 }*/
/* IO - VPL Root : { 212 236 217 241 }*/
/* End Operation */

/* Begin Operation: { 239 125 255 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 234 141 239 146 }*/
/* IO - VPL Terminal : { 234 159 239 164 }*/
/* IO - VPL Root : { 255 151 260 156 }*/
/* End Operation */

/* Begin Operation: { 272 32 288 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 267 66 272 71 }*/
/* IO - VPL Terminal : { 267 133 272 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 337 20 353 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Synchronize");
/* IO - VPL Terminal : { 332 66 337 71 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 337 140 353 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Dispatch Event");
/* End Operation */

/* Begin Operation: { 387 20 395 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 382 114 387 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,1,1,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 200 41 216 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Finish");
/* IO - VPL Terminal : { 195 70 200 75 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 233 20 241 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_TEST_20_Activity_20_Staged_20_ASync_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_TEST_20_Activity_20_Staged_20_ASync_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 108 930 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 47 47 63 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Activity Staged Test");
/* IO - VPL Terminal : { 42 113 47 118 }*/
/* IO - VPL Root : { 63 113 68 118 }*/
/* End Operation */

/* Begin Operation: { 86 117 102 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 102 129 107 134 }*/
/* End Operation */

/* Begin Operation: { 131 100 147 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Do");
/* IO - VPL Terminal : { 126 113 131 118 }*/
/* IO - VPL Terminal : { 126 129 131 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 19 170 211 } */
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





	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X41630006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X16000000, 0X54657374, 0X20436F75, 0X6E74696E,
0X67204163, 0X74697669, 0X74790000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Completed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Completion_20_Callback[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Attachments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Current_20_Count[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X02D10004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Max_20_Count[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X02340004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002710
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Name[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X41630006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X18000000, 0X53746167, 0X65642043, 0X6F756E74,
0X696E6720, 0X41637469, 0X76697479, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Completed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Completion_20_Callback[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Attachments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Stages[] = {
0000000000, 0X0000024C, 0X00000068, 0X00000015, 0X00000014, 0X00000294, 0X000000A8, 0X00000260,
0X000000A4, 0X0000022C, 0X000000A0, 0X000001F8, 0X0000009C, 0X000001C4, 0X00000098, 0X00000190,
0X00000094, 0X0000015C, 0X00000090, 0X00000128, 0X0000008C, 0X000000F4, 0X00000088, 0X000000C0,
0X00000084, 0X0000007C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000084,
0X0000000A, 0X000000AC, 0X000000E0, 0X00000114, 0X00000148, 0X0000017C, 0X000001B0, 0X000001E4,
0X00000218, 0X0000024C, 0X00000280, 0X53740006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X17000000, 0X41637469, 0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500,
0X53740006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000FC, 0X17000000, 0X41637469,
0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500, 0X53740006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000130, 0X17000000, 0X41637469, 0X76697479, 0X20436F75, 0X6E74696E,
0X67205374, 0X61676500, 0X53740006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X17000000, 0X41637469, 0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500, 0X53740006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000198, 0X17000000, 0X41637469, 0X76697479,
0X20436F75, 0X6E74696E, 0X67205374, 0X61676500, 0X53740006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000001CC, 0X17000000, 0X41637469, 0X76697479, 0X20436F75, 0X6E74696E, 0X67205374,
0X61676500, 0X53740006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000200, 0X17000000,
0X41637469, 0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500, 0X53740006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000234, 0X17000000, 0X41637469, 0X76697479, 0X20436F75,
0X6E74696E, 0X67205374, 0X61676500, 0X53740006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000268, 0X17000000, 0X41637469, 0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500,
0X53740006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000029C, 0X17000000, 0X41637469,
0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Completed_20_Stages[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Counting_20_Stage_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0E000000, 0X436F756E, 0X74696E67, 0X20537461,
0X67650000
	};
	Nat4 tempAttribute_Activity_20_Counting_20_Stage_2F_Current_20_Count[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X02D10004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Counting_20_Stage_2F_Max_20_Count[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X000003E8
	};


Nat4 VPLC_Activity_20_Test_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Activity_20_Test_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 173 397 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Completed?",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Completed_3F_,environment);
	tempAttribute = attribute_add("Completion Callback",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Completion_20_Callback,environment);
	tempAttribute = attribute_add("Attachments",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Attachments,environment);
	tempAttribute = attribute_add("Progress",tempClass,NULL,environment);
	tempAttribute = attribute_add("Current Count",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Current_20_Count,environment);
	tempAttribute = attribute_add("Max Count",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Max_20_Count,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Activity Abstract");
	return kNOERROR;
}

/* Start Universals: { 544 960 }{ 200 300 } */
Nat4 VPLU_Activity_20_Test_20_Data_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Activity_20_Test_20_Data_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 675 446 }{ 270 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 24 82 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Count");
/* IO - VPL Terminal : { 61 71 66 76 }*/
/* IO - VPL Root : { 82 54 87 59 }*/
/* IO - VPL Root : { 82 86 87 91 }*/
/* End Operation */

/* Begin Operation: { 61 156 77 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Max Count");
/* IO - VPL Terminal : { 56 194 61 199 }*/
/* IO - VPL Root : { 77 180 82 185 }*/
/* IO - VPL Root : { 77 206 82 211 }*/
/* End Operation */

/* Begin Operation: { 133 98 149 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"count to");
/* IO - VPL Terminal : { 128 114 133 119 }*/
/* IO - VPL Terminal : { 128 133 133 138 }*/
/* IO - VPL Terminal : { 128 154 133 159 }*/
/* IO - VPL Root : { 149 119 154 124 }*/
/* IO - VPL Root : { 149 145 154 150 }*/
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

/* Start Operations: { 568 689 }{ 466 298 } */
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

/* Begin Operation: { 62 97 78 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 57 114 62 119 }*/
/* IO - VPL Root : { 78 114 83 119 }*/
/* End Operation */

/* Begin Operation: { 111 138 127 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 106 149 111 154 }*/
/* IO - VPL Terminal : { 106 162 111 167 }*/
/* IO - VPL Root : { 127 156 132 161 }*/
/* End Operation */

/* Begin Operation: { 153 28 169 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Progress Percent");
/* IO - VPL Terminal : { 148 66 153 71 }*/
/* IO - VPL Terminal : { 148 130 153 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 174 78 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"=");
/* IO - VPL Terminal : { 57 182 62 187 }*/
/* IO - VPL Terminal : { 57 192 62 197 }*/
/* IO - VPL Root : { 78 188 83 193 }*/
/* End Operation */

/* Begin Operation: { 194 75 210 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Counting number: ");
/* IO - VPL Root : { 210 123 215 128 }*/
/* End Operation */

/* Begin Operation: { 196 201 212 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 191 236 196 241 }*/
/* IO - VPL Root : { 212 236 217 241 }*/
/* End Operation */

/* Begin Operation: { 239 107 255 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 234 123 239 128 }*/
/* IO - VPL Terminal : { 234 141 239 146 }*/
/* IO - VPL Root : { 255 133 260 138 }*/
/* End Operation */

/* Begin Operation: { 272 32 288 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 267 66 272 71 }*/
/* IO - VPL Terminal : { 267 133 272 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 337 20 353 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Synchronize");
/* IO - VPL Terminal : { 332 66 337 71 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 387 62 395 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 382 114 387 119 }*/
/* IO - VPL Terminal : { 382 188 387 193 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,1,1,10);
	result = connect_root_to_terminal(ptrA,1,4,2,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 180 23 196 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Current Count");
/* IO - VPL Terminal : { 175 54 180 59 }*/
/* IO - VPL Terminal : { 175 87 180 92 }*/
/* IO - VPL Root : { 196 71 201 76 }*/
/* End Operation */

/* Begin Operation: { 220 23 228 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 215 117 220 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,2,2,3,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Activity_20_Test_20_Data_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Activity_20_Test_20_Data_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 180 538 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 80 33 85 }*/
/* IO - VPL Root : { 28 155 33 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 28 83 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 62 53 67 58 }*/
/* IO - VPL Terminal : { 62 91 67 96 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 67 144 83 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Name");
/* IO - VPL Terminal : { 62 162 67 167 }*/
/* IO - VPL Terminal : { 62 192 67 197 }*/
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

/* Start Operations: { 138 286 }{ 314 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 100 77 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Asynchronous counting");
/* IO - VPL Root : { 77 161 82 166 }*/
/* End Operation */

/* Begin Operation: { 89 119 105 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Synchronous counting");
/* IO - VPL Root : { 105 176 110 181 }*/
/* End Operation */

/* Begin Operation: { 134 133 150 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"choose");
/* IO - VPL Terminal : { 129 146 134 151 }*/
/* IO - VPL Terminal : { 129 161 134 166 }*/
/* IO - VPL Terminal : { 129 176 134 181 }*/
/* IO - VPL Root : { 150 161 155 166 }*/
/* End Operation */

/* Begin Operation: { 179 43 195 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Activity Name");
/* IO - VPL Terminal : { 174 82 179 87 }*/
/* IO - VPL Terminal : { 174 141 179 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 211 20 219 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 119 25 127 217 } */
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


/* Stop Universals */



Nat4 VPLC_Activity_20_Staged_20_Test_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Activity_20_Staged_20_Test_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 184 397 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Name,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Completed?",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Completed_3F_,environment);
	tempAttribute = attribute_add("Completion Callback",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Completion_20_Callback,environment);
	tempAttribute = attribute_add("Attachments",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Attachments,environment);
	tempAttribute = attribute_add("Progress",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stages",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Stages,environment);
	tempAttribute = attribute_add("Current Stage",tempClass,NULL,environment);
	tempAttribute = attribute_add("Completed Stages",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Completed_20_Stages,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Activity Staged");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_Activity_20_Counting_20_Stage_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Activity_20_Counting_20_Stage_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Activity_20_Counting_20_Stage_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Current Count",tempClass,tempAttribute_Activity_20_Counting_20_Stage_2F_Current_20_Count,environment);
	tempAttribute = attribute_add("Max Count",tempClass,tempAttribute_Activity_20_Counting_20_Stage_2F_Max_20_Count,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 343 652 }{ 200 300 } */
Nat4 VPLU_Activity_20_Counting_20_Stage_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Activity_20_Counting_20_Stage_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 270 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 71 33 76 }*/
/* IO - VPL Root : { 28 174 33 179 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 24 82 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Count");
/* IO - VPL Terminal : { 61 71 66 76 }*/
/* IO - VPL Root : { 82 54 87 59 }*/
/* IO - VPL Root : { 82 86 87 91 }*/
/* End Operation */

/* Begin Operation: { 61 156 77 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Max Count");
/* IO - VPL Terminal : { 56 194 61 199 }*/
/* IO - VPL Root : { 77 180 82 185 }*/
/* IO - VPL Root : { 77 206 82 211 }*/
/* End Operation */

/* Begin Operation: { 133 98 149 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"count to");
/* IO - VPL Terminal : { 128 114 133 119 }*/
/* IO - VPL Terminal : { 128 133 133 138 }*/
/* IO - VPL Terminal : { 128 154 133 159 }*/
/* IO - VPL Root : { 149 119 154 124 }*/
/* IO - VPL Root : { 149 145 154 150 }*/
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

/* Start Operations: { 568 689 }{ 466 298 } */
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

/* Begin Operation: { 62 97 78 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 57 114 62 119 }*/
/* IO - VPL Root : { 78 114 83 119 }*/
/* End Operation */

/* Begin Operation: { 111 138 127 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 106 149 111 154 }*/
/* IO - VPL Terminal : { 106 162 111 167 }*/
/* IO - VPL Root : { 127 156 132 161 }*/
/* End Operation */

/* Begin Operation: { 153 28 169 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Progress Percent");
/* IO - VPL Terminal : { 148 66 153 71 }*/
/* IO - VPL Terminal : { 148 130 153 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 174 78 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"=");
/* IO - VPL Terminal : { 57 182 62 187 }*/
/* IO - VPL Terminal : { 57 192 62 197 }*/
/* IO - VPL Root : { 78 188 83 193 }*/
/* End Operation */

/* Begin Operation: { 194 75 210 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Counting number: ");
/* IO - VPL Root : { 210 123 215 128 }*/
/* End Operation */

/* Begin Operation: { 196 201 212 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 191 236 196 241 }*/
/* IO - VPL Root : { 212 236 217 241 }*/
/* End Operation */

/* Begin Operation: { 239 107 255 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 234 123 239 128 }*/
/* IO - VPL Terminal : { 234 141 239 146 }*/
/* IO - VPL Root : { 255 133 260 138 }*/
/* End Operation */

/* Begin Operation: { 272 32 288 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 267 66 272 71 }*/
/* IO - VPL Terminal : { 267 133 272 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 337 20 353 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Synchronize");
/* IO - VPL Terminal : { 332 66 337 71 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 387 62 395 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 382 114 387 119 }*/
/* IO - VPL Terminal : { 382 188 387 193 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,1,1,10);
	result = connect_root_to_terminal(ptrA,1,4,2,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 180 23 196 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Current Count");
/* IO - VPL Terminal : { 175 54 180 59 }*/
/* IO - VPL Terminal : { 175 87 180 92 }*/
/* IO - VPL Root : { 196 71 201 76 }*/
/* End Operation */

/* Begin Operation: { 220 23 228 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 215 117 220 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,2,2,3,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Activity_20_Counting_20_Stage_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Activity_20_Counting_20_Stage_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 180 538 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 80 33 85 }*/
/* IO - VPL Root : { 28 155 33 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 28 83 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 62 53 67 58 }*/
/* IO - VPL Terminal : { 62 91 67 96 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 67 144 83 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Name");
/* IO - VPL Terminal : { 62 162 67 167 }*/
/* IO - VPL Terminal : { 62 192 67 197 }*/
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

/* Start Operations: { 138 286 }{ 314 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 83 82 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Current Number");
/* IO - VPL Terminal : { 61 146 66 151 }*/
/* IO - VPL Root : { 82 146 87 151 }*/
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

/* Start Operations: { 160 404 }{ 274 284 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 57 69 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Completed Stages");
/* IO - VPL Terminal : { 48 114 53 119 }*/
/* IO - VPL Root : { 69 94 74 99 }*/
/* IO - VPL Root : { 69 133 74 138 }*/
/* End Operation */

/* Begin Operation: { 97 102 113 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 92 133 97 138 }*/
/* IO - VPL Root : { 113 133 118 138 }*/
/* End Operation */

/* Begin Operation: { 139 116 155 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 134 133 139 138 }*/
/* IO - VPL Root : { 155 133 160 138 }*/
/* End Operation */

/* Begin Operation: { 176 21 184 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 171 115 176 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 111 111 127 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 106 146 111 151 }*/
/* IO - VPL Root : { 127 146 132 151 }*/
/* End Operation */

/* Begin Operation: { 144 85 160 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Counting: Stage ");
/* IO - VPL Root : { 160 128 165 133 }*/
/* End Operation */

/* Begin Operation: { 182 112 198 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 177 128 182 133 }*/
/* IO - VPL Terminal : { 177 146 182 151 }*/
/* IO - VPL Root : { 198 138 203 143 }*/
/* End Operation */

/* Begin Operation: { 216 43 232 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Activity Name");
/* IO - VPL Terminal : { 211 82 216 87 }*/
/* IO - VPL Terminal : { 211 141 216 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 248 20 256 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 119 25 127 217 } */
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


/* Stop Universals */






Nat4	loadClasses_Activity_20_Test(V_Environment environment);
Nat4	loadClasses_Activity_20_Test(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Activity Test Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Activity_20_Test_20_Data_class_load(result,environment);
	result = class_new("Activity Staged Test",environment);
	if(result == NULL) return kERROR;
	VPLC_Activity_20_Staged_20_Test_class_load(result,environment);
	result = class_new("Activity Counting Stage",environment);
	if(result == NULL) return kERROR;
	VPLC_Activity_20_Counting_20_Stage_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Activity_20_Test(V_Environment environment);
Nat4	loadUniversals_Activity_20_Test(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("TEST Activity Simple Sync",environment);
	if(result == NULL) return kERROR;
	VPLU_TEST_20_Activity_20_Simple_20_Sync_universal_load(result,environment);

	result = method_new("TEST Activity Simple ASync",environment);
	if(result == NULL) return kERROR;
	VPLU_TEST_20_Activity_20_Simple_20_ASync_universal_load(result,environment);

	result = method_new("TEST Activity Staged Sync",environment);
	if(result == NULL) return kERROR;
	VPLU_TEST_20_Activity_20_Staged_20_Sync_universal_load(result,environment);

	result = method_new("TEST Activity Staged ASync",environment);
	if(result == NULL) return kERROR;
	VPLU_TEST_20_Activity_20_Staged_20_ASync_universal_load(result,environment);

	result = method_new("Activity Test Data/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_Activity_20_Test_20_Data_2F_Run_universal_load(result,environment);

	result = method_new("Activity Test Data/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_Activity_20_Test_20_Data_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("Activity Counting Stage/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_Activity_20_Counting_20_Stage_2F_Run_universal_load(result,environment);

	result = method_new("Activity Counting Stage/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_Activity_20_Counting_20_Stage_2F_Run_20_Begin_universal_load(result,environment);

	return kNOERROR;

}



Nat4	loadPersistents_Activity_20_Test(V_Environment environment);
Nat4	loadPersistents_Activity_20_Test(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Activity_20_Test(V_Environment environment);
Nat4	load_Activity_20_Test(V_Environment environment)
{

	loadClasses_Activity_20_Test(environment);
	loadUniversals_Activity_20_Test(environment);
	loadPersistents_Activity_20_Test(environment);
	return kNOERROR;

}

