/* A VPL Section File */
/*

CG Context.rnt.c
Copyright: 2002 Scott B. Anderson

*/

Nat4 VPLU_New_20_CGPoint_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_New_20_CGPoint_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 217 238 }{ 273 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 48 38 64 81 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"CGPoint");
/* IO - VPL Root : { 64 57 69 62 }*/
/* End Operation */

/* Begin Operation: { 48 88 64 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"8");
/* IO - VPL Root : { 64 90 69 95 }*/
/* End Operation */

/* Begin Operation: { 93 26 109 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 88 57 93 62 }*/
/* IO - VPL Terminal : { 88 90 93 95 }*/
/* IO - VPL Root : { 109 74 114 79 }*/
/* End Operation */

/* Begin Operation: { 87 147 103 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 103 149 108 154 }*/
/* End Operation */

/* Begin Operation: { 87 160 103 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 103 162 108 167 }*/
/* End Operation */

/* Begin Operation: { 52 135 68 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Coerce Real");
/* IO - VPL Terminal : { 47 175 52 180 }*/
/* IO - VPL Root : { 68 175 73 180 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 132 125 148 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-real");
/* IO - VPL Terminal : { 127 136 132 141 }*/
/* IO - VPL Terminal : { 127 149 132 154 }*/
/* IO - VPL Terminal : { 127 162 132 167 }*/
/* IO - VPL Terminal : { 127 175 132 180 }*/
/* IO - VPL Root : { 148 145 153 150 }*/
/* IO - VPL Root : { 148 167 153 172 }*/
/* End Operation */

/* Begin Operation: { 89 203 105 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Coerce Real");
/* IO - VPL Terminal : { 84 243 89 248 }*/
/* IO - VPL Root : { 105 243 110 248 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 177 151 193 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-real");
/* IO - VPL Terminal : { 172 162 177 167 }*/
/* IO - VPL Terminal : { 172 175 177 180 }*/
/* IO - VPL Terminal : { 172 188 177 193 }*/
/* IO - VPL Terminal : { 172 201 177 206 }*/
/* IO - VPL Root : { 193 171 198 176 }*/
/* IO - VPL Root : { 193 193 198 198 }*/
/* End Operation */

/* Begin Operation: { 223 19 231 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 218 109 223 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,6,4,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,2,7,2,9);
	result = connect_root_to_terminal(ptrA,1,5,3,9);
	result = connect_root_to_terminal(ptrA,1,8,4,9);
	result = connect_root_to_terminal(ptrA,1,3,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_New_20_CGSize_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_New_20_CGSize_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 217 238 }{ 273 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 48 40 64 78 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"CGSize");
/* IO - VPL Root : { 64 57 69 62 }*/
/* End Operation */

/* Begin Operation: { 48 88 64 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"8");
/* IO - VPL Root : { 64 90 69 95 }*/
/* End Operation */

/* Begin Operation: { 93 26 109 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 88 57 93 62 }*/
/* IO - VPL Terminal : { 88 90 93 95 }*/
/* IO - VPL Root : { 109 74 114 79 }*/
/* End Operation */

/* Begin Operation: { 87 147 103 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 103 149 108 154 }*/
/* End Operation */

/* Begin Operation: { 87 160 103 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 103 162 108 167 }*/
/* End Operation */

/* Begin Operation: { 52 135 68 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Coerce Real");
/* IO - VPL Terminal : { 47 175 52 180 }*/
/* IO - VPL Root : { 68 175 73 180 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 132 125 148 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-real");
/* IO - VPL Terminal : { 127 136 132 141 }*/
/* IO - VPL Terminal : { 127 149 132 154 }*/
/* IO - VPL Terminal : { 127 162 132 167 }*/
/* IO - VPL Terminal : { 127 175 132 180 }*/
/* IO - VPL Root : { 148 145 153 150 }*/
/* IO - VPL Root : { 148 167 153 172 }*/
/* End Operation */

/* Begin Operation: { 89 203 105 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Coerce Real");
/* IO - VPL Terminal : { 84 243 89 248 }*/
/* IO - VPL Root : { 105 243 110 248 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 177 151 193 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-real");
/* IO - VPL Terminal : { 172 162 177 167 }*/
/* IO - VPL Terminal : { 172 175 177 180 }*/
/* IO - VPL Terminal : { 172 188 177 193 }*/
/* IO - VPL Terminal : { 172 201 177 206 }*/
/* IO - VPL Root : { 193 171 198 176 }*/
/* IO - VPL Root : { 193 193 198 198 }*/
/* End Operation */

/* Begin Operation: { 223 19 231 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 218 109 223 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,6,4,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,2,7,2,9);
	result = connect_root_to_terminal(ptrA,1,5,3,9);
	result = connect_root_to_terminal(ptrA,1,8,4,9);
	result = connect_root_to_terminal(ptrA,1,3,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_New_20_CGRect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_New_20_CGRect_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 275 303 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 96 33 101 }*/
/* IO - VPL Root : { 28 134 33 139 }*/
/* IO - VPL Root : { 28 178 33 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 38 117 77 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"CGRect");
/* IO - VPL Root : { 117 55 122 60 }*/
/* End Operation */

/* Begin Operation: { 101 83 117 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"16");
/* IO - VPL Root : { 117 88 122 93 }*/
/* End Operation */

/* Begin Operation: { 146 24 162 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 141 55 146 60 }*/
/* IO - VPL Terminal : { 141 88 146 93 }*/
/* IO - VPL Root : { 162 72 167 77 }*/
/* End Operation */

/* Begin Operation: { 49 38 65 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 44 65 49 70 }*/
/* IO - VPL Terminal : { 44 94 49 99 }*/
/* IO - VPL Root : { 65 80 70 85 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 194 48 210 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"origin");
/* IO - VPL Terminal : { 189 63 194 68 }*/
/* IO - VPL Terminal : { 189 80 194 85 }*/
/* IO - VPL Root : { 210 72 215 77 }*/
/* End Operation */

/* Begin Operation: { 82 115 98 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGSize");
/* IO - VPL Terminal : { 77 141 82 146 }*/
/* IO - VPL Terminal : { 77 169 82 174 }*/
/* IO - VPL Root : { 98 155 103 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 194 129 210 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"size");
/* IO - VPL Terminal : { 189 141 194 146 }*/
/* IO - VPL Terminal : { 189 155 194 160 }*/
/* IO - VPL Root : { 210 148 215 153 }*/
/* End Operation */

/* Begin Operation: { 229 23 237 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 224 116 229 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,3,0,1,6);
	result = connect_root_to_terminal(ptrA,4,0,2,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,3,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_From_20_CGPoint_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_From_20_CGPoint_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 240 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 107 33 112 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 43 67 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 46 54 51 59 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 45 121 61 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 61 123 66 128 }*/
/* End Operation */

/* Begin Operation: { 45 137 61 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 61 139 66 144 }*/
/* End Operation */

/* Begin Operation: { 90 93 106 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-real");
/* IO - VPL Terminal : { 85 107 90 112 }*/
/* IO - VPL Terminal : { 85 123 90 128 }*/
/* IO - VPL Terminal : { 85 139 90 144 }*/
/* IO - VPL Root : { 106 107 111 112 }*/
/* IO - VPL Root : { 106 123 111 128 }*/
/* IO - VPL Root : { 106 139 111 144 }*/
/* End Operation */

/* Begin Operation: { 151 147 167 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-real");
/* IO - VPL Terminal : { 146 161 151 166 }*/
/* IO - VPL Terminal : { 146 177 151 182 }*/
/* IO - VPL Terminal : { 146 193 151 198 }*/
/* IO - VPL Root : { 167 161 172 166 }*/
/* IO - VPL Root : { 167 177 172 182 }*/
/* IO - VPL Root : { 167 193 172 198 }*/
/* End Operation */

/* Begin Operation: { 194 21 202 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 189 66 194 71 }*/
/* IO - VPL Terminal : { 189 161 194 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
	result = connect_root_to_terminal(ptrA,3,4,1,6);
	result = connect_root_to_terminal(ptrA,3,5,2,6);
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

/* Begin Operation: { 50 113 66 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0.0");
/* IO - VPL Root : { 66 120 71 125 }*/
/* End Operation */

/* Begin Operation: { 94 19 102 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 89 81 94 86 }*/
/* IO - VPL Terminal : { 89 145 94 150 }*/
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


Nat4 VPLU_From_20_CGSize_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_From_20_CGSize_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 240 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 107 33 112 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 43 67 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 46 54 51 59 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 45 121 61 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 61 123 66 128 }*/
/* End Operation */

/* Begin Operation: { 45 137 61 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 61 139 66 144 }*/
/* End Operation */

/* Begin Operation: { 90 93 106 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-real");
/* IO - VPL Terminal : { 85 107 90 112 }*/
/* IO - VPL Terminal : { 85 123 90 128 }*/
/* IO - VPL Terminal : { 85 139 90 144 }*/
/* IO - VPL Root : { 106 107 111 112 }*/
/* IO - VPL Root : { 106 123 111 128 }*/
/* IO - VPL Root : { 106 139 111 144 }*/
/* End Operation */

/* Begin Operation: { 151 147 167 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-real");
/* IO - VPL Terminal : { 146 161 151 166 }*/
/* IO - VPL Terminal : { 146 177 151 182 }*/
/* IO - VPL Terminal : { 146 193 151 198 }*/
/* IO - VPL Root : { 167 161 172 166 }*/
/* IO - VPL Root : { 167 177 172 182 }*/
/* IO - VPL Root : { 167 193 172 198 }*/
/* End Operation */

/* Begin Operation: { 194 21 202 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 189 66 194 71 }*/
/* IO - VPL Terminal : { 189 161 194 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
	result = connect_root_to_terminal(ptrA,3,4,1,6);
	result = connect_root_to_terminal(ptrA,3,5,2,6);
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

/* Begin Operation: { 50 113 66 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0.0");
/* IO - VPL Root : { 66 120 71 125 }*/
/* End Operation */

/* Begin Operation: { 94 19 102 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 89 81 94 86 }*/
/* IO - VPL Terminal : { 89 145 94 150 }*/
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


Nat4 VPLU_From_20_CGRect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_From_20_CGRect_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 240 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 107 33 112 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 43 67 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 46 54 51 59 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 97 47 113 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"origin");
/* IO - VPL Terminal : { 92 71 97 76 }*/
/* IO - VPL Root : { 113 62 118 67 }*/
/* IO - VPL Root : { 113 79 118 84 }*/
/* End Operation */

/* Begin Operation: { 141 34 157 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 136 79 141 84 }*/
/* IO - VPL Root : { 157 63 162 68 }*/
/* IO - VPL Root : { 157 94 162 99 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 161 117 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"size");
/* IO - VPL Terminal : { 96 180 101 185 }*/
/* IO - VPL Root : { 117 173 122 178 }*/
/* IO - VPL Root : { 117 187 122 192 }*/
/* End Operation */

/* Begin Operation: { 142 145 158 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGSize");
/* IO - VPL Terminal : { 137 187 142 192 }*/
/* IO - VPL Root : { 158 172 163 177 }*/
/* IO - VPL Root : { 158 201 163 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 194 21 202 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 189 48 194 53 }*/
/* IO - VPL Terminal : { 189 88 194 93 }*/
/* IO - VPL Terminal : { 189 146 194 151 }*/
/* IO - VPL Terminal : { 189 188 194 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,2,3,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,2,5,4,6);
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

/* Begin Operation: { 50 110 66 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0.0");
/* IO - VPL Root : { 66 117 71 122 }*/
/* End Operation */

/* Begin Operation: { 94 19 102 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 89 55 94 60 }*/
/* IO - VPL Terminal : { 89 93 94 98 }*/
/* IO - VPL Terminal : { 89 131 94 136 }*/
/* IO - VPL Terminal : { 89 169 94 174 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,1,1,4,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_list_2D_to_2D_CGRect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_list_2D_to_2D_CGRect_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 298 263 }{ 278 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 83 77 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 56 111 61 116 }*/
/* IO - VPL Root : { 77 90 82 95 }*/
/* IO - VPL Root : { 77 104 82 109 }*/
/* IO - VPL Root : { 77 122 82 127 }*/
/* IO - VPL Root : { 77 136 82 141 }*/
/* End Operation */

/* Begin Operation: { 118 112 134 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"-");
/* IO - VPL Terminal : { 113 120 118 125 }*/
/* IO - VPL Terminal : { 113 130 118 135 }*/
/* IO - VPL Root : { 134 125 139 130 }*/
/* End Operation */

/* Begin Operation: { 114 157 130 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"-");
/* IO - VPL Terminal : { 109 165 114 170 }*/
/* IO - VPL Terminal : { 109 175 114 180 }*/
/* IO - VPL Root : { 130 170 135 175 }*/
/* End Operation */

/* Begin Operation: { 181 65 197 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGRect");
/* IO - VPL Terminal : { 176 80 181 85 }*/
/* IO - VPL Terminal : { 176 97 181 102 }*/
/* IO - VPL Terminal : { 176 114 181 119 }*/
/* IO - VPL Terminal : { 176 131 181 136 }*/
/* IO - VPL Root : { 197 107 202 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 233 15 241 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 228 107 233 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,4,1,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,2,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_list_2D_to_2D_CGSize_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_list_2D_to_2D_CGSize_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 59 86 75 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 54 114 59 119 }*/
/* IO - VPL Root : { 75 102 80 107 }*/
/* IO - VPL Root : { 75 125 80 130 }*/
/* End Operation */

/* Begin Operation: { 100 75 116 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGSize");
/* IO - VPL Terminal : { 95 101 100 106 }*/
/* IO - VPL Terminal : { 95 129 100 134 }*/
/* IO - VPL Root : { 116 116 121 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 146 21 154 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 141 116 146 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_list_2D_to_2D_CGPoint_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_list_2D_to_2D_CGPoint_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 59 86 75 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 54 114 59 119 }*/
/* IO - VPL Root : { 75 102 80 107 }*/
/* IO - VPL Root : { 75 125 80 130 }*/
/* End Operation */

/* Begin Operation: { 100 73 116 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 95 101 100 106 }*/
/* IO - VPL Terminal : { 95 131 100 136 }*/
/* IO - VPL Root : { 116 116 121 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 146 21 154 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 141 116 146 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}





	Nat4 tempAttribute_CG_20_Bitmap_20_Context_2F_Block_20_Size[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_CG_20_Context_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CG_20_Context_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("CGContext Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("QDPort Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("QDFrame",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 59 878 }{ 693 321 } */
Nat4 VPLU_CG_20_Context_2F_New_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_New_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 65 26 81 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CG Context");
/* IO - VPL Terminal : { 60 64 65 69 }*/
/* IO - VPL Root : { 81 64 86 69 }*/
/* End Operation */

/* Begin Operation: { 120 72 136 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup CoreGraphics");
/* IO - VPL Terminal : { 115 105 120 110 }*/
/* IO - VPL Terminal : { 115 163 120 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 172 21 180 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 167 112 172 117 }*/
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


Nat4 VPLU_CG_20_Context_2F_Setup_20_CoreGraphics_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Setup_20_CoreGraphics_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 59 75 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set CGContextRef");
/* IO - VPL Terminal : { 54 91 59 96 }*/
/* IO - VPL Terminal : { 54 139 59 144 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 21 106 213 } */
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


Nat4 VPLU_CG_20_Context_2F_Dispose_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Dispose_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 42 196 58 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 58 207 63 212 }*/
/* End Operation */

/* Begin Operation: { 87 116 103 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set CGContextRef");
/* IO - VPL Terminal : { 82 151 87 156 }*/
/* IO - VPL Terminal : { 82 207 87 212 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 141 19 149 211 } */
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


Nat4 VPLU_CG_20_Context_2F_Set_20_CGContextRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Set_20_CGContextRef_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 147 33 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 46 75 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"CGContext Reference");
/* IO - VPL Terminal : { 54 89 59 94 }*/
/* IO - VPL Terminal : { 54 134 59 139 }*/
/* IO - VPL Root : { 75 111 80 116 }*/
/* End Operation */

/* Begin Operation: { 109 19 117 211 } */
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


Nat4 VPLU_CG_20_Context_2F_Get_20_CGContextRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Get_20_CGContextRef_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 104 33 109 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 39 80 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"CGContext Reference");
/* IO - VPL Terminal : { 59 104 64 109 }*/
/* IO - VPL Root : { 80 82 85 87 }*/
/* IO - VPL Root : { 80 127 85 132 }*/
/* End Operation */

/* Begin Operation: { 108 21 116 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 103 106 108 111 }*/
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


Nat4 VPLU_CG_20_Context_2F_Set_20_Stroke_20_RGB_20_Color_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Set_20_Stroke_20_RGB_20_Color_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 281 609 }{ 334 309 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 98 33 103 }*/
/* IO - VPL Root : { 28 128 33 133 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
/* IO - VPL Root : { 28 188 33 193 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 36 68 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~CGContextSetRGBStroke");
/* IO - VPL Terminal : { 47 68 52 73 }*/
/* IO - VPL Terminal : { 47 102 52 107 }*/
/* IO - VPL Terminal : { 47 121 52 126 }*/
/* IO - VPL Terminal : { 47 139 52 144 }*/
/* IO - VPL Terminal : { 47 168 52 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Cases: { 329 533 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 391 482 }{ 187 297 } */
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

/* Begin Operation: { 57 28 73 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 52 87 57 92 }*/
/* IO - VPL Root : { 73 87 78 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 23 112 50 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 91 34 96 39 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 94 85 110 266 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,1,"CGContextSetRGBStrokeColor");
/* IO - VPL Terminal : { 89 113 94 118 }*/
/* IO - VPL Terminal : { 89 143 94 148 }*/
/* IO - VPL Terminal : { 89 173 94 178 }*/
/* IO - VPL Terminal : { 89 203 94 208 }*/
/* IO - VPL Terminal : { 89 233 94 238 }*/
/* IO - VPL Root : { 110 173 115 178 }*/
/* End Operation */

/* Begin Operation: { 139 25 147 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,4,0,4,3);
	result = connect_root_to_terminal(ptrA,5,0,5,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 85 25 93 217 } */
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Set_20_Fill_20_RGB_20_Color_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Set_20_Fill_20_RGB_20_Color_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 281 609 }{ 334 309 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 98 33 103 }*/
/* IO - VPL Root : { 28 128 33 133 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
/* IO - VPL Root : { 28 188 33 193 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 46 68 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~CGContextSetRGBFill");
/* IO - VPL Terminal : { 47 67 52 72 }*/
/* IO - VPL Terminal : { 47 90 52 95 }*/
/* IO - VPL Terminal : { 47 113 52 118 }*/
/* IO - VPL Terminal : { 47 136 52 141 }*/
/* IO - VPL Terminal : { 47 159 52 164 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Cases: { 329 533 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 391 482 }{ 240 309 } */
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

/* Begin Operation: { 57 28 73 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 52 87 57 92 }*/
/* IO - VPL Root : { 73 87 78 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 23 112 50 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 91 34 96 39 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 94 97 110 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,1,"CGContextSetRGBFillColor");
/* IO - VPL Terminal : { 89 122 94 127 }*/
/* IO - VPL Terminal : { 89 149 94 154 }*/
/* IO - VPL Terminal : { 89 176 94 181 }*/
/* IO - VPL Terminal : { 89 203 94 208 }*/
/* IO - VPL Terminal : { 89 230 94 235 }*/
/* IO - VPL Root : { 110 176 115 181 }*/
/* End Operation */

/* Begin Operation: { 133 25 141 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,4,0,4,3);
	result = connect_root_to_terminal(ptrA,5,0,5,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 85 25 93 217 } */
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Fill_20_Rect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Fill_20_Rect_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 301 561 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 147 33 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 51 70 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~CGContextFillRect");
/* IO - VPL Terminal : { 49 83 54 88 }*/
/* IO - VPL Terminal : { 49 143 54 148 }*/
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

/* Start Operations: { 333 571 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 25 74 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 53 82 58 87 }*/
/* IO - VPL Root : { 74 81 79 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 26 114 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 93 37 98 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 95 96 111 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGContextFillRect");
/* IO - VPL Terminal : { 90 133 95 138 }*/
/* IO - VPL Terminal : { 90 172 95 177 }*/
/* IO - VPL Root : { 111 153 116 158 }*/
/* End Operation */

/* Begin Operation: { 136 20 144 212 } */
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

/* Begin Operation: { 95 20 103 212 } */
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


Nat4 VPLU_CG_20_Context_2F_Fill_20_Path_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Fill_20_Path_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 301 561 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 118 33 123 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 56 70 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~CGContextFillPath");
/* IO - VPL Terminal : { 49 118 54 123 }*/
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
/* IO - VPL Root : { 28 120 33 125 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 63 74 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 53 120 58 125 }*/
/* IO - VPL Root : { 74 119 79 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 26 114 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 93 37 98 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 97 101 113 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGContextFillPath");
/* IO - VPL Terminal : { 92 159 97 164 }*/
/* IO - VPL Root : { 113 159 118 164 }*/
/* End Operation */

/* Begin Operation: { 139 18 147 210 } */
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

/* Begin Operation: { 95 20 103 212 } */
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


Nat4 VPLU_CG_20_Context_2F_Fill_20_Oval_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Fill_20_Oval_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 444 582 }{ 204 362 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 163 35 168 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 26 80 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin Path");
/* IO - VPL Terminal : { 59 68 64 73 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 134 80 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"create circle");
/* IO - VPL Terminal : { 59 163 64 168 }*/
/* IO - VPL Terminal : { 59 194 64 199 }*/
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

/* Start Operations: { 60 60 }{ 439 435 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 75 17 91 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetMidX");
/* IO - VPL Terminal : { 70 67 75 72 }*/
/* IO - VPL Root : { 91 67 96 72 }*/
/* End Operation */

/* Begin Operation: { 75 245 91 349 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetMidY");
/* IO - VPL Terminal : { 70 295 75 300 }*/
/* IO - VPL Root : { 91 295 96 300 }*/
/* End Operation */

/* Begin Operation: { 149 31 165 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 144 59 149 64 }*/
/* IO - VPL Terminal : { 144 89 149 94 }*/
/* IO - VPL Root : { 165 74 170 79 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 141 139 157 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetWidth");
/* IO - VPL Terminal : { 136 191 141 196 }*/
/* IO - VPL Root : { 157 191 162 196 }*/
/* End Operation */

/* Begin Operation: { 202 185 218 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 197 206 202 211 }*/
/* IO - VPL Root : { 218 206 223 211 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 139 252 155 364 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetHeight");
/* IO - VPL Terminal : { 134 306 139 311 }*/
/* IO - VPL Root : { 155 306 160 311 }*/
/* End Operation */

/* Begin Operation: { 202 263 218 309 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 197 284 202 289 }*/
/* IO - VPL Root : { 218 284 223 289 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 266 138 282 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Oval");
/* IO - VPL Terminal : { 261 146 266 151 }*/
/* IO - VPL Terminal : { 261 166 266 171 }*/
/* IO - VPL Terminal : { 261 183 266 188 }*/
/* IO - VPL Terminal : { 261 201 266 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 316 21 324 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,3,2,8);
	result = connect_root_to_terminal(ptrA,1,5,3,8);
	result = connect_root_to_terminal(ptrA,1,7,4,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 32 122 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Fill Path");
/* IO - VPL Terminal : { 101 68 106 73 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Stroke_20_Rect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Stroke_20_Rect_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 301 561 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 147 33 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 46 70 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~CGContextStrokeRect");
/* IO - VPL Terminal : { 49 92 54 97 }*/
/* IO - VPL Terminal : { 49 140 54 145 }*/
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

/* Begin Operation: { 58 25 74 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 53 82 58 87 }*/
/* IO - VPL Root : { 74 81 79 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 26 114 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 93 37 98 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 97 93 113 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGContextStrokeRect");
/* IO - VPL Terminal : { 92 136 97 141 }*/
/* IO - VPL Terminal : { 92 181 97 186 }*/
/* IO - VPL Root : { 113 159 118 164 }*/
/* End Operation */

/* Begin Operation: { 139 18 147 210 } */
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

/* Begin Operation: { 95 20 103 212 } */
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


Nat4 VPLU_CG_20_Context_2F_Stroke_20_Path_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Stroke_20_Path_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 301 561 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 118 33 123 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 43 70 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~CGContextStrokePath");
/* IO - VPL Terminal : { 49 118 54 123 }*/
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
/* IO - VPL Root : { 28 120 33 125 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 63 74 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 53 120 58 125 }*/
/* IO - VPL Root : { 74 119 79 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 26 114 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 93 37 98 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 97 92 113 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGContextStrokePath");
/* IO - VPL Terminal : { 92 159 97 164 }*/
/* IO - VPL Root : { 113 159 118 164 }*/
/* End Operation */

/* Begin Operation: { 139 18 147 210 } */
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

/* Begin Operation: { 95 20 103 212 } */
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


Nat4 VPLU_CG_20_Context_2F_Stroke_20_Oval_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Stroke_20_Oval_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 444 582 }{ 204 362 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 163 35 168 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 26 80 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin Path");
/* IO - VPL Terminal : { 59 68 64 73 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 134 80 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"create circle");
/* IO - VPL Terminal : { 59 163 64 168 }*/
/* IO - VPL Terminal : { 59 194 64 199 }*/
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

/* Start Operations: { 60 60 }{ 439 435 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 75 17 91 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetMidX");
/* IO - VPL Terminal : { 70 67 75 72 }*/
/* IO - VPL Root : { 91 67 96 72 }*/
/* End Operation */

/* Begin Operation: { 75 245 91 349 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetMidY");
/* IO - VPL Terminal : { 70 295 75 300 }*/
/* IO - VPL Root : { 91 295 96 300 }*/
/* End Operation */

/* Begin Operation: { 149 31 165 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 144 59 149 64 }*/
/* IO - VPL Terminal : { 144 89 149 94 }*/
/* IO - VPL Root : { 165 74 170 79 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 141 139 157 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetWidth");
/* IO - VPL Terminal : { 136 191 141 196 }*/
/* IO - VPL Root : { 157 191 162 196 }*/
/* End Operation */

/* Begin Operation: { 202 185 218 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 197 206 202 211 }*/
/* IO - VPL Root : { 218 206 223 211 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 139 252 155 364 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetHeight");
/* IO - VPL Terminal : { 134 306 139 311 }*/
/* IO - VPL Root : { 155 306 160 311 }*/
/* End Operation */

/* Begin Operation: { 202 263 218 309 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 197 284 202 289 }*/
/* IO - VPL Root : { 218 284 223 289 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 266 138 282 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Oval");
/* IO - VPL Terminal : { 261 146 266 151 }*/
/* IO - VPL Terminal : { 261 166 266 171 }*/
/* IO - VPL Terminal : { 261 183 266 188 }*/
/* IO - VPL Terminal : { 261 201 266 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 316 21 324 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,3,2,8);
	result = connect_root_to_terminal(ptrA,1,5,3,8);
	result = connect_root_to_terminal(ptrA,1,7,4,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 23 122 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Stroke Path");
/* IO - VPL Terminal : { 101 68 106 73 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Add_20_Arc_20_To_20_Point_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Add_20_Arc_20_To_20_Point_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 92 33 97 }*/
/* IO - VPL Root : { 28 121 33 126 }*/
/* IO - VPL Root : { 28 150 33 155 }*/
/* IO - VPL Root : { 28 172 33 177 }*/
/* IO - VPL Root : { 28 197 33 202 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 6 94 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 73 63 78 68 }*/
/* IO - VPL Root : { 94 62 99 67 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 119 32 135 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 43 119 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 117 101 133 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,6,1,"CGContextAddArcToPoint");
/* IO - VPL Terminal : { 112 122 117 127 }*/
/* IO - VPL Terminal : { 112 145 117 150 }*/
/* IO - VPL Terminal : { 112 168 117 173 }*/
/* IO - VPL Terminal : { 112 191 117 196 }*/
/* IO - VPL Terminal : { 112 214 117 219 }*/
/* IO - VPL Terminal : { 112 237 117 242 }*/
/* IO - VPL Root : { 133 179 138 184 }*/
/* End Operation */

/* Begin Operation: { 166 21 174 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,4,0,4,3);
	result = connect_root_to_terminal(ptrA,5,0,5,3);
	result = connect_root_to_terminal(ptrA,6,0,6,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Add_20_Line_20_To_20_Point_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Add_20_Line_20_To_20_Point_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 118 33 123 }*/
/* IO - VPL Root : { 28 174 33 179 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 6 94 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 73 63 78 68 }*/
/* IO - VPL Root : { 94 62 99 67 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 119 32 135 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 43 119 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 117 101 133 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CGContextAddLineToPoint");
/* IO - VPL Terminal : { 112 139 117 144 }*/
/* IO - VPL Terminal : { 112 179 117 184 }*/
/* IO - VPL Terminal : { 112 219 117 224 }*/
/* IO - VPL Root : { 133 179 138 184 }*/
/* End Operation */

/* Begin Operation: { 166 21 174 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Add_20_Rect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Add_20_Rect_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 21 80 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 120 122 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGContextAddRect");
/* IO - VPL Terminal : { 101 159 106 164 }*/
/* IO - VPL Terminal : { 101 200 106 205 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Add_20_Rounded_20_Rect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Add_20_Rounded_20_Rect_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 384 555 }{ 380 426 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 54 35 59 }*/
/* IO - VPL Root : { 30 104 35 109 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
/* IO - VPL Root : { 30 192 35 197 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Save GState");
/* IO - VPL Terminal : { 59 67 64 72 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 164 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetMinX");
/* IO - VPL Terminal : { 143 72 148 77 }*/
/* IO - VPL Root : { 164 72 169 77 }*/
/* End Operation */

/* Begin Operation: { 106 61 122 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetMinY");
/* IO - VPL Terminal : { 101 111 106 116 }*/
/* IO - VPL Root : { 122 111 127 116 }*/
/* End Operation */

/* Begin Operation: { 190 22 206 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Translate CTM");
/* IO - VPL Terminal : { 185 40 190 45 }*/
/* IO - VPL Terminal : { 185 73 190 78 }*/
/* IO - VPL Terminal : { 185 112 190 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 159 80 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Scale CTM");
/* IO - VPL Terminal : { 59 176 64 181 }*/
/* IO - VPL Terminal : { 59 200 64 205 }*/
/* IO - VPL Terminal : { 59 227 64 232 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 266 164 378 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetHeight");
/* IO - VPL Terminal : { 143 320 148 325 }*/
/* IO - VPL Root : { 164 320 169 325 }*/
/* End Operation */

/* Begin Operation: { 190 257 206 297 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 185 268 190 273 }*/
/* IO - VPL Terminal : { 185 281 190 286 }*/
/* IO - VPL Root : { 206 275 211 280 }*/
/* End Operation */

/* Begin Operation: { 148 142 164 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetWidth");
/* IO - VPL Terminal : { 143 194 148 199 }*/
/* IO - VPL Root : { 164 194 169 199 }*/
/* End Operation */

/* Begin Operation: { 190 191 206 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 185 202 190 207 }*/
/* IO - VPL Terminal : { 185 215 190 220 }*/
/* IO - VPL Root : { 206 209 211 214 }*/
/* End Operation */

/* Begin Operation: { 232 172 248 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add RoundRect");
/* IO - VPL Terminal : { 227 186 232 191 }*/
/* IO - VPL Terminal : { 227 220 232 225 }*/
/* IO - VPL Terminal : { 227 251 232 256 }*/
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

/* Start Operations: { 109 579 }{ 332 351 } */
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

/* Begin Operation: { 64 111 80 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 59 132 64 137 }*/
/* IO - VPL Root : { 80 132 85 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 187 80 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 59 208 64 213 }*/
/* IO - VPL Root : { 80 208 85 213 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 22 122 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Move To Point");
/* IO - VPL Terminal : { 101 34 106 39 }*/
/* IO - VPL Terminal : { 101 71 106 76 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 254 80 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 80 257 85 262 }*/
/* End Operation */

/* Begin Operation: { 106 149 122 271 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc To Point");
/* IO - VPL Terminal : { 101 157 106 162 }*/
/* IO - VPL Terminal : { 101 178 106 183 }*/
/* IO - VPL Terminal : { 101 200 106 205 }*/
/* IO - VPL Terminal : { 101 221 106 226 }*/
/* IO - VPL Terminal : { 101 240 106 245 }*/
/* IO - VPL Terminal : { 101 257 106 262 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 59 164 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 164 62 169 67 }*/
/* End Operation */

/* Begin Operation: { 190 33 206 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc To Point");
/* IO - VPL Terminal : { 185 41 190 46 }*/
/* IO - VPL Terminal : { 185 62 190 67 }*/
/* IO - VPL Terminal : { 185 84 190 89 }*/
/* IO - VPL Terminal : { 185 105 190 110 }*/
/* IO - VPL Terminal : { 185 124 190 129 }*/
/* IO - VPL Terminal : { 185 141 190 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 216 164 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 164 219 169 224 }*/
/* End Operation */

/* Begin Operation: { 190 168 206 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc To Point");
/* IO - VPL Terminal : { 185 176 190 181 }*/
/* IO - VPL Terminal : { 185 197 190 202 }*/
/* IO - VPL Terminal : { 185 219 190 224 }*/
/* IO - VPL Terminal : { 185 240 190 245 }*/
/* IO - VPL Terminal : { 185 259 190 264 }*/
/* IO - VPL Terminal : { 185 276 190 281 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 81 248 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc To Point");
/* IO - VPL Terminal : { 227 89 232 94 }*/
/* IO - VPL Terminal : { 227 110 232 115 }*/
/* IO - VPL Terminal : { 227 132 232 137 }*/
/* IO - VPL Terminal : { 227 153 232 158 }*/
/* IO - VPL Terminal : { 227 172 232 177 }*/
/* IO - VPL Terminal : { 227 189 232 194 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 28 282 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,3,0,3,5);
	result = connect_root_to_terminal(ptrA,1,1,4,5);
	result = connect_root_to_terminal(ptrA,3,0,5,5);
	result = connect_root_to_terminal(ptrA,1,4,6,5);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,3,0,3,7);
	result = connect_root_to_terminal(ptrA,1,6,4,7);
	result = connect_root_to_terminal(ptrA,1,2,5,7);
	result = connect_root_to_terminal(ptrA,1,4,6,7);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
	result = connect_root_to_terminal(ptrA,1,1,4,9);
	result = connect_root_to_terminal(ptrA,1,8,5,9);
	result = connect_root_to_terminal(ptrA,1,4,6,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,2,0,2,10);
	result = connect_root_to_terminal(ptrA,1,6,3,10);
	result = connect_root_to_terminal(ptrA,2,0,4,10);
	result = connect_root_to_terminal(ptrA,1,2,5,10);
	result = connect_root_to_terminal(ptrA,1,4,6,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 274 162 291 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Path");
/* IO - VPL Terminal : { 268 206 273 211 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 22 290 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Restore GState");
/* IO - VPL Terminal : { 269 76 274 81 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 316 37 324 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,3,0,2,5);
	result = connect_root_to_terminal(ptrA,4,0,3,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,4,0,2,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,3,0,2,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,9,2,10);
	result = connect_root_to_terminal(ptrA,1,7,3,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [11 to 10] */
/* Synchro [12 to 11] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Add_20_Oval_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Add_20_Oval_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 313 342 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 52 33 57 }*/
/* IO - VPL Root : { 28 102 33 107 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
/* IO - VPL Root : { 28 190 33 195 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 18 82 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Save GState");
/* IO - VPL Terminal : { 61 63 66 68 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 122 23 138 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 117 69 122 74 }*/
/* IO - VPL Root : { 138 53 143 58 }*/
/* IO - VPL Root : { 138 85 143 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 172 9 188 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Translate CTM");
/* IO - VPL Terminal : { 167 27 172 32 }*/
/* IO - VPL Terminal : { 167 60 172 65 }*/
/* IO - VPL Terminal : { 167 99 172 104 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 159 79 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Scale CTM");
/* IO - VPL Terminal : { 58 176 63 181 }*/
/* IO - VPL Terminal : { 58 200 63 205 }*/
/* IO - VPL Terminal : { 58 227 63 232 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 118 186 134 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 134 189 139 194 }*/
/* End Operation */

/* Begin Operation: { 118 209 134 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 134 212 139 217 }*/
/* End Operation */

/* Begin Operation: { 75 256 91 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"360");
/* IO - VPL Root : { 91 266 96 271 }*/
/* End Operation */

/* Begin Operation: { 120 227 136 309 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Deg To Rad");
/* IO - VPL Terminal : { 115 266 120 271 }*/
/* IO - VPL Root : { 136 266 141 271 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 163 173 179 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc");
/* IO - VPL Terminal : { 158 178 163 183 }*/
/* IO - VPL Terminal : { 158 189 163 194 }*/
/* IO - VPL Terminal : { 158 200 163 205 }*/
/* IO - VPL Terminal : { 158 212 163 217 }*/
/* IO - VPL Terminal : { 158 221 163 226 }*/
/* IO - VPL Terminal : { 158 231 163 236 }*/
/* IO - VPL Terminal : { 158 242 163 247 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 211 155 227 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Path");
/* IO - VPL Terminal : { 206 197 211 202 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 218 16 234 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Restore GState");
/* IO - VPL Terminal : { 213 70 218 75 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 276 21 284 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,2,3,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,4,0,3,4);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,5,2,9);
	result = connect_root_to_terminal(ptrA,1,5,3,9);
	result = connect_root_to_terminal(ptrA,1,6,4,9);
	result = connect_root_to_terminal(ptrA,1,5,5,9);
	result = connect_root_to_terminal(ptrA,1,8,6,9);
	result = connect_root_to_terminal(ptrA,1,5,7,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Add_20_Arc_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Add_20_Arc_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 55 35 60 }*/
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 112 35 117 }*/
/* IO - VPL Root : { 30 140 35 145 }*/
/* IO - VPL Root : { 30 163 35 168 }*/
/* IO - VPL Root : { 30 183 35 188 }*/
/* IO - VPL Root : { 30 200 35 205 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 21 80 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 122 122 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,7,1,"CGContextAddArc");
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Terminal : { 101 148 106 153 }*/
/* IO - VPL Terminal : { 101 162 106 167 }*/
/* IO - VPL Terminal : { 101 176 106 181 }*/
/* IO - VPL Terminal : { 101 190 106 195 }*/
/* IO - VPL Terminal : { 101 204 106 209 }*/
/* IO - VPL Terminal : { 101 218 106 223 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,4,0,4,3);
	result = connect_root_to_terminal(ptrA,5,0,5,3);
	result = connect_root_to_terminal(ptrA,6,0,6,3);
	result = connect_root_to_terminal(ptrA,7,0,7,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Save_20_GState_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Save_20_GState_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 301 561 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 118 33 123 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 46 70 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~CGContextSaveGState");
/* IO - VPL Terminal : { 49 118 54 123 }*/
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
/* IO - VPL Root : { 28 120 33 125 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 63 74 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 53 120 58 125 }*/
/* IO - VPL Root : { 74 119 79 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 26 114 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 93 37 98 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 97 91 113 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGContextSaveGState");
/* IO - VPL Terminal : { 92 159 97 164 }*/
/* IO - VPL Root : { 113 159 118 164 }*/
/* End Operation */

/* Begin Operation: { 139 18 147 210 } */
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

/* Begin Operation: { 95 20 103 212 } */
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


Nat4 VPLU_CG_20_Context_2F_Restore_20_GState_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Restore_20_GState_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 301 561 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 118 33 123 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 38 70 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~CGContextRestoreGState");
/* IO - VPL Terminal : { 49 118 54 123 }*/
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
/* IO - VPL Root : { 28 120 33 125 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 63 74 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 53 120 58 125 }*/
/* IO - VPL Root : { 74 119 79 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 26 114 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 93 37 98 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 97 83 113 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGContextRestoreGState");
/* IO - VPL Terminal : { 92 159 97 164 }*/
/* IO - VPL Root : { 113 159 118 164 }*/
/* End Operation */

/* Begin Operation: { 139 18 147 210 } */
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

/* Begin Operation: { 95 20 103 212 } */
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


Nat4 VPLU_CG_20_Context_2F_Begin_20_Path_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Begin_20_Path_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 301 561 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 118 33 123 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 50 70 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~CGContextBeginPath");
/* IO - VPL Terminal : { 49 118 54 123 }*/
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
/* IO - VPL Root : { 28 120 33 125 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 63 74 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 53 120 58 125 }*/
/* IO - VPL Root : { 74 119 79 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 26 114 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 93 37 98 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 97 95 113 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGContextBeginPath");
/* IO - VPL Terminal : { 92 159 97 164 }*/
/* IO - VPL Root : { 113 159 118 164 }*/
/* End Operation */

/* Begin Operation: { 139 18 147 210 } */
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

/* Begin Operation: { 95 20 103 212 } */
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


Nat4 VPLU_CG_20_Context_2F_Close_20_Path_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Close_20_Path_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 301 561 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 118 33 123 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 50 70 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~CGContextClosePath");
/* IO - VPL Terminal : { 49 118 54 123 }*/
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
/* IO - VPL Root : { 28 120 33 125 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 63 74 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 53 120 58 125 }*/
/* IO - VPL Root : { 74 119 79 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 26 114 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 93 37 98 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 97 95 113 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGContextClosePath");
/* IO - VPL Terminal : { 92 159 97 164 }*/
/* IO - VPL Root : { 113 159 118 164 }*/
/* End Operation */

/* Begin Operation: { 139 18 147 210 } */
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

/* Begin Operation: { 95 20 103 212 } */
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


Nat4 VPLU_CG_20_Context_2F_Translate_20_CTM_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Translate_20_CTM_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 121 35 126 }*/
/* IO - VPL Root : { 30 183 35 188 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 21 80 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 105 122 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CGContextTranslateCTM");
/* IO - VPL Terminal : { 101 141 106 146 }*/
/* IO - VPL Terminal : { 101 179 106 184 }*/
/* IO - VPL Terminal : { 101 217 106 222 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Scale_20_CTM_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Scale_20_CTM_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 121 35 126 }*/
/* IO - VPL Root : { 30 183 35 188 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 21 80 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 116 122 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CGContextScaleCTM");
/* IO - VPL Terminal : { 101 146 106 151 }*/
/* IO - VPL Terminal : { 101 178 106 183 }*/
/* IO - VPL Terminal : { 101 210 106 215 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Move_20_To_20_Point_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Move_20_To_20_Point_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 121 35 126 }*/
/* IO - VPL Root : { 30 183 35 188 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 21 80 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 108 122 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CGContextMoveToPoint");
/* IO - VPL Terminal : { 101 142 106 147 }*/
/* IO - VPL Terminal : { 101 178 106 183 }*/
/* IO - VPL Terminal : { 101 214 106 219 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Fill_20_Rounded_20_Rect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Fill_20_Rounded_20_Rect_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 59 35 64 }*/
/* IO - VPL Root : { 30 106 35 111 }*/
/* IO - VPL Root : { 30 155 35 160 }*/
/* IO - VPL Root : { 30 194 35 199 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 20 80 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin Path");
/* IO - VPL Terminal : { 59 59 64 64 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 126 80 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Rounded Rect");
/* IO - VPL Terminal : { 59 143 64 148 }*/
/* IO - VPL Terminal : { 59 170 64 175 }*/
/* IO - VPL Terminal : { 59 197 64 202 }*/
/* IO - VPL Terminal : { 59 233 64 238 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 74 122 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Fill Path");
/* IO - VPL Terminal : { 101 109 106 114 }*/
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
	result = connect_root_to_terminal(ptrA,3,0,3,2);
	result = connect_root_to_terminal(ptrA,4,0,4,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Stroke_20_Rounded_20_Rect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Stroke_20_Rounded_20_Rect_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 59 35 64 }*/
/* IO - VPL Root : { 30 106 35 111 }*/
/* IO - VPL Root : { 30 155 35 160 }*/
/* IO - VPL Root : { 30 194 35 199 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 20 80 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin Path");
/* IO - VPL Terminal : { 59 59 64 64 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 126 80 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Rounded Rect");
/* IO - VPL Terminal : { 59 143 64 148 }*/
/* IO - VPL Terminal : { 59 170 64 175 }*/
/* IO - VPL Terminal : { 59 197 64 202 }*/
/* IO - VPL Terminal : { 59 233 64 238 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 65 122 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Stroke Path");
/* IO - VPL Terminal : { 101 110 106 115 }*/
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
	result = connect_root_to_terminal(ptrA,3,0,3,2);
	result = connect_root_to_terminal(ptrA,4,0,4,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Stroke_20_Line_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Stroke_20_Line_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 248 326 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 52 35 57 }*/
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
/* IO - VPL Root : { 30 180 35 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin Path");
/* IO - VPL Terminal : { 59 63 64 68 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 146 80 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Line");
/* IO - VPL Terminal : { 59 155 64 160 }*/
/* IO - VPL Terminal : { 59 166 64 171 }*/
/* IO - VPL Terminal : { 59 177 64 182 }*/
/* IO - VPL Terminal : { 59 188 64 193 }*/
/* IO - VPL Terminal : { 59 199 64 204 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 100 399 }{ 205 310 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 52 35 57 }*/
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
/* IO - VPL Root : { 30 180 35 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Move To Point");
/* IO - VPL Terminal : { 59 40 64 45 }*/
/* IO - VPL Terminal : { 59 74 64 79 }*/
/* IO - VPL Terminal : { 59 111 64 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 144 80 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Line To Point");
/* IO - VPL Terminal : { 59 173 64 178 }*/
/* IO - VPL Terminal : { 59 204 64 209 }*/
/* IO - VPL Terminal : { 59 235 64 240 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 27 114 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,4,0,2,2);
	result = connect_root_to_terminal(ptrA,5,0,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 85 122 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Stroke Path");
/* IO - VPL Terminal : { 101 128 106 133 }*/
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
	result = connect_root_to_terminal(ptrA,3,0,3,2);
	result = connect_root_to_terminal(ptrA,4,0,4,2);
	result = connect_root_to_terminal(ptrA,5,0,5,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Begin_20_For_20_CGrafPort_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Begin_20_For_20_CGrafPort_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 336 704 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 52 79 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"QDBeginCGContext");
/* IO - VPL Terminal : { 58 90 63 95 }*/
/* IO - VPL Terminal : { 58 130 63 135 }*/
/* IO - VPL Root : { 79 80 84 85 }*/
/* IO - VPL Root : { 79 110 84 115 }*/
/* IO - VPL Root : { 79 140 84 145 }*/
/* End Operation */

/* Begin Operation: { 113 126 129 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"create?");
/* IO - VPL Terminal : { 108 145 113 150 }*/
/* IO - VPL Terminal : { 108 169 113 174 }*/
/* IO - VPL Root : { 129 157 134 162 }*/
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 36 80 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 59 51 64 56 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 111 80 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"CG Context/New");
/* IO - VPL Terminal : { 59 165 64 170 }*/
/* IO - VPL Root : { 80 165 85 170 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
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
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 102 80 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 80 113 85 118 }*/
/* End Operation */

/* Begin Operation: { 109 19 117 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 104 113 109 118 }*/
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

/* Begin Operation: { 161 21 169 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 63 161 68 }*/
/* IO - VPL Terminal : { 156 161 161 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_End_20_For_20_CGrafPort_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_End_20_For_20_CGrafPort_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 418 710 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 28 73 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"release");
/* IO - VPL Terminal : { 52 47 57 52 }*/
/* IO - VPL Terminal : { 52 71 57 76 }*/
/* IO - VPL Root : { 73 57 78 62 }*/
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

/* Start Operations: { 541 761 }{ 269 298 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 83 94 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 73 140 78 145 }*/
/* IO - VPL Root : { 94 139 99 144 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 154 112 170 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"QDEndCGContext");
/* IO - VPL Terminal : { 149 146 154 151 }*/
/* IO - VPL Terminal : { 149 182 154 187 }*/
/* IO - VPL Root : { 170 137 175 142 }*/
/* IO - VPL Root : { 170 164 175 169 }*/
/* IO - VPL Root : { 170 191 175 196 }*/
/* End Operation */

/* Begin Operation: { 118 46 134 73 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 113 57 118 62 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 208 27 216 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 203 121 208 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
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

/* Begin Operation: { 75 90 91 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"paramErr");
/* IO - VPL Root : { 91 115 96 120 }*/
/* End Operation */

/* Begin Operation: { 116 21 124 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 111 115 116 120 }*/
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

/* Begin Operation: { 58 127 74 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Dispose");
/* IO - VPL Terminal : { 53 160 58 165 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 20 128 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 115 111 120 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Clear_20_Rect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Clear_20_Rect_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 21 80 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 116 122 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGContextClearRect");
/* IO - VPL Terminal : { 101 157 106 162 }*/
/* IO - VPL Terminal : { 101 200 106 205 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Sync_20_Origin_20_With_20_CGrafPort_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Sync_20_Origin_20_With_20_CGrafPort_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 70 35 75 }*/
/* IO - VPL Root : { 30 161 35 166 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 79 64 84 }*/
/* IO - VPL Root : { 80 78 85 83 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 33 122 60 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 44 106 49 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 92 122 278 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"SyncCGContextOriginWithPort");
/* IO - VPL Terminal : { 101 152 106 157 }*/
/* IO - VPL Terminal : { 101 214 106 219 }*/
/* IO - VPL Root : { 122 136 127 141 }*/
/* IO - VPL Root : { 122 182 127 187 }*/
/* IO - VPL Root : { 122 228 127 233 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Flush_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Flush_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 121 35 126 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 64 80 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 121 64 126 }*/
/* IO - VPL Root : { 80 120 85 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 128 122 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGContextFlush");
/* IO - VPL Terminal : { 101 179 106 184 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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


Nat4 VPLU_CG_20_Context_2F_Stroke_20_Arc_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Stroke_20_Arc_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 248 326 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 52 35 57 }*/
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin Path");
/* IO - VPL Terminal : { 59 63 64 68 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 147 80 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Arc");
/* IO - VPL Terminal : { 59 158 64 163 }*/
/* IO - VPL Terminal : { 59 171 64 176 }*/
/* IO - VPL Terminal : { 59 184 64 189 }*/
/* IO - VPL Terminal : { 59 197 64 202 }*/
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

/* Start Operations: { 172 836 }{ 332 361 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 52 35 57 }*/
/* IO - VPL Root : { 30 89 35 94 }*/
/* IO - VPL Root : { 30 131 35 136 }*/
/* IO - VPL Root : { 30 177 35 182 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 7 119 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetMidX");
/* IO - VPL Terminal : { 98 58 103 63 }*/
/* IO - VPL Root : { 119 58 124 63 }*/
/* End Operation */

/* Begin Operation: { 71 96 87 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetMidY");
/* IO - VPL Terminal : { 66 146 71 151 }*/
/* IO - VPL Root : { 87 146 92 151 }*/
/* End Operation */

/* Begin Operation: { 129 144 145 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetWidth");
/* IO - VPL Terminal : { 124 196 129 201 }*/
/* IO - VPL Root : { 145 196 150 201 }*/
/* End Operation */

/* Begin Operation: { 177 175 193 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 172 196 177 201 }*/
/* IO - VPL Root : { 193 196 198 201 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 216 78 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_evaluate(tempOperation,environment,"A-90");
/* IO - VPL Terminal : { 57 240 62 245 }*/
/* IO - VPL Root : { 78 240 83 245 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 158 20 174 102 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Deg To Rad");
/* IO - VPL Terminal : { 153 59 158 64 }*/
/* IO - VPL Root : { 174 59 179 64 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 102 232 118 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 97 240 102 245 }*/
/* IO - VPL Terminal : { 97 250 102 255 }*/
/* IO - VPL Root : { 118 245 123 250 }*/
/* End Operation */

/* Begin Operation: { 195 64 211 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Deg To Rad");
/* IO - VPL Terminal : { 190 103 195 108 }*/
/* IO - VPL Root : { 211 103 216 108 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 209 160 225 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 225 163 230 168 }*/
/* End Operation */

/* Begin Operation: { 242 49 258 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc");
/* IO - VPL Terminal : { 237 51 242 56 }*/
/* IO - VPL Terminal : { 237 62 242 67 }*/
/* IO - VPL Terminal : { 237 73 242 78 }*/
/* IO - VPL Terminal : { 237 86 242 91 }*/
/* IO - VPL Terminal : { 237 97 242 102 }*/
/* IO - VPL Terminal : { 237 107 242 112 }*/
/* IO - VPL Terminal : { 237 117 242 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 280 34 288 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,4,0,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,1,2,10);
	result = connect_root_to_terminal(ptrA,1,2,3,10);
	result = connect_root_to_terminal(ptrA,1,4,4,10);
	result = connect_root_to_terminal(ptrA,1,6,5,10);
	result = connect_root_to_terminal(ptrA,1,8,6,10);
	result = connect_root_to_terminal(ptrA,1,9,7,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 85 122 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Stroke Path");
/* IO - VPL Terminal : { 101 128 106 133 }*/
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
	result = connect_root_to_terminal(ptrA,3,0,3,2);
	result = connect_root_to_terminal(ptrA,4,0,4,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Release_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Release_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 246 309 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 121 35 126 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 64 80 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 121 64 126 }*/
/* IO - VPL Root : { 80 120 85 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 122 122 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGContextRelease");
/* IO - VPL Terminal : { 101 179 106 184 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 86 164 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Dispose");
/* IO - VPL Terminal : { 143 121 148 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 23 198 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Set_20_Should_20_Antialias_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Set_20_Should_20_Antialias_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 21 80 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 91 122 272 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGContextSetShouldAntialias");
/* IO - VPL Terminal : { 101 149 106 154 }*/
/* IO - VPL Terminal : { 101 209 106 214 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Set_20_Line_20_Width_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Set_20_Line_20_Width_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 21 80 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 107 122 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGContextSetLineWidth");
/* IO - VPL Terminal : { 101 154 106 159 }*/
/* IO - VPL Terminal : { 101 203 106 208 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Add_20_Path_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Add_20_Path_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 393 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 150 35 155 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 21 80 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 61 168 77 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 56 219 61 224 }*/
/* IO - VPL Root : { 77 218 82 223 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 263 122 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 274 106 279 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 105 112 121 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGContextAddPath");
/* IO - VPL Terminal : { 100 151 105 156 }*/
/* IO - VPL Terminal : { 100 192 105 197 }*/
/* IO - VPL Root : { 121 171 126 176 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 804 933 }{ 242 313 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 66 35 71 }*/
/* IO - VPL Root : { 30 125 35 130 }*/
/* IO - VPL Root : { 30 181 35 186 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 75 80 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Fill RGBA");
/* IO - VPL Terminal : { 59 92 64 97 }*/
/* IO - VPL Terminal : { 59 125 64 130 }*/
/* IO - VPL Root : { 80 111 85 116 }*/
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

/* Start Operations: { 60 60 }{ 242 301 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 196 80 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 59 219 64 224 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 120 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 59 148 64 153 }*/
/* IO - VPL Root : { 80 127 85 132 }*/
/* IO - VPL Root : { 80 140 85 145 }*/
/* IO - VPL Root : { 80 157 85 162 }*/
/* IO - VPL Root : { 80 173 85 178 }*/
/* End Operation */

/* Begin Operation: { 106 66 122 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Fill RGB Color");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 110 106 115 }*/
/* IO - VPL Terminal : { 101 135 106 140 }*/
/* IO - VPL Terminal : { 101 162 106 167 }*/
/* IO - VPL Terminal : { 101 183 106 188 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 105 164 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 164 117 169 122 }*/
/* End Operation */

/* Begin Operation: { 193 23 201 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 188 117 193 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,2,3,3);
	result = connect_root_to_terminal(ptrA,3,2,4,3);
	result = connect_root_to_terminal(ptrA,4,2,5,3);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
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
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 171 80 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Stroke RGBA");
/* IO - VPL Terminal : { 59 199 64 204 }*/
/* IO - VPL Terminal : { 59 229 64 234 }*/
/* IO - VPL Root : { 80 214 85 219 }*/
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

/* Start Operations: { 60 60 }{ 252 302 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 196 80 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 59 219 64 224 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 120 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 59 148 64 153 }*/
/* IO - VPL Root : { 80 127 85 132 }*/
/* IO - VPL Root : { 80 140 85 145 }*/
/* IO - VPL Root : { 80 157 85 162 }*/
/* IO - VPL Root : { 80 173 85 178 }*/
/* End Operation */

/* Begin Operation: { 106 62 122 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Stroke RGB Color");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 108 106 113 }*/
/* IO - VPL Terminal : { 101 132 106 137 }*/
/* IO - VPL Terminal : { 101 156 106 161 }*/
/* IO - VPL Terminal : { 101 180 106 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 146 106 162 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 162 118 167 123 }*/
/* End Operation */

/* Begin Operation: { 191 24 199 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 186 118 191 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,2,3,3);
	result = connect_root_to_terminal(ptrA,3,2,4,3);
	result = connect_root_to_terminal(ptrA,4,2,5,3);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
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
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 102 80 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 80 117 85 122 }*/
/* End Operation */

/* Begin Operation: { 106 23 114 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 117 106 122 }*/
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

/* Begin Operation: { 106 136 122 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"do both??");
/* IO - VPL Terminal : { 101 159 106 164 }*/
/* IO - VPL Terminal : { 101 184 106 189 }*/
/* IO - VPL Root : { 122 172 127 177 }*/
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

/* Start Operations: { 131 229 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 72 80 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 59 84 64 89 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 136 80 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 59 148 64 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 71 122 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kCGPathFillStroke");
/* IO - VPL Root : { 122 120 127 125 }*/
/* End Operation */

/* Begin Operation: { 148 26 156 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 120 148 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
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

/* Begin Operation: { 64 72 80 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 59 84 64 89 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 133 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"FALSE");
/* IO - VPL Terminal : { 59 148 64 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 85 122 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kCGPathFill");
/* IO - VPL Root : { 122 116 127 121 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
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

/* Begin Operation: { 64 69 80 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"FALSE");
/* IO - VPL Terminal : { 59 84 64 89 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 135 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 59 148 64 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 77 122 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kCGPathStroke");
/* IO - VPL Root : { 122 116 127 121 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,1,2);
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

/* Begin Operation: { 148 25 164 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~CGContextDrawPath");
/* IO - VPL Terminal : { 143 66 148 71 }*/
/* IO - VPL Terminal : { 143 119 148 124 }*/
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

/* Begin Operation: { 58 25 74 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 53 82 58 87 }*/
/* IO - VPL Root : { 74 81 79 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 26 114 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 93 37 98 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 97 96 113 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGContextDrawPath");
/* IO - VPL Terminal : { 92 137 97 142 }*/
/* IO - VPL Terminal : { 92 180 97 185 }*/
/* IO - VPL Root : { 113 159 118 164 }*/
/* End Operation */

/* Begin Operation: { 139 18 147 210 } */
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

/* Begin Operation: { 190 24 198 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Add_20_Star_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Add_20_Star_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 282 348 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 64 35 69 }*/
/* IO - VPL Root : { 30 119 35 124 }*/
/* IO - VPL Root : { 30 181 35 186 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 188 80 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CG Path");
/* IO - VPL Terminal : { 59 219 64 224 }*/
/* IO - VPL Root : { 80 219 85 224 }*/
/* End Operation */

/* Begin Operation: { 106 164 122 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Mutable");
/* IO - VPL Terminal : { 101 219 106 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 80 164 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Star");
/* IO - VPL Terminal : { 143 96 148 101 }*/
/* IO - VPL Terminal : { 143 119 148 124 }*/
/* IO - VPL Terminal : { 143 145 148 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 177 164 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Path");
/* IO - VPL Terminal : { 143 219 148 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 45 206 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Path");
/* IO - VPL Terminal : { 185 64 190 69 }*/
/* IO - VPL Terminal : { 185 99 190 104 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 171 206 271 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release Path");
/* IO - VPL Terminal : { 185 219 190 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* Synchro [5 to 4] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Context_2F_Add_20_Burst_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Context_2F_Add_20_Burst_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 282 348 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 64 35 69 }*/
/* IO - VPL Root : { 31 93 36 98 }*/
/* IO - VPL Root : { 30 119 35 124 }*/
/* IO - VPL Root : { 30 181 35 186 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 188 80 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CG Path");
/* IO - VPL Terminal : { 59 219 64 224 }*/
/* IO - VPL Root : { 80 219 85 224 }*/
/* End Operation */

/* Begin Operation: { 106 164 122 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Mutable");
/* IO - VPL Terminal : { 101 219 106 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 61 165 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Burst");
/* IO - VPL Terminal : { 142 76 147 81 }*/
/* IO - VPL Terminal : { 142 93 147 98 }*/
/* IO - VPL Terminal : { 142 110 147 115 }*/
/* IO - VPL Terminal : { 142 127 147 132 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 177 164 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Path");
/* IO - VPL Terminal : { 143 219 148 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 45 206 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Path");
/* IO - VPL Terminal : { 185 64 190 69 }*/
/* IO - VPL Terminal : { 185 99 190 104 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 171 206 271 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release Path");
/* IO - VPL Terminal : { 185 219 190 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,4,0,4,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* Synchro [5 to 4] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_CG_20_Path_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CG_20_Path_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("CGPath Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Current Transform",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 249 1252 }{ 564 295 } */
Nat4 VPLU_CG_20_Path_2F_Set_20_CGPathRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Set_20_CGPathRef_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 147 33 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 54 75 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"CGPath Reference");
/* IO - VPL Terminal : { 54 91 59 96 }*/
/* IO - VPL Terminal : { 54 130 59 135 }*/
/* IO - VPL Root : { 75 111 80 116 }*/
/* End Operation */

/* Begin Operation: { 109 19 117 211 } */
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


Nat4 VPLU_CG_20_Path_2F_Get_20_CGPathRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Get_20_CGPathRef_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 104 33 109 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 47 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"CGPath Reference");
/* IO - VPL Terminal : { 59 104 64 109 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
/* IO - VPL Root : { 80 123 85 128 }*/
/* End Operation */

/* Begin Operation: { 108 21 116 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 103 106 108 111 }*/
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


Nat4 VPLU_CG_20_Path_2F_Dispose_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Dispose_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 209 281 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 151 80 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 80 162 85 167 }*/
/* End Operation */

/* Begin Operation: { 106 87 122 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set CGPathRef");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 162 106 167 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Create_20_Mutable_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Create_20_Mutable_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 113 35 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 86 80 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,1,"CGPathCreateMutable");
/* IO - VPL Root : { 80 153 85 158 }*/
/* End Operation */

/* Begin Operation: { 106 79 122 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set CGPathRef");
/* IO - VPL Terminal : { 101 113 106 118 }*/
/* IO - VPL Terminal : { 101 153 106 158 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Close_20_Subpath_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Close_20_Subpath_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 301 561 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 120 35 125 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 68 80 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 59 120 64 125 }*/
/* IO - VPL Root : { 80 120 85 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 46 122 73 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 57 106 62 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 116 122 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGPathCloseSubpath");
/* IO - VPL Terminal : { 101 179 106 184 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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


Nat4 VPLU_CG_20_Path_2F_Release_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Release_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 279 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 63 80 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 185 122 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 196 106 201 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 67 122 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CGPathRelease");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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


Nat4 VPLU_CG_20_Path_2F_Retain_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Retain_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 204 282 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 63 80 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 182 122 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 193 106 198 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 70 122 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGPathRetain");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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


Nat4 VPLU_CG_20_Path_2F_Add_20_Arc_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Arc_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 173 641 }{ 201 330 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 55 35 60 }*/
/* IO - VPL Root : { 30 91 35 96 }*/
/* IO - VPL Root : { 30 113 35 118 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
/* IO - VPL Root : { 30 163 35 168 }*/
/* IO - VPL Root : { 30 191 35 196 }*/
/* IO - VPL Root : { 30 203 35 208 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 29 80 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 59 81 64 86 }*/
/* IO - VPL Root : { 80 81 85 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 64 153 80 307 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Transform");
/* IO - VPL Terminal : { 59 225 64 230 }*/
/* IO - VPL Root : { 80 225 85 230 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 131 122 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,8,1,"CGPathAddArc");
/* IO - VPL Terminal : { 101 140 106 145 }*/
/* IO - VPL Terminal : { 101 151 106 156 }*/
/* IO - VPL Terminal : { 101 162 106 167 }*/
/* IO - VPL Terminal : { 101 173 106 178 }*/
/* IO - VPL Terminal : { 101 184 106 189 }*/
/* IO - VPL Terminal : { 101 195 106 200 }*/
/* IO - VPL Terminal : { 101 206 106 211 }*/
/* IO - VPL Terminal : { 101 217 106 222 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,3,0,4,4);
	result = connect_root_to_terminal(ptrA,4,0,5,4);
	result = connect_root_to_terminal(ptrA,5,0,6,4);
	result = connect_root_to_terminal(ptrA,6,0,7,4);
	result = connect_root_to_terminal(ptrA,7,0,8,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Add_20_Arc_20_Rect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Arc_20_Rect_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 474 1019 }{ 383 424 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 52 35 57 }*/
/* IO - VPL Root : { 30 89 35 94 }*/
/* IO - VPL Root : { 30 131 35 136 }*/
/* IO - VPL Root : { 30 177 35 182 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 111 11 127 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetMidX");
/* IO - VPL Terminal : { 106 62 111 67 }*/
/* IO - VPL Root : { 127 62 132 67 }*/
/* End Operation */

/* Begin Operation: { 71 23 87 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetMidY");
/* IO - VPL Terminal : { 66 73 71 78 }*/
/* IO - VPL Root : { 87 73 92 78 }*/
/* End Operation */

/* Begin Operation: { 129 144 145 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetWidth");
/* IO - VPL Terminal : { 124 196 129 201 }*/
/* IO - VPL Root : { 145 196 150 201 }*/
/* End Operation */

/* Begin Operation: { 177 175 193 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 172 196 177 201 }*/
/* IO - VPL Root : { 193 196 198 201 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 216 78 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_evaluate(tempOperation,environment,"A-90");
/* IO - VPL Terminal : { 57 240 62 245 }*/
/* IO - VPL Root : { 78 240 83 245 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 158 58 174 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Deg To Rad");
/* IO - VPL Terminal : { 153 97 158 102 }*/
/* IO - VPL Root : { 174 97 179 102 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 102 232 118 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 97 240 102 245 }*/
/* IO - VPL Terminal : { 97 250 102 255 }*/
/* IO - VPL Root : { 118 245 123 250 }*/
/* End Operation */

/* Begin Operation: { 195 68 211 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Deg To Rad");
/* IO - VPL Terminal : { 190 107 195 112 }*/
/* IO - VPL Root : { 211 107 216 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 209 160 225 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 225 163 230 168 }*/
/* End Operation */

/* Begin Operation: { 177 241 193 307 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CG Path");
/* IO - VPL Terminal : { 172 272 177 277 }*/
/* IO - VPL Root : { 193 272 198 277 }*/
/* End Operation */

/* Begin Operation: { 234 275 250 363 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin Path");
/* IO - VPL Terminal : { 229 318 234 323 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 242 49 258 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc");
/* IO - VPL Terminal : { 237 51 242 56 }*/
/* IO - VPL Terminal : { 237 62 242 67 }*/
/* IO - VPL Terminal : { 237 73 242 78 }*/
/* IO - VPL Terminal : { 237 86 242 91 }*/
/* IO - VPL Terminal : { 237 97 242 102 }*/
/* IO - VPL Terminal : { 237 107 242 112 }*/
/* IO - VPL Terminal : { 237 117 242 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 280 33 296 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Path");
/* IO - VPL Terminal : { 275 52 280 57 }*/
/* IO - VPL Terminal : { 275 84 280 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 273 224 289 322 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release Path");
/* IO - VPL Terminal : { 268 271 273 276 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 318 36 326 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,4,0,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
	result = connect_root_to_terminal(ptrA,1,10,1,12);
	result = connect_root_to_terminal(ptrA,1,1,2,12);
	result = connect_root_to_terminal(ptrA,1,2,3,12);
	result = connect_root_to_terminal(ptrA,1,4,4,12);
	result = connect_root_to_terminal(ptrA,1,6,5,12);
	result = connect_root_to_terminal(ptrA,1,8,6,12);
	result = connect_root_to_terminal(ptrA,1,9,7,12);
	result = connect_root_to_terminal(ptrA,1,0,1,13);
	result = connect_root_to_terminal(ptrA,1,10,2,13);
	result = connect_root_to_terminal(ptrA,1,10,1,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [12 to 11] */
/* Synchro [13 to 12] */
/* Synchro [14 to 13] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Add_20_Arc_20_To_20_Point_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Arc_20_To_20_Point_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 345 87 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 63 33 68 }*/
/* IO - VPL Root : { 28 105 33 110 }*/
/* IO - VPL Root : { 28 125 33 130 }*/
/* IO - VPL Root : { 28 161 33 166 }*/
/* IO - VPL Root : { 28 179 33 184 }*/
/* IO - VPL Root : { 28 200 33 205 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 11 94 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 73 63 78 68 }*/
/* IO - VPL Root : { 94 63 99 68 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 119 32 135 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 43 119 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 76 137 92 291 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Transform");
/* IO - VPL Terminal : { 71 209 76 214 }*/
/* IO - VPL Root : { 92 209 97 214 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 117 110 133 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,7,1,"CGPathAddArcToPoint");
/* IO - VPL Terminal : { 112 125 117 130 }*/
/* IO - VPL Terminal : { 112 142 117 147 }*/
/* IO - VPL Terminal : { 112 159 117 164 }*/
/* IO - VPL Terminal : { 112 176 117 181 }*/
/* IO - VPL Terminal : { 112 193 117 198 }*/
/* IO - VPL Terminal : { 112 210 117 215 }*/
/* IO - VPL Terminal : { 112 227 117 232 }*/
/* IO - VPL Root : { 133 179 138 184 }*/
/* End Operation */

/* Begin Operation: { 166 21 174 213 } */
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
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,3,0,4,4);
	result = connect_root_to_terminal(ptrA,4,0,5,4);
	result = connect_root_to_terminal(ptrA,5,0,6,4);
	result = connect_root_to_terminal(ptrA,6,0,7,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Add_20_Line_20_To_20_Point_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Line_20_To_20_Point_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 28 174 33 179 }*/
/* IO - VPL Root : { 28 201 33 206 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 11 94 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 73 63 78 68 }*/
/* IO - VPL Root : { 94 63 99 68 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 119 32 135 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 43 119 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 78 138 94 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Transform");
/* IO - VPL Terminal : { 73 210 78 215 }*/
/* IO - VPL Root : { 94 210 99 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 117 109 133 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,1,"CGPathAddLineToPoint");
/* IO - VPL Terminal : { 112 136 117 141 }*/
/* IO - VPL Terminal : { 112 165 117 170 }*/
/* IO - VPL Terminal : { 112 194 117 199 }*/
/* IO - VPL Terminal : { 112 223 117 228 }*/
/* IO - VPL Root : { 133 179 138 184 }*/
/* End Operation */

/* Begin Operation: { 166 21 174 213 } */
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
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,3,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Add_20_Rect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Rect_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 187 370 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 178 35 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 26 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 78 85 83 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 61 151 77 305 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Transform");
/* IO - VPL Terminal : { 56 223 61 228 }*/
/* IO - VPL Root : { 77 223 82 228 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 129 122 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CGPathAddRect");
/* IO - VPL Terminal : { 101 153 106 158 }*/
/* IO - VPL Terminal : { 101 179 106 184 }*/
/* IO - VPL Terminal : { 101 205 106 210 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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
	result = connect_root_to_terminal(ptrA,2,0,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Add_20_Path_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Path_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 234 318 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 199 35 204 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 16 122 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 101 68 106 73 }*/
/* IO - VPL Root : { 122 68 127 73 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 32 164 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 143 43 148 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 147 122 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 101 199 106 204 }*/
/* IO - VPL Root : { 122 199 127 204 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 229 164 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 143 240 148 245 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 64 78 80 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Transform");
/* IO - VPL Terminal : { 59 150 64 155 }*/
/* IO - VPL Root : { 80 150 85 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 100 164 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CGPathAddPath");
/* IO - VPL Terminal : { 143 124 148 129 }*/
/* IO - VPL Terminal : { 143 150 148 155 }*/
/* IO - VPL Terminal : { 143 176 148 181 }*/
/* IO - VPL Root : { 164 150 169 155 }*/
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,3,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Move_20_To_20_Point_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Move_20_To_20_Point_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 160 35 165 }*/
/* IO - VPL Root : { 30 192 35 197 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 26 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 78 85 83 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 32 122 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 43 106 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 66 158 82 312 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Current Transform");
/* IO - VPL Terminal : { 61 230 66 235 }*/
/* IO - VPL Root : { 82 230 87 235 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 116 122 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,1,"CGPathMoveToPoint");
/* IO - VPL Terminal : { 101 140 106 145 }*/
/* IO - VPL Terminal : { 101 166 106 171 }*/
/* IO - VPL Terminal : { 101 192 106 197 }*/
/* IO - VPL Terminal : { 101 218 106 223 }*/
/* IO - VPL Root : { 122 179 127 184 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
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
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,3,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Equal_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Equal_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 228 368 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 191 35 196 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 26 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 78 85 83 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 24 122 51 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 35 106 40 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 64 168 80 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 59 220 64 225 }*/
/* IO - VPL Root : { 80 220 85 225 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 90 122 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGPathEqualToPath");
/* IO - VPL Terminal : { 101 129 106 134 }*/
/* IO - VPL Terminal : { 101 170 106 175 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 106 257 122 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 268 106 273 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 148 57 164 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Integer To Boolean");
/* IO - VPL Terminal : { 143 117 148 122 }*/
/* IO - VPL Root : { 164 117 169 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
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
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
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


Nat4 VPLU_CG_20_Path_2F_Is_20_Empty_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Is_20_Empty_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 228 368 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 128 35 133 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 76 80 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 59 128 64 133 }*/
/* IO - VPL Root : { 80 128 85 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 24 122 51 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 35 106 40 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 100 122 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGPathIsEmpty");
/* IO - VPL Terminal : { 101 150 106 155 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 148 57 164 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Integer To Boolean");
/* IO - VPL Terminal : { 143 117 148 122 }*/
/* IO - VPL Root : { 164 117 169 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
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
/* IO - VPL Root : { 30 114 35 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 103 80 134 } */
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


Nat4 VPLU_CG_20_Path_2F_Is_20_Rect_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Is_20_Rect_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 228 368 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 128 35 133 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 76 80 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGPathRef");
/* IO - VPL Terminal : { 59 128 64 133 }*/
/* IO - VPL Root : { 80 128 85 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 24 122 51 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 35 106 40 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 105 122 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"CGPathIsRect");
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Terminal : { 101 165 106 170 }*/
/* IO - VPL Root : { 122 134 127 139 }*/
/* IO - VPL Root : { 122 165 127 170 }*/
/* End Operation */

/* Begin Operation: { 148 21 164 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Integer To Boolean");
/* IO - VPL Terminal : { 143 81 148 86 }*/
/* IO - VPL Root : { 164 81 169 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 81 190 86 }*/
/* IO - VPL Terminal : { 185 168 190 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
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
/* IO - VPL Root : { 30 114 35 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 69 80 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 80 84 85 89 }*/
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


Nat4 VPLU_CG_20_Path_2F_Create_20_Corners_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Create_20_Corners_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 301 326 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 75 35 80 }*/
/* IO - VPL Root : { 30 151 35 156 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 119 80 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 59 151 64 156 }*/
/* IO - VPL Root : { 80 139 85 144 }*/
/* IO - VPL Root : { 80 161 85 166 }*/
/* End Operation */

/* Begin Operation: { 106 19 122 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Mutable");
/* IO - VPL Terminal : { 101 75 106 80 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 59 164 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Start Point");
/* IO - VPL Terminal : { 143 75 148 80 }*/
/* IO - VPL Terminal : { 143 123 148 128 }*/
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

/* Begin Operation: { 64 120 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 59 148 64 153 }*/
/* IO - VPL Root : { 80 135 85 140 }*/
/* IO - VPL Root : { 80 159 85 164 }*/
/* End Operation */

/* Begin Operation: { 106 66 122 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Move To Point");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 118 106 123 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 166 164 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Lines");
/* IO - VPL Terminal : { 143 189 148 194 }*/
/* IO - VPL Terminal : { 143 214 148 219 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 120 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 59 148 64 153 }*/
/* IO - VPL Root : { 80 135 85 140 }*/
/* IO - VPL Root : { 80 159 85 164 }*/
/* End Operation */

/* Begin Operation: { 106 55 122 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Line To Point");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 115 106 120 }*/
/* IO - VPL Terminal : { 101 146 106 151 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 25 206 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Subpath");
/* IO - VPL Terminal : { 185 75 190 80 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,1,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Get_20_Current_20_Transform_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Get_20_Current_20_Transform_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 58 51 74 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Transform");
/* IO - VPL Terminal : { 53 112 58 117 }*/
/* IO - VPL Root : { 74 91 79 96 }*/
/* IO - VPL Root : { 74 133 79 138 }*/
/* End Operation */

/* Begin Operation: { 107 20 115 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 112 107 117 }*/
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


Nat4 VPLU_CG_20_Path_2F_Set_20_Current_20_Transform_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Set_20_Current_20_Transform_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 73 35 78 }*/
/* IO - VPL Root : { 30 154 35 159 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 46 80 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Current Transform");
/* IO - VPL Terminal : { 59 86 64 91 }*/
/* IO - VPL Terminal : { 59 128 64 133 }*/
/* IO - VPL Root : { 80 107 85 112 }*/
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


Nat4 VPLU_CG_20_Path_2F_Begin_20_Path_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Begin_20_Path_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 60 91 76 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Mutable");
/* IO - VPL Terminal : { 55 144 60 149 }*/
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



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Close_20_Path_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Close_20_Path_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 78 102 94 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close Subpath");
/* IO - VPL Terminal : { 73 151 78 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 132 21 140 213 } */
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


Nat4 VPLU_CG_20_Path_2F_Release_20_Path_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Release_20_Path_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 58 39 74 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 53 74 58 79 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 137 74 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Dispose");
/* IO - VPL Terminal : { 53 170 58 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 20 116 212 } */
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


Nat4 VPLU_CG_20_Path_2F_Add_20_Line_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Line_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 100 399 }{ 205 310 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 52 35 57 }*/
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
/* IO - VPL Root : { 30 180 35 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Move To Point");
/* IO - VPL Terminal : { 59 40 64 45 }*/
/* IO - VPL Terminal : { 59 74 64 79 }*/
/* IO - VPL Terminal : { 59 111 64 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 144 80 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Line To Point");
/* IO - VPL Terminal : { 59 173 64 178 }*/
/* IO - VPL Terminal : { 59 204 64 209 }*/
/* IO - VPL Terminal : { 59 235 64 240 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 27 114 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,4,0,2,2);
	result = connect_root_to_terminal(ptrA,5,0,3,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Add_20_Oval_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Oval_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 461 428 }{ 387 584 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 52 33 57 }*/
/* IO - VPL Root : { 28 102 33 107 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
/* IO - VPL Root : { 28 190 33 195 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 74 71 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 50 120 55 125 }*/
/* IO - VPL Root : { 71 104 76 109 }*/
/* IO - VPL Root : { 71 136 76 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 118 186 134 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 134 189 139 194 }*/
/* End Operation */

/* Begin Operation: { 118 209 134 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 134 212 139 217 }*/
/* End Operation */

/* Begin Operation: { 75 256 91 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"360");
/* IO - VPL Root : { 91 266 96 271 }*/
/* End Operation */

/* Begin Operation: { 120 227 136 309 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Deg To Rad");
/* IO - VPL Terminal : { 115 266 120 271 }*/
/* IO - VPL Root : { 136 266 141 271 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 90 13 106 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGAffineTransformMakeTranslation");
/* IO - VPL Terminal : { 85 83 90 88 }*/
/* IO - VPL Terminal : { 85 155 90 160 }*/
/* IO - VPL Root : { 106 119 111 124 }*/
/* End Operation */

/* Begin Operation: { 136 -2 152 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CGAffineTransformScale");
/* IO - VPL Terminal : { 131 35 136 40 }*/
/* IO - VPL Terminal : { 131 74 136 79 }*/
/* IO - VPL Terminal : { 131 113 136 118 }*/
/* IO - VPL Root : { 152 74 157 79 }*/
/* End Operation */

/* Begin Operation: { 113 350 129 416 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CG Path");
/* IO - VPL Terminal : { 108 381 113 386 }*/
/* IO - VPL Root : { 129 381 134 386 }*/
/* End Operation */

/* Begin Operation: { 170 384 186 472 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin Path");
/* IO - VPL Terminal : { 165 427 170 432 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 197 9 213 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Current Transform");
/* IO - VPL Terminal : { 192 48 197 53 }*/
/* IO - VPL Terminal : { 192 122 197 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 163 173 179 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc");
/* IO - VPL Terminal : { 158 178 163 183 }*/
/* IO - VPL Terminal : { 158 189 163 194 }*/
/* IO - VPL Terminal : { 158 200 163 205 }*/
/* IO - VPL Terminal : { 158 212 163 217 }*/
/* IO - VPL Terminal : { 158 221 163 226 }*/
/* IO - VPL Terminal : { 158 231 163 236 }*/
/* IO - VPL Terminal : { 158 242 163 247 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 253 176 269 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Path");
/* IO - VPL Terminal : { 248 200 253 205 }*/
/* IO - VPL Terminal : { 248 226 253 231 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 209 333 225 431 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release Path");
/* IO - VPL Terminal : { 204 380 209 385 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 307 27 315 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,3,0,2,7);
	result = connect_root_to_terminal(ptrA,4,0,3,7);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,8,1,10);
	result = connect_root_to_terminal(ptrA,1,7,2,10);
	result = connect_root_to_terminal(ptrA,1,8,1,11);
	result = connect_root_to_terminal(ptrA,1,2,2,11);
	result = connect_root_to_terminal(ptrA,1,2,3,11);
	result = connect_root_to_terminal(ptrA,1,3,4,11);
	result = connect_root_to_terminal(ptrA,1,2,5,11);
	result = connect_root_to_terminal(ptrA,1,5,6,11);
	result = connect_root_to_terminal(ptrA,1,2,7,11);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
	result = connect_root_to_terminal(ptrA,1,8,2,12);
	result = connect_root_to_terminal(ptrA,1,8,1,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [10 to 9] */
/* Synchro [11 to 10] */
/* Synchro [12 to 11] */
/* Synchro [13 to 12] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Add_20_Diamond_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Diamond_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 188 315 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 158 35 163 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 114 80 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"New Corners");
/* IO - VPL Terminal : { 59 158 64 163 }*/
/* IO - VPL Root : { 80 158 85 163 }*/
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

/* Start Operations: { 588 765 }{ 401 415 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 72 80 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGRect");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 88 85 93 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 124 85 129 }*/
/* IO - VPL Root : { 80 142 85 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 216 122 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 101 237 106 242 }*/
/* IO - VPL Root : { 122 237 127 242 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 149 175 165 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 144 183 149 188 }*/
/* IO - VPL Terminal : { 144 193 149 198 }*/
/* IO - VPL Root : { 165 188 170 193 }*/
/* End Operation */

/* Begin Operation: { 190 100 206 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 185 112 190 117 }*/
/* IO - VPL Terminal : { 185 131 190 136 }*/
/* IO - VPL Root : { 206 122 211 127 }*/
/* End Operation */

/* Begin Operation: { 106 291 122 337 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 101 312 106 317 }*/
/* IO - VPL Root : { 122 312 127 317 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 230 164 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 143 238 148 243 }*/
/* IO - VPL Terminal : { 143 248 148 253 }*/
/* IO - VPL Root : { 164 243 169 248 }*/
/* End Operation */

/* Begin Operation: { 106 80 122 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 88 106 93 }*/
/* IO - VPL Terminal : { 101 98 106 103 }*/
/* IO - VPL Root : { 122 93 127 98 }*/
/* End Operation */

/* Begin Operation: { 274 144 290 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 269 157 274 162 }*/
/* IO - VPL Terminal : { 269 175 274 180 }*/
/* IO - VPL Root : { 290 166 295 171 }*/
/* End Operation */

/* Begin Operation: { 108 124 124 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 103 132 108 137 }*/
/* IO - VPL Terminal : { 103 142 108 147 }*/
/* IO - VPL Root : { 124 137 129 142 }*/
/* End Operation */

/* Begin Operation: { 232 51 248 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 227 63 232 68 }*/
/* IO - VPL Terminal : { 227 82 232 87 }*/
/* IO - VPL Root : { 248 73 253 78 }*/
/* End Operation */

/* Begin Operation: { 190 192 206 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 185 202 190 207 }*/
/* IO - VPL Terminal : { 185 224 190 229 }*/
/* IO - VPL Root : { 206 214 211 219 }*/
/* End Operation */

/* Begin Operation: { 316 94 332 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"pack");
/* IO - VPL Terminal : { 311 102 316 107 }*/
/* IO - VPL Terminal : { 311 113 316 118 }*/
/* IO - VPL Terminal : { 311 123 316 128 }*/
/* IO - VPL Terminal : { 311 134 316 139 }*/
/* IO - VPL Root : { 332 116 337 121 }*/
/* End Operation */

/* Begin Operation: { 358 22 366 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 353 116 358 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,4,1,1,5);
	result = connect_root_to_terminal(ptrA,2,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,3,1,2,7);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,2,1,1,9);
	result = connect_root_to_terminal(ptrA,4,1,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,1,3,2,10);
	result = connect_root_to_terminal(ptrA,1,6,1,11);
	result = connect_root_to_terminal(ptrA,1,1,2,11);
	result = connect_root_to_terminal(ptrA,1,4,1,12);
	result = connect_root_to_terminal(ptrA,1,8,2,12);
	result = connect_root_to_terminal(ptrA,1,10,3,12);
	result = connect_root_to_terminal(ptrA,1,11,4,12);
	result = connect_root_to_terminal(ptrA,1,12,1,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 108 53 124 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Corners");
/* IO - VPL Terminal : { 103 78 108 83 }*/
/* IO - VPL Terminal : { 103 127 108 132 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 42 156 234 } */
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


Nat4 VPLU_CG_20_Path_2F_Add_20_Corners_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Corners_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 250 317 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 78 80 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CG Path");
/* IO - VPL Terminal : { 59 109 64 114 }*/
/* IO - VPL Root : { 80 109 85 114 }*/
/* End Operation */

/* Begin Operation: { 106 81 122 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Corners");
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Terminal : { 101 158 106 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 57 164 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Path");
/* IO - VPL Terminal : { 143 78 148 83 }*/
/* IO - VPL Terminal : { 143 109 148 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 156 164 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release Path");
/* IO - VPL Terminal : { 143 206 148 211 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Add_20_Rounded_20_Rect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Rounded_20_Rect_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 91 747 }{ 312 413 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 56 35 61 }*/
/* IO - VPL Root : { 30 95 35 100 }*/
/* IO - VPL Root : { 30 145 35 150 }*/
/* IO - VPL Root : { 30 193 35 198 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 229 80 295 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CG Path");
/* IO - VPL Terminal : { 59 260 64 265 }*/
/* IO - VPL Root : { 80 260 85 265 }*/
/* End Operation */

/* Begin Operation: { 106 262 122 350 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin Path");
/* IO - VPL Terminal : { 101 305 106 310 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 101 122 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Apply Transform");
/* IO - VPL Terminal : { 101 122 106 127 }*/
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 168 106 173 }*/
/* IO - VPL Terminal : { 101 191 106 196 }*/
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

/* Start Operations: { 60 60 }{ 307 320 } */
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

/* Begin Operation: { 64 94 80 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 140 64 145 }*/
/* IO - VPL Root : { 80 124 85 129 }*/
/* IO - VPL Root : { 80 156 85 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 33 122 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGAffineTransformMakeTranslation");
/* IO - VPL Terminal : { 101 103 106 108 }*/
/* IO - VPL Terminal : { 101 175 106 180 }*/
/* IO - VPL Root : { 122 139 127 144 }*/
/* End Operation */

/* Begin Operation: { 148 22 164 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"CGAffineTransformScale");
/* IO - VPL Terminal : { 143 59 148 64 }*/
/* IO - VPL Terminal : { 143 98 148 103 }*/
/* IO - VPL Terminal : { 143 137 148 142 }*/
/* IO - VPL Root : { 164 98 169 103 }*/
/* End Operation */

/* Begin Operation: { 190 28 206 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Current Transform");
/* IO - VPL Terminal : { 185 67 190 72 }*/
/* IO - VPL Terminal : { 185 141 190 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 30 240 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,4,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 82 164 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Round Rect");
/* IO - VPL Terminal : { 143 95 148 100 }*/
/* IO - VPL Terminal : { 143 122 148 127 }*/
/* IO - VPL Terminal : { 143 145 148 150 }*/
/* IO - VPL Terminal : { 143 172 148 177 }*/
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

/* Start Operations: { 170 437 }{ 252 347 } */
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

/* Begin Operation: { 64 168 80 280 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetHeight");
/* IO - VPL Terminal : { 59 222 64 227 }*/
/* IO - VPL Root : { 80 222 85 227 }*/
/* End Operation */

/* Begin Operation: { 106 166 122 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 101 177 106 182 }*/
/* IO - VPL Terminal : { 101 190 106 195 }*/
/* IO - VPL Root : { 122 184 127 189 }*/
/* End Operation */

/* Begin Operation: { 64 44 80 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetWidth");
/* IO - VPL Terminal : { 59 96 64 101 }*/
/* IO - VPL Root : { 80 96 85 101 }*/
/* End Operation */

/* Begin Operation: { 106 110 122 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 101 121 106 126 }*/
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Root : { 122 128 127 133 }*/
/* End Operation */

/* Begin Operation: { 148 44 164 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add RoundRect");
/* IO - VPL Terminal : { 143 58 148 63 }*/
/* IO - VPL Terminal : { 143 92 148 97 }*/
/* IO - VPL Terminal : { 143 123 148 128 }*/
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

/* Start Operations: { 109 579 }{ 332 351 } */
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

/* Begin Operation: { 64 111 80 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 59 132 64 137 }*/
/* IO - VPL Root : { 80 132 85 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 187 80 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 59 208 64 213 }*/
/* IO - VPL Root : { 80 208 85 213 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 22 122 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Move To Point");
/* IO - VPL Terminal : { 101 34 106 39 }*/
/* IO - VPL Terminal : { 101 71 106 76 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 254 80 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 80 257 85 262 }*/
/* End Operation */

/* Begin Operation: { 106 149 122 271 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc To Point");
/* IO - VPL Terminal : { 101 157 106 162 }*/
/* IO - VPL Terminal : { 101 178 106 183 }*/
/* IO - VPL Terminal : { 101 200 106 205 }*/
/* IO - VPL Terminal : { 101 221 106 226 }*/
/* IO - VPL Terminal : { 101 240 106 245 }*/
/* IO - VPL Terminal : { 101 257 106 262 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 59 164 70 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 164 62 169 67 }*/
/* End Operation */

/* Begin Operation: { 190 33 206 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc To Point");
/* IO - VPL Terminal : { 185 41 190 46 }*/
/* IO - VPL Terminal : { 185 62 190 67 }*/
/* IO - VPL Terminal : { 185 84 190 89 }*/
/* IO - VPL Terminal : { 185 105 190 110 }*/
/* IO - VPL Terminal : { 185 124 190 129 }*/
/* IO - VPL Terminal : { 185 141 190 146 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 216 164 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 164 219 169 224 }*/
/* End Operation */

/* Begin Operation: { 190 168 206 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc To Point");
/* IO - VPL Terminal : { 185 176 190 181 }*/
/* IO - VPL Terminal : { 185 197 190 202 }*/
/* IO - VPL Terminal : { 185 219 190 224 }*/
/* IO - VPL Terminal : { 185 240 190 245 }*/
/* IO - VPL Terminal : { 185 259 190 264 }*/
/* IO - VPL Terminal : { 185 276 190 281 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 81 248 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Arc To Point");
/* IO - VPL Terminal : { 227 89 232 94 }*/
/* IO - VPL Terminal : { 227 110 232 115 }*/
/* IO - VPL Terminal : { 227 132 232 137 }*/
/* IO - VPL Terminal : { 227 153 232 158 }*/
/* IO - VPL Terminal : { 227 172 232 177 }*/
/* IO - VPL Terminal : { 227 189 232 194 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 28 282 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,3,0,3,5);
	result = connect_root_to_terminal(ptrA,1,1,4,5);
	result = connect_root_to_terminal(ptrA,3,0,5,5);
	result = connect_root_to_terminal(ptrA,1,4,6,5);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,3,0,3,7);
	result = connect_root_to_terminal(ptrA,1,6,4,7);
	result = connect_root_to_terminal(ptrA,1,2,5,7);
	result = connect_root_to_terminal(ptrA,1,4,6,7);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
	result = connect_root_to_terminal(ptrA,1,1,4,9);
	result = connect_root_to_terminal(ptrA,1,8,5,9);
	result = connect_root_to_terminal(ptrA,1,4,6,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,2,0,2,10);
	result = connect_root_to_terminal(ptrA,1,6,3,10);
	result = connect_root_to_terminal(ptrA,2,0,4,10);
	result = connect_root_to_terminal(ptrA,1,2,5,10);
	result = connect_root_to_terminal(ptrA,1,4,6,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 33 198 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,4,0,2,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,2,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 32 206 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Path");
/* IO - VPL Terminal : { 185 56 190 61 }*/
/* IO - VPL Terminal : { 185 82 190 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 213 206 311 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release Path");
/* IO - VPL Terminal : { 185 260 190 265 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 65 240 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,4,0,3,3);
	result = connect_root_to_terminal(ptrA,1,1,4,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,3,0,3,4);
	result = connect_root_to_terminal(ptrA,4,0,4,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* Synchro [5 to 4] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Add_20_Triangle_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Triangle_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 30 58 35 63 }*/
/* IO - VPL Root : { 30 116 35 121 }*/
/* IO - VPL Root : { 30 168 35 173 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 98 80 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Corners");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Terminal : { 59 168 64 173 }*/
/* IO - VPL Root : { 80 145 85 150 }*/
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

/* Start Operations: { 60 60 }{ 482 337 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 68 68 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"North");
/* IO - VPL Terminal : { 47 82 52 87 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 97 88 113 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGRect-to-list");
/* IO - VPL Terminal : { 92 137 97 142 }*/
/* IO - VPL Root : { 113 138 118 143 }*/
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

/* Start Operations: { 60 60 }{ 274 305 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 72 80 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGRect");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 88 85 93 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 124 85 129 }*/
/* IO - VPL Root : { 80 142 85 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 135 122 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 143 106 148 }*/
/* IO - VPL Terminal : { 101 153 106 158 }*/
/* IO - VPL Root : { 122 148 127 153 }*/
/* End Operation */

/* Begin Operation: { 106 189 122 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 197 106 202 }*/
/* IO - VPL Terminal : { 101 207 106 212 }*/
/* IO - VPL Root : { 122 202 127 207 }*/
/* End Operation */

/* Begin Operation: { 148 94 164 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"pack");
/* IO - VPL Terminal : { 143 100 148 105 }*/
/* IO - VPL Terminal : { 143 112 148 117 }*/
/* IO - VPL Terminal : { 143 124 148 129 }*/
/* IO - VPL Terminal : { 143 135 148 140 }*/
/* IO - VPL Root : { 164 116 169 121 }*/
/* End Operation */

/* Begin Operation: { 198 99 214 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Int");
/* IO - VPL Terminal : { 193 116 198 121 }*/
/* IO - VPL Root : { 214 116 219 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 239 22 247 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 234 116 239 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,4,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,3,1,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 139 113 155 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 134 153 139 158 }*/
/* IO - VPL Root : { 155 127 160 132 }*/
/* IO - VPL Root : { 155 144 160 149 }*/
/* IO - VPL Root : { 155 164 160 169 }*/
/* IO - VPL Root : { 155 182 160 187 }*/
/* End Operation */

/* Begin Operation: { 181 205 197 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 176 215 181 220 }*/
/* IO - VPL Terminal : { 176 227 181 232 }*/
/* IO - VPL Root : { 197 221 202 226 }*/
/* End Operation */

/* Begin Operation: { 181 302 197 313 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 197 305 202 310 }*/
/* End Operation */

/* Begin Operation: { 223 279 239 323 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"idiv");
/* IO - VPL Terminal : { 218 291 223 296 }*/
/* IO - VPL Terminal : { 218 305 223 310 }*/
/* IO - VPL Root : { 239 291 244 296 }*/
/* IO - VPL Root : { 239 305 244 310 }*/
/* End Operation */

/* Begin Operation: { 265 226 281 264 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 260 236 265 241 }*/
/* IO - VPL Terminal : { 260 248 265 253 }*/
/* IO - VPL Root : { 281 243 286 248 }*/
/* End Operation */

/* Begin Operation: { 307 115 323 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 302 127 307 132 }*/
/* IO - VPL Terminal : { 302 146 307 151 }*/
/* IO - VPL Root : { 323 137 328 142 }*/
/* End Operation */

/* Begin Operation: { 349 151 365 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 344 164 349 169 }*/
/* IO - VPL Terminal : { 344 182 349 187 }*/
/* IO - VPL Root : { 365 173 370 178 }*/
/* End Operation */

/* Begin Operation: { 351 58 367 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 346 70 351 75 }*/
/* IO - VPL Terminal : { 346 89 351 94 }*/
/* IO - VPL Root : { 367 80 372 85 }*/
/* End Operation */

/* Begin Operation: { 391 104 407 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"pack");
/* IO - VPL Terminal : { 386 112 391 117 }*/
/* IO - VPL Terminal : { 386 135 391 140 }*/
/* IO - VPL Terminal : { 386 159 391 164 }*/
/* IO - VPL Root : { 407 138 412 143 }*/
/* End Operation */

/* Begin Operation: { 443 35 451 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 438 129 443 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,4,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,2,3,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,3,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,3,3,1,9);
	result = connect_root_to_terminal(ptrA,4,3,2,9);
	result = connect_root_to_terminal(ptrA,3,3,1,10);
	result = connect_root_to_terminal(ptrA,2,3,2,10);
	result = connect_root_to_terminal(ptrA,1,8,1,11);
	result = connect_root_to_terminal(ptrA,1,9,2,11);
	result = connect_root_to_terminal(ptrA,1,10,3,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 437 420 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 70 80 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"South");
/* IO - VPL Terminal : { 59 84 64 89 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 160 80 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGRect-to-list");
/* IO - VPL Terminal : { 59 209 64 214 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
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

/* Start Operations: { 60 60 }{ 274 305 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 72 80 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGRect");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 88 85 93 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 124 85 129 }*/
/* IO - VPL Root : { 80 142 85 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 135 122 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 143 106 148 }*/
/* IO - VPL Terminal : { 101 153 106 158 }*/
/* IO - VPL Root : { 122 148 127 153 }*/
/* End Operation */

/* Begin Operation: { 106 189 122 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 197 106 202 }*/
/* IO - VPL Terminal : { 101 207 106 212 }*/
/* IO - VPL Root : { 122 202 127 207 }*/
/* End Operation */

/* Begin Operation: { 148 94 164 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"pack");
/* IO - VPL Terminal : { 143 100 148 105 }*/
/* IO - VPL Terminal : { 143 112 148 117 }*/
/* IO - VPL Terminal : { 143 124 148 129 }*/
/* IO - VPL Terminal : { 143 135 148 140 }*/
/* IO - VPL Root : { 164 116 169 121 }*/
/* End Operation */

/* Begin Operation: { 198 99 214 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Int");
/* IO - VPL Terminal : { 193 116 198 121 }*/
/* IO - VPL Root : { 214 116 219 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 239 22 247 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 234 116 239 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,4,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,3,1,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 170 122 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 101 210 106 215 }*/
/* IO - VPL Root : { 122 184 127 189 }*/
/* IO - VPL Root : { 122 201 127 206 }*/
/* IO - VPL Root : { 122 221 127 226 }*/
/* IO - VPL Root : { 122 239 127 244 }*/
/* End Operation */

/* Begin Operation: { 148 219 164 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 143 229 148 234 }*/
/* IO - VPL Terminal : { 143 241 148 246 }*/
/* IO - VPL Root : { 164 235 169 240 }*/
/* End Operation */

/* Begin Operation: { 148 316 164 327 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 164 319 169 324 }*/
/* End Operation */

/* Begin Operation: { 190 293 206 337 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"idiv");
/* IO - VPL Terminal : { 185 305 190 310 }*/
/* IO - VPL Terminal : { 185 319 190 324 }*/
/* IO - VPL Root : { 206 305 211 310 }*/
/* IO - VPL Root : { 206 319 211 324 }*/
/* End Operation */

/* Begin Operation: { 232 240 248 278 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 227 250 232 255 }*/
/* IO - VPL Terminal : { 227 262 232 267 }*/
/* IO - VPL Root : { 248 257 253 262 }*/
/* End Operation */

/* Begin Operation: { 274 172 290 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 269 184 274 189 }*/
/* IO - VPL Terminal : { 269 203 274 208 }*/
/* IO - VPL Root : { 290 194 295 199 }*/
/* End Operation */

/* Begin Operation: { 316 208 332 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 311 221 316 226 }*/
/* IO - VPL Terminal : { 311 239 316 244 }*/
/* IO - VPL Root : { 332 230 337 235 }*/
/* End Operation */

/* Begin Operation: { 316 115 332 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 311 127 316 132 }*/
/* IO - VPL Terminal : { 311 146 316 151 }*/
/* IO - VPL Root : { 332 137 337 142 }*/
/* End Operation */

/* Begin Operation: { 358 162 374 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"pack");
/* IO - VPL Terminal : { 353 170 358 175 }*/
/* IO - VPL Terminal : { 353 193 358 198 }*/
/* IO - VPL Terminal : { 353 217 358 222 }*/
/* IO - VPL Root : { 374 196 379 201 }*/
/* End Operation */

/* Begin Operation: { 400 22 408 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 395 116 400 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,4,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,2,3,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,3,1,8);
	result = connect_root_to_terminal(ptrA,2,3,2,8);
	result = connect_root_to_terminal(ptrA,1,3,1,9);
	result = connect_root_to_terminal(ptrA,4,3,2,9);
	result = connect_root_to_terminal(ptrA,3,3,1,10);
	result = connect_root_to_terminal(ptrA,1,7,2,10);
	result = connect_root_to_terminal(ptrA,1,8,1,11);
	result = connect_root_to_terminal(ptrA,1,9,2,11);
	result = connect_root_to_terminal(ptrA,1,10,3,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
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

/* Begin Operation: { 106 38 122 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Corners");
/* IO - VPL Terminal : { 101 58 106 63 }*/
/* IO - VPL Terminal : { 101 106 106 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Add_20_Star_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Star_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 434 852 }{ 301 265 } */
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

/* Begin Operation: { 78 55 95 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetWidth");
/* IO - VPL Terminal : { 72 112 77 117 }*/
/* IO - VPL Root : { 96 112 101 117 }*/
/* End Operation */

/* Begin Operation: { 120 89 137 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 114 112 119 117 }*/
/* IO - VPL Root : { 138 112 143 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 89 179 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 156 112 161 117 }*/
/* IO - VPL Root : { 180 112 185 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 78 221 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Burst");
/* IO - VPL Terminal : { 198 82 203 87 }*/
/* IO - VPL Terminal : { 198 112 203 117 }*/
/* IO - VPL Terminal : { 198 131 203 136 }*/
/* IO - VPL Terminal : { 198 180 203 185 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,3,0,4,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 477 852 }{ 462 449 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 64 35 69 }*/
/* IO - VPL Root : { 30 123 35 128 }*/
/* IO - VPL Root : { 30 186 35 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 181 80 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"angles");
/* IO - VPL Terminal : { 59 208 64 213 }*/
/* IO - VPL Root : { 80 197 85 202 }*/
/* IO - VPL Root : { 80 221 85 226 }*/
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

/* Start Operations: { 60 60 }{ 253 294 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 78 80 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,0,1,"pi");
/* IO - VPL Root : { 80 93 85 98 }*/
/* End Operation */

/* Begin Operation: { 106 72 122 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_evaluate(tempOperation,environment,"(2*A)/B");
/* IO - VPL Terminal : { 101 93 106 98 }*/
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Root : { 122 105 127 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 128 164 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 143 149 148 154 }*/
/* IO - VPL Root : { 164 149 169 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 23 198 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 85 190 90 }*/
/* IO - VPL Terminal : { 185 149 190 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 65 104 81 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"radius");
/* IO - VPL Terminal : { 60 131 65 136 }*/
/* IO - VPL Root : { 81 116 86 121 }*/
/* IO - VPL Root : { 81 130 86 135 }*/
/* IO - VPL Root : { 81 144 86 149 }*/
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

/* Start Operations: { 152 789 }{ 365 455 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 64 80 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetWidth");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
/* End Operation */

/* Begin Operation: { 106 95 122 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 98 164 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 164 101 169 106 }*/
/* End Operation */

/* Begin Operation: { 190 43 206 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 185 71 190 76 }*/
/* IO - VPL Terminal : { 185 101 190 106 }*/
/* IO - VPL Root : { 206 86 211 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 170 164 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 143 191 148 196 }*/
/* IO - VPL Root : { 164 191 169 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 107 316 124 340 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"3");
/* IO - VPL Root : { 125 326 130 331 }*/
/* End Operation */

/* Begin Operation: { 149 265 166 309 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 143 277 148 282 }*/
/* IO - VPL Terminal : { 143 291 148 296 }*/
/* IO - VPL Root : { 167 285 172 290 }*/
/* End Operation */

/* Begin Operation: { 192 166 209 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"-");
/* IO - VPL Terminal : { 186 178 191 183 }*/
/* IO - VPL Terminal : { 186 192 191 197 }*/
/* IO - VPL Root : { 210 186 215 191 }*/
/* End Operation */

/* Begin Operation: { 232 163 248 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 227 191 232 196 }*/
/* IO - VPL Terminal : { 227 221 232 226 }*/
/* IO - VPL Root : { 248 206 253 211 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 195 76 307 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetHeight");
/* IO - VPL Terminal : { 55 249 60 254 }*/
/* IO - VPL Root : { 76 249 81 254 }*/
/* End Operation */

/* Begin Operation: { 101 228 117 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 96 249 101 254 }*/
/* IO - VPL Root : { 117 249 122 254 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 187 280 203 370 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 182 308 187 313 }*/
/* IO - VPL Terminal : { 182 338 187 343 }*/
/* IO - VPL Root : { 203 323 208 328 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 29 282 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 91 274 96 }*/
/* IO - VPL Terminal : { 269 155 274 160 }*/
/* IO - VPL Terminal : { 269 193 274 198 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,2,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,3,2,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
	result = connect_root_to_terminal(ptrA,1,2,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,1,4,1,13);
	result = connect_root_to_terminal(ptrA,1,9,2,13);
	result = connect_root_to_terminal(ptrA,1,12,3,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 129 122 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"mid point");
/* IO - VPL Terminal : { 101 151 106 156 }*/
/* IO - VPL Terminal : { 101 175 106 180 }*/
/* IO - VPL Root : { 122 163 127 168 }*/
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

/* Start Operations: { 135 420 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 73 35 78 }*/
/* IO - VPL Root : { 30 163 35 168 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 65 80 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGAffineTransformMakeRotation");
/* IO - VPL Terminal : { 59 163 64 168 }*/
/* IO - VPL Root : { 80 163 85 168 }*/
/* End Operation */

/* Begin Operation: { 106 25 122 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGPointApplyAffineTransform");
/* IO - VPL Terminal : { 101 85 106 90 }*/
/* IO - VPL Terminal : { 101 147 106 152 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 116 148 121 }*/
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

/* Begin Operation: { 148 99 164 299 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGAffineTransformMakeRotation");
/* IO - VPL Terminal : { 143 197 148 202 }*/
/* IO - VPL Root : { 164 197 169 202 }*/
/* End Operation */

/* Begin Operation: { 64 29 80 85 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"origin");
/* IO - VPL Terminal : { 59 55 64 60 }*/
/* IO - VPL Root : { 80 45 85 50 }*/
/* IO - VPL Root : { 80 63 85 68 }*/
/* End Operation */

/* Begin Operation: { 103 236 119 326 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGPoint Add");
/* IO - VPL Terminal : { 98 257 103 262 }*/
/* IO - VPL Terminal : { 98 301 103 306 }*/
/* IO - VPL Root : { 119 275 124 280 }*/
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

/* Start Operations: { 60 60 }{ 239 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 38 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 68 85 73 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 148 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 178 85 183 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 91 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* End Operation */

/* Begin Operation: { 106 137 122 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 148 76 164 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 119 169 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 119 190 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 113 7 129 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGPoint Add");
/* IO - VPL Terminal : { 108 28 113 33 }*/
/* IO - VPL Terminal : { 108 72 113 77 }*/
/* IO - VPL Root : { 129 46 134 51 }*/
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

/* Start Operations: { 60 60 }{ 239 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 38 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 68 85 73 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 148 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 178 85 183 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 91 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* End Operation */

/* Begin Operation: { 106 137 122 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 148 76 164 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 119 169 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 119 190 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 102 206 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 185 148 190 153 }*/
/* IO - VPL Root : { 206 132 211 137 }*/
/* IO - VPL Root : { 206 164 211 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 22 248 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Move To Point");
/* IO - VPL Terminal : { 227 33 232 38 }*/
/* IO - VPL Terminal : { 227 80 232 85 }*/
/* IO - VPL Terminal : { 227 106 232 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 1 194 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGPoint Add");
/* IO - VPL Terminal : { 173 22 178 27 }*/
/* IO - VPL Terminal : { 173 66 178 71 }*/
/* IO - VPL Root : { 194 40 199 45 }*/
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

/* Start Operations: { 60 60 }{ 239 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 38 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 68 85 73 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 148 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 178 85 183 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 91 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* End Operation */

/* Begin Operation: { 106 137 122 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 148 76 164 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 119 169 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 119 190 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 214 206 310 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 185 260 190 265 }*/
/* IO - VPL Root : { 206 244 211 249 }*/
/* IO - VPL Root : { 206 276 211 281 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 144 248 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Line To Point");
/* IO - VPL Terminal : { 227 161 232 166 }*/
/* IO - VPL Terminal : { 227 220 232 225 }*/
/* IO - VPL Terminal : { 227 249 232 254 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 146 290 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Count");
/* IO - VPL Terminal : { 269 186 274 191 }*/
/* IO - VPL Root : { 290 186 295 191 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 316 57 332 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Points");
/* IO - VPL Terminal : { 311 66 316 71 }*/
/* IO - VPL Terminal : { 311 77 316 82 }*/
/* IO - VPL Terminal : { 311 88 316 93 }*/
/* IO - VPL Terminal : { 311 99 316 104 }*/
/* IO - VPL Terminal : { 311 110 316 115 }*/
/* IO - VPL Terminal : { 311 121 316 126 }*/
/* IO - VPL Root : { 332 78 337 83 }*/
/* IO - VPL Root : { 332 96 337 101 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,6,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 413 282 }{ 350 578 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 50 33 55 }*/
/* IO - VPL Root : { 28 68 33 73 }*/
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
/* IO - VPL Root : { 28 178 33 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 76 51 92 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGPointApplyAffineTransform");
/* IO - VPL Terminal : { 71 111 76 116 }*/
/* IO - VPL Terminal : { 71 173 76 178 }*/
/* IO - VPL Root : { 92 142 97 147 }*/
/* End Operation */

/* Begin Operation: { 122 367 138 457 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGPoint Add");
/* IO - VPL Terminal : { 117 388 122 393 }*/
/* IO - VPL Terminal : { 117 432 122 437 }*/
/* IO - VPL Root : { 138 406 143 411 }*/
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

/* Start Operations: { 60 60 }{ 239 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 38 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 68 85 73 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 148 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 178 85 183 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 91 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* End Operation */

/* Begin Operation: { 106 137 122 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 148 76 164 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 119 169 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 119 190 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 172 96 188 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 167 142 172 147 }*/
/* IO - VPL Root : { 188 126 193 131 }*/
/* IO - VPL Root : { 188 158 193 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 33 230 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Line To Point");
/* IO - VPL Terminal : { 209 50 214 55 }*/
/* IO - VPL Terminal : { 209 109 214 114 }*/
/* IO - VPL Terminal : { 209 138 214 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 118 128 134 314 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGPointApplyAffineTransform");
/* IO - VPL Terminal : { 113 188 118 193 }*/
/* IO - VPL Terminal : { 113 250 118 255 }*/
/* IO - VPL Root : { 134 219 139 224 }*/
/* End Operation */

/* Begin Operation: { 187 361 203 451 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGPoint Add");
/* IO - VPL Terminal : { 182 382 187 387 }*/
/* IO - VPL Terminal : { 182 426 187 431 }*/
/* IO - VPL Root : { 203 400 208 405 }*/
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

/* Start Operations: { 60 60 }{ 239 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 38 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 68 85 73 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 148 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 178 85 183 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 91 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* End Operation */

/* Begin Operation: { 106 137 122 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 148 76 164 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 119 169 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 119 190 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 176 251 192 347 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 171 297 176 302 }*/
/* IO - VPL Root : { 192 281 197 286 }*/
/* IO - VPL Root : { 192 313 197 318 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 218 205 234 329 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Line To Point");
/* IO - VPL Terminal : { 213 222 218 227 }*/
/* IO - VPL Terminal : { 213 281 218 286 }*/
/* IO - VPL Terminal : { 213 310 218 315 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 271 22 279 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 266 84 271 89 }*/
/* IO - VPL Terminal : { 266 148 271 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,5,0,2,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,3,3,4);
	result = connect_root_to_terminal(ptrA,4,0,1,5);
	result = connect_root_to_terminal(ptrA,5,0,2,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,2,7,3,8);
	result = connect_root_to_terminal(ptrA,1,1,1,9);
	result = connect_root_to_terminal(ptrA,1,5,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 364 27 372 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,3,2,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,2,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,2,8,3,9);
	result = connect_root_to_terminal(ptrA,1,6,1,10);
	result = connect_root_to_terminal(ptrA,1,3,2,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,2,11,3,12);
	result = connect_root_to_terminal(ptrA,3,0,1,13);
	result = connect_root_to_terminal(ptrA,1,0,1,14);
	result = connect_root_to_terminal(ptrA,1,6,2,14);
	result = connect_root_to_terminal(ptrA,2,2,3,14);
	result = connect_root_to_terminal(ptrA,1,14,3,14);
	result = connect_root_to_terminal(ptrA,1,3,4,14);
	result = connect_root_to_terminal(ptrA,2,14,4,14);
	result = connect_root_to_terminal(ptrA,1,4,5,14);
	result = connect_root_to_terminal(ptrA,1,13,6,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Path_2F_Add_20_Burst_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Path_2F_Add_20_Burst_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 434 852 }{ 410 378 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 64 35 69 }*/
/* IO - VPL Root : { 31 95 36 100 }*/
/* IO - VPL Root : { 30 123 35 128 }*/
/* IO - VPL Root : { 30 186 35 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 181 80 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"angles");
/* IO - VPL Terminal : { 59 208 64 213 }*/
/* IO - VPL Root : { 80 197 85 202 }*/
/* IO - VPL Root : { 80 221 85 226 }*/
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

/* Start Operations: { 60 60 }{ 253 294 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 78 80 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,0,1,"pi");
/* IO - VPL Root : { 80 93 85 98 }*/
/* End Operation */

/* Begin Operation: { 106 72 122 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_evaluate(tempOperation,environment,"(2*A)/B");
/* IO - VPL Terminal : { 101 93 106 98 }*/
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Root : { 122 105 127 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 128 164 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 143 149 148 154 }*/
/* IO - VPL Root : { 164 149 169 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 23 198 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 85 190 90 }*/
/* IO - VPL Terminal : { 185 149 190 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 65 104 81 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"radius");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Terminal : { 60 131 65 136 }*/
/* IO - VPL Root : { 81 116 86 121 }*/
/* IO - VPL Root : { 81 130 86 135 }*/
/* IO - VPL Root : { 81 144 86 149 }*/
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

/* Start Operations: { 313 473 }{ 377 408 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 64 94 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetWidth");
/* IO - VPL Terminal : { 73 116 78 121 }*/
/* IO - VPL Root : { 94 116 99 121 }*/
/* End Operation */

/* Begin Operation: { 120 95 136 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 115 116 120 121 }*/
/* IO - VPL Root : { 136 116 141 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 98 178 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 178 101 183 106 }*/
/* End Operation */

/* Begin Operation: { 204 43 220 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 199 71 204 76 }*/
/* IO - VPL Terminal : { 199 101 204 106 }*/
/* IO - VPL Root : { 220 86 225 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 188 137 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"3");
/* IO - VPL Root : { 138 198 143 203 }*/
/* End Operation */

/* Begin Operation: { 162 172 179 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 156 184 161 189 }*/
/* IO - VPL Terminal : { 156 198 161 203 }*/
/* IO - VPL Root : { 180 192 185 197 }*/
/* End Operation */

/* Begin Operation: { 204 166 221 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"-");
/* IO - VPL Terminal : { 198 178 203 183 }*/
/* IO - VPL Terminal : { 198 192 203 197 }*/
/* IO - VPL Root : { 222 186 227 191 }*/
/* End Operation */

/* Begin Operation: { 246 120 263 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 240 152 245 157 }*/
/* IO - VPL Terminal : { 240 186 245 191 }*/
/* IO - VPL Root : { 264 169 269 174 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 166 304 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 283 194 288 199 }*/
/* IO - VPL Terminal : { 283 224 288 229 }*/
/* IO - VPL Root : { 304 209 309 214 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 195 94 307 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGRectGetHeight");
/* IO - VPL Terminal : { 73 249 78 254 }*/
/* IO - VPL Root : { 94 249 99 254 }*/
/* End Operation */

/* Begin Operation: { 120 228 136 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Half");
/* IO - VPL Terminal : { 115 249 120 254 }*/
/* IO - VPL Root : { 136 249 141 254 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 280 220 370 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 199 308 204 313 }*/
/* IO - VPL Terminal : { 199 338 204 343 }*/
/* IO - VPL Root : { 220 323 225 328 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 330 36 338 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 325 98 330 103 }*/
/* IO - VPL Terminal : { 325 162 330 167 }*/
/* IO - VPL Terminal : { 325 200 330 205 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,3,2,9);
	result = connect_root_to_terminal(ptrA,2,0,1,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
	result = connect_root_to_terminal(ptrA,1,2,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,1,4,1,13);
	result = connect_root_to_terminal(ptrA,1,9,2,13);
	result = connect_root_to_terminal(ptrA,1,12,3,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 129 122 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"mid point");
/* IO - VPL Terminal : { 101 151 106 156 }*/
/* IO - VPL Terminal : { 101 175 106 180 }*/
/* IO - VPL Root : { 122 163 127 168 }*/
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

/* Start Operations: { 135 420 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 73 35 78 }*/
/* IO - VPL Root : { 30 163 35 168 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 65 80 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGAffineTransformMakeRotation");
/* IO - VPL Terminal : { 59 163 64 168 }*/
/* IO - VPL Root : { 80 163 85 168 }*/
/* End Operation */

/* Begin Operation: { 106 25 122 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGPointApplyAffineTransform");
/* IO - VPL Terminal : { 101 85 106 90 }*/
/* IO - VPL Terminal : { 101 147 106 152 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 116 148 121 }*/
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

/* Begin Operation: { 148 99 164 299 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGAffineTransformMakeRotation");
/* IO - VPL Terminal : { 143 197 148 202 }*/
/* IO - VPL Root : { 164 197 169 202 }*/
/* End Operation */

/* Begin Operation: { 64 29 80 85 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"origin");
/* IO - VPL Terminal : { 59 55 64 60 }*/
/* IO - VPL Root : { 80 45 85 50 }*/
/* IO - VPL Root : { 80 63 85 68 }*/
/* End Operation */

/* Begin Operation: { 103 236 119 326 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGPoint Add");
/* IO - VPL Terminal : { 98 257 103 262 }*/
/* IO - VPL Terminal : { 98 301 103 306 }*/
/* IO - VPL Root : { 119 275 124 280 }*/
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

/* Start Operations: { 60 60 }{ 239 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 38 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 68 85 73 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 148 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 178 85 183 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 91 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* End Operation */

/* Begin Operation: { 106 137 122 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 148 76 164 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 119 169 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 119 190 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 113 7 129 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGPoint Add");
/* IO - VPL Terminal : { 108 28 113 33 }*/
/* IO - VPL Terminal : { 108 72 113 77 }*/
/* IO - VPL Root : { 129 46 134 51 }*/
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

/* Start Operations: { 60 60 }{ 239 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 38 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 68 85 73 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 148 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 178 85 183 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 91 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* End Operation */

/* Begin Operation: { 106 137 122 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 148 76 164 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 119 169 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 119 190 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 102 206 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 185 148 190 153 }*/
/* IO - VPL Root : { 206 132 211 137 }*/
/* IO - VPL Root : { 206 164 211 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 22 248 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Move To Point");
/* IO - VPL Terminal : { 227 33 232 38 }*/
/* IO - VPL Terminal : { 227 80 232 85 }*/
/* IO - VPL Terminal : { 227 106 232 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 178 1 194 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGPoint Add");
/* IO - VPL Terminal : { 173 22 178 27 }*/
/* IO - VPL Terminal : { 173 66 178 71 }*/
/* IO - VPL Root : { 194 40 199 45 }*/
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

/* Start Operations: { 60 60 }{ 239 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 38 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 68 85 73 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 148 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 178 85 183 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 91 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* End Operation */

/* Begin Operation: { 106 137 122 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 148 76 164 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 119 169 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 119 190 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 214 206 310 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 185 260 190 265 }*/
/* IO - VPL Root : { 206 244 211 249 }*/
/* IO - VPL Root : { 206 276 211 281 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 144 248 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Line To Point");
/* IO - VPL Terminal : { 227 161 232 166 }*/
/* IO - VPL Terminal : { 227 220 232 225 }*/
/* IO - VPL Terminal : { 227 249 232 254 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 146 290 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Make Count");
/* IO - VPL Terminal : { 269 186 274 191 }*/
/* IO - VPL Root : { 290 186 295 191 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 316 57 332 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Points");
/* IO - VPL Terminal : { 311 66 316 71 }*/
/* IO - VPL Terminal : { 311 77 316 82 }*/
/* IO - VPL Terminal : { 311 88 316 93 }*/
/* IO - VPL Terminal : { 311 99 316 104 }*/
/* IO - VPL Terminal : { 311 110 316 115 }*/
/* IO - VPL Terminal : { 311 121 316 126 }*/
/* IO - VPL Root : { 332 78 337 83 }*/
/* IO - VPL Root : { 332 96 337 101 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,6,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 413 282 }{ 350 578 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 50 33 55 }*/
/* IO - VPL Root : { 28 68 33 73 }*/
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
/* IO - VPL Root : { 28 178 33 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 76 51 92 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGPointApplyAffineTransform");
/* IO - VPL Terminal : { 71 111 76 116 }*/
/* IO - VPL Terminal : { 71 173 76 178 }*/
/* IO - VPL Root : { 92 142 97 147 }*/
/* End Operation */

/* Begin Operation: { 122 367 138 457 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGPoint Add");
/* IO - VPL Terminal : { 117 388 122 393 }*/
/* IO - VPL Terminal : { 117 432 122 437 }*/
/* IO - VPL Root : { 138 406 143 411 }*/
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

/* Start Operations: { 60 60 }{ 239 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 38 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 68 85 73 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 148 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 178 85 183 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 91 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* End Operation */

/* Begin Operation: { 106 137 122 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 148 76 164 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 119 169 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 119 190 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 172 96 188 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 167 142 172 147 }*/
/* IO - VPL Root : { 188 126 193 131 }*/
/* IO - VPL Root : { 188 158 193 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 33 230 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Line To Point");
/* IO - VPL Terminal : { 209 50 214 55 }*/
/* IO - VPL Terminal : { 209 109 214 114 }*/
/* IO - VPL Terminal : { 209 138 214 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 118 128 134 314 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"CGPointApplyAffineTransform");
/* IO - VPL Terminal : { 113 188 118 193 }*/
/* IO - VPL Terminal : { 113 250 118 255 }*/
/* IO - VPL Root : { 134 219 139 224 }*/
/* End Operation */

/* Begin Operation: { 187 361 203 451 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGPoint Add");
/* IO - VPL Terminal : { 182 382 187 387 }*/
/* IO - VPL Terminal : { 182 426 187 431 }*/
/* IO - VPL Root : { 203 400 208 405 }*/
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

/* Start Operations: { 60 60 }{ 239 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 38 80 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 68 85 73 }*/
/* IO - VPL Root : { 80 100 85 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 148 80 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 178 85 183 }*/
/* IO - VPL Root : { 80 210 85 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 91 122 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 99 106 104 }*/
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Root : { 122 104 127 109 }*/
/* End Operation */

/* Begin Operation: { 106 137 122 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 155 106 160 }*/
/* IO - VPL Root : { 122 150 127 155 }*/
/* End Operation */

/* Begin Operation: { 148 76 164 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New CGPoint");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 119 169 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 25 198 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 119 190 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 176 251 192 347 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CGPoint");
/* IO - VPL Terminal : { 171 297 176 302 }*/
/* IO - VPL Root : { 192 281 197 286 }*/
/* IO - VPL Root : { 192 313 197 318 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 218 205 234 329 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Line To Point");
/* IO - VPL Terminal : { 213 222 218 227 }*/
/* IO - VPL Terminal : { 213 281 218 286 }*/
/* IO - VPL Terminal : { 213 310 218 315 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 271 22 279 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 266 84 271 89 }*/
/* IO - VPL Terminal : { 266 148 271 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,5,0,2,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,3,3,4);
	result = connect_root_to_terminal(ptrA,4,0,1,5);
	result = connect_root_to_terminal(ptrA,5,0,2,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,2,7,3,8);
	result = connect_root_to_terminal(ptrA,1,1,1,9);
	result = connect_root_to_terminal(ptrA,1,5,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 364 27 372 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,3,2,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,2,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,2,8,3,9);
	result = connect_root_to_terminal(ptrA,1,6,1,10);
	result = connect_root_to_terminal(ptrA,1,3,2,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,2,11,3,12);
	result = connect_root_to_terminal(ptrA,4,0,1,13);
	result = connect_root_to_terminal(ptrA,1,0,1,14);
	result = connect_root_to_terminal(ptrA,1,6,2,14);
	result = connect_root_to_terminal(ptrA,2,2,3,14);
	result = connect_root_to_terminal(ptrA,1,14,3,14);
	result = connect_root_to_terminal(ptrA,1,3,4,14);
	result = connect_root_to_terminal(ptrA,2,14,4,14);
	result = connect_root_to_terminal(ptrA,1,4,5,14);
	result = connect_root_to_terminal(ptrA,1,13,6,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_CG_20_Bitmap_20_Context_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CG_20_Bitmap_20_Context_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 239 236 }{ 200 300 } */
	tempAttribute = attribute_add("CGContext Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("QDPort Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("QDFrame",tempClass,NULL,environment);
	tempAttribute = attribute_add("Block Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("Block Size",tempClass,tempAttribute_CG_20_Bitmap_20_Context_2F_Block_20_Size,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CG Context");
	return kNOERROR;
}

/* Start Universals: { 274 59 }{ 200 300 } */
Nat4 VPLU_CG_20_Bitmap_20_Context_2F_Create_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Bitmap_20_Context_2F_Create_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 166 552 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 55 50 60 }*/
/* IO - VPL Root : { 45 76 50 81 }*/
/* IO - VPL Root : { 45 97 50 102 }*/
/* IO - VPL Root : { 45 118 50 123 }*/
/* IO - VPL Root : { 45 139 50 144 }*/
/* IO - VPL Root : { 45 160 50 165 }*/
/* IO - VPL Root : { 45 181 50 186 }*/
/* IO - VPL Root : { 45 202 50 207 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 80 95 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,7,3,"CGBitmapContextCreate");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Terminal : { 72 118 77 123 }*/
/* IO - VPL Terminal : { 72 138 77 143 }*/
/* IO - VPL Terminal : { 72 158 77 163 }*/
/* IO - VPL Terminal : { 72 178 77 183 }*/
/* IO - VPL Terminal : { 72 198 77 203 }*/
/* IO - VPL Terminal : { 72 218 77 223 }*/
/* IO - VPL Root : { 96 118 101 123 }*/
/* IO - VPL Root : { 96 158 101 163 }*/
/* IO - VPL Root : { 96 198 101 203 }*/
/* End Operation */

/* Begin Operation: { 120 184 137 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 200 119 205 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 120 36 137 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set CGContextRef");
/* IO - VPL Terminal : { 114 78 119 83 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,4,0,3,1);
	result = connect_root_to_terminal(ptrA,5,0,4,1);
	result = connect_root_to_terminal(ptrA,6,0,5,1);
	result = connect_root_to_terminal(ptrA,7,0,6,1);
	result = connect_root_to_terminal(ptrA,8,0,7,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 297 334 } */
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

/* Begin Operation: { 78 126 95 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"default colorspace");
/* IO - VPL Terminal : { 72 186 77 191 }*/
/* IO - VPL Root : { 96 186 101 191 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 93 95 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"external?");
/* IO - VPL Terminal : { 72 130 77 135 }*/
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

/* Start Operations: { 60 60 }{ 358 313 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"kCGColorSpaceGenericRGB");
/* IO - VPL Root : { 96 113 101 118 }*/
/* End Operation */

/* Begin Operation: { 120 142 137 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"__CFString");
/* IO - VPL Root : { 138 172 143 177 }*/
/* End Operation */

/* Begin Operation: { 162 51 179 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Framework Constant");
/* IO - VPL Terminal : { 156 90 161 95 }*/
/* IO - VPL Terminal : { 156 131 161 136 }*/
/* IO - VPL Terminal : { 156 172 161 177 }*/
/* IO - VPL Root : { 180 132 185 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 36 221 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"CGColorSpaceCreateWithName");
/* IO - VPL Terminal : { 198 133 203 138 }*/
/* IO - VPL Root : { 222 133 227 138 }*/
/* End Operation */

/* Begin Operation: { 246 117 263 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 133 245 138 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 288 38 296 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 132 287 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 194 328 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,1,"CGColorSpaceCreateDeviceRGB");
/* IO - VPL Root : { 96 135 101 140 }*/
/* End Operation */

/* Begin Operation: { 120 119 137 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 135 119 140 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 57 179 81 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"8");
/* IO - VPL Root : { 180 67 185 72 }*/
/* End Operation */

/* Begin Operation: { 162 99 179 295 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kCGImageAlphaPremultipliedLast");
/* IO - VPL Root : { 180 195 185 200 }*/
/* End Operation */

/* Begin Operation: { 120 80 137 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"reserve block");
/* IO - VPL Terminal : { 114 91 119 96 }*/
/* IO - VPL Terminal : { 114 111 119 116 }*/
/* IO - VPL Terminal : { 114 148 119 153 }*/
/* IO - VPL Root : { 138 99 143 104 }*/
/* IO - VPL Root : { 138 166 143 171 }*/
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

/* Start Operations: { 152 413 }{ 325 300 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 54 50 59 }*/
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 135 95 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_evaluate(tempOperation,environment,"A*32");
/* IO - VPL Terminal : { 72 160 77 165 }*/
/* IO - VPL Root : { 96 160 101 165 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 78 137 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"**");
/* IO - VPL Terminal : { 114 90 119 95 }*/
/* IO - VPL Terminal : { 114 104 119 109 }*/
/* IO - VPL Root : { 138 98 143 103 }*/
/* End Operation */

/* Begin Operation: { 162 52 179 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"NewPtrClear");
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Root : { 180 98 185 103 }*/
/* End Operation */

/* Begin Operation: { 204 36 221 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Block Pointer");
/* IO - VPL Terminal : { 198 67 203 72 }*/
/* IO - VPL Terminal : { 198 100 203 105 }*/
/* IO - VPL Root : { 222 84 227 89 }*/
/* End Operation */

/* Begin Operation: { 204 153 221 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Block Size");
/* IO - VPL Terminal : { 198 178 203 183 }*/
/* IO - VPL Terminal : { 198 205 203 210 }*/
/* IO - VPL Root : { 222 192 227 197 }*/
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 98 245 103 }*/
/* IO - VPL Terminal : { 240 162 245 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,1,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 68 221 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create");
/* IO - VPL Terminal : { 198 73 203 78 }*/
/* IO - VPL Terminal : { 198 99 203 104 }*/
/* IO - VPL Terminal : { 198 111 203 116 }*/
/* IO - VPL Terminal : { 198 148 203 153 }*/
/* IO - VPL Terminal : { 198 159 203 164 }*/
/* IO - VPL Terminal : { 198 167 203 172 }*/
/* IO - VPL Terminal : { 198 186 203 191 }*/
/* IO - VPL Terminal : { 198 195 203 200 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 40 254 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,3,0,3,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,2,0,3,5);
	result = connect_root_to_terminal(ptrA,3,0,4,5);
	result = connect_root_to_terminal(ptrA,1,2,5,5);
	result = connect_root_to_terminal(ptrA,2,4,6,5);
	result = connect_root_to_terminal(ptrA,1,1,7,5);
	result = connect_root_to_terminal(ptrA,1,3,8,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_CG_20_Bitmap_20_Context_2F_Create_20_Image_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_CG_20_Bitmap_20_Context_2F_Create_20_Image_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 160 320 }{ 293 283 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 74 65 91 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CGContextRef");
/* IO - VPL Terminal : { 68 130 73 135 }*/
/* IO - VPL Root : { 92 130 97 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 116 114 133 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 110 130 115 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 164 38 181 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"CGBitmapContextCreateImage");
/* IO - VPL Terminal : { 158 78 163 83 }*/
/* IO - VPL Terminal : { 158 130 163 135 }*/
/* IO - VPL Root : { 182 130 187 135 }*/
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

/* Start Operations: { 316 23 }{ 529 575 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 119 268 136 368 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Block Pointer");
/* IO - VPL Terminal : { 113 316 118 321 }*/
/* IO - VPL Root : { 137 299 142 304 }*/
/* IO - VPL Root : { 137 332 142 337 }*/
/* End Operation */

/* Begin Operation: { 178 39 195 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"CGBitmapContextGetBitsPerComponent");
/* IO - VPL Terminal : { 172 162 177 167 }*/
/* IO - VPL Root : { 196 120 201 125 }*/
/* IO - VPL Root : { 196 203 201 208 }*/
/* End Operation */

/* Begin Operation: { 75 2 92 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"CGBitmapContextGetWidth");
/* IO - VPL Terminal : { 69 88 74 93 }*/
/* IO - VPL Root : { 93 58 98 63 }*/
/* IO - VPL Root : { 93 116 98 121 }*/
/* End Operation */

/* Begin Operation: { 134 23 151 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"CGBitmapContextGetHeight");
/* IO - VPL Terminal : { 128 112 133 117 }*/
/* IO - VPL Root : { 152 81 157 86 }*/
/* IO - VPL Root : { 152 141 157 146 }*/
/* End Operation */

/* Begin Operation: { 211 56 228 266 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"CGBitmapContextGetBitsPerPixel");
/* IO - VPL Terminal : { 205 159 210 164 }*/
/* IO - VPL Root : { 229 124 234 129 }*/
/* IO - VPL Root : { 229 194 234 199 }*/
/* End Operation */

/* Begin Operation: { 245 50 262 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"CGBitmapContextGetBytesPerRow");
/* IO - VPL Terminal : { 239 157 244 162 }*/
/* IO - VPL Root : { 263 120 268 125 }*/
/* IO - VPL Root : { 263 192 268 197 }*/
/* End Operation */

/* Begin Operation: { 287 68 304 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"CGBitmapContextGetColorSpace");
/* IO - VPL Terminal : { 281 170 286 175 }*/
/* IO - VPL Root : { 305 135 310 140 }*/
/* IO - VPL Root : { 305 204 310 209 }*/
/* End Operation */

/* Begin Operation: { 325 47 342 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kCGImageAlphaPremultipliedLast");
/* IO - VPL Root : { 343 143 348 148 }*/
/* End Operation */

/* Begin Operation: { 358 191 375 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 376 207 381 212 }*/
/* End Operation */

/* Begin Operation: { 364 231 381 393 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kCGRenderingIntentDefault");
/* IO - VPL Root : { 382 310 387 315 }*/
/* End Operation */

/* Begin Operation: { 270 330 287 366 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 288 346 293 351 }*/
/* End Operation */

/* Begin Operation: { 270 456 287 480 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 288 466 293 471 }*/
/* End Operation */

/* Begin Operation: { 116 397 133 479 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Block Size");
/* IO - VPL Terminal : { 110 436 115 441 }*/
/* IO - VPL Root : { 134 422 139 427 }*/
/* IO - VPL Root : { 134 449 139 454 }*/
/* End Operation */

/* Begin Operation: { 312 308 329 512 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,3,"CGDataProviderCreateWithData");
/* IO - VPL Terminal : { 306 346 311 351 }*/
/* IO - VPL Terminal : { 306 386 311 391 }*/
/* IO - VPL Terminal : { 306 426 311 431 }*/
/* IO - VPL Terminal : { 306 466 311 471 }*/
/* IO - VPL Root : { 330 357 335 362 }*/
/* IO - VPL Root : { 330 408 335 413 }*/
/* IO - VPL Root : { 330 459 335 464 }*/
/* End Operation */

/* Begin Operation: { 376 146 393 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 394 162 399 167 }*/
/* End Operation */

/* Begin Operation: { 418 83 435 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,11,3,"CGImageCreate");
/* IO - VPL Terminal : { 412 90 417 95 }*/
/* IO - VPL Terminal : { 412 99 417 104 }*/
/* IO - VPL Terminal : { 412 108 417 113 }*/
/* IO - VPL Terminal : { 412 117 417 122 }*/
/* IO - VPL Terminal : { 412 126 417 131 }*/
/* IO - VPL Terminal : { 412 135 417 140 }*/
/* IO - VPL Terminal : { 412 144 417 149 }*/
/* IO - VPL Terminal : { 412 153 417 158 }*/
/* IO - VPL Terminal : { 412 162 417 167 }*/
/* IO - VPL Terminal : { 412 171 417 176 }*/
/* IO - VPL Terminal : { 412 180 417 185 }*/
/* IO - VPL Root : { 436 109 441 114 }*/
/* IO - VPL Root : { 436 137 441 142 }*/
/* IO - VPL Root : { 436 165 441 170 }*/
/* End Operation */

/* Begin Operation: { 470 57 478 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 464 151 469 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,13);
	result = connect_root_to_terminal(ptrA,1,11,1,14);
	result = connect_root_to_terminal(ptrA,2,1,2,14);
	result = connect_root_to_terminal(ptrA,2,13,3,14);
	result = connect_root_to_terminal(ptrA,1,12,4,14);
	result = connect_root_to_terminal(ptrA,1,3,1,16);
	result = connect_root_to_terminal(ptrA,1,4,2,16);
	result = connect_root_to_terminal(ptrA,1,2,3,16);
	result = connect_root_to_terminal(ptrA,1,5,4,16);
	result = connect_root_to_terminal(ptrA,1,6,5,16);
	result = connect_root_to_terminal(ptrA,1,7,6,16);
	result = connect_root_to_terminal(ptrA,1,8,7,16);
	result = connect_root_to_terminal(ptrA,1,14,8,16);
	result = connect_root_to_terminal(ptrA,1,15,9,16);
	result = connect_root_to_terminal(ptrA,1,9,10,16);
	result = connect_root_to_terminal(ptrA,1,10,11,16);
	result = connect_root_to_terminal(ptrA,1,16,1,17);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 206 114 223 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 200 130 205 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 264 31 272 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 258 125 263 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */






Nat4	loadClasses_CG_20_Context(V_Environment environment);
Nat4	loadClasses_CG_20_Context(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("CG Context",environment);
	if(result == NULL) return kERROR;
	VPLC_CG_20_Context_class_load(result,environment);
	result = class_new("CG Path",environment);
	if(result == NULL) return kERROR;
	VPLC_CG_20_Path_class_load(result,environment);
	result = class_new("CG Bitmap Context",environment);
	if(result == NULL) return kERROR;
	VPLC_CG_20_Bitmap_20_Context_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_CG_20_Context(V_Environment environment);
Nat4	loadUniversals_CG_20_Context(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("New CGPoint",environment);
	if(result == NULL) return kERROR;
	VPLU_New_20_CGPoint_universal_load(result,environment);

	result = method_new("New CGSize",environment);
	if(result == NULL) return kERROR;
	VPLU_New_20_CGSize_universal_load(result,environment);

	result = method_new("New CGRect",environment);
	if(result == NULL) return kERROR;
	VPLU_New_20_CGRect_universal_load(result,environment);

	result = method_new("From CGPoint",environment);
	if(result == NULL) return kERROR;
	VPLU_From_20_CGPoint_universal_load(result,environment);

	result = method_new("From CGSize",environment);
	if(result == NULL) return kERROR;
	VPLU_From_20_CGSize_universal_load(result,environment);

	result = method_new("From CGRect",environment);
	if(result == NULL) return kERROR;
	VPLU_From_20_CGRect_universal_load(result,environment);

	result = method_new("list-to-CGRect",environment);
	if(result == NULL) return kERROR;
	VPLU_list_2D_to_2D_CGRect_universal_load(result,environment);

	result = method_new("list-to-CGSize",environment);
	if(result == NULL) return kERROR;
	VPLU_list_2D_to_2D_CGSize_universal_load(result,environment);

	result = method_new("list-to-CGPoint",environment);
	if(result == NULL) return kERROR;
	VPLU_list_2D_to_2D_CGPoint_universal_load(result,environment);

	result = method_new("CG Context/New",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_New_universal_load(result,environment);

	result = method_new("CG Context/Setup CoreGraphics",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Setup_20_CoreGraphics_universal_load(result,environment);

	result = method_new("CG Context/Dispose",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Dispose_universal_load(result,environment);

	result = method_new("CG Context/Set CGContextRef",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Set_20_CGContextRef_universal_load(result,environment);

	result = method_new("CG Context/Get CGContextRef",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Get_20_CGContextRef_universal_load(result,environment);

	result = method_new("CG Context/Set Stroke RGB Color",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Set_20_Stroke_20_RGB_20_Color_universal_load(result,environment);

	result = method_new("CG Context/Set Fill RGB Color",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Set_20_Fill_20_RGB_20_Color_universal_load(result,environment);

	result = method_new("CG Context/Fill Rect",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Fill_20_Rect_universal_load(result,environment);

	result = method_new("CG Context/Fill Path",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Fill_20_Path_universal_load(result,environment);

	result = method_new("CG Context/Fill Oval",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Fill_20_Oval_universal_load(result,environment);

	result = method_new("CG Context/Stroke Rect",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Stroke_20_Rect_universal_load(result,environment);

	result = method_new("CG Context/Stroke Path",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Stroke_20_Path_universal_load(result,environment);

	result = method_new("CG Context/Stroke Oval",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Stroke_20_Oval_universal_load(result,environment);

	result = method_new("CG Context/Add Arc To Point",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Add_20_Arc_20_To_20_Point_universal_load(result,environment);

	result = method_new("CG Context/Add Line To Point",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Add_20_Line_20_To_20_Point_universal_load(result,environment);

	result = method_new("CG Context/Add Rect",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Add_20_Rect_universal_load(result,environment);

	result = method_new("CG Context/Add Rounded Rect",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Add_20_Rounded_20_Rect_universal_load(result,environment);

	result = method_new("CG Context/Add Oval",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Add_20_Oval_universal_load(result,environment);

	result = method_new("CG Context/Add Arc",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Add_20_Arc_universal_load(result,environment);

	result = method_new("CG Context/Save GState",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Save_20_GState_universal_load(result,environment);

	result = method_new("CG Context/Restore GState",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Restore_20_GState_universal_load(result,environment);

	result = method_new("CG Context/Begin Path",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Begin_20_Path_universal_load(result,environment);

	result = method_new("CG Context/Close Path",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Close_20_Path_universal_load(result,environment);

	result = method_new("CG Context/Translate CTM",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Translate_20_CTM_universal_load(result,environment);

	result = method_new("CG Context/Scale CTM",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Scale_20_CTM_universal_load(result,environment);

	result = method_new("CG Context/Move To Point",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Move_20_To_20_Point_universal_load(result,environment);

	result = method_new("CG Context/Fill Rounded Rect",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Fill_20_Rounded_20_Rect_universal_load(result,environment);

	result = method_new("CG Context/Stroke Rounded Rect",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Stroke_20_Rounded_20_Rect_universal_load(result,environment);

	result = method_new("CG Context/Stroke Line",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Stroke_20_Line_universal_load(result,environment);

	result = method_new("CG Context/Begin For CGrafPort",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Begin_20_For_20_CGrafPort_universal_load(result,environment);

	result = method_new("CG Context/End For CGrafPort",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_End_20_For_20_CGrafPort_universal_load(result,environment);

	result = method_new("CG Context/Clear Rect",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Clear_20_Rect_universal_load(result,environment);

	result = method_new("CG Context/Sync Origin With CGrafPort",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Sync_20_Origin_20_With_20_CGrafPort_universal_load(result,environment);

	result = method_new("CG Context/Flush",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Flush_universal_load(result,environment);

	result = method_new("CG Context/Stroke Arc",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Stroke_20_Arc_universal_load(result,environment);

	result = method_new("CG Context/Release",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Release_universal_load(result,environment);

	result = method_new("CG Context/Set Should Antialias",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Set_20_Should_20_Antialias_universal_load(result,environment);

	result = method_new("CG Context/Set Line Width",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Set_20_Line_20_Width_universal_load(result,environment);

	result = method_new("CG Context/Add Path",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Add_20_Path_universal_load(result,environment);

	result = method_new("CG Context/Fill And Stroke Path",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Fill_20_And_20_Stroke_20_Path_universal_load(result,environment);

	result = method_new("CG Context/Add Star",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Add_20_Star_universal_load(result,environment);

	result = method_new("CG Context/Add Burst",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Context_2F_Add_20_Burst_universal_load(result,environment);

	result = method_new("CG Path/Set CGPathRef",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Set_20_CGPathRef_universal_load(result,environment);

	result = method_new("CG Path/Get CGPathRef",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Get_20_CGPathRef_universal_load(result,environment);

	result = method_new("CG Path/Dispose",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Dispose_universal_load(result,environment);

	result = method_new("CG Path/Create Mutable",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Create_20_Mutable_universal_load(result,environment);

	result = method_new("CG Path/Close Subpath",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Close_20_Subpath_universal_load(result,environment);

	result = method_new("CG Path/Release",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Release_universal_load(result,environment);

	result = method_new("CG Path/Retain",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Retain_universal_load(result,environment);

	result = method_new("CG Path/Add Arc",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Arc_universal_load(result,environment);

	result = method_new("CG Path/Add Arc Rect",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Arc_20_Rect_universal_load(result,environment);

	result = method_new("CG Path/Add Arc To Point",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Arc_20_To_20_Point_universal_load(result,environment);

	result = method_new("CG Path/Add Line To Point",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Line_20_To_20_Point_universal_load(result,environment);

	result = method_new("CG Path/Add Rect",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Rect_universal_load(result,environment);

	result = method_new("CG Path/Add Path",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Path_universal_load(result,environment);

	result = method_new("CG Path/Move To Point",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Move_20_To_20_Point_universal_load(result,environment);

	result = method_new("CG Path/Equal?",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Equal_3F__universal_load(result,environment);

	result = method_new("CG Path/Is Empty?",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Is_20_Empty_3F__universal_load(result,environment);

	result = method_new("CG Path/Is Rect?",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Is_20_Rect_3F__universal_load(result,environment);

	result = method_new("CG Path/Create Corners",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Create_20_Corners_universal_load(result,environment);

	result = method_new("CG Path/Get Current Transform",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Get_20_Current_20_Transform_universal_load(result,environment);

	result = method_new("CG Path/Set Current Transform",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Set_20_Current_20_Transform_universal_load(result,environment);

	result = method_new("CG Path/Begin Path",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Begin_20_Path_universal_load(result,environment);

	result = method_new("CG Path/Close Path",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Close_20_Path_universal_load(result,environment);

	result = method_new("CG Path/Release Path",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Release_20_Path_universal_load(result,environment);

	result = method_new("CG Path/Add Line",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Line_universal_load(result,environment);

	result = method_new("CG Path/Add Oval",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Oval_universal_load(result,environment);

	result = method_new("CG Path/Add Diamond",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Diamond_universal_load(result,environment);

	result = method_new("CG Path/Add Corners",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Corners_universal_load(result,environment);

	result = method_new("CG Path/Add Rounded Rect",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Rounded_20_Rect_universal_load(result,environment);

	result = method_new("CG Path/Add Triangle",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Triangle_universal_load(result,environment);

	result = method_new("CG Path/Add Star",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Star_universal_load(result,environment);

	result = method_new("CG Path/Add Burst",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Path_2F_Add_20_Burst_universal_load(result,environment);

	result = method_new("CG Bitmap Context/Create",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Bitmap_20_Context_2F_Create_universal_load(result,environment);

	result = method_new("CG Bitmap Context/Create 32-RGBA",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Bitmap_20_Context_2F_Create_20_32_2D_RGBA_universal_load(result,environment);

	result = method_new("CG Bitmap Context/Create Image",environment);
	if(result == NULL) return kERROR;
	VPLU_CG_20_Bitmap_20_Context_2F_Create_20_Image_universal_load(result,environment);

	return kNOERROR;

}



Nat4	loadPersistents_CG_20_Context(V_Environment environment);
Nat4	loadPersistents_CG_20_Context(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_CG_20_Context(V_Environment environment);
Nat4	load_CG_20_Context(V_Environment environment)
{

	loadClasses_CG_20_Context(environment);
	loadUniversals_CG_20_Context(environment);
	loadPersistents_CG_20_Context(environment);
	return kNOERROR;

}

