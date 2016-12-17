/* A VPL Section File */
/*

Project Open Activity.rnt.c
Copyright: 2002 Scott B. Anderson

*/

Nat4 VPLU_VPL_20_Add_20_Search_20_Locations_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPL_20_Add_20_Search_20_Locations_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 111 472 }{ 521 300 } */
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

/* Begin Operation: { 120 73 137 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~/Library/Marten");
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

/* Start Operations: { 408 485 }{ 421 474 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 83 95 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kUserDomain");
/* IO - VPL Root : { 96 122 101 127 }*/
/* End Operation */

/* Begin Operation: { 78 181 95 341 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kDomainLibraryFolderType");
/* IO - VPL Root : { 96 259 101 264 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 110 179 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path CFURL");
/* IO - VPL Terminal : { 156 180 161 185 }*/
/* IO - VPL Root : { 180 180 185 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 361 179 397 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 180 377 185 382 }*/
/* End Operation */

/* Begin Operation: { 162 281 179 327 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Marten");
/* IO - VPL Root : { 180 302 185 307 }*/
/* End Operation */

/* Begin Operation: { 204 172 221 436 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Copy Appending Path Component");
/* IO - VPL Terminal : { 198 236 203 241 }*/
/* IO - VPL Terminal : { 198 302 203 307 }*/
/* IO - VPL Terminal : { 198 368 203 373 }*/
/* IO - VPL Root : { 222 302 227 307 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 78 221 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 198 113 203 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 333 263 369 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 349 245 354 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 246 225 263 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"exists?");
/* IO - VPL Terminal : { 240 254 245 259 }*/
/* IO - VPL Root : { 264 254 269 259 }*/
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

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 89 95 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 79 222 96 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 73 258 78 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 94 95 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 288 108 305 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 282 130 287 135 }*/
/* IO - VPL Terminal : { 282 154 287 159 }*/
/* IO - VPL Root : { 306 142 311 147 }*/
/* End Operation */

/* Begin Operation: { 330 38 338 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 324 132 329 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,7,1,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 150 301 } */
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

/* Begin Operation: { 162 76 179 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Library/Marten");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Root : { 180 130 185 135 }*/
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

/* Start Operations: { 396 206 }{ 421 474 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 121 95 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kLocalDomain");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 78 229 95 389 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kDomainLibraryFolderType");
/* IO - VPL Root : { 96 307 101 312 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 110 179 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path CFURL");
/* IO - VPL Terminal : { 156 180 161 185 }*/
/* IO - VPL Root : { 180 180 185 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 361 179 397 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 180 377 185 382 }*/
/* End Operation */

/* Begin Operation: { 162 279 179 325 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Marten");
/* IO - VPL Root : { 180 300 185 305 }*/
/* End Operation */

/* Begin Operation: { 204 170 221 434 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Copy Appending Path Component");
/* IO - VPL Terminal : { 198 234 203 239 }*/
/* IO - VPL Terminal : { 198 300 203 305 }*/
/* IO - VPL Terminal : { 198 366 203 371 }*/
/* IO - VPL Root : { 222 300 227 305 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 64 221 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 198 99 203 104 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 333 263 369 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 349 245 354 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 246 225 263 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"exists?");
/* IO - VPL Terminal : { 240 254 245 259 }*/
/* IO - VPL Root : { 264 254 269 259 }*/
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

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 89 95 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 79 222 96 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 73 258 78 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 94 95 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 288 108 305 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 282 130 287 135 }*/
/* IO - VPL Terminal : { 282 154 287 159 }*/
/* IO - VPL Root : { 306 142 311 147 }*/
/* End Operation */

/* Begin Operation: { 330 38 338 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 324 132 329 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,7,1,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 150 413 } */
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

/* Begin Operation: { 204 51 221 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Network/Library/Marten");
/* IO - VPL Terminal : { 198 130 203 135 }*/
/* IO - VPL Root : { 222 130 227 135 }*/
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

/* Start Operations: { 396 206 }{ 421 474 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 112 95 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kNetworkDomain");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 78 232 95 392 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kDomainLibraryFolderType");
/* IO - VPL Root : { 96 310 101 315 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 110 179 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path CFURL");
/* IO - VPL Terminal : { 156 180 161 185 }*/
/* IO - VPL Root : { 180 180 185 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 361 179 397 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 180 377 185 382 }*/
/* End Operation */

/* Begin Operation: { 162 279 179 325 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Marten");
/* IO - VPL Root : { 180 300 185 305 }*/
/* End Operation */

/* Begin Operation: { 204 170 221 434 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Copy Appending Path Component");
/* IO - VPL Terminal : { 198 234 203 239 }*/
/* IO - VPL Terminal : { 198 300 203 305 }*/
/* IO - VPL Terminal : { 198 366 203 371 }*/
/* IO - VPL Root : { 222 300 227 305 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 64 221 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 198 99 203 104 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 333 263 369 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 349 245 354 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 246 225 263 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"exists?");
/* IO - VPL Terminal : { 240 254 245 259 }*/
/* IO - VPL Root : { 264 254 269 259 }*/
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

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 89 95 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 79 222 96 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 73 258 78 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 94 95 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 288 108 305 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 282 130 287 135 }*/
/* IO - VPL Terminal : { 282 154 287 159 }*/
/* IO - VPL Root : { 306 142 311 147 }*/
/* End Operation */

/* Begin Operation: { 330 38 338 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 324 132 329 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,7,1,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 150 413 } */
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

/* Begin Operation: { 246 54 263 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/System/Library/Marten");
/* IO - VPL Terminal : { 240 130 245 135 }*/
/* IO - VPL Root : { 264 130 269 135 }*/
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

/* Start Operations: { 396 206 }{ 150 333 } */
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

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 421 474 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 115 95 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kSystemDomain");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 78 229 95 389 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kDomainLibraryFolderType");
/* IO - VPL Root : { 96 307 101 312 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 110 179 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path CFURL");
/* IO - VPL Terminal : { 156 180 161 185 }*/
/* IO - VPL Root : { 180 180 185 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 361 179 397 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 180 377 185 382 }*/
/* End Operation */

/* Begin Operation: { 162 279 179 325 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Marten");
/* IO - VPL Root : { 180 300 185 305 }*/
/* End Operation */

/* Begin Operation: { 204 170 221 434 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Copy Appending Path Component");
/* IO - VPL Terminal : { 198 234 203 239 }*/
/* IO - VPL Terminal : { 198 300 203 305 }*/
/* IO - VPL Terminal : { 198 366 203 371 }*/
/* IO - VPL Root : { 222 300 227 305 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 64 221 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 198 99 203 104 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 333 263 369 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 349 245 354 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 246 225 263 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"exists?");
/* IO - VPL Terminal : { 240 254 245 259 }*/
/* IO - VPL Root : { 264 254 269 259 }*/
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

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 89 95 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 79 222 96 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 73 258 78 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 94 95 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 288 108 305 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 282 130 287 135 }*/
/* IO - VPL Terminal : { 282 154 287 159 }*/
/* IO - VPL Root : { 306 142 311 147 }*/
/* End Operation */

/* Begin Operation: { 330 38 338 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 324 132 329 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,7,1,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 150 413 } */
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

/* Begin Operation: { 288 59 305 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~/Library/Frameworks");
/* IO - VPL Terminal : { 282 130 287 135 }*/
/* IO - VPL Root : { 306 130 311 135 }*/
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

/* Start Operations: { 489 434 }{ 349 420 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 123 95 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kUserDomain");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 78 240 95 386 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kFrameworksFolderType");
/* IO - VPL Root : { 96 311 101 316 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 108 179 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 154 161 159 }*/
/* IO - VPL Root : { 180 142 185 147 }*/
/* End Operation */

/* Begin Operation: { 204 38 212 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 132 203 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 408 485 }{ 150 301 } */
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

/* Begin Operation: { 330 63 347 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Library/Frameworks");
/* IO - VPL Terminal : { 324 130 329 135 }*/
/* IO - VPL Root : { 348 130 353 135 }*/
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

/* Start Operations: { 396 206 }{ 349 420 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 121 95 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kLocalDomain");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 78 240 95 386 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kFrameworksFolderType");
/* IO - VPL Root : { 96 311 101 316 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 108 179 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 154 161 159 }*/
/* IO - VPL Root : { 180 142 185 147 }*/
/* End Operation */

/* Begin Operation: { 204 38 212 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 132 203 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 150 413 } */
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

/* Begin Operation: { 372 37 389 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Network/Library/Frameworks");
/* IO - VPL Terminal : { 366 130 371 135 }*/
/* IO - VPL Root : { 390 130 395 135 }*/
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

/* Start Operations: { 396 206 }{ 270 418 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 112 95 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kNetworkDomain");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 78 240 95 386 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kFrameworksFolderType");
/* IO - VPL Root : { 96 311 101 316 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 108 179 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 154 161 159 }*/
/* IO - VPL Root : { 180 142 185 147 }*/
/* End Operation */

/* Begin Operation: { 204 38 212 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 132 203 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 150 413 } */
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

/* Begin Operation: { 414 41 431 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/System/Library/Frameworks");
/* IO - VPL Terminal : { 408 130 413 135 }*/
/* IO - VPL Root : { 432 130 437 135 }*/
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

/* Start Operations: { 396 206 }{ 150 413 } */
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

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 349 420 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 115 95 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kSystemDomain");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 78 240 95 386 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kFrameworksFolderType");
/* IO - VPL Root : { 96 311 101 316 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 108 179 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 154 161 159 }*/
/* IO - VPL Root : { 180 142 185 147 }*/
/* End Operation */

/* Begin Operation: { 204 38 212 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 132 203 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 456 36 464 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 450 130 455 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 414 304 } */
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

/* Begin Operation: { 120 73 137 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~/Library/Marten");
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

/* Start Operations: { 408 485 }{ 421 474 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 83 95 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kUserDomain");
/* IO - VPL Root : { 96 122 101 127 }*/
/* End Operation */

/* Begin Operation: { 78 181 95 341 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kDomainLibraryFolderType");
/* IO - VPL Root : { 96 259 101 264 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 110 179 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path CFURL");
/* IO - VPL Terminal : { 156 180 161 185 }*/
/* IO - VPL Root : { 180 180 185 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 361 179 397 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 180 377 185 382 }*/
/* End Operation */

/* Begin Operation: { 162 281 179 327 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Marten");
/* IO - VPL Root : { 180 302 185 307 }*/
/* End Operation */

/* Begin Operation: { 204 172 221 436 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Copy Appending Path Component");
/* IO - VPL Terminal : { 198 236 203 241 }*/
/* IO - VPL Terminal : { 198 302 203 307 }*/
/* IO - VPL Terminal : { 198 368 203 373 }*/
/* IO - VPL Root : { 222 302 227 307 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 78 221 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 198 113 203 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 333 263 369 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 349 245 354 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 246 225 263 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"exists?");
/* IO - VPL Terminal : { 240 254 245 259 }*/
/* IO - VPL Root : { 264 254 269 259 }*/
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

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 89 95 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 79 222 96 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 73 258 78 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 94 95 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 288 108 305 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 282 130 287 135 }*/
/* IO - VPL Terminal : { 282 154 287 159 }*/
/* IO - VPL Root : { 306 142 311 147 }*/
/* End Operation */

/* Begin Operation: { 330 38 338 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 324 132 329 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,7,1,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 150 301 } */
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

/* Begin Operation: { 162 76 179 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Library/Marten");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Root : { 180 130 185 135 }*/
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

/* Start Operations: { 396 206 }{ 421 474 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 121 95 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kLocalDomain");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 78 229 95 389 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kDomainLibraryFolderType");
/* IO - VPL Root : { 96 307 101 312 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 110 179 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path CFURL");
/* IO - VPL Terminal : { 156 180 161 185 }*/
/* IO - VPL Root : { 180 180 185 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 361 179 397 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 180 377 185 382 }*/
/* End Operation */

/* Begin Operation: { 162 279 179 325 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Marten");
/* IO - VPL Root : { 180 300 185 305 }*/
/* End Operation */

/* Begin Operation: { 204 170 221 434 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Copy Appending Path Component");
/* IO - VPL Terminal : { 198 234 203 239 }*/
/* IO - VPL Terminal : { 198 300 203 305 }*/
/* IO - VPL Terminal : { 198 366 203 371 }*/
/* IO - VPL Root : { 222 300 227 305 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 64 221 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 198 99 203 104 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 333 263 369 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 349 245 354 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 246 225 263 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"exists?");
/* IO - VPL Terminal : { 240 254 245 259 }*/
/* IO - VPL Root : { 264 254 269 259 }*/
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

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 89 95 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 79 222 96 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 73 258 78 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 94 95 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 288 108 305 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 282 130 287 135 }*/
/* IO - VPL Terminal : { 282 154 287 159 }*/
/* IO - VPL Root : { 306 142 311 147 }*/
/* End Operation */

/* Begin Operation: { 330 38 338 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 324 132 329 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,7,1,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 150 413 } */
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
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 135 95 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"add application");
/* IO - VPL Root : { 96 187 101 192 }*/
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

/* Start Operations: { 60 60 }{ 320 302 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 84 95 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CF URL");
/* IO - VPL Terminal : { 72 115 77 120 }*/
/* IO - VPL Root : { 96 115 101 120 }*/
/* End Operation */

/* Begin Operation: { 120 81 137 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Capture Main Bundle");
/* IO - VPL Terminal : { 114 154 119 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 84 179 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get ref?");
/* IO - VPL Terminal : { 156 115 161 120 }*/
/* IO - VPL Root : { 180 115 185 120 }*/
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

/* Start Operations: { 60 60 }{ 284 301 } */
/* Begin Operation: { 36 37 44 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 131 50 136 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 90 95 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 72 131 77 136 }*/
/* IO - VPL Root : { 96 131 101 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 54 137 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 114 90 119 95 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 37 170 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 131 161 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
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
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 94 95 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 204 71 221 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parent");
/* IO - VPL Terminal : { 198 115 203 120 }*/
/* IO - VPL Root : { 222 115 227 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 91 263 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 240 115 245 120 }*/
/* IO - VPL Root : { 264 115 269 120 }*/
/* End Operation */

/* Begin Operation: { 246 161 263 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 177 245 182 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
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

/* Begin Operation: { 78 50 95 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Check)");
/* IO - VPL Terminal : { 72 82 77 87 }*/
/* IO - VPL Root : { 96 82 101 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 103 137 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(join)");
/* IO - VPL Terminal : { 114 119 119 124 }*/
/* IO - VPL Terminal : { 114 137 119 142 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}





	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X02340006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0C000000, 0X4F70656E, 0X2050726F, 0X6A656374,
0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Completed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Completion_20_Callback[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Attachments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Progress[] = {
0000000000, 0X00000104, 0X00000040, 0X0000000B, 0X00000014, 0X00000088, 0X00000120, 0X00000084,
0X00000100, 0X00000080, 0X000000D8, 0X0000007C, 0X00000078, 0X00000074, 0X00000054, 0X0000005C,
0XA7000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000074, 0X00000008, 0X00000060,
0X41637469, 0X76697479, 0X2050726F, 0X67726573, 0X73000000, 0X00000094, 0X000000AC, 0X000000C4,
0X000000EC, 0X0000010C, 0X0000012C, 0000000000, 0000000000, 0X02D30004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X0AC20004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X02D20006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000E0, 0X08000000,
0X556E7469, 0X746C6564, 0000000000, 0X02D30006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000108, 0000000000, 0000000000, 0X02D30006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000128, 0000000000, 0000000000, 0X02DD0004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Stages[] = {
0000000000, 0X0000028C, 0X00000078, 0X00000019, 0X00000014, 0X000002E8, 0X000000C0, 0X000002B4,
0X000000BC, 0X00000284, 0X000000B8, 0X00000258, 0X000000B4, 0X00000224, 0X000000B0, 0X000001F4,
0X000000AC, 0X000001C0, 0X000000A8, 0X00000190, 0X000000A4, 0X00000160, 0X000000A0, 0X00000130,
0X0000009C, 0X00000104, 0X00000098, 0X000000D8, 0X00000094, 0X0000008C, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000094, 0X0000000C, 0X000000C4, 0X000000F0, 0X0000011C,
0X0000014C, 0X0000017C, 0X000001AC, 0X000001E0, 0X00000210, 0X00000244, 0X00000270, 0X000002A0,
0X000002D4, 0X023C0006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000E0, 0X0E000000,
0X504F4153, 0X204C6F61, 0X64204669, 0X6C650000, 0X023C0006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000010C, 0X0F000000, 0X504F4153, 0X2046696E, 0X64204669, 0X6C657300, 0X53650006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000138, 0X12000000, 0X504F4153, 0X20526561,
0X64205365, 0X6374696F, 0X6E730000, 0X021B0006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000168, 0X11000000, 0X504F4153, 0X204F7065, 0X6E205072, 0X6F6A6563, 0X74000000, 0X09F30006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000198, 0X13000000, 0X504F4153, 0X20436F70,
0X79205265, 0X736F7572, 0X63657300, 0X50720006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000001C8, 0X14000000, 0X504F4153, 0X20526561, 0X64205072, 0X696D6974, 0X69766573, 0000000000,
0X53650006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001FC, 0X12000000, 0X504F4153,
0X204F7065, 0X6E205365, 0X6374696F, 0X6E730000, 0X52650006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000022C, 0X17000000, 0X504F4153, 0X20526573, 0X6F6C7665, 0X20526566, 0X6572656E,
0X63657300, 0X023C0006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000260, 0X0E000000,
0X504F4153, 0X20506F73, 0X74204C6F, 0X61640000, 0X436C0006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000028C, 0X13000000, 0X504F4153, 0X20557064, 0X61746520, 0X436C6173, 0X73657300,
0X50650006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002BC, 0X17000000, 0X504F4153,
0X20557064, 0X61746520, 0X50657273, 0X69737465, 0X6E747300, 0X45640006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002F0, 0X10000000, 0X504F4153, 0X204F7065, 0X6E204564, 0X69746F72,
0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Completed_20_Stages[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Section_20_Files[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Primitive_20_Files[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Other_20_Files[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Open_20_Activity_2F_Items_20_To_20_Open[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X03950007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0E000000, 0X556E7469, 0X746C6564, 0X20537461,
0X67650000
	};
	Nat4 tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Load_20_File_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0F000000, 0X4C6F6164, 0X696E6720, 0X50726F6A,
0X65637400
	};
	Nat4 tempAttribute_POAS_20_Load_20_File_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Load_20_File_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Find_20_Files_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X02380006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0D000000, 0X46696E64, 0X696E6720, 0X46696C65,
0X73000000
	};
	Nat4 tempAttribute_POAS_20_Find_20_Files_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Find_20_Files_2F_Folder_20_Search[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Find_20_Files_2F_Manual_20_Locations[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Find_20_Files_2F_Manual_20_Items[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Primitives_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X4C690006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X11000000, 0X4C6F6164, 0X696E6720, 0X4C696272,
0X61726965, 0X73000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Primitives_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Primitives_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Sections_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X53650006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X10000000, 0X52656164, 0X696E6720, 0X53656374,
0X696F6E73, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Sections_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Read_20_Sections_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Project_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X17000000, 0X53746172, 0X74696E67, 0X2052756E,
0X74696D65, 0X20456E67, 0X696E6500
	};
	Nat4 tempAttribute_POAS_20_Open_20_Project_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Project_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Sections_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X039D0006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X12000000, 0X4F70656E, 0X696E6720, 0X436F6D70,
0X6F6E656E, 0X74730000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Sections_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Sections_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Sections_2F_Open_20_Stack[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Resolve_20_References_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X52650006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X14000000, 0X5265736F, 0X6C76696E, 0X67205265,
0X66657265, 0X6E636573, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Resolve_20_References_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Resolve_20_References_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Resolve_20_References_2F_Class_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Resolve_20_References_2F_Whole_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Post_20_Load_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X50720006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X14000000, 0X506F7374, 0X204C6F61, 0X64205072,
0X6F636573, 0X73696E67, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Post_20_Load_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Post_20_Load_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Classes_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X436C0006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X10000000, 0X55706461, 0X74696E67, 0X20436C61,
0X73736573, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Classes_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Classes_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Classes_2F_Class_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Classes_2F_Whole_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Persistents_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X50650006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X14000000, 0X55706461, 0X74696E67, 0X20506572,
0X73697374, 0X656E7473, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Persistents_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Persistents_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Persistents_2F_Class_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Update_20_Persistents_2F_Whole_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X02320007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Install_20_Tools_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X546F0006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X10000000, 0X496E7374, 0X616C6C69, 0X6E672054,
0X6F6F6C73, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Install_20_Tools_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Install_20_Tools_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Copy_20_Resources_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X09930006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X12000000, 0X55706461, 0X74696E67, 0X20526573,
0X6F757263, 0X65730000
	};
	Nat4 tempAttribute_POAS_20_Copy_20_Resources_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Copy_20_Resources_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Editor_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0E000000, 0X4F70656E, 0X696E6720, 0X45646974,
0X6F720000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Editor_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Open_20_Editor_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Name_20_Application_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X10000000, 0X4E616D65, 0X20417070, 0X6C696361,
0X74696F6E, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Name_20_Application_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_POAS_20_Name_20_Application_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X17000000, 0X5265736F, 0X6C76696E, 0X67204D69,
0X7373696E, 0X67204669, 0X6C657300
	};
	Nat4 tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Count_20_Max[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Count_20_Completed[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Stack[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Event_20_Callback_20_Behavior[] = {
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
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Action[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Modality[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Completion_20_Behavior[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Finished_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Parameter_20_Strings[] = {
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
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Last_20_Height[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Last_20_Width[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Project_20_Open_20_Activity_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_Open_20_Activity_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 256 45 }{ 333 396 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Name,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Completed?",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Completed_3F_,environment);
	tempAttribute = attribute_add("Completion Callback",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Completion_20_Callback,environment);
	tempAttribute = attribute_add("Attachments",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Attachments,environment);
	tempAttribute = attribute_add("Progress",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Progress,environment);
	tempAttribute = attribute_add("Stages",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Stages,environment);
	tempAttribute = attribute_add("Current Stage",tempClass,NULL,environment);
	tempAttribute = attribute_add("Completed Stages",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Completed_20_Stages,environment);
	tempAttribute = attribute_add("Project File",tempClass,NULL,environment);
	tempAttribute = attribute_add("Project Data",tempClass,NULL,environment);
	tempAttribute = attribute_add("Section Files",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Section_20_Files,environment);
	tempAttribute = attribute_add("Primitive Files",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Primitive_20_Files,environment);
	tempAttribute = attribute_add("Other Files",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Other_20_Files,environment);
	tempAttribute = attribute_add("Items To Open",tempClass,tempAttribute_Project_20_Open_20_Activity_2F_Items_20_To_20_Open,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Activity Staged");
	return kNOERROR;
}

/* Start Universals: { 350 812 }{ 200 300 } */
Nat4 VPLU_Project_20_Open_20_Activity_2F_Error_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Project_20_Open_20_Activity_2F_Error_universal_load(V_Method method,V_Environment environment)
{
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
/* IO - VPL Root : { 28 72 33 77 }*/
/* IO - VPL Root : { 28 160 33 165 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 39 81 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Cancel");
/* IO - VPL Terminal : { 60 72 65 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 137 83 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"show");
/* IO - VPL Terminal : { 62 160 67 165 }*/
/* End Operation */

/* Begin Operation: { 108 19 116 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Project_20_Open_20_Activity_2F_Get_20_Project_20_Helper_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Project_20_Open_20_Activity_2F_Get_20_Project_20_Helper_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 289 287 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 67 81 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project Data");
/* IO - VPL Terminal : { 60 111 65 116 }*/
/* IO - VPL Root : { 81 95 86 100 }*/
/* IO - VPL Root : { 81 125 86 130 }*/
/* End Operation */

/* Begin Operation: { 106 135 122 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 171 106 176 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 98 178 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 157 125 162 130 }*/
/* IO - VPL Root : { 178 115 183 120 }*/
/* IO - VPL Root : { 178 134 183 139 }*/
/* End Operation */

/* Begin Operation: { 198 128 214 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 193 164 198 169 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 232 18 240 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 109 232 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Project_20_Open_20_Activity_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Project_20_Open_20_Activity_2F_Run_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 118 83 134 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run");
/* IO - VPL Terminal : { 113 110 118 115 }*/
/* IO - VPL Root : { 134 110 139 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 68 63 84 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Synchronize");
/* IO - VPL Terminal : { 63 110 68 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 160 19 168 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 155 110 160 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 340 54 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 84 47 100 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Title");
/* IO - VPL Terminal : { 79 61 84 66 }*/
/* IO - VPL Terminal : { 79 77 84 82 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 437 474 }{ 245 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 169 33 174 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 38 83 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project Data");
/* IO - VPL Terminal : { 62 82 67 87 }*/
/* IO - VPL Root : { 83 66 88 71 }*/
/* IO - VPL Root : { 83 96 88 101 }*/
/* End Operation */

/* Begin Operation: { 107 85 123 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 102 96 107 101 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 107 163 123 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 102 201 107 206 }*/
/* IO - VPL Root : { 123 201 128 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 147 148 163 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Title");
/* IO - VPL Terminal : { 142 169 147 174 }*/
/* IO - VPL Terminal : { 142 201 147 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 187 23 195 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 86 130 102 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Proxy");
/* IO - VPL Terminal : { 81 146 86 151 }*/
/* IO - VPL Terminal : { 81 164 86 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 549 812 }{ 222 343 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 169 33 174 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 40 82 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project File");
/* IO - VPL Terminal : { 61 82 66 87 }*/
/* IO - VPL Root : { 82 67 87 72 }*/
/* IO - VPL Root : { 82 96 87 101 }*/
/* End Operation */

/* Begin Operation: { 106 85 122 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 96 106 101 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 107 148 123 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Proxy Icon");
/* IO - VPL Terminal : { 102 169 107 174 }*/
/* IO - VPL Terminal : { 102 204 107 209 }*/
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

/* Begin Operation: { 147 25 155 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 132 21 140 213 } */
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



Nat4 VPLC_Project_20_File_20_Activity_20_Stage_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_File_20_Activity_20_Stage_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_Project_20_File_20_Activity_20_Stage_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_Project_20_File_20_Activity_20_Stage_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Project_20_File_20_Activity_20_Stage_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 523 599 }{ 327 458 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 180 73 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 52 219 57 224 }*/
/* IO - VPL Root : { 73 219 78 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 107 124 123 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Activity Name");
/* IO - VPL Terminal : { 102 157 107 162 }*/
/* IO - VPL Terminal : { 102 219 107 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 49 19 65 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 44 46 49 51 }*/
/* IO - VPL Terminal : { 44 82 49 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 150 212 166 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 166 217 171 222 }*/
/* End Operation */

/* Begin Operation: { 195 116 211 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 190 157 195 162 }*/
/* IO - VPL Terminal : { 190 217 195 222 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 273 124 373 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Console");
/* IO - VPL Terminal : { 103 321 108 326 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 142 43 158 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Percent");
/* IO - VPL Terminal : { 137 75 142 80 }*/
/* IO - VPL Terminal : { 137 120 142 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 236 18 244 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,2,0,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 554 607 }{ 190 315 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 71 33 76 }*/
/* IO - VPL Root : { 28 156 33 161 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 193 80 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"calc %");
/* IO - VPL Terminal : { 59 220 64 225 }*/
/* IO - VPL Root : { 80 220 85 225 }*/
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

/* Start Operations: { 142 239 }{ 266 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 145 74 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Count Max");
/* IO - VPL Terminal : { 53 183 58 188 }*/
/* IO - VPL Root : { 74 169 79 174 }*/
/* IO - VPL Root : { 74 195 79 200 }*/
/* End Operation */

/* Begin Operation: { 106 239 122 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 101 241 106 246 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 104 124 120 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"integer?");
/* IO - VPL Terminal : { 99 157 104 162 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 60 17 76 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Count Completed");
/* IO - VPL Terminal : { 55 71 60 76 }*/
/* IO - VPL Root : { 76 52 81 57 }*/
/* IO - VPL Root : { 76 89 81 94 }*/
/* End Operation */

/* Begin Operation: { 105 41 121 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"min");
/* IO - VPL Terminal : { 100 53 105 58 }*/
/* IO - VPL Terminal : { 100 67 105 72 }*/
/* IO - VPL Root : { 121 60 126 65 }*/
/* End Operation */

/* Begin Operation: { 149 104 165 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"div");
/* IO - VPL Terminal : { 144 115 149 120 }*/
/* IO - VPL Terminal : { 144 128 149 133 }*/
/* IO - VPL Root : { 165 122 170 127 }*/
/* End Operation */

/* Begin Operation: { 200 28 208 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 195 122 200 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,1,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
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

/* Begin Operation: { 69 104 85 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 85 115 90 120 }*/
/* End Operation */

/* Begin Operation: { 114 20 122 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 109 115 114 120 }*/
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

/* Begin Operation: { 110 115 126 261 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Progress Percent");
/* IO - VPL Terminal : { 105 156 110 161 }*/
/* IO - VPL Terminal : { 105 220 110 225 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 20 156 212 } */
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


Nat4 VPLU_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 151 382 }{ 324 291 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 126 33 131 }*/
/* IO - VPL Root : { 28 186 33 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 22 110 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Count Completed");
/* IO - VPL Terminal : { 89 76 94 81 }*/
/* IO - VPL Root : { 110 57 115 62 }*/
/* IO - VPL Root : { 110 94 115 99 }*/
/* End Operation */

/* Begin Operation: { 56 85 72 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Default One");
/* IO - VPL Terminal : { 51 126 56 131 }*/
/* IO - VPL Root : { 72 127 77 132 }*/
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

/* Begin Operation: { 55 55 71 66 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 50 58 55 63 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 46 142 62 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 62 145 67 150 }*/
/* End Operation */

/* Begin Operation: { 91 85 107 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Replace NULL");
/* IO - VPL Terminal : { 86 114 91 119 }*/
/* IO - VPL Terminal : { 86 145 91 150 }*/
/* IO - VPL Root : { 107 130 112 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 133 21 141 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 128 115 133 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
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
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 20 109 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 96 114 101 119 }*/
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

/* Begin Operation: { 136 105 152 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 131 115 136 120 }*/
/* IO - VPL Terminal : { 131 127 136 132 }*/
/* IO - VPL Root : { 152 122 157 127 }*/
/* End Operation */

/* Begin Operation: { 181 83 197 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Count");
/* IO - VPL Terminal : { 176 100 181 105 }*/
/* IO - VPL Terminal : { 176 122 181 127 }*/
/* IO - VPL Terminal : { 176 149 181 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 227 23 235 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,3,0,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Project_20_File_20_Activity_20_Stage_2F_Set_20_Count_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Project_20_File_20_Activity_20_Stage_2F_Set_20_Count_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 151 382 }{ 194 280 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 113 33 118 }*/
/* IO - VPL Root : { 28 186 33 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 41 80 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Count Completed");
/* IO - VPL Terminal : { 59 76 64 81 }*/
/* IO - VPL Terminal : { 59 113 64 118 }*/
/* IO - VPL Root : { 80 95 85 100 }*/
/* End Operation */

/* Begin Operation: { 103 105 119 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Percent");
/* IO - VPL Terminal : { 98 135 103 140 }*/
/* IO - VPL Terminal : { 98 186 103 191 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 143 23 151 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Load_20_File_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Load_20_File_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Load_20_File_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Load_20_File_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Load_20_File_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 145 719 }{ 200 300 } */
Nat4 VPLU_POAS_20_Load_20_File_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Load_20_File_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 190 301 }{ 387 323 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 77 33 82 }*/
/* IO - VPL Root : { 28 155 33 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 113 94 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project File");
/* IO - VPL Terminal : { 73 155 78 160 }*/
/* IO - VPL Root : { 94 140 99 145 }*/
/* IO - VPL Root : { 94 169 99 174 }*/
/* End Operation */

/* Begin Operation: { 122 110 138 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Read Object File");
/* IO - VPL Terminal : { 117 169 122 174 }*/
/* IO - VPL Root : { 138 170 143 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 171 134 187 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 166 170 171 175 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 209 112 225 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Project Data");
/* IO - VPL Terminal : { 204 140 209 145 }*/
/* IO - VPL Terminal : { 204 170 209 175 }*/
/* IO - VPL Root : { 225 156 230 161 }*/
/* End Operation */

/* Begin Operation: { 244 94 260 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 239 156 244 161 }*/
/* IO - VPL Root : { 260 156 265 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 287 164 303 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File");
/* IO - VPL Terminal : { 282 184 287 189 }*/
/* IO - VPL Terminal : { 282 212 287 217 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 291 100 307 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 307 112 312 117 }*/
/* End Operation */

/* Begin Operation: { 336 18 344 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 331 112 336 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
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

/* Begin Operation: { 50 94 66 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Could not load project file.");
/* IO - VPL Root : { 66 166 71 171 }*/
/* End Operation */

/* Begin Operation: { 95 126 111 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Error");
/* IO - VPL Terminal : { 90 146 95 151 }*/
/* IO - VPL Terminal : { 90 166 95 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 70 116 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 116 82 121 87 }*/
/* End Operation */

/* Begin Operation: { 149 21 157 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 144 115 149 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Find_20_Files_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Find_20_Files_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 73 329 }{ 195 301 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Find_20_Files_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Find_20_Files_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Folder Search",tempClass,tempAttribute_POAS_20_Find_20_Files_2F_Folder_20_Search,environment);
	tempAttribute = attribute_add("Manual Locations",tempClass,tempAttribute_POAS_20_Find_20_Files_2F_Manual_20_Locations,environment);
	tempAttribute = attribute_add("Manual Items",tempClass,tempAttribute_POAS_20_Find_20_Files_2F_Manual_20_Items,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 263 421 }{ 200 300 } */
Nat4 VPLU_POAS_20_Find_20_Files_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Find_20_Files_2F_Run_universal_load(V_Method method,V_Environment environment)
{
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
/* IO - VPL Root : { 28 153 33 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 32 73 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Folder Search");
/* IO - VPL Terminal : { 52 79 57 84 }*/
/* IO - VPL Root : { 73 62 78 67 }*/
/* IO - VPL Root : { 73 94 78 99 }*/
/* End Operation */

/* Begin Operation: { 97 162 113 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 92 198 97 203 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 97 46 113 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Search Pass");
/* IO - VPL Terminal : { 92 94 97 99 }*/
/* IO - VPL Root : { 113 95 118 100 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 21 156 213 } */
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
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 99 71 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 71 111 76 116 }*/
/* End Operation */

/* Begin Operation: { 100 17 108 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 111 100 116 }*/
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


Nat4 VPLU_POAS_20_Find_20_Files_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Find_20_Files_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 217 27 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 79 33 84 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 127 80 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Setup Search");
/* IO - VPL Terminal : { 59 151 64 156 }*/
/* IO - VPL Terminal : { 59 193 64 198 }*/
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

/* Start Operations: { 256 312 }{ 290 332 } */
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
	tempOperation = operation_to_get(tempOperation,environment,"Manual Locations");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 77 101 82 }*/
/* IO - VPL Root : { 96 118 101 123 }*/
/* End Operation */

/* Begin Operation: { 120 108 137 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 114 118 119 123 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 78 194 95 296 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Manual Items");
/* IO - VPL Terminal : { 72 243 77 248 }*/
/* IO - VPL Root : { 96 226 101 231 }*/
/* IO - VPL Root : { 96 260 101 265 }*/
/* End Operation */

/* Begin Operation: { 120 250 137 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 114 260 119 265 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 162 83 179 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Folder Search");
/* IO - VPL Terminal : { 156 132 161 137 }*/
/* IO - VPL Root : { 180 132 185 137 }*/
/* End Operation */

/* Begin Operation: { 204 184 221 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Search");
/* IO - VPL Terminal : { 198 208 203 213 }*/
/* IO - VPL Terminal : { 198 234 203 239 }*/
/* IO - VPL Terminal : { 198 260 203 265 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 66 221 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Folder Search");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 132 203 137 }*/
/* IO - VPL Root : { 222 115 227 120 }*/
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,2,3,3,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,5,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 256 312 }{ 340 313 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 83 195 99 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project Data");
/* IO - VPL Terminal : { 78 239 83 244 }*/
/* IO - VPL Root : { 99 223 104 228 }*/
/* IO - VPL Root : { 99 253 104 258 }*/
/* End Operation */

/* Begin Operation: { 84 22 100 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Project File");
/* IO - VPL Terminal : { 79 64 84 69 }*/
/* IO - VPL Root : { 100 49 105 54 }*/
/* IO - VPL Root : { 100 78 105 83 }*/
/* End Operation */

/* Begin Operation: { 126 39 142 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parent");
/* IO - VPL Terminal : { 121 78 126 83 }*/
/* IO - VPL Root : { 142 79 147 84 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 168 27 185 63 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 162 43 167 48 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 124 227 140 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"names");
/* IO - VPL Terminal : { 119 253 124 258 }*/
/* IO - VPL Root : { 140 253 145 258 }*/
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

/* Start Operations: { 239 706 }{ 424 467 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 30 80 57 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 59 41 64 46 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 64 94 80 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Lists");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 108 85 113 }*/
/* IO - VPL Root : { 80 124 85 129 }*/
/* End Operation */

/* Begin Operation: { 106 92 122 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,3,"detach-l");
/* IO - VPL Terminal : { 101 124 106 129 }*/
/* IO - VPL Root : { 122 101 127 106 }*/
/* IO - VPL Root : { 122 128 127 133 }*/
/* IO - VPL Root : { 122 146 127 151 }*/
/* End Operation */

/* Begin Operation: { 148 22 164 64 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 41 148 46 }*/
/* IO - VPL Root : { 164 34 169 39 }*/
/* IO - VPL Root : { 164 48 169 53 }*/
/* End Operation */

/* Begin Operation: { 148 144 164 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 163 148 168 }*/
/* IO - VPL Root : { 164 156 169 161 }*/
/* IO - VPL Root : { 164 170 169 175 }*/
/* End Operation */

/* Begin Operation: { 185 51 202 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get .section");
/* IO - VPL Root : { 203 93 208 98 }*/
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

/* Begin Operation: { 78 108 95 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"section");
/* IO - VPL Root : { 96 129 101 134 }*/
/* End Operation */

/* Begin Operation: { 120 52 137 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get File Type Extension");
/* IO - VPL Terminal : { 114 129 119 134 }*/
/* IO - VPL Root : { 138 102 143 107 }*/
/* IO - VPL Root : { 138 154 143 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 179 270 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 120 95 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
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

/* Begin Operation: { 232 27 248 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Extension");
/* IO - VPL Terminal : { 227 48 232 53 }*/
/* IO - VPL Terminal : { 227 93 232 98 }*/
/* IO - VPL Root : { 248 69 253 74 }*/
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

/* Start Operations: { 94 238 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 60 78 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 57 82 62 87 }*/
/* IO - VPL Root : { 78 74 83 79 }*/
/* IO - VPL Root : { 78 90 83 95 }*/
/* End Operation */

/* Begin Operation: { 107 90 123 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 102 106 107 111 }*/
/* IO - VPL Terminal : { 102 124 107 129 }*/
/* IO - VPL Root : { 123 115 128 120 }*/
/* End Operation */

/* Begin Operation: { 155 21 163 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 150 115 155 120 }*/
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

/* Begin Operation: { 186 153 203 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get .lib");
/* IO - VPL Root : { 204 183 209 188 }*/
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

/* Begin Operation: { 108 -1262 125 1526 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( ( Carbon \"MartenUIAqua.framework\" ) ( System \"MartenSystem.framework\" ) ( Standard \"MartenStandard.framework\" ) ( Postgres \"MartenPostgres.framework\" ) ( WebKit \" MartenMacOSWebKit.framework\" ) ( OBJC \"MartenMacOSCocoa.framework\" ) ( MacOSX \"MartenMacOSCarbon.framework\" ) ( ABook \"MartenMacOSAddressBook.framework\" ) ( LibC \"MartenLibC.framework\" ) ( Interpreter \"MartenInterpreter.framework\" ) ( CGIC \"MartenCGIC.framework\" ) ( UNIX \"MartenBSD.framework\" ) )");
/* IO - VPL Root : { 126 130 131 135 }*/
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

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 109 95 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"library");
/* IO - VPL Root : { 96 129 101 134 }*/
/* End Operation */

/* Begin Operation: { 120 52 137 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get File Type Extension");
/* IO - VPL Terminal : { 114 129 119 134 }*/
/* IO - VPL Root : { 138 102 143 107 }*/
/* IO - VPL Root : { 138 154 143 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 179 270 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 120 95 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
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

/* Begin Operation: { 187 211 204 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 205 229 210 234 }*/
/* End Operation */

/* Begin Operation: { 232 149 248 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Extension");
/* IO - VPL Terminal : { 226 171 231 176 }*/
/* IO - VPL Terminal : { 226 195 231 200 }*/
/* IO - VPL Terminal : { 226 219 231 224 }*/
/* IO - VPL Root : { 249 179 254 184 }*/
/* IO - VPL Root : { 249 211 254 216 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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

/* Start Operations: { 94 238 }{ 224 374 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
/* IO - VPL Root : { 45 200 50 205 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 71 95 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 88 101 93 }*/
/* IO - VPL Root : { 96 107 101 112 }*/
/* End Operation */

/* Begin Operation: { 121 85 138 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"upgrade bundle to lib?");
/* IO - VPL Terminal : { 115 119 120 124 }*/
/* IO - VPL Terminal : { 115 155 120 160 }*/
/* IO - VPL Terminal : { 115 191 120 196 }*/
/* IO - VPL Root : { 139 131 144 136 }*/
/* IO - VPL Root : { 139 179 144 184 }*/
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

/* Start Operations: { 326 152 }{ 260 405 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 182 50 187 }*/
/* IO - VPL Root : { 45 208 50 213 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 77 86 94 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"(Get Setting)");
/* IO - VPL Terminal : { 71 116 76 121 }*/
/* IO - VPL Terminal : { 71 148 76 153 }*/
/* IO - VPL Root : { 95 132 100 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 85 137 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Upgraded .bundle to .framework");
/* IO - VPL Root : { 138 178 143 183 }*/
/* End Operation */

/* Begin Operation: { 120 294 137 318 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 138 304 143 309 }*/
/* End Operation */

/* Begin Operation: { 162 160 179 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Result");
/* IO - VPL Terminal : { 156 178 161 183 }*/
/* IO - VPL Terminal : { 156 198 161 203 }*/
/* IO - VPL Terminal : { 156 218 161 223 }*/
/* IO - VPL Terminal : { 156 238 161 243 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 209 175 226 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 227 191 232 196 }*/
/* End Operation */

/* Begin Operation: { 251 36 259 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 245 130 250 135 }*/
/* IO - VPL Terminal : { 245 191 250 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,1);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 326 152 }{ 150 300 } */
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
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Terminal : { 72 162 77 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
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
/* IO - VPL Terminal : { 156 181 161 186 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,3,0,3,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 94 238 }{ 185 329 } */
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

/* Begin Operation: { 78 94 95 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 72 121 77 126 }*/
/* IO - VPL Root : { 96 111 101 116 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 224 80 282 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 59 251 64 256 }*/
/* IO - VPL Root : { 80 241 85 246 }*/
/* IO - VPL Root : { 80 260 85 265 }*/
/* End Operation */

/* Begin Operation: { 106 196 122 340 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Application Name");
/* IO - VPL Terminal : { 101 260 106 265 }*/
/* IO - VPL Root : { 122 260 127 265 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 345 118 415 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get .app");
/* IO - VPL Root : { 119 378 124 383 }*/
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

/* Begin Operation: { 78 117 95 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"app");
/* IO - VPL Root : { 96 129 101 134 }*/
/* End Operation */

/* Begin Operation: { 120 52 137 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get File Type Extension");
/* IO - VPL Terminal : { 114 129 119 134 }*/
/* IO - VPL Root : { 138 102 143 107 }*/
/* IO - VPL Root : { 138 154 143 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 179 270 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 120 95 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
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

/* Begin Operation: { 148 266 164 322 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 143 282 148 287 }*/
/* IO - VPL Terminal : { 143 300 148 305 }*/
/* IO - VPL Root : { 164 292 169 297 }*/
/* End Operation */

/* Begin Operation: { 190 270 206 318 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 185 292 190 297 }*/
/* IO - VPL Root : { 206 292 211 297 }*/
/* End Operation */

/* Begin Operation: { 232 262 248 346 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Resources?");
/* IO - VPL Terminal : { 227 302 232 307 }*/
/* IO - VPL Root : { 248 302 253 307 }*/
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

/* Start Operations: { 195 519 }{ 242 285 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 81 80 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"find list?");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
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

/* Start Operations: { 155 8 }{ 203 327 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 99 80 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Resource File Data");
/* IO - VPL Root : { 80 148 85 153 }*/
/* End Operation */

/* Begin Operation: { 106 78 122 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 101 112 106 117 }*/
/* IO - VPL Terminal : { 101 148 106 153 }*/
/* IO - VPL Root : { 122 130 127 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 36 156 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 130 148 135 }*/
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

/* Start Operations: { 155 8 }{ 349 382 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 81 119 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 98 108 103 113 }*/
/* IO - VPL Root : { 119 98 124 103 }*/
/* IO - VPL Root : { 119 117 124 122 }*/
/* End Operation */

/* Begin Operation: { 145 63 161 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Lists");
/* IO - VPL Terminal : { 140 86 145 91 }*/
/* IO - VPL Root : { 161 77 166 82 }*/
/* IO - VPL Root : { 161 93 166 98 }*/
/* End Operation */

/* Begin Operation: { 103 160 119 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"List Data");
/* IO - VPL Terminal : { 98 206 103 211 }*/
/* IO - VPL Root : { 119 206 124 211 }*/
/* End Operation */

/* Begin Operation: { 187 60 203 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 182 81 187 86 }*/
/* IO - VPL Terminal : { 182 104 187 109 }*/
/* IO - VPL Root : { 203 93 208 98 }*/
/* End Operation */

/* Begin Operation: { 145 166 160 282 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Resource File Data\"");
/* IO - VPL Root : { 160 222 165 227 }*/
/* End Operation */

/* Begin Operation: { 187 159 203 271 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 182 206 187 211 }*/
/* IO - VPL Terminal : { 182 222 187 227 }*/
/* IO - VPL Root : { 203 214 208 219 }*/
/* End Operation */

/* Begin Operation: { 229 63 245 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Lists");
/* IO - VPL Terminal : { 224 77 229 82 }*/
/* IO - VPL Terminal : { 224 93 229 98 }*/
/* IO - VPL Root : { 245 86 250 91 }*/
/* End Operation */

/* Begin Operation: { 229 195 245 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 224 214 229 219 }*/
/* IO - VPL Terminal : { 224 233 229 238 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 271 73 287 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Make Dirty");
/* IO - VPL Terminal : { 266 117 271 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 313 30 321 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 308 124 313 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,1,0,2,8);
	result = connect_root_to_terminal(ptrA,2,1,1,9);
	result = connect_root_to_terminal(ptrA,1,3,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 96 122 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Root : { 122 108 127 113 }*/
/* IO - VPL Root : { 122 122 127 127 }*/
/* End Operation */

/* Begin Operation: { 148 84 164 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Names");
/* IO - VPL Terminal : { 143 122 148 127 }*/
/* IO - VPL Root : { 164 122 169 127 }*/
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
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 130 49 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 106 94 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 73 130 78 135 }*/
/* IO - VPL Root : { 94 121 99 126 }*/
/* IO - VPL Root : { 94 138 99 143 }*/
/* End Operation */

/* Begin Operation: { 78 186 95 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"clear file");
/* IO - VPL Terminal : { 72 220 77 225 }*/
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

/* Begin Operation: { 78 103 94 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 73 130 78 135 }*/
/* IO - VPL Root : { 94 120 99 125 }*/
/* IO - VPL Root : { 94 139 99 144 }*/
/* End Operation */

/* Begin Operation: { 120 56 137 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 93 119 98 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 78 207 94 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 94 218 99 223 }*/
/* End Operation */

/* Begin Operation: { 120 192 136 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"File");
/* IO - VPL Terminal : { 115 204 120 209 }*/
/* IO - VPL Terminal : { 115 218 120 223 }*/
/* IO - VPL Root : { 136 212 141 217 }*/
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 115 130 120 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
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
/* IO - VPL Terminal : { 185 117 190 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 274 97 290 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"(join)");
/* IO - VPL Terminal : { 269 104 274 109 }*/
/* IO - VPL Terminal : { 269 117 274 122 }*/
/* IO - VPL Terminal : { 269 132 274 137 }*/
/* IO - VPL Terminal : { 269 144 274 149 }*/
/* IO - VPL Root : { 290 121 295 126 }*/
/* End Operation */

/* Begin Operation: { 331 164 348 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"debug");
/* IO - VPL Terminal : { 325 191 330 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_value_to(tempOperation,environment,kSkip);

	{
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

/* Begin Operation: { 78 81 95 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 72 118 77 123 }*/
/* IO - VPL Root : { 96 118 101 123 }*/
/* End Operation */

/* Begin Operation: { 120 61 137 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Search List");
/* IO - VPL Root : { 138 93 143 98 }*/
/* End Operation */

/* Begin Operation: { 162 56 179 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 156 90 161 95 }*/
/* IO - VPL Terminal : { 156 126 161 131 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 38 212 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 284 210 301 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"modified?");
/* IO - VPL Terminal : { 278 234 283 239 }*/
/* IO - VPL Terminal : { 278 260 283 265 }*/
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
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 82 95 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 72 98 77 103 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 120 117 137 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Make Dirty");
/* IO - VPL Terminal : { 114 162 119 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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

/* Begin Operation: { 372 26 380 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 367 120 372 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,2,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,2,5,1,10);
	result = connect_root_to_terminal(ptrA,1,8,2,10);
	result = connect_root_to_terminal(ptrA,1,9,3,10);
	result = connect_root_to_terminal(ptrA,2,10,3,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,2,11,1,12);
	result = connect_root_to_terminal(ptrA,1,12,1,14);
	result = connect_root_to_terminal(ptrA,1,13,2,14);
	result = connect_root_to_terminal(ptrA,1,14,1,15);
	result = connect_root_to_terminal(ptrA,1,0,1,16);
	result = connect_root_to_terminal(ptrA,1,7,1,17);
	result = connect_root_to_terminal(ptrA,1,10,2,17);
	result = connect_root_to_terminal(ptrA,1,15,3,17);
	result = connect_root_to_terminal(ptrA,1,16,4,17);
	result = connect_root_to_terminal(ptrA,1,17,1,18);
	result = connect_root_to_terminal(ptrA,2,10,1,19);
	result = connect_root_to_terminal(ptrA,2,11,2,19);
	result = connect_root_to_terminal(ptrA,1,17,1,20);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 165 113 181 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"add project?");
/* IO - VPL Terminal : { 160 155 165 160 }*/
/* IO - VPL Root : { 181 156 186 161 }*/
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

/* Start Operations: { 135 712 }{ 295 306 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 46 95 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"VPL Add Search Locations");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 135 712 }{ 295 306 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 106 95 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
/* End Operation */

/* Begin Operation: { 120 73 137 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"~/Library/Marten");
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

/* Start Operations: { 396 206 }{ 421 474 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 83 95 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kUserDomain");
/* IO - VPL Root : { 96 122 101 127 }*/
/* End Operation */

/* Begin Operation: { 78 181 95 341 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kDomainLibraryFolderType");
/* IO - VPL Root : { 96 259 101 264 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 110 179 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path CFURL");
/* IO - VPL Terminal : { 156 180 161 185 }*/
/* IO - VPL Root : { 180 180 185 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 361 179 397 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 180 377 185 382 }*/
/* End Operation */

/* Begin Operation: { 162 281 179 327 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Marten");
/* IO - VPL Root : { 180 302 185 307 }*/
/* End Operation */

/* Begin Operation: { 204 172 221 436 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Copy Appending Path Component");
/* IO - VPL Terminal : { 198 236 203 241 }*/
/* IO - VPL Terminal : { 198 302 203 307 }*/
/* IO - VPL Terminal : { 198 368 203 373 }*/
/* IO - VPL Root : { 222 302 227 307 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 78 221 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 198 113 203 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 333 263 369 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 349 245 354 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 246 225 263 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"exists?");
/* IO - VPL Terminal : { 240 254 245 259 }*/
/* IO - VPL Root : { 264 254 269 259 }*/
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

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 89 95 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 79 222 96 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 73 258 78 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 94 95 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 288 108 305 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 282 130 287 135 }*/
/* IO - VPL Terminal : { 282 154 287 159 }*/
/* IO - VPL Root : { 306 142 311 147 }*/
/* End Operation */

/* Begin Operation: { 330 38 338 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 324 132 329 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,7,1,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 150 301 } */
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

/* Begin Operation: { 162 76 179 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Library/Marten");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Root : { 180 130 185 135 }*/
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

/* Start Operations: { 396 206 }{ 421 474 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 121 95 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kLocalDomain");
/* IO - VPL Root : { 96 162 101 167 }*/
/* End Operation */

/* Begin Operation: { 78 229 95 389 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kDomainLibraryFolderType");
/* IO - VPL Root : { 96 307 101 312 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Folder");
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 197 119 202 }*/
/* IO - VPL Root : { 138 180 143 185 }*/
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

/* Start Operations: { 60 60 }{ 286 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 163 95 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 96 181 101 186 }*/
/* End Operation */

/* Begin Operation: { 120 126 137 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"FSFindFolder");
/* IO - VPL Terminal : { 114 143 119 148 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Terminal : { 114 200 119 205 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
/* IO - VPL Root : { 138 188 143 193 }*/
/* End Operation */

/* Begin Operation: { 162 140 179 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New FSRef");
/* IO - VPL Terminal : { 198 188 203 193 }*/
/* IO - VPL Root : { 222 188 227 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
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

/* Begin Operation: { 162 110 179 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path CFURL");
/* IO - VPL Terminal : { 156 180 161 185 }*/
/* IO - VPL Root : { 180 180 185 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 361 179 397 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 180 377 185 382 }*/
/* End Operation */

/* Begin Operation: { 162 279 179 325 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Marten");
/* IO - VPL Root : { 180 300 185 305 }*/
/* End Operation */

/* Begin Operation: { 204 170 221 434 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Copy Appending Path Component");
/* IO - VPL Terminal : { 198 234 203 239 }*/
/* IO - VPL Terminal : { 198 300 203 305 }*/
/* IO - VPL Terminal : { 198 366 203 371 }*/
/* IO - VPL Root : { 222 300 227 305 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 64 221 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 198 99 203 104 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 333 263 369 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 349 245 354 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 246 225 263 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"exists?");
/* IO - VPL Terminal : { 240 254 245 259 }*/
/* IO - VPL Root : { 264 254 269 259 }*/
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

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 89 95 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 79 222 96 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 73 258 78 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 207 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 94 95 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 288 108 305 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 282 130 287 135 }*/
/* IO - VPL Terminal : { 282 154 287 159 }*/
/* IO - VPL Root : { 306 142 311 147 }*/
/* End Operation */

/* Begin Operation: { 330 38 338 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 324 132 329 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,7,1,10);
	result = connect_root_to_terminal(ptrA,1,0,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 396 206 }{ 150 413 } */
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
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 135 712 }{ 320 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 107 82 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CF URL");
/* IO - VPL Terminal : { 61 134 66 139 }*/
/* IO - VPL Root : { 82 134 87 139 }*/
/* End Operation */

/* Begin Operation: { 111 106 127 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Capture Main Bundle");
/* IO - VPL Terminal : { 106 173 111 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 103 164 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get ref?");
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Root : { 164 134 169 139 }*/
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

/* Start Operations: { 60 60 }{ 284 301 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 75 81 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 60 114 65 119 }*/
/* IO - VPL Root : { 81 114 86 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 96 29 112 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 91 62 96 67 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 134 20 142 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 129 114 134 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
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
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 80 79 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 58 114 63 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 118 20 126 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 113 114 118 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 196 93 212 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Parent");
/* IO - VPL Terminal : { 191 134 196 139 }*/
/* IO - VPL Root : { 212 134 217 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 236 102 252 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 231 114 236 119 }*/
/* IO - VPL Terminal : { 231 134 236 139 }*/
/* IO - VPL Root : { 252 122 257 127 }*/
/* End Operation */

/* Begin Operation: { 237 166 253 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 232 177 237 182 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 273 21 281 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 268 115 273 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 135 712 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 94 80 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 59 116 64 121 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 220 67 236 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Folder Search");
/* IO - VPL Terminal : { 215 114 220 119 }*/
/* IO - VPL Root : { 236 114 241 119 }*/
/* End Operation */

/* Begin Operation: { 274 167 290 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Search");
/* IO - VPL Terminal : { 269 186 274 191 }*/
/* IO - VPL Terminal : { 269 219 274 224 }*/
/* IO - VPL Terminal : { 269 253 274 258 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 273 52 289 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Folder Search");
/* IO - VPL Terminal : { 268 82 273 87 }*/
/* IO - VPL Terminal : { 268 114 273 119 }*/
/* IO - VPL Root : { 289 99 294 104 }*/
/* End Operation */

/* Begin Operation: { 308 24 316 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,1,1,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
	result = connect_root_to_terminal(ptrA,1,5,3,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,7,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 66 19 82 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 61 45 66 50 }*/
/* IO - VPL Terminal : { 61 81 66 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 107 22 115 214 } */
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


Nat4 VPLU_POAS_20_Find_20_Files_2F_Run_20_End_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Find_20_Files_2F_Run_20_End_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 206 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 91 49 96 }*/
/* IO - VPL Root : { 44 170 49 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 151 94 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Finish Search");
/* IO - VPL Terminal : { 73 181 78 186 }*/
/* IO - VPL Terminal : { 73 213 78 218 }*/
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

/* Start Operations: { 291 92 }{ 317 303 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 28 80 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Folder Search");
/* IO - VPL Terminal : { 59 75 64 80 }*/
/* IO - VPL Root : { 80 58 85 63 }*/
/* IO - VPL Root : { 80 90 85 95 }*/
/* End Operation */

/* Begin Operation: { 103 16 119 92 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 98 52 103 57 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 104 165 120 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"extract");
/* IO - VPL Terminal : { 98 179 103 184 }*/
/* IO - VPL Terminal : { 98 195 103 200 }*/
/* IO - VPL Terminal : { 98 211 103 216 }*/
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

/* Start Operations: { 444 513 }{ 290 329 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 69 50 74 }*/
/* IO - VPL Root : { 44 98 49 103 }*/
/* IO - VPL Root : { 44 162 49 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 189 95 293 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get App Name");
/* IO - VPL Terminal : { 72 239 77 244 }*/
/* IO - VPL Root : { 96 239 101 244 }*/
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

/* Start Operations: { 464 532 }{ 248 545 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 281 95 417 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 72 347 77 352 }*/
/* IO - VPL Root : { 96 347 101 352 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 469 137 509 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\".app\"");
/* IO - VPL Root : { 138 487 143 492 }*/
/* End Operation */

/* Begin Operation: { 120 279 137 435 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Application Name");
/* IO - VPL Terminal : { 114 355 119 360 }*/
/* IO - VPL Root : { 138 355 143 360 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 403 179 461 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 156 420 161 425 }*/
/* IO - VPL Terminal : { 156 439 161 444 }*/
/* IO - VPL Root : { 180 430 185 435 }*/
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
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 56 94 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Found Items");
/* IO - VPL Terminal : { 73 98 78 103 }*/
/* IO - VPL Root : { 94 83 99 88 }*/
/* IO - VPL Root : { 94 112 99 117 }*/
/* End Operation */

/* Begin Operation: { 162 163 179 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report missing");
/* IO - VPL Terminal : { 156 187 161 192 }*/
/* IO - VPL Terminal : { 156 213 161 218 }*/
/* IO - VPL Terminal : { 156 239 161 244 }*/
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

/* Start Operations: { 325 878 }{ 332 355 } */
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

/* Begin Operation: { 78 71 94 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Search Items");
/* IO - VPL Terminal : { 73 116 78 121 }*/
/* IO - VPL Root : { 94 100 99 105 }*/
/* IO - VPL Root : { 94 131 99 136 }*/
/* End Operation */

/* Begin Operation: { 120 49 136 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Did not find file");
/* IO - VPL Root : { 136 91 141 96 }*/
/* End Operation */

/* Begin Operation: { 162 65 178 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 157 91 162 96 }*/
/* IO - VPL Terminal : { 157 131 162 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 120 175 137 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"remove app");
/* IO - VPL Terminal : { 114 195 119 200 }*/
/* IO - VPL Terminal : { 114 239 119 244 }*/
/* IO - VPL Root : { 138 218 143 223 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 110 95 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 72 122 77 127 }*/
/* IO - VPL Terminal : { 72 136 77 141 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
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

/* Begin Operation: { 204 93 220 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Locate Stage");
/* IO - VPL Terminal : { 199 116 204 121 }*/
/* IO - VPL Terminal : { 199 181 204 186 }*/
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

/* Start Operations: { 520 133 }{ 304 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 72 76 89 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 55 78 60 83 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 104 -6 121 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"PFAS Locate Files Manually");
/* IO - VPL Terminal : { 98 81 103 86 }*/
/* IO - VPL Root : { 122 81 127 86 }*/
/* End Operation */

/* Begin Operation: { 144 80 160 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Stack");
/* IO - VPL Terminal : { 139 96 144 101 }*/
/* IO - VPL Terminal : { 139 114 144 119 }*/
/* IO - VPL Root : { 160 105 165 110 }*/
/* End Operation */

/* Begin Operation: { 215 34 231 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Push Next Stage");
/* IO - VPL Terminal : { 210 66 215 71 }*/
/* IO - VPL Terminal : { 210 116 215 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 253 23 261 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 37 254 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 87 136 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"New Parse");
/* IO - VPL Terminal : { 115 112 120 117 }*/
/* IO - VPL Terminal : { 114 140 119 145 }*/
/* IO - VPL Root : { 136 102 141 107 }*/
/* IO - VPL Root : { 136 118 141 123 }*/
/* IO - VPL Root : { 136 136 141 141 }*/
/* IO - VPL Root : { 136 153 141 158 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
	tempOperation = operation_output_to(tempOperation,environment,3,iList);
	tempOperation = operation_output_to(tempOperation,environment,4,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 164 364 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 29 82 34 87 }*/
/* IO - VPL Root : { 29 146 34 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 93 70 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Finder Info");
/* IO - VPL Terminal : { 49 147 54 152 }*/
/* IO - VPL Root : { 70 116 75 121 }*/
/* IO - VPL Root : { 70 146 75 151 }*/
/* IO - VPL Root : { 70 181 75 186 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 93 67 109 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Divy Types");
/* IO - VPL Terminal : { 88 84 93 89 }*/
/* IO - VPL Terminal : { 88 125 93 130 }*/
/* IO - VPL Terminal : { 87 142 92 147 }*/
/* IO - VPL Root : { 109 77 114 82 }*/
/* IO - VPL Root : { 109 96 114 101 }*/
/* IO - VPL Root : { 109 115 114 120 }*/
/* IO - VPL Root : { 109 137 114 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
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

/* Begin Operation: { 64 133 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'vplS\'");
/* IO - VPL Terminal : { 59 148 64 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 58 106 63 }*/
/* IO - VPL Terminal : { 101 96 106 101 }*/
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Terminal : { 101 172 106 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 196 374 }{ 200 300 } */
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

/* Begin Operation: { 64 133 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'vplB\'");
/* IO - VPL Terminal : { 59 148 64 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 58 106 63 }*/
/* IO - VPL Terminal : { 101 96 106 101 }*/
/* IO - VPL Terminal : { 101 134 106 139 }*/
/* IO - VPL Terminal : { 101 172 106 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 196 374 }{ 269 313 } */
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

/* Begin Operation: { 64 99 80 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'APPL\'");
/* IO - VPL Terminal : { 59 116 64 121 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 105 38 122 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name As String");
/* IO - VPL Terminal : { 99 107 104 112 }*/
/* IO - VPL Root : { 123 107 128 112 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 145 138 162 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 139 150 144 155 }*/
/* IO - VPL Terminal : { 139 164 144 169 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 192 26 200 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 187 62 192 67 }*/
/* IO - VPL Terminal : { 187 100 192 105 }*/
/* IO - VPL Terminal : { 187 138 192 143 }*/
/* IO - VPL Terminal : { 187 176 192 181 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,1,0,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 196 374 }{ 200 300 } */
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

/* Begin Operation: { 78 109 95 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'FMWK\'");
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 72 119 77 }*/
/* IO - VPL Terminal : { 114 110 119 115 }*/
/* IO - VPL Terminal : { 114 148 119 153 }*/
/* IO - VPL Terminal : { 114 186 119 191 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 196 374 }{ 197 354 } */
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

/* Begin Operation: { 78 60 95 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report unknown");
/* IO - VPL Terminal : { 72 95 77 100 }*/
/* IO - VPL Terminal : { 72 132 77 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_value_to(tempOperation,environment,kDebug);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 292 423 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 178 95 304 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"integer-to-string");
/* IO - VPL Terminal : { 72 239 77 244 }*/
/* IO - VPL Root : { 96 239 101 244 }*/
/* End Operation */

/* Begin Operation: { 78 72 95 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Unknown Type");
/* IO - VPL Root : { 96 115 101 120 }*/
/* End Operation */

/* Begin Operation: { 120 81 137 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 114 115 119 120 }*/
/* IO - VPL Terminal : { 114 151 119 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 224 179 366 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name As String");
/* IO - VPL Terminal : { 156 293 161 298 }*/
/* IO - VPL Root : { 180 293 185 298 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 113 179 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Unknown File");
/* IO - VPL Root : { 180 152 185 157 }*/
/* End Operation */

/* Begin Operation: { 204 118 221 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 198 152 203 157 }*/
/* IO - VPL Terminal : { 198 188 203 193 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 41 128 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 115 77 120 82 }*/
/* IO - VPL Terminal : { 115 115 120 120 }*/
/* IO - VPL Terminal : { 115 153 120 158 }*/
/* IO - VPL Terminal : { 115 191 120 196 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,4,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 139 20 147 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 134 56 139 61 }*/
/* IO - VPL Terminal : { 134 94 139 99 }*/
/* IO - VPL Terminal : { 134 132 139 137 }*/
/* IO - VPL Terminal : { 134 170 139 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,2,2,2,3);
	result = connect_root_to_terminal(ptrA,3,2,3,3);
	result = connect_root_to_terminal(ptrA,4,2,4,3);
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
/* IO - VPL Root : { 29 82 34 87 }*/
/* IO - VPL Root : { 29 146 34 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 20 68 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 55 56 60 61 }*/
/* IO - VPL Terminal : { 55 94 60 99 }*/
/* IO - VPL Terminal : { 55 132 60 137 }*/
/* IO - VPL Terminal : { 55 170 60 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 204 94 220 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"set interpreter file");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 162 203 167 }*/
/* IO - VPL Terminal : { 198 205 203 210 }*/
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

/* Start Operations: { 320 223 }{ 206 266 } */
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

/* Begin Operation: { 78 84 95 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Manual Items");
/* IO - VPL Terminal : { 72 133 77 138 }*/
/* IO - VPL Root : { 96 116 101 121 }*/
/* IO - VPL Root : { 96 150 101 155 }*/
/* End Operation */

/* Begin Operation: { 120 140 137 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 114 150 119 155 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 38 170 230 } */
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

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 320 223 }{ 306 622 } */
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

/* Begin Operation: { 78 204 94 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 73 210 78 215 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 78 36 94 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 73 97 78 102 }*/
/* IO - VPL Root : { 94 98 99 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 78 271 94 331 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 73 299 78 304 }*/
/* IO - VPL Root : { 94 299 99 304 }*/
/* End Operation */

/* Begin Operation: { 120 372 137 470 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"version check");
/* IO - VPL Terminal : { 114 419 119 424 }*/
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

/* Start Operations: { 60 60 }{ 466 356 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 107 95 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"MartenInterpreterVersion");
/* IO - VPL Root : { 96 180 101 185 }*/
/* End Operation */

/* Begin Operation: { 120 94 137 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get dictionary key");
/* IO - VPL Terminal : { 114 131 119 136 }*/
/* IO - VPL Terminal : { 114 180 119 185 }*/
/* IO - VPL Root : { 138 152 143 157 }*/
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

/* Start Operations: { 101 662 }{ 358 372 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CF Bundle");
/* IO - VPL Terminal : { 72 75 77 80 }*/
/* IO - VPL Root : { 96 75 101 80 }*/
/* End Operation */

/* Begin Operation: { 120 44 137 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create From FSRef");
/* IO - VPL Terminal : { 114 87 119 92 }*/
/* IO - VPL Terminal : { 114 132 119 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 40 179 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Value For Info Dictionary Key");
/* IO - VPL Terminal : { 156 87 161 92 }*/
/* IO - VPL Terminal : { 156 185 161 190 }*/
/* IO - VPL Root : { 180 145 185 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 36 221 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 198 72 203 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 129 221 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 198 145 203 150 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 204 198 221 286 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"coerce type");
/* IO - VPL Terminal : { 198 240 203 245 }*/
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

/* Begin Operation: { 78 142 95 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"__CFString");
/* IO - VPL Root : { 96 172 101 177 }*/
/* End Operation */

/* Begin Operation: { 120 90 137 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"set-external-type");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 172 119 177 }*/
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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

/* Begin Operation: { 246 84 263 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CFStringRef");
/* IO - VPL Terminal : { 240 145 245 150 }*/
/* IO - VPL Root : { 264 145 269 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 130 287 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [5 to 4] */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 101 662 }{ 180 304 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 115 95 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"1.0\"");
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

/* Begin Operation: { 162 94 179 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get compatible version");
/* IO - VPL Terminal : { 156 179 161 184 }*/
/* IO - VPL Root : { 180 166 185 171 }*/
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

/* Start Operations: { 60 60 }{ 324 390 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,0,1,"CFBundleGetMainBundle");
/* IO - VPL Root : { 96 116 101 121 }*/
/* End Operation */

/* Begin Operation: { 78 232 95 294 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"CFSTR");
/* IO - VPL Terminal : { 72 261 77 266 }*/
/* IO - VPL Root : { 96 261 101 266 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 97 137 347 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"CFBundleGetValueForInfoDictionaryKey");
/* IO - VPL Terminal : { 114 178 119 183 }*/
/* IO - VPL Terminal : { 114 261 119 266 }*/
/* IO - VPL Root : { 138 178 143 183 }*/
/* IO - VPL Root : { 138 261 143 266 }*/
/* End Operation */

/* Begin Operation: { 162 92 179 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 156 108 161 113 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 198 179 286 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"coerce type");
/* IO - VPL Terminal : { 156 240 161 245 }*/
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

/* Begin Operation: { 78 142 95 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"__CFString");
/* IO - VPL Root : { 96 172 101 177 }*/
/* End Operation */

/* Begin Operation: { 120 90 137 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"set-external-type");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 172 119 177 }*/
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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

/* Begin Operation: { 204 117 221 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CFStringRef");
/* IO - VPL Terminal : { 198 178 203 183 }*/
/* IO - VPL Root : { 222 178 227 183 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 162 263 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 240 178 245 183 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 288 37 296 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 131 287 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [6 to 5] */
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

/* Begin Operation: { 78 65 95 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Interpreter Version");
/* IO - VPL Root : { 96 130 101 135 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 140 221 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 198 152 203 157 }*/
/* IO - VPL Terminal : { 198 166 203 171 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 246 36 263 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Upgrading Interpreter From");
/* IO - VPL Root : { 264 116 269 121 }*/
/* End Operation */

/* Begin Operation: { 288 82 305 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 282 116 287 121 }*/
/* IO - VPL Terminal : { 282 152 287 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 330 61 347 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"New Interpreter Version");
/* IO - VPL Root : { 348 130 353 135 }*/
/* End Operation */

/* Begin Operation: { 372 96 389 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 366 130 371 135 }*/
/* IO - VPL Terminal : { 366 166 371 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 414 36 422 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,2,2,6);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,3,2,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 257 136 347 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSSpec");
/* IO - VPL Terminal : { 115 299 120 304 }*/
/* IO - VPL Root : { 136 301 141 306 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 290 178 317 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 157 301 162 306 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 120 111 136 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Interpreter");
/* IO - VPL Terminal : { 115 152 120 157 }*/
/* IO - VPL Root : { 136 152 141 157 }*/
/* End Operation */

/* Begin Operation: { 162 187 178 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"File");
/* IO - VPL Terminal : { 157 199 162 204 }*/
/* IO - VPL Terminal : { 157 213 162 218 }*/
/* IO - VPL Root : { 178 207 183 212 }*/
/* End Operation */

/* Begin Operation: { 162 70 178 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 157 98 162 103 }*/
/* IO - VPL Terminal : { 157 128 162 133 }*/
/* IO - VPL Root : { 178 113 183 118 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,5,2,8);
	result = connect_root_to_terminal(ptrA,1,2,1,9);
	result = connect_root_to_terminal(ptrA,1,7,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* Synchro [9 to 8] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 320 223 }{ 204 309 } */
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

/* Begin Operation: { 64 59 80 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"POAS Name Application");
/* IO - VPL Terminal : { 59 131 64 136 }*/
/* IO - VPL Root : { 80 131 85 136 }*/
/* End Operation */

/* Begin Operation: { 106 50 122 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Push Next Stage");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 131 106 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 72 179 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Merge files");
/* IO - VPL Terminal : { 156 86 161 91 }*/
/* IO - VPL Terminal : { 156 102 161 107 }*/
/* IO - VPL Terminal : { 156 118 161 123 }*/
/* IO - VPL Terminal : { 156 134 161 139 }*/
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

/* Start Operations: { 464 532 }{ 374 336 } */
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

/* Begin Operation: { 78 77 95 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Section Files");
/* IO - VPL Terminal : { 72 123 77 128 }*/
/* IO - VPL Root : { 96 107 101 112 }*/
/* IO - VPL Root : { 96 139 101 144 }*/
/* End Operation */

/* Begin Operation: { 120 56 137 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Primitive Files");
/* IO - VPL Terminal : { 114 107 119 112 }*/
/* IO - VPL Root : { 138 89 143 94 }*/
/* IO - VPL Root : { 138 124 143 129 }*/
/* End Operation */

/* Begin Operation: { 162 47 179 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Other Files");
/* IO - VPL Terminal : { 156 89 161 94 }*/
/* IO - VPL Root : { 180 74 185 79 }*/
/* IO - VPL Root : { 180 103 185 108 }*/
/* End Operation */

/* Begin Operation: { 120 204 137 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(join)");
/* IO - VPL Terminal : { 114 220 119 225 }*/
/* IO - VPL Terminal : { 114 238 119 243 }*/
/* IO - VPL Root : { 138 230 143 235 }*/
/* End Operation */

/* Begin Operation: { 204 72 220 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Section Files");
/* IO - VPL Terminal : { 199 101 204 106 }*/
/* IO - VPL Terminal : { 199 132 204 137 }*/
/* IO - VPL Root : { 220 117 225 122 }*/
/* End Operation */

/* Begin Operation: { 162 224 179 280 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(join)");
/* IO - VPL Terminal : { 156 240 161 245 }*/
/* IO - VPL Terminal : { 156 258 161 263 }*/
/* IO - VPL Root : { 180 250 185 255 }*/
/* End Operation */

/* Begin Operation: { 246 85 262 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Primitive Files");
/* IO - VPL Terminal : { 241 117 246 122 }*/
/* IO - VPL Terminal : { 241 151 246 156 }*/
/* IO - VPL Root : { 262 135 267 140 }*/
/* End Operation */

/* Begin Operation: { 204 244 221 300 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(join)");
/* IO - VPL Terminal : { 198 260 203 265 }*/
/* IO - VPL Terminal : { 198 278 203 283 }*/
/* IO - VPL Root : { 222 270 227 275 }*/
/* End Operation */

/* Begin Operation: { 288 216 304 300 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Other Files");
/* IO - VPL Terminal : { 283 242 288 247 }*/
/* IO - VPL Terminal : { 283 270 288 275 }*/
/* IO - VPL Root : { 304 256 309 261 }*/
/* End Operation */

/* Begin Operation: { 330 36 338 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,2,2,1,6);
	result = connect_root_to_terminal(ptrA,3,0,2,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,2,3,1,8);
	result = connect_root_to_terminal(ptrA,4,0,2,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 464 532 }{ 248 308 } */
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

/* Begin Operation: { 78 36 94 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Section Files");
/* IO - VPL Terminal : { 73 65 78 70 }*/
/* IO - VPL Terminal : { 73 96 78 101 }*/
/* IO - VPL Root : { 94 81 99 86 }*/
/* End Operation */

/* Begin Operation: { 111 77 127 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Primitive Files");
/* IO - VPL Terminal : { 106 109 111 114 }*/
/* IO - VPL Terminal : { 106 143 111 148 }*/
/* IO - VPL Root : { 127 127 132 132 }*/
/* End Operation */

/* Begin Operation: { 162 132 178 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Other Files");
/* IO - VPL Terminal : { 157 158 162 163 }*/
/* IO - VPL Terminal : { 157 186 162 191 }*/
/* IO - VPL Root : { 178 172 183 177 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,4,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,1,1,3,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,3,0,2,5);
	result = connect_root_to_terminal(ptrA,3,4,3,5);
	result = connect_root_to_terminal(ptrA,3,0,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,2,4,3,6);
	result = connect_root_to_terminal(ptrA,4,4,4,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 155 155 171 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Dispose");
/* IO - VPL Terminal : { 150 189 155 194 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 173 74 190 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 191 90 196 95 }*/
/* End Operation */

/* Begin Operation: { 218 28 234 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Folder Search");
/* IO - VPL Terminal : { 213 58 218 63 }*/
/* IO - VPL Terminal : { 213 90 218 95 }*/
/* IO - VPL Root : { 234 75 239 80 }*/
/* End Operation */

/* Begin Operation: { 259 24 267 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 51 94 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run End");
/* IO - VPL Terminal : { 73 75 78 80 }*/
/* IO - VPL Terminal : { 73 101 78 106 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 120 43 137 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"cleanup");
/* IO - VPL Terminal : { 114 75 119 80 }*/
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

/* Start Operations: { 60 60 }{ 206 314 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 106 95 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 96 116 101 121 }*/
/* End Operation */

/* Begin Operation: { 120 36 137 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Manual Locations");
/* IO - VPL Terminal : { 114 75 119 80 }*/
/* IO - VPL Terminal : { 114 116 119 121 }*/
/* IO - VPL Root : { 138 96 143 101 }*/
/* End Operation */

/* Begin Operation: { 78 232 95 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 96 242 101 247 }*/
/* End Operation */

/* Begin Operation: { 120 176 137 278 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Manual Items");
/* IO - VPL Terminal : { 114 208 119 213 }*/
/* IO - VPL Terminal : { 114 242 119 247 }*/
/* IO - VPL Root : { 138 225 143 230 }*/
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Read_20_Primitives_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Read_20_Primitives_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Read_20_Primitives_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Read_20_Primitives_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Read_20_Primitives_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 103 429 }{ 200 300 } */
Nat4 VPLU_POAS_20_Read_20_Primitives_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Read_20_Primitives_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 162 721 }{ 334 385 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 73 35 78 }*/
/* IO - VPL Root : { 30 159 35 164 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 107 80 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Primitive Files");
/* IO - VPL Terminal : { 59 157 64 162 }*/
/* IO - VPL Root : { 80 139 85 144 }*/
/* IO - VPL Root : { 80 173 85 178 }*/
/* End Operation */

/* Begin Operation: { 106 229 122 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 101 237 106 242 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 140 122 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 101 172 106 177 }*/
/* IO - VPL Root : { 122 160 127 165 }*/
/* IO - VPL Root : { 122 182 127 187 }*/
/* End Operation */

/* Begin Operation: { 148 136 164 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Primitive Files");
/* IO - VPL Terminal : { 143 168 148 173 }*/
/* IO - VPL Terminal : { 143 202 148 207 }*/
/* IO - VPL Root : { 164 186 169 191 }*/
/* End Operation */

/* Begin Operation: { 190 43 206 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Up Count");
/* IO - VPL Terminal : { 185 56 190 61 }*/
/* IO - VPL Terminal : { 185 81 190 86 }*/
/* IO - VPL Terminal : { 185 106 190 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 109 248 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 248 124 253 129 }*/
/* End Operation */

/* Begin Operation: { 148 22 164 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Import Prims");
/* IO - VPL Terminal : { 143 51 148 56 }*/
/* IO - VPL Terminal : { 143 82 148 87 }*/
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

/* Start Operations: { 187 272 }{ 303 407 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 82 49 87 }*/
/* IO - VPL Root : { 44 178 49 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 15 94 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 73 82 78 87 }*/
/* IO - VPL Root : { 94 83 99 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 82 136 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Primitives Data");
/* IO - VPL Root : { 136 124 141 129 }*/
/* End Operation */

/* Begin Operation: { 162 52 178 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 157 83 162 88 }*/
/* IO - VPL Terminal : { 157 124 162 129 }*/
/* IO - VPL Root : { 178 104 183 109 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 201 179 347 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"New Prims From FSRef");
/* IO - VPL Terminal : { 156 247 161 252 }*/
/* IO - VPL Terminal : { 156 295 161 300 }*/
/* IO - VPL Root : { 180 272 185 277 }*/
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

/* Start Operations: { 60 60 }{ 264 294 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 108 94 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 73 150 78 155 }*/
/* IO - VPL Root : { 94 135 99 140 }*/
/* IO - VPL Root : { 94 164 99 169 }*/
/* End Operation */

/* Begin Operation: { 120 183 136 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 115 194 120 199 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 120 46 136 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Primitives Data");
/* IO - VPL Terminal : { 115 97 120 102 }*/
/* IO - VPL Root : { 136 97 141 102 }*/
/* End Operation */

/* Begin Operation: { 162 66 179 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create With FSRef");
/* IO - VPL Terminal : { 156 97 161 102 }*/
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 163 161 168 }*/
/* IO - VPL Root : { 180 130 185 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
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
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 69 220 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find and Replace");
/* IO - VPL Terminal : { 199 104 204 109 }*/
/* IO - VPL Terminal : { 199 149 204 154 }*/
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

/* Start Operations: { 60 60 }{ 268 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 62 77 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 56 82 61 87 }*/
/* IO - VPL Root : { 77 74 82 79 }*/
/* IO - VPL Root : { 77 88 82 93 }*/
/* End Operation */

/* Begin Operation: { 107 102 123 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 102 123 107 128 }*/
/* IO - VPL Terminal : { 102 146 107 151 }*/
/* IO - VPL Root : { 123 135 128 140 }*/
/* End Operation */

/* Begin Operation: { 148 62 164 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 74 148 79 }*/
/* IO - VPL Terminal : { 143 88 148 93 }*/
/* IO - VPL Root : { 164 82 169 87 }*/
/* End Operation */

/* Begin Operation: { 185 132 201 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 180 146 185 151 }*/
/* IO - VPL Terminal : { 180 170 185 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 226 18 234 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
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

/* Begin Operation: { 120 234 136 314 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"debug path");
/* IO - VPL Terminal : { 115 270 120 275 }*/
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

/* Begin Operation: { 64 153 80 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path");
/* IO - VPL Terminal : { 59 201 64 206 }*/
/* IO - VPL Root : { 80 203 85 208 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 64 47 80 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Loaded Library");
/* IO - VPL Root : { 80 87 85 92 }*/
/* End Operation */

/* Begin Operation: { 106 55 122 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 101 87 106 92 }*/
/* IO - VPL Terminal : { 101 121 106 126 }*/
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
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 46 254 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 187 272 }{ 226 307 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 79 80 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name As String");
/* IO - VPL Terminal : { 59 148 64 153 }*/
/* IO - VPL Root : { 80 147 85 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 50 122 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Trouble reading library");
/* IO - VPL Root : { 122 113 127 118 }*/
/* End Operation */

/* Begin Operation: { 148 81 164 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 143 113 148 118 }*/
/* IO - VPL Terminal : { 143 147 148 152 }*/
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
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 179 206 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Next Name");
/* IO - VPL Terminal : { 185 200 190 205 }*/
/* IO - VPL Terminal : { 185 240 190 245 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 29 282 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 124 274 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,2,0,3,5);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,3,2,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,4,2,8);
	result = connect_root_to_terminal(ptrA,1,6,1,9);
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

/* Begin Operation: { 52 102 68 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
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


Nat4 VPLU_POAS_20_Read_20_Primitives_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Read_20_Primitives_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 281 280 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 80 35 85 }*/
/* IO - VPL Root : { 30 157 35 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 160 122 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Max");
/* IO - VPL Terminal : { 101 179 106 184 }*/
/* IO - VPL Terminal : { 101 207 106 212 }*/
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

/* Start Operations: { 60 60 }{ 233 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 96 66 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Primitive Files");
/* IO - VPL Terminal : { 45 146 50 151 }*/
/* IO - VPL Root : { 66 128 71 133 }*/
/* IO - VPL Root : { 66 162 71 167 }*/
/* End Operation */

/* Begin Operation: { 99 131 115 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 94 162 99 167 }*/
/* IO - VPL Root : { 115 162 120 167 }*/
/* End Operation */

/* Begin Operation: { 154 58 170 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Count Max");
/* IO - VPL Terminal : { 149 82 154 87 }*/
/* IO - VPL Terminal : { 149 108 154 113 }*/
/* IO - VPL Root : { 170 96 175 101 }*/
/* End Operation */

/* Begin Operation: { 191 20 199 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 154 80 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"clean up old");
/* IO - VPL Terminal : { 59 195 64 200 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 58 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 191 285 }{ 342 308 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 124 114 140 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Primitives Data");
/* IO - VPL Root : { 140 156 145 161 }*/
/* End Operation */

/* Begin Operation: { 80 47 96 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 75 114 80 119 }*/
/* IO - VPL Root : { 96 115 101 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 169 84 185 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 164 115 169 120 }*/
/* IO - VPL Terminal : { 164 156 169 161 }*/
/* IO - VPL Root : { 185 136 190 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 227 85 243 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Close and Clear");
/* IO - VPL Terminal : { 222 136 227 141 }*/
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

/* Start Operations: { 60 60 }{ 220 301 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 62 77 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 56 82 61 87 }*/
/* IO - VPL Root : { 77 74 82 79 }*/
/* IO - VPL Root : { 77 88 82 93 }*/
/* End Operation */

/* Begin Operation: { 102 138 118 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 97 166 102 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 103 80 119 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 119 88 124 93 }*/
/* End Operation */

/* Begin Operation: { 148 62 164 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 74 148 79 }*/
/* IO - VPL Terminal : { 143 88 148 93 }*/
/* IO - VPL Root : { 164 82 169 87 }*/
/* End Operation */

/* Begin Operation: { 181 18 189 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 269 27 277 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 24 80 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 59 51 64 56 }*/
/* IO - VPL Terminal : { 59 87 64 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 106 27 122 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Next Name");
/* IO - VPL Terminal : { 101 48 106 53 }*/
/* IO - VPL Terminal : { 101 88 106 93 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_POAS_20_Read_20_Primitives_2F_Next_20_Name_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Read_20_Primitives_2F_Next_20_Name_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 211 584 }{ 205 337 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 66 35 71 }*/
/* IO - VPL Root : { 30 168 35 173 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 190 80 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"got next?");
/* IO - VPL Terminal : { 59 225 64 230 }*/
/* IO - VPL Root : { 80 225 85 230 }*/
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

/* Start Operations: { 184 607 }{ 300 293 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 130 49 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 80 94 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Primitive Files");
/* IO - VPL Terminal : { 73 130 78 135 }*/
/* IO - VPL Root : { 94 112 99 117 }*/
/* IO - VPL Root : { 94 146 99 151 }*/
/* End Operation */

/* Begin Operation: { 120 208 136 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 115 216 120 221 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 120 114 136 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 115 146 120 151 }*/
/* IO - VPL Root : { 136 134 141 139 }*/
/* IO - VPL Root : { 136 156 141 161 }*/
/* End Operation */

/* Begin Operation: { 162 65 179 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name As String");
/* IO - VPL Terminal : { 156 134 161 139 }*/
/* IO - VPL Root : { 180 134 185 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 104 221 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"library?");
/* IO - VPL Terminal : { 198 134 203 139 }*/
/* IO - VPL Root : { 222 134 227 139 }*/
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

/* Start Operations: { 60 60 }{ 291 301 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 114 95 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get .lib");
/* IO - VPL Root : { 96 144 101 149 }*/
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

/* Begin Operation: { 78 109 95 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"library");
/* IO - VPL Root : { 96 129 101 134 }*/
/* End Operation */

/* Begin Operation: { 120 52 137 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get File Type Extension");
/* IO - VPL Terminal : { 114 129 119 134 }*/
/* IO - VPL Root : { 138 102 143 107 }*/
/* IO - VPL Root : { 138 154 143 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 179 270 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 120 95 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
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

/* Begin Operation: { 120 118 136 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"in\"");
/* IO - VPL Terminal : { 115 130 120 135 }*/
/* IO - VPL Terminal : { 115 144 120 149 }*/
/* IO - VPL Root : { 136 137 141 142 }*/
/* End Operation */

/* Begin Operation: { 162 213 178 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 157 215 162 220 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 112 178 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"minus-one");
/* IO - VPL Terminal : { 157 148 162 153 }*/
/* IO - VPL Root : { 178 148 183 153 }*/
/* End Operation */

/* Begin Operation: { 204 114 220 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"prefix");
/* IO - VPL Terminal : { 199 130 204 135 }*/
/* IO - VPL Terminal : { 199 148 204 153 }*/
/* IO - VPL Root : { 220 130 225 135 }*/
/* IO - VPL Root : { 220 148 225 153 }*/
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 150 284 } */
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

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 241 130 246 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 184 607 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 112 80 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
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

/* Begin Operation: { 106 129 122 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 101 168 106 173 }*/
/* IO - VPL Terminal : { 101 225 106 230 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 25 156 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Read_20_Sections_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Read_20_Sections_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Read_20_Sections_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Read_20_Sections_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Read_20_Sections_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_POAS_20_Read_20_Sections_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Read_20_Sections_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 231 641 }{ 417 330 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 71 33 76 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 112 72 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Section Files");
/* IO - VPL Terminal : { 51 157 56 162 }*/
/* IO - VPL Root : { 72 141 77 146 }*/
/* IO - VPL Root : { 72 172 77 177 }*/
/* End Operation */

/* Begin Operation: { 97 229 113 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 92 237 97 242 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 96 140 112 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 91 172 96 177 }*/
/* IO - VPL Root : { 112 160 117 165 }*/
/* IO - VPL Root : { 112 182 117 187 }*/
/* End Operation */

/* Begin Operation: { 145 112 161 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Section Files");
/* IO - VPL Terminal : { 140 141 145 146 }*/
/* IO - VPL Terminal : { 140 172 145 177 }*/
/* IO - VPL Root : { 161 157 166 162 }*/
/* End Operation */

/* Begin Operation: { 179 236 195 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 195 239 200 244 }*/
/* End Operation */

/* Begin Operation: { 224 200 240 278 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Up Count");
/* IO - VPL Terminal : { 219 207 224 212 }*/
/* IO - VPL Terminal : { 219 239 224 244 }*/
/* IO - VPL Terminal : { 219 263 224 268 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 -2 124 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 103 65 108 70 }*/
/* IO - VPL Root : { 124 66 129 71 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 183 74 199 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Section Data");
/* IO - VPL Root : { 199 107 204 112 }*/
/* End Operation */

/* Begin Operation: { 228 35 244 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 223 66 228 71 }*/
/* IO - VPL Terminal : { 223 107 228 112 }*/
/* IO - VPL Root : { 244 87 249 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 286 106 302 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find and Replace");
/* IO - VPL Terminal : { 281 132 286 137 }*/
/* IO - VPL Terminal : { 281 160 286 165 }*/
/* IO - VPL Terminal : { 281 188 286 193 }*/
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

/* Start Operations: { 533 871 }{ 363 484 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
/* IO - VPL Root : { 28 197 33 202 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 130 74 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Read Object File");
/* IO - VPL Terminal : { 53 190 58 195 }*/
/* IO - VPL Root : { 74 189 79 194 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 102 180 118 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 97 216 102 221 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 61 62 77 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 56 82 61 87 }*/
/* IO - VPL Root : { 77 74 82 79 }*/
/* IO - VPL Root : { 77 88 82 93 }*/
/* End Operation */

/* Begin Operation: { 103 101 119 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"replace");
/* IO - VPL Terminal : { 98 114 103 119 }*/
/* IO - VPL Terminal : { 98 146 103 151 }*/
/* IO - VPL Root : { 119 132 124 137 }*/
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

/* Start Cases: { 139 167 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 495 830 }{ 456 333 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 36 72 84 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 51 58 56 63 }*/
/* IO - VPL Root : { 72 58 77 63 }*/
/* End Operation */

/* Begin Operation: { 96 33 112 88 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Item Data");
/* IO - VPL Terminal : { 91 58 96 63 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 163 42 179 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 158 82 163 87 }*/
/* IO - VPL Root : { 179 82 184 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 144 178 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 157 184 162 189 }*/
/* IO - VPL Root : { 178 184 183 189 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 214 120 230 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 209 128 214 133 }*/
/* IO - VPL Terminal : { 209 138 214 143 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 260 30 268 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 255 124 260 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 495 830 }{ 200 300 } */
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

/* Begin Operation: { 148 62 164 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 74 148 79 }*/
/* IO - VPL Terminal : { 143 88 148 93 }*/
/* IO - VPL Root : { 164 82 169 87 }*/
/* End Operation */

/* Begin Operation: { 139 226 155 306 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 134 262 139 267 }*/
/* IO - VPL Root : { 155 262 160 267 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 159 206 299 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 185 197 190 202 }*/
/* IO - VPL Terminal : { 185 262 190 267 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 95 289 111 347 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 90 316 95 321 }*/
/* IO - VPL Root : { 111 306 116 311 }*/
/* IO - VPL Root : { 111 325 116 330 }*/
/* End Operation */

/* Begin Operation: { 139 341 155 413 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set File");
/* IO - VPL Terminal : { 134 364 139 369 }*/
/* IO - VPL Terminal : { 134 391 139 396 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 237 16 245 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,3,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,1,1,8);
	result = connect_root_to_terminal(ptrA,2,8,1,9);
	result = connect_root_to_terminal(ptrA,2,0,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 254 284 } */
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

/* Begin Operation: { 64 97 80 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Full Path");
/* IO - VPL Terminal : { 59 146 64 151 }*/
/* IO - VPL Root : { 80 146 85 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 102 55 118 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Error reading section");
/* IO - VPL Root : { 118 112 123 117 }*/
/* End Operation */

/* Begin Operation: { 147 80 163 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 142 112 147 117 }*/
/* IO - VPL Terminal : { 142 146 147 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 213 22 221 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 333 109 349 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 349 124 354 129 }*/
/* End Operation */

/* Begin Operation: { 378 29 386 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 373 124 378 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,4,3,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,1,3,2,10);
	result = connect_root_to_terminal(ptrA,2,0,3,10);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
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

/* Begin Operation: { 52 102 68 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
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


Nat4 VPLU_POAS_20_Read_20_Sections_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Read_20_Sections_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 495 982 }{ 156 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 79 33 84 }*/
/* IO - VPL Root : { 28 147 33 152 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 165 76 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Max");
/* IO - VPL Terminal : { 55 184 60 189 }*/
/* IO - VPL Terminal : { 55 212 60 217 }*/
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

/* Start Operations: { 60 60 }{ 233 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 101 66 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Section Files");
/* IO - VPL Terminal : { 45 146 50 151 }*/
/* IO - VPL Root : { 66 130 71 135 }*/
/* IO - VPL Root : { 66 161 71 166 }*/
/* End Operation */

/* Begin Operation: { 99 130 115 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 94 161 99 166 }*/
/* IO - VPL Root : { 115 161 120 166 }*/
/* End Operation */

/* Begin Operation: { 154 58 170 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Count Max");
/* IO - VPL Terminal : { 149 82 154 87 }*/
/* IO - VPL Terminal : { 149 108 154 113 }*/
/* IO - VPL Root : { 170 96 175 101 }*/
/* End Operation */

/* Begin Operation: { 191 20 199 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 63 35 79 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 58 63 63 68 }*/
/* IO - VPL Terminal : { 58 97 63 102 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 102 31 110 223 } */
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


Nat4 VPLU_POAS_20_Read_20_Sections_2F_Run_20_End_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Read_20_Sections_2F_Run_20_End_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 247 283 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 78 33 83 }*/
/* IO - VPL Root : { 28 155 33 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 138 77 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"clean up missing");
/* IO - VPL Terminal : { 56 191 61 196 }*/
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

/* Start Operations: { 60 60 }{ 342 308 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 124 123 140 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Section Data");
/* IO - VPL Root : { 140 156 145 161 }*/
/* End Operation */

/* Begin Operation: { 80 47 96 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 75 114 80 119 }*/
/* IO - VPL Root : { 96 115 101 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 169 84 185 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 164 115 169 120 }*/
/* IO - VPL Terminal : { 164 156 169 161 }*/
/* IO - VPL Root : { 185 136 190 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 227 90 243 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find and Omit");
/* IO - VPL Terminal : { 222 136 227 141 }*/
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

/* Start Operations: { 60 60 }{ 220 301 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 62 77 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 56 82 61 87 }*/
/* IO - VPL Root : { 77 74 82 79 }*/
/* IO - VPL Root : { 77 88 82 93 }*/
/* End Operation */

/* Begin Operation: { 103 101 119 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"replace");
/* IO - VPL Terminal : { 98 130 103 135 }*/
/* IO - VPL Root : { 119 132 124 137 }*/
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

/* Start Operations: { 495 830 }{ 216 312 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 60 72 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 51 82 56 87 }*/
/* IO - VPL Root : { 72 82 77 87 }*/
/* End Operation */

/* Begin Operation: { 96 57 112 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Item Data");
/* IO - VPL Terminal : { 91 82 96 87 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 51 149 67 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 46 176 51 181 }*/
/* IO - VPL Root : { 67 166 72 171 }*/
/* IO - VPL Root : { 67 185 72 190 }*/
/* End Operation */

/* Begin Operation: { 95 149 111 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 90 185 95 190 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 140 23 148 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 135 117 140 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
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

/* Begin Operation: { 148 62 164 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 74 148 79 }*/
/* IO - VPL Terminal : { 143 88 148 93 }*/
/* IO - VPL Root : { 164 82 169 87 }*/
/* End Operation */

/* Begin Operation: { 181 18 189 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 269 27 277 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 60 28 76 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run End");
/* IO - VPL Terminal : { 55 52 60 57 }*/
/* IO - VPL Terminal : { 55 78 60 83 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 113 28 121 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Open_20_Project_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Open_20_Project_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 137 470 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Open_20_Project_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Open_20_Project_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Open_20_Project_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_POAS_20_Open_20_Project_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Open_20_Project_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 236 390 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 153 33 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 112 100 128 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 128 112 133 117 }*/
/* End Operation */

/* Begin Operation: { 64 113 80 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"add project");
/* IO - VPL Terminal : { 59 153 64 158 }*/
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

/* Start Operations: { 296 968 }{ 418 354 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 186 80 280 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get VPL Data");
/* IO - VPL Root : { 80 231 85 236 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 59 89 64 94 }*/
/* IO - VPL Root : { 80 90 85 95 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 39 122 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 101 78 106 83 }*/
/* IO - VPL Root : { 122 70 127 75 }*/
/* IO - VPL Root : { 122 86 127 91 }*/
/* End Operation */

/* Begin Operation: { 106 151 122 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 101 183 106 188 }*/
/* IO - VPL Root : { 122 175 127 180 }*/
/* IO - VPL Root : { 122 191 127 196 }*/
/* End Operation */

/* Begin Operation: { 148 162 164 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 143 191 148 196 }*/
/* IO - VPL Terminal : { 143 222 148 227 }*/
/* IO - VPL Root : { 164 207 169 212 }*/
/* End Operation */

/* Begin Operation: { 190 151 206 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 185 175 190 180 }*/
/* IO - VPL Terminal : { 185 191 190 196 }*/
/* IO - VPL Root : { 206 183 211 188 }*/
/* End Operation */

/* Begin Operation: { 232 103 248 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Stack Open");
/* IO - VPL Terminal : { 227 127 232 132 }*/
/* IO - VPL Terminal : { 227 166 232 171 }*/
/* IO - VPL Root : { 248 147 253 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 274 38 290 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Stack Opened");
/* IO - VPL Terminal : { 269 86 274 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 316 83 332 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Items To Open");
/* IO - VPL Terminal : { 311 114 316 119 }*/
/* IO - VPL Terminal : { 311 147 316 152 }*/
/* IO - VPL Root : { 332 131 337 136 }*/
/* End Operation */

/* Begin Operation: { 358 41 366 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,2,3,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,2,3,1,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,7,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 157 18 165 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 152 112 157 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Open_20_Sections_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Open_20_Sections_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 179 409 }{ 117 402 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Open_20_Sections_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Open_20_Sections_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Open_20_Sections_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Open Stack",tempClass,tempAttribute_POAS_20_Open_20_Sections_2F_Open_20_Stack,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 299 762 }{ 200 300 } */
Nat4 VPLU_POAS_20_Open_20_Sections_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Open_20_Sections_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 200 110 }{ 369 283 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 43 78 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Open Stack");
/* IO - VPL Terminal : { 57 82 62 87 }*/
/* IO - VPL Root : { 78 68 83 73 }*/
/* IO - VPL Root : { 78 95 83 100 }*/
/* End Operation */

/* Begin Operation: { 106 173 122 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 101 181 106 186 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 104 63 120 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 99 95 104 100 }*/
/* IO - VPL Root : { 120 83 125 88 }*/
/* IO - VPL Root : { 120 105 125 110 }*/
/* End Operation */

/* Begin Operation: { 155 106 171 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"deal with");
/* IO - VPL Terminal : { 150 118 155 123 }*/
/* IO - VPL Terminal : { 150 132 155 137 }*/
/* IO - VPL Terminal : { 150 146 155 151 }*/
/* IO - VPL Terminal : { 150 160 155 165 }*/
/* IO - VPL Root : { 171 130 176 135 }*/
/* IO - VPL Root : { 171 151 176 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Cases: { 466 746 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 415 463 }{ 367 303 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
/* IO - VPL Root : { 28 185 33 190 }*/
/* IO - VPL Root : { 28 203 33 208 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 38 69 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 48 70 53 75 }*/
/* IO - VPL Root : { 69 58 74 63 }*/
/* IO - VPL Root : { 69 80 74 85 }*/
/* End Operation */

/* Begin Operation: { 93 33 109 88 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Item Open");
/* IO - VPL Terminal : { 88 58 93 63 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 134 52 150 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 129 80 134 85 }*/
/* IO - VPL Root : { 150 69 155 74 }*/
/* IO - VPL Root : { 150 90 155 95 }*/
/* End Operation */

/* Begin Operation: { 180 21 196 88 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Item Opened");
/* IO - VPL Root : { 196 52 201 57 }*/
/* End Operation */

/* Begin Operation: { 225 46 241 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"pack");
/* IO - VPL Terminal : { 220 52 225 57 }*/
/* IO - VPL Terminal : { 220 69 225 74 }*/
/* IO - VPL Terminal : { 220 90 225 95 }*/
/* IO - VPL Root : { 241 68 246 73 }*/
/* End Operation */

/* Begin Operation: { 267 104 283 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-l");
/* IO - VPL Terminal : { 262 124 267 129 }*/
/* IO - VPL Terminal : { 262 146 267 151 }*/
/* IO - VPL Root : { 283 136 288 141 }*/
/* End Operation */

/* Begin Operation: { 139 162 155 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"prompt");
/* IO - VPL Terminal : { 134 178 139 183 }*/
/* IO - VPL Terminal : { 134 202 139 207 }*/
/* IO - VPL Terminal : { 134 215 139 220 }*/
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

/* Start Operations: { 128 27 }{ 426 320 } */
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

/* Begin Operation: { 55 55 71 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 50 82 55 87 }*/
/* IO - VPL Root : { 71 72 76 77 }*/
/* IO - VPL Root : { 71 91 76 96 }*/
/* End Operation */

/* Begin Operation: { 96 21 112 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 91 57 96 62 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 165 69 181 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 160 91 165 96 }*/
/* IO - VPL Root : { 181 91 186 96 }*/
/* End Operation */

/* Begin Operation: { 223 62 239 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Special");
/* IO - VPL Terminal : { 218 91 223 96 }*/
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

/* Start Operations: { 614 420 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 26 69 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Section Data");
/* IO - VPL Terminal : { 48 59 53 64 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 55 149 71 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Primitives Data");
/* IO - VPL Terminal : { 50 191 55 196 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 116 152 132 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Resource File Data");
/* IO - VPL Terminal : { 111 201 116 206 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 120 34 136 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Class Data");
/* IO - VPL Terminal : { 115 62 120 67 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 166 22 174 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 95 152 111 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 90 192 95 197 }*/
/* IO - VPL Root : { 111 192 116 197 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 134 102 150 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 129 146 134 151 }*/
/* IO - VPL Terminal : { 129 192 134 197 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 275 89 291 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Synchronize");
/* IO - VPL Terminal : { 270 134 275 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 327 86 343 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Force A Draw!");
/* IO - VPL Terminal : { 322 134 327 139 }*/
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

/* Start Operations: { 70 572 }{ 270 309 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 68 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Progress");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 180 122 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 191 106 196 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 72 122 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Root : { 122 117 127 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 45 164 72 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 143 56 148 61 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 148 134 164 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Now");
/* IO - VPL Terminal : { 143 175 148 180 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 24 198 216 } */
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 394 20 402 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,1,1,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 128 27 }{ 426 320 } */
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

/* Begin Operation: { 55 55 71 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 50 82 55 87 }*/
/* IO - VPL Root : { 71 72 76 77 }*/
/* IO - VPL Root : { 71 91 76 96 }*/
/* End Operation */

/* Begin Operation: { 96 21 112 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 91 57 96 62 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 165 69 181 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 160 91 165 96 }*/
/* IO - VPL Root : { 181 91 186 96 }*/
/* End Operation */

/* Begin Operation: { 205 58 221 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Section Data");
/* IO - VPL Terminal : { 200 91 205 96 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 95 152 111 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 90 192 95 197 }*/
/* IO - VPL Root : { 111 192 116 197 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 134 102 150 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 129 146 134 151 }*/
/* IO - VPL Terminal : { 129 192 134 197 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 275 89 291 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Synchronize");
/* IO - VPL Terminal : { 270 134 275 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 327 86 343 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Force A Draw!");
/* IO - VPL Terminal : { 322 134 327 139 }*/
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

/* Start Operations: { 70 572 }{ 270 309 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 68 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Progress");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 180 122 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 191 106 196 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 72 122 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Root : { 122 117 127 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 45 164 72 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 143 56 148 61 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 148 134 164 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Now");
/* IO - VPL Terminal : { 143 175 148 180 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 24 198 216 } */
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 394 20 402 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,1,1,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 114 206 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Stack Open");
/* IO - VPL Terminal : { 185 142 190 147 }*/
/* IO - VPL Terminal : { 185 172 190 177 }*/
/* IO - VPL Root : { 206 157 211 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 315 31 323 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 310 93 315 98 }*/
/* IO - VPL Terminal : { 310 157 315 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,2,3,3,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,3,0,2,7);
	result = connect_root_to_terminal(ptrA,4,0,3,7);
	result = connect_root_to_terminal(ptrA,1,3,1,8);
	result = connect_root_to_terminal(ptrA,2,3,2,8);
	result = connect_root_to_terminal(ptrA,1,6,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 415 463 }{ 333 295 } */
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

/* Begin Operation: { 61 50 77 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 56 82 61 87 }*/
/* IO - VPL Root : { 77 70 82 75 }*/
/* IO - VPL Root : { 77 92 82 97 }*/
/* End Operation */

/* Begin Operation: { 101 39 117 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Item Opened");
/* IO - VPL Terminal : { 96 70 101 75 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 231 152 247 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 247 158 252 163 }*/
/* End Operation */

/* Begin Operation: { 132 64 148 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 127 92 132 97 }*/
/* IO - VPL Root : { 148 81 153 86 }*/
/* IO - VPL Root : { 148 107 153 112 }*/
/* End Operation */

/* Begin Operation: { 187 33 203 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Stack Opened");
/* IO - VPL Terminal : { 182 81 187 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 188 158 204 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"count");
/* IO - VPL Terminal : { 183 169 188 174 }*/
/* IO - VPL Terminal : { 183 182 188 187 }*/
/* IO - VPL Terminal : { 183 195 188 200 }*/
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

/* Start Operations: { 128 27 }{ 298 308 } */
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

/* Begin Operation: { 64 41 80 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 59 68 64 73 }*/
/* IO - VPL Root : { 80 58 85 63 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
/* End Operation */

/* Begin Operation: { 106 122 122 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 158 106 163 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 55 122 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 101 77 106 82 }*/
/* IO - VPL Root : { 122 77 127 82 }*/
/* End Operation */

/* Begin Operation: { 148 48 164 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Special");
/* IO - VPL Terminal : { 143 77 148 82 }*/
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 88 80 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Class Data");
/* IO - VPL Terminal : { 59 116 64 121 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
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

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 614 420 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 26 69 97 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Section Data");
/* IO - VPL Terminal : { 48 59 53 64 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 55 149 71 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Primitives Data");
/* IO - VPL Terminal : { 50 191 55 196 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 116 65 132 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Resource File Data");
/* IO - VPL Terminal : { 111 114 116 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 166 22 174 214 } */
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

/* Begin Operation: { 64 149 80 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Up Count");
/* IO - VPL Terminal : { 59 164 64 169 }*/
/* IO - VPL Terminal : { 59 190 64 195 }*/
/* IO - VPL Terminal : { 59 215 64 220 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,2,0,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 276 32 284 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 271 94 276 99 }*/
/* IO - VPL Terminal : { 271 158 276 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,3,0,2,6);
	result = connect_root_to_terminal(ptrA,4,0,3,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,3,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 415 463 }{ 371 281 } */
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

/* Begin Operation: { 53 50 69 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 48 82 53 87 }*/
/* IO - VPL Root : { 69 70 74 75 }*/
/* IO - VPL Root : { 69 92 74 97 }*/
/* End Operation */

/* Begin Operation: { 93 46 109 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"List Open");
/* IO - VPL Terminal : { 88 70 93 75 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 134 64 150 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 129 92 134 97 }*/
/* IO - VPL Root : { 150 81 155 86 }*/
/* IO - VPL Root : { 150 105 155 110 }*/
/* End Operation */

/* Begin Operation: { 174 78 190 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"open more?");
/* IO - VPL Terminal : { 169 98 174 103 }*/
/* IO - VPL Terminal : { 169 122 174 127 }*/
/* IO - VPL Terminal : { 169 146 174 151 }*/
/* IO - VPL Root : { 190 106 195 111 }*/
/* IO - VPL Root : { 190 135 195 140 }*/
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

/* Start Operations: { 128 155 }{ 424 312 } */
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

/* Begin Operation: { 73 63 89 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Stack Open");
/* IO - VPL Terminal : { 68 78 73 83 }*/
/* IO - VPL Terminal : { 68 138 73 143 }*/
/* IO - VPL Root : { 89 105 94 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 119 27 127 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 89 119 94 }*/
/* IO - VPL Terminal : { 114 153 119 158 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 128 155 }{ 200 300 } */
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

/* Begin Operation: { 60 138 76 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 76 146 81 151 }*/
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
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 217 22 225 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 212 84 217 89 }*/
/* IO - VPL Terminal : { 212 148 217 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 415 463 }{ 200 300 } */
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

/* Begin Operation: { 98 142 114 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 114 150 119 155 }*/
/* End Operation */

/* Begin Operation: { 143 24 151 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 138 86 143 91 }*/
/* IO - VPL Terminal : { 138 150 143 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_breakpoint_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 197 43 213 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Open Stack");
/* IO - VPL Terminal : { 192 68 197 73 }*/
/* IO - VPL Terminal : { 192 94 197 99 }*/
/* IO - VPL Root : { 213 82 218 87 }*/
/* End Operation */

/* Begin Operation: { 278 98 294 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 294 113 299 118 }*/
/* End Operation */

/* Begin Operation: { 238 76 254 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Push On Stack");
/* IO - VPL Terminal : { 233 107 238 112 }*/
/* IO - VPL Terminal : { 233 151 238 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 323 19 331 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 318 113 323 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,1,0,4,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,2,4,2,7);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 138 498 }{ 236 390 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 153 33 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 112 100 128 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 128 112 133 117 }*/
/* End Operation */

/* Begin Operation: { 157 18 165 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 152 112 157 117 }*/
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


Nat4 VPLU_POAS_20_Open_20_Sections_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Open_20_Sections_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 110 41 }{ 234 347 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 76 35 81 }*/
/* IO - VPL Root : { 30 155 35 160 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 160 80 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"add project");
/* IO - VPL Terminal : { 59 185 64 190 }*/
/* IO - VPL Terminal : { 59 220 64 225 }*/
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

/* Start Operations: { 341 754 }{ 452 429 } */
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
	tempOperation = operation_to_get(tempOperation,environment,"Items To Open");
/* IO - VPL Terminal : { 59 187 64 192 }*/
/* IO - VPL Root : { 80 170 85 175 }*/
/* IO - VPL Root : { 80 202 85 207 }*/
/* End Operation */

/* Begin Operation: { 106 126 122 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Push On Stack");
/* IO - VPL Terminal : { 101 148 106 153 }*/
/* IO - VPL Terminal : { 101 202 106 207 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 106 164 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 143 173 148 178 }*/
/* IO - VPL Root : { 164 174 169 179 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 187 133 203 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Section Items");
/* IO - VPL Terminal : { 182 194 187 199 }*/
/* IO - VPL Root : { 203 194 208 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 186 284 202 295 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 202 287 207 292 }*/
/* End Operation */

/* Begin Operation: { 231 243 247 303 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get em");
/* IO - VPL Terminal : { 226 262 231 267 }*/
/* IO - VPL Terminal : { 226 287 231 292 }*/
/* IO - VPL Root : { 247 289 252 294 }*/
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

/* Start Operations: { 60 60 }{ 322 265 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 101 79 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Class Data");
/* IO - VPL Root : { 79 129 84 134 }*/
/* End Operation */

/* Begin Operation: { 106 41 122 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 129 106 134 }*/
/* IO - VPL Root : { 122 106 127 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 86 164 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 106 148 111 }*/
/* IO - VPL Root : { 164 98 169 103 }*/
/* IO - VPL Root : { 164 112 169 117 }*/
/* End Operation */

/* Begin Operation: { 190 81 206 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 185 112 190 117 }*/
/* IO - VPL Root : { 206 112 211 117 }*/
/* End Operation */

/* Begin Operation: { 232 126 248 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 227 136 232 141 }*/
/* IO - VPL Terminal : { 227 148 232 153 }*/
/* IO - VPL Root : { 248 143 253 148 }*/
/* End Operation */

/* Begin Operation: { 274 24 282 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 118 274 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 274 124 290 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Count Max");
/* IO - VPL Terminal : { 269 148 274 153 }*/
/* IO - VPL Terminal : { 269 174 274 179 }*/
/* IO - VPL Root : { 290 162 295 167 }*/
/* End Operation */

/* Begin Operation: { 316 111 332 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 332 117 337 122 }*/
/* End Operation */

/* Begin Operation: { 358 53 374 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Items To Open");
/* IO - VPL Terminal : { 353 84 358 89 }*/
/* IO - VPL Terminal : { 353 117 358 122 }*/
/* IO - VPL Root : { 374 101 379 106 }*/
/* End Operation */

/* Begin Operation: { 400 30 408 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,6,2,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 314 729 }{ 503 361 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 77 198 93 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get VPL Data");
/* IO - VPL Root : { 93 243 98 248 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 80 15 96 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 75 82 80 87 }*/
/* IO - VPL Root : { 96 83 101 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 121 44 137 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 116 83 121 88 }*/
/* IO - VPL Root : { 137 75 142 80 }*/
/* IO - VPL Root : { 137 91 142 96 }*/
/* End Operation */

/* Begin Operation: { 121 156 137 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 116 188 121 193 }*/
/* IO - VPL Root : { 137 180 142 185 }*/
/* IO - VPL Root : { 137 196 142 201 }*/
/* End Operation */

/* Begin Operation: { 160 167 176 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 155 196 160 201 }*/
/* IO - VPL Terminal : { 155 227 160 232 }*/
/* IO - VPL Root : { 176 212 181 217 }*/
/* End Operation */

/* Begin Operation: { 199 156 215 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 194 180 199 185 }*/
/* IO - VPL Terminal : { 194 196 199 201 }*/
/* IO - VPL Root : { 215 188 220 193 }*/
/* End Operation */

/* Begin Operation: { 200 46 216 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Item Open");
/* IO - VPL Root : { 216 71 221 76 }*/
/* End Operation */

/* Begin Operation: { 245 70 261 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"pack");
/* IO - VPL Terminal : { 240 71 245 76 }*/
/* IO - VPL Terminal : { 240 91 245 96 }*/
/* IO - VPL Terminal : { 240 111 245 116 }*/
/* IO - VPL Root : { 261 92 266 97 }*/
/* End Operation */

/* Begin Operation: { 282 178 298 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 277 200 282 205 }*/
/* IO - VPL Root : { 298 200 303 205 }*/
/* End Operation */

/* Begin Operation: { 315 124 331 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Push On Stack");
/* IO - VPL Terminal : { 310 146 315 151 }*/
/* IO - VPL Terminal : { 310 200 315 205 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 244 195 260 321 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Section Items");
/* IO - VPL Terminal : { 239 256 244 261 }*/
/* IO - VPL Root : { 260 256 265 261 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 278 244 294 310 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 273 275 278 280 }*/
/* IO - VPL Root : { 294 275 299 280 }*/
/* End Operation */

/* Begin Operation: { 363 122 379 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Count Max");
/* IO - VPL Terminal : { 358 146 363 151 }*/
/* IO - VPL Terminal : { 358 172 363 177 }*/
/* IO - VPL Root : { 379 160 384 165 }*/
/* End Operation */

/* Begin Operation: { 407 35 415 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,2,3,2,8);
	result = connect_root_to_terminal(ptrA,1,6,3,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,2,0,1,10);
	result = connect_root_to_terminal(ptrA,1,9,2,10);
	result = connect_root_to_terminal(ptrA,1,2,1,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
	result = connect_root_to_terminal(ptrA,2,0,1,13);
	result = connect_root_to_terminal(ptrA,1,12,2,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 36 80 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 59 64 64 69 }*/
/* IO - VPL Terminal : { 59 94 64 99 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 111 98 128 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"open project info");
/* IO - VPL Terminal : { 105 155 110 160 }*/
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

/* Start Operations: { 60 60 }{ 263 366 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 172 137 308 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 114 238 119 243 }*/
/* IO - VPL Root : { 138 238 143 243 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 78 47 95 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Project Info");
/* IO - VPL Root : { 96 81 101 86 }*/
/* End Operation */

/* Begin Operation: { 120 36 137 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Find Service");
/* IO - VPL Terminal : { 114 81 119 86 }*/
/* IO - VPL Root : { 138 81 143 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 44 179 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 156 81 161 86 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 162 170 179 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Project");
/* IO - VPL Terminal : { 156 203 161 208 }*/
/* IO - VPL Terminal : { 156 238 161 243 }*/
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
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 163 27 171 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_POAS_20_Open_20_Sections_2F_Run_20_End_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Open_20_Sections_2F_Run_20_End_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 236 390 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 153 33 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 69 136 85 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"update");
/* IO - VPL Terminal : { 64 153 69 158 }*/
/* IO - VPL Terminal : { 64 172 69 177 }*/
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

/* Start Operations: { 276 116 }{ 215 374 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 77 198 93 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get VPL Data");
/* IO - VPL Root : { 93 243 98 248 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 80 15 96 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 75 82 80 87 }*/
/* IO - VPL Root : { 96 83 101 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 122 104 138 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update List Data");
/* IO - VPL Terminal : { 117 135 122 140 }*/
/* IO - VPL Terminal : { 117 193 122 198 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 163 32 171 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 68 93 84 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 84 101 89 106 }*/
/* End Operation */

/* Begin Operation: { 113 49 129 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Open Stack");
/* IO - VPL Terminal : { 108 74 113 79 }*/
/* IO - VPL Terminal : { 108 101 113 106 }*/
/* IO - VPL Root : { 129 88 134 93 }*/
/* End Operation */

/* Begin Operation: { 154 140 170 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run End");
/* IO - VPL Terminal : { 149 162 154 167 }*/
/* IO - VPL Terminal : { 149 193 154 198 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 186 17 194 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_POAS_20_Open_20_Sections_2F_Push_20_On_20_Stack_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Open_20_Sections_2F_Push_20_On_20_Stack_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 230 288 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 78 33 83 }*/
/* IO - VPL Root : { 28 154 33 159 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 39 81 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Open Stack");
/* IO - VPL Terminal : { 60 78 65 83 }*/
/* IO - VPL Root : { 81 64 86 69 }*/
/* IO - VPL Root : { 81 91 86 96 }*/
/* End Operation */

/* Begin Operation: { 107 138 123 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(join)");
/* IO - VPL Terminal : { 102 154 107 159 }*/
/* IO - VPL Terminal : { 102 172 107 177 }*/
/* IO - VPL Root : { 123 163 128 168 }*/
/* End Operation */

/* Begin Operation: { 151 39 167 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Open Stack");
/* IO - VPL Terminal : { 146 64 151 69 }*/
/* IO - VPL Terminal : { 146 91 151 96 }*/
/* IO - VPL Root : { 167 78 172 83 }*/
/* End Operation */

/* Begin Operation: { 187 20 195 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Resolve_20_References_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Resolve_20_References_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Resolve_20_References_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Resolve_20_References_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Resolve_20_References_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Class List",tempClass,tempAttribute_POAS_20_Resolve_20_References_2F_Class_20_List,environment);
	tempAttribute = attribute_add("Whole List",tempClass,tempAttribute_POAS_20_Resolve_20_References_2F_Whole_20_List,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_POAS_20_Resolve_20_References_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Resolve_20_References_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 377 409 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 77 35 82 }*/
/* IO - VPL Root : { 30 153 35 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 38 80 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 59 75 64 80 }*/
/* IO - VPL Root : { 80 62 85 67 }*/
/* IO - VPL Root : { 80 88 85 93 }*/
/* End Operation */

/* Begin Operation: { 106 148 122 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 101 156 106 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 56 122 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 101 88 106 93 }*/
/* IO - VPL Root : { 122 76 127 81 }*/
/* IO - VPL Root : { 122 98 127 103 }*/
/* End Operation */

/* Begin Operation: { 148 38 164 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 143 62 148 67 }*/
/* IO - VPL Terminal : { 143 88 148 93 }*/
/* IO - VPL Root : { 164 75 169 80 }*/
/* End Operation */

/* Begin Operation: { 64 153 80 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Whole List");
/* IO - VPL Terminal : { 59 191 64 196 }*/
/* IO - VPL Root : { 80 177 85 182 }*/
/* IO - VPL Root : { 80 203 85 208 }*/
/* End Operation */

/* Begin Operation: { 190 263 206 343 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 185 299 190 304 }*/
/* IO - VPL Root : { 206 299 211 304 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 175 248 315 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 227 213 232 218 }*/
/* IO - VPL Terminal : { 227 278 232 283 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 64 248 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Up Count");
/* IO - VPL Terminal : { 227 77 232 82 }*/
/* IO - VPL Terminal : { 227 103 232 108 }*/
/* IO - VPL Terminal : { 227 129 232 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 133 164 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Resolve Class");
/* IO - VPL Terminal : { 143 163 148 168 }*/
/* IO - VPL Terminal : { 143 203 148 208 }*/
/* IO - VPL Root : { 164 164 169 169 }*/
/* IO - VPL Root : { 164 204 169 209 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 106 290 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 290 121 295 126 }*/
/* End Operation */

/* Begin Operation: { 190 154 206 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Whole List");
/* IO - VPL Terminal : { 185 178 190 183 }*/
/* IO - VPL Terminal : { 185 204 190 209 }*/
/* IO - VPL Root : { 206 192 211 197 }*/
/* End Operation */

/* Begin Operation: { 316 26 324 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 311 121 316 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,2,0,3,8);
	result = connect_root_to_terminal(ptrA,1,3,1,9);
	result = connect_root_to_terminal(ptrA,2,5,2,9);
	result = connect_root_to_terminal(ptrA,1,4,1,11);
	result = connect_root_to_terminal(ptrA,2,9,2,11);
	result = connect_root_to_terminal(ptrA,1,10,1,12);
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

/* Begin Operation: { 58 103 74 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 74 115 79 120 }*/
/* End Operation */

/* Begin Operation: { 103 21 111 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 98 115 103 120 }*/
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


Nat4 VPLU_POAS_20_Resolve_20_References_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Resolve_20_References_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 329 299 }{ 310 296 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 79 33 84 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 157 82 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make List");
/* IO - VPL Terminal : { 61 209 66 214 }*/
/* IO - VPL Terminal : { 61 181 66 186 }*/
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

/* Start Operations: { 60 60 }{ 394 323 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 152 33 157 }*/
/* IO - VPL Root : { 28 75 33 80 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 88 80 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 59 152 64 157 }*/
/* IO - VPL Root : { 80 152 85 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 114 104 130 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Classes");
/* IO - VPL Terminal : { 109 152 114 157 }*/
/* IO - VPL Root : { 130 152 135 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 171 51 187 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 166 75 171 80 }*/
/* IO - VPL Terminal : { 166 101 171 106 }*/
/* IO - VPL Root : { 187 88 192 93 }*/
/* End Operation */

/* Begin Operation: { 216 102 232 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Whole List");
/* IO - VPL Terminal : { 211 126 216 131 }*/
/* IO - VPL Terminal : { 211 152 216 157 }*/
/* IO - VPL Root : { 232 140 237 145 }*/
/* End Operation */

/* Begin Operation: { 170 180 186 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 165 211 170 216 }*/
/* IO - VPL Root : { 186 211 191 216 }*/
/* End Operation */

/* Begin Operation: { 272 161 288 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Count Max");
/* IO - VPL Terminal : { 267 185 272 190 }*/
/* IO - VPL Terminal : { 267 211 272 216 }*/
/* IO - VPL Root : { 288 199 293 204 }*/
/* End Operation */

/* Begin Operation: { 316 23 324 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 68 24 84 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 63 51 68 56 }*/
/* IO - VPL Terminal : { 63 87 68 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 112 27 120 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_POAS_20_Resolve_20_References_2F_Run_20_End_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Resolve_20_References_2F_Run_20_End_universal_load(V_Method method,V_Environment environment)
{
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
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 148 33 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 26 94 91 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Cleanup");
/* IO - VPL Terminal : { 73 56 78 61 }*/
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

/* Begin Operation: { 54 96 70 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 70 102 75 107 }*/
/* End Operation */

/* Begin Operation: { 99 52 115 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 94 76 99 81 }*/
/* IO - VPL Terminal : { 94 102 99 107 }*/
/* IO - VPL Root : { 115 89 120 94 }*/
/* End Operation */

/* Begin Operation: { 133 80 149 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Whole List");
/* IO - VPL Terminal : { 128 104 133 109 }*/
/* IO - VPL Terminal : { 128 130 133 135 }*/
/* IO - VPL Root : { 149 118 154 123 }*/
/* End Operation */

/* Begin Operation: { 171 26 179 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 80 134 96 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run End");
/* IO - VPL Terminal : { 75 158 80 163 }*/
/* IO - VPL Terminal : { 75 184 80 189 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 165 21 173 213 } */
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


/* Stop Universals */



Nat4 VPLC_POAS_20_Post_20_Load_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Post_20_Load_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Post_20_Load_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Post_20_Load_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Post_20_Load_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_POAS_20_Post_20_Load_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Post_20_Load_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 236 390 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 153 33 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 112 100 128 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 128 112 133 117 }*/
/* End Operation */

/* Begin Operation: { 64 111 80 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"post project");
/* IO - VPL Terminal : { 59 153 64 158 }*/
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

/* Start Operations: { 239 430 }{ 280 332 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 47 76 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 55 114 60 119 }*/
/* IO - VPL Root : { 76 115 81 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 101 72 117 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 96 115 101 120 }*/
/* IO - VPL Root : { 117 100 122 105 }*/
/* IO - VPL Root : { 117 130 122 135 }*/
/* End Operation */

/* Begin Operation: { 148 94 164 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 143 130 148 135 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 186 56 202 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Post Load Processing");
/* IO - VPL Terminal : { 181 130 186 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 221 25 229 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 157 18 165 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 152 112 157 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Update_20_Classes_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Update_20_Classes_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Update_20_Classes_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Update_20_Classes_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Update_20_Classes_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Class List",tempClass,tempAttribute_POAS_20_Update_20_Classes_2F_Class_20_List,environment);
	tempAttribute = attribute_add("Whole List",tempClass,tempAttribute_POAS_20_Update_20_Classes_2F_Whole_20_List,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_POAS_20_Update_20_Classes_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Update_20_Classes_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 344 452 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 151 33 156 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 38 75 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 54 75 59 80 }*/
/* IO - VPL Root : { 75 62 80 67 }*/
/* IO - VPL Root : { 75 88 80 93 }*/
/* End Operation */

/* Begin Operation: { 100 148 116 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 95 156 100 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 97 56 113 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 92 88 97 93 }*/
/* IO - VPL Root : { 113 76 118 81 }*/
/* IO - VPL Root : { 113 98 118 103 }*/
/* End Operation */

/* Begin Operation: { 136 38 152 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 131 62 136 67 }*/
/* IO - VPL Terminal : { 131 88 136 93 }*/
/* IO - VPL Root : { 152 75 157 80 }*/
/* End Operation */

/* Begin Operation: { 186 103 202 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 202 118 207 123 }*/
/* End Operation */

/* Begin Operation: { 173 174 189 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Name Prompt");
/* IO - VPL Terminal : { 168 203 173 208 }*/
/* IO - VPL Terminal : { 168 234 173 239 }*/
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

/* Begin Operation: { 52 175 68 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 47 211 52 216 }*/
/* IO - VPL Root : { 68 211 73 216 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 91 108 107 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 86 146 91 151 }*/
/* IO - VPL Terminal : { 86 211 91 216 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 124 20 132 212 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 137 257 153 359 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Transfer Value");
/* IO - VPL Terminal : { 132 300 137 305 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 587 620 }{ 87 355 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 288 464 }{ 500 467 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 92 86 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Value");
/* IO - VPL Terminal : { 65 115 70 120 }*/
/* IO - VPL Root : { 86 106 91 111 }*/
/* IO - VPL Root : { 86 122 91 127 }*/
/* End Operation */

/* Begin Operation: { 124 111 140 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 119 122 124 127 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 124 174 140 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 140 185 145 190 }*/
/* End Operation */

/* Begin Operation: { 170 92 186 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Value");
/* IO - VPL Terminal : { 165 106 170 111 }*/
/* IO - VPL Terminal : { 165 122 170 127 }*/
/* IO - VPL Root : { 186 115 191 120 }*/
/* End Operation */

/* Begin Operation: { 235 93 251 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 230 115 235 120 }*/
/* IO - VPL Root : { 251 107 256 112 }*/
/* IO - VPL Root : { 251 123 256 128 }*/
/* End Operation */

/* Begin Operation: { 233 181 249 336 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Grandparent Helper");
/* IO - VPL Terminal : { 228 256 233 261 }*/
/* IO - VPL Root : { 249 256 254 261 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 279 271 295 320 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 274 293 279 298 }*/
/* IO - VPL Root : { 295 285 300 290 }*/
/* IO - VPL Root : { 295 301 300 306 }*/
/* End Operation */

/* Begin Operation: { 311 177 327 445 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\" contained non-null value. Please save section.\"");
/* IO - VPL Root : { 327 309 332 314 }*/
/* End Operation */

/* Begin Operation: { 261 27 277 78 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Class: \"");
/* IO - VPL Root : { 277 50 282 55 }*/
/* End Operation */

/* Begin Operation: { 282 158 298 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\" of Section: \"");
/* IO - VPL Root : { 298 196 303 201 }*/
/* End Operation */

/* Begin Operation: { 356 138 372 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,5,1,"\"join\"");
/* IO - VPL Terminal : { 351 139 356 144 }*/
/* IO - VPL Terminal : { 351 151 356 156 }*/
/* IO - VPL Terminal : { 351 163 356 168 }*/
/* IO - VPL Terminal : { 351 174 356 179 }*/
/* IO - VPL Terminal : { 351 188 356 193 }*/
/* IO - VPL Root : { 372 163 377 168 }*/
/* End Operation */

/* Begin Operation: { 399 115 415 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Console");
/* IO - VPL Terminal : { 394 163 399 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 440 36 448 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,9,1,11);
	result = connect_root_to_terminal(ptrA,2,5,2,11);
	result = connect_root_to_terminal(ptrA,1,10,3,11);
	result = connect_root_to_terminal(ptrA,2,7,4,11);
	result = connect_root_to_terminal(ptrA,1,8,5,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 699 619 }{ 112 260 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
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

/* Begin Operation: { 137 141 153 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Value");
/* IO - VPL Terminal : { 132 187 137 192 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 172 281 188 359 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Up Count");
/* IO - VPL Terminal : { 167 304 172 309 }*/
/* IO - VPL Terminal : { 167 325 172 330 }*/
/* IO - VPL Terminal : { 167 343 172 348 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 231 23 239 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 226 118 231 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,3,1,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,2,0,3,9);
	result = connect_root_to_terminal(ptrA,1,5,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [8 to 7] */
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

/* Begin Operation: { 58 103 74 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 74 115 79 120 }*/
/* End Operation */

/* Begin Operation: { 103 21 111 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 98 115 103 120 }*/
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


Nat4 VPLU_POAS_20_Update_20_Classes_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Update_20_Classes_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 281 303 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 79 33 84 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 169 76 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 55 192 60 197 }*/
/* IO - VPL Terminal : { 55 217 60 222 }*/
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

/* Start Operations: { 162 346 }{ 325 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 165 33 170 }*/
/* IO - VPL Root : { 28 80 33 85 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 80 98 96 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 75 165 80 170 }*/
/* IO - VPL Root : { 96 166 101 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 128 118 144 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Classes");
/* IO - VPL Terminal : { 123 166 128 171 }*/
/* IO - VPL Root : { 144 166 149 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 185 56 201 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 180 80 185 85 }*/
/* IO - VPL Terminal : { 180 106 185 111 }*/
/* IO - VPL Root : { 201 93 206 98 }*/
/* End Operation */

/* Begin Operation: { 179 168 195 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 174 199 179 204 }*/
/* IO - VPL Root : { 195 199 200 204 }*/
/* End Operation */

/* Begin Operation: { 234 106 250 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Count Max");
/* IO - VPL Terminal : { 229 130 234 135 }*/
/* IO - VPL Terminal : { 229 156 234 161 }*/
/* IO - VPL Root : { 250 144 255 149 }*/
/* End Operation */

/* Begin Operation: { 269 25 277 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 20 80 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 59 47 64 52 }*/
/* IO - VPL Terminal : { 59 83 64 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 98 17 106 209 } */
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


Nat4 VPLU_POAS_20_Update_20_Classes_2F_Run_20_End_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Update_20_Classes_2F_Run_20_End_universal_load(V_Method method,V_Environment environment)
{
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
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 148 33 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 96 70 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 70 102 75 107 }*/
/* End Operation */

/* Begin Operation: { 99 52 115 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 94 76 99 81 }*/
/* IO - VPL Terminal : { 94 102 99 107 }*/
/* IO - VPL Root : { 115 89 120 94 }*/
/* End Operation */

/* Begin Operation: { 62 172 78 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run End");
/* IO - VPL Terminal : { 57 196 62 201 }*/
/* IO - VPL Terminal : { 57 222 62 227 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 142 20 150 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Update_20_Persistents_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Update_20_Persistents_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Update_20_Persistents_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Update_20_Persistents_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Update_20_Persistents_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Class List",tempClass,tempAttribute_POAS_20_Update_20_Persistents_2F_Class_20_List,environment);
	tempAttribute = attribute_add("Whole List",tempClass,tempAttribute_POAS_20_Update_20_Persistents_2F_Whole_20_List,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_POAS_20_Update_20_Persistents_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Update_20_Persistents_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 312 354 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 151 33 156 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 38 75 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 54 75 59 80 }*/
/* IO - VPL Root : { 75 62 80 67 }*/
/* IO - VPL Root : { 75 88 80 93 }*/
/* End Operation */

/* Begin Operation: { 100 148 116 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 95 156 100 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 97 56 113 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 92 88 97 93 }*/
/* IO - VPL Root : { 113 76 118 81 }*/
/* IO - VPL Root : { 113 98 118 103 }*/
/* End Operation */

/* Begin Operation: { 136 38 152 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 131 62 136 67 }*/
/* IO - VPL Terminal : { 131 88 136 93 }*/
/* IO - VPL Root : { 152 75 157 80 }*/
/* End Operation */

/* Begin Operation: { 186 103 202 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 202 118 207 123 }*/
/* End Operation */

/* Begin Operation: { 183 168 199 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Name Prompt");
/* IO - VPL Terminal : { 178 197 183 202 }*/
/* IO - VPL Terminal : { 178 228 183 233 }*/
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

/* Begin Operation: { 52 175 68 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name");
/* IO - VPL Terminal : { 47 211 52 216 }*/
/* IO - VPL Root : { 68 211 73 216 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 91 108 107 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 86 146 91 151 }*/
/* IO - VPL Terminal : { 86 211 91 216 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 124 20 132 212 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 137 141 153 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Value");
/* IO - VPL Terminal : { 132 187 137 192 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 138 248 154 326 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Up Count");
/* IO - VPL Terminal : { 133 266 138 271 }*/
/* IO - VPL Terminal : { 133 289 138 294 }*/
/* IO - VPL Terminal : { 133 310 138 315 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 231 23 239 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 226 118 231 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,2,0,3,8);
	result = connect_root_to_terminal(ptrA,1,5,1,9);
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

/* Begin Operation: { 58 103 74 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 74 115 79 120 }*/
/* End Operation */

/* Begin Operation: { 103 21 111 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 98 115 103 120 }*/
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


Nat4 VPLU_POAS_20_Update_20_Persistents_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Update_20_Persistents_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 272 292 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 79 33 84 }*/
/* IO - VPL Root : { 28 157 33 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 157 77 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make list");
/* IO - VPL Terminal : { 56 179 61 184 }*/
/* IO - VPL Terminal : { 56 203 61 208 }*/
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

/* Start Operations: { 60 60 }{ 342 330 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 80 90 96 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 75 157 80 162 }*/
/* IO - VPL Root : { 96 158 101 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 128 103 144 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Persistents");
/* IO - VPL Terminal : { 123 158 128 163 }*/
/* IO - VPL Root : { 144 158 149 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 185 55 201 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 180 79 185 84 }*/
/* IO - VPL Terminal : { 180 105 185 110 }*/
/* IO - VPL Root : { 201 92 206 97 }*/
/* End Operation */

/* Begin Operation: { 192 163 208 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 187 194 192 199 }*/
/* IO - VPL Root : { 208 194 213 199 }*/
/* End Operation */

/* Begin Operation: { 235 103 251 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Count Max");
/* IO - VPL Terminal : { 230 127 235 132 }*/
/* IO - VPL Terminal : { 230 153 235 158 }*/
/* IO - VPL Root : { 251 141 256 146 }*/
/* End Operation */

/* Begin Operation: { 267 23 275 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 32 80 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 59 59 64 64 }*/
/* IO - VPL Terminal : { 59 95 64 100 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 100 30 108 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_POAS_20_Update_20_Persistents_2F_Run_20_End_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Update_20_Persistents_2F_Run_20_End_universal_load(V_Method method,V_Environment environment)
{
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
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 148 33 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 96 70 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 70 102 75 107 }*/
/* End Operation */

/* Begin Operation: { 99 52 115 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Class List");
/* IO - VPL Terminal : { 94 76 99 81 }*/
/* IO - VPL Terminal : { 94 102 99 107 }*/
/* IO - VPL Root : { 115 89 120 94 }*/
/* End Operation */

/* Begin Operation: { 74 159 90 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run End");
/* IO - VPL Terminal : { 69 183 74 188 }*/
/* IO - VPL Terminal : { 69 209 74 214 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 142 20 150 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Install_20_Tools_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Install_20_Tools_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Install_20_Tools_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Install_20_Tools_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Install_20_Tools_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_POAS_20_Install_20_Tools_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Install_20_Tools_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 236 390 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 74 33 79 }*/
/* IO - VPL Root : { 28 153 33 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 112 100 128 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 128 112 133 117 }*/
/* End Operation */

/* Begin Operation: { 64 111 80 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"post project");
/* IO - VPL Terminal : { 59 153 64 158 }*/
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

/* Start Operations: { 60 60 }{ 263 301 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 40 71 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Project Info");
/* IO - VPL Root : { 71 72 76 77 }*/
/* End Operation */

/* Begin Operation: { 100 28 116 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Find Service");
/* IO - VPL Terminal : { 95 72 100 77 }*/
/* IO - VPL Root : { 116 72 121 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 103 160 119 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 98 223 103 228 }*/
/* IO - VPL Root : { 119 223 124 228 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 157 89 173 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Project");
/* IO - VPL Terminal : { 152 118 157 123 }*/
/* IO - VPL Terminal : { 152 159 157 164 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 227 23 235 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 280 332 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 79 34 95 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 95 85 100 90 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 135 6 151 82 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 130 42 135 47 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 89 183 105 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 105 194 110 199 }*/
/* End Operation */

/* Begin Operation: { 134 118 150 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Tools");
/* IO - VPL Terminal : { 129 144 134 149 }*/
/* IO - VPL Terminal : { 129 194 134 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 219 27 227 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 157 18 165 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 152 112 157 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Copy_20_Resources_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Copy_20_Resources_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 145 448 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Copy_20_Resources_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Copy_20_Resources_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Copy_20_Resources_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 103 429 }{ 200 300 } */
Nat4 VPLU_POAS_20_Copy_20_Resources_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Copy_20_Resources_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 162 721 }{ 334 385 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 73 35 78 }*/
/* IO - VPL Root : { 30 159 35 164 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 119 80 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Other Files");
/* IO - VPL Terminal : { 59 159 64 164 }*/
/* IO - VPL Root : { 80 145 85 150 }*/
/* IO - VPL Root : { 80 173 85 178 }*/
/* End Operation */

/* Begin Operation: { 106 229 122 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 101 237 106 242 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 141 122 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 101 173 106 178 }*/
/* IO - VPL Root : { 122 161 127 166 }*/
/* IO - VPL Root : { 122 183 127 188 }*/
/* End Operation */

/* Begin Operation: { 148 129 164 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Other Files");
/* IO - VPL Terminal : { 143 155 148 160 }*/
/* IO - VPL Terminal : { 143 183 148 188 }*/
/* IO - VPL Root : { 164 169 169 174 }*/
/* End Operation */

/* Begin Operation: { 190 43 206 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Up Count");
/* IO - VPL Terminal : { 185 56 190 61 }*/
/* IO - VPL Terminal : { 185 81 190 86 }*/
/* IO - VPL Terminal : { 185 106 190 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 109 248 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 248 124 253 129 }*/
/* End Operation */

/* Begin Operation: { 148 33 164 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Copy Res");
/* IO - VPL Terminal : { 143 55 148 60 }*/
/* IO - VPL Terminal : { 143 79 148 84 }*/
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

/* Start Operations: { 187 272 }{ 327 503 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 68 35 73 }*/
/* IO - VPL Root : { 30 164 35 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 59 89 64 94 }*/
/* IO - VPL Root : { 80 90 85 95 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 82 122 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Resource File Data");
/* IO - VPL Root : { 122 131 127 136 }*/
/* End Operation */

/* Begin Operation: { 148 59 164 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 143 90 148 95 }*/
/* IO - VPL Terminal : { 143 131 148 136 }*/
/* IO - VPL Root : { 164 111 169 116 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 215 122 294 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Copy Files");
/* IO - VPL Terminal : { 101 239 106 244 }*/
/* IO - VPL Terminal : { 101 265 106 270 }*/
/* IO - VPL Root : { 122 252 127 257 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 328 350 }{ 101 322 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 362 454 }{ 307 324 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 90 35 95 }*/
/* IO - VPL Root : { 30 164 35 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Resource File Data");
/* IO - VPL Terminal : { 59 81 64 86 }*/
/* IO - VPL Root : { 80 81 85 86 }*/
/* End Operation */

/* Begin Operation: { 148 149 164 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Item Data");
/* IO - VPL Terminal : { 143 183 148 188 }*/
/* IO - VPL Root : { 164 183 169 188 }*/
/* End Operation */

/* Begin Operation: { 106 113 122 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Copy Original");
/* IO - VPL Terminal : { 101 126 106 131 }*/
/* IO - VPL Terminal : { 101 164 106 169 }*/
/* IO - VPL Terminal : { 101 198 106 203 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 57 164 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 143 81 148 86 }*/
/* IO - VPL Root : { 164 72 169 77 }*/
/* IO - VPL Root : { 164 89 169 94 }*/
/* End Operation */

/* Begin Operation: { 190 59 206 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 185 73 190 78 }*/
/* IO - VPL Terminal : { 185 89 190 94 }*/
/* IO - VPL Root : { 206 81 211 86 }*/
/* End Operation */

/* Begin Operation: { 190 167 206 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 185 183 190 188 }*/
/* IO - VPL Terminal : { 185 201 190 206 }*/
/* IO - VPL Root : { 206 193 211 198 }*/
/* End Operation */

/* Begin Operation: { 232 25 240 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 119 232 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,0,3,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
	result = connect_root_to_terminal(ptrA,1,1,2,6);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 362 454 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 104 71 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 71 115 76 120 }*/
/* End Operation */

/* Begin Operation: { 100 21 108 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 115 100 120 }*/
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

/* Begin Operation: { 148 241 164 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 143 252 148 257 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 190 76 206 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find and Replace");
/* IO - VPL Terminal : { 185 111 190 116 }*/
/* IO - VPL Terminal : { 185 156 190 161 }*/
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

/* Start Operations: { 60 60 }{ 268 297 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 62 77 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 56 82 61 87 }*/
/* IO - VPL Root : { 77 74 82 79 }*/
/* IO - VPL Root : { 77 88 82 93 }*/
/* End Operation */

/* Begin Operation: { 107 102 123 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 102 123 107 128 }*/
/* IO - VPL Terminal : { 102 146 107 151 }*/
/* IO - VPL Root : { 123 135 128 140 }*/
/* End Operation */

/* Begin Operation: { 148 62 164 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 74 148 79 }*/
/* IO - VPL Terminal : { 143 88 148 93 }*/
/* IO - VPL Root : { 164 82 169 87 }*/
/* End Operation */

/* Begin Operation: { 185 132 201 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 180 146 185 151 }*/
/* IO - VPL Terminal : { 180 170 185 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 226 18 234 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
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

/* Begin Operation: { 232 42 240 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 187 272 }{ 226 307 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 79 80 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name As String");
/* IO - VPL Terminal : { 59 148 64 153 }*/
/* IO - VPL Root : { 80 147 85 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 45 122 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Trouble copying resource");
/* IO - VPL Root : { 122 113 127 118 }*/
/* End Operation */

/* Begin Operation: { 148 81 164 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 143 113 148 118 }*/
/* IO - VPL Terminal : { 143 147 148 152 }*/
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
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 179 206 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Next Name");
/* IO - VPL Terminal : { 185 200 190 205 }*/
/* IO - VPL Terminal : { 185 240 190 245 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 29 282 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 124 274 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,2,0,3,5);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,3,2,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,4,2,8);
	result = connect_root_to_terminal(ptrA,1,6,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 162 721 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 102 68 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
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


Nat4 VPLU_POAS_20_Copy_20_Resources_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Copy_20_Resources_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 281 280 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 80 35 85 }*/
/* IO - VPL Root : { 30 157 35 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 160 122 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Max");
/* IO - VPL Terminal : { 101 179 106 184 }*/
/* IO - VPL Terminal : { 101 207 106 212 }*/
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

/* Start Operations: { 60 60 }{ 233 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 106 66 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Other Files");
/* IO - VPL Terminal : { 45 146 50 151 }*/
/* IO - VPL Root : { 66 132 71 137 }*/
/* IO - VPL Root : { 66 160 71 165 }*/
/* End Operation */

/* Begin Operation: { 99 129 115 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 94 160 99 165 }*/
/* IO - VPL Root : { 115 160 120 165 }*/
/* End Operation */

/* Begin Operation: { 154 58 170 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Count Max");
/* IO - VPL Terminal : { 149 82 154 87 }*/
/* IO - VPL Terminal : { 149 108 154 113 }*/
/* IO - VPL Root : { 170 96 175 101 }*/
/* End Operation */

/* Begin Operation: { 191 20 199 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 154 80 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"clean up old");
/* IO - VPL Terminal : { 59 195 64 200 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 58 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 191 285 }{ 342 308 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 124 107 140 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Resource File Data");
/* IO - VPL Root : { 140 156 145 161 }*/
/* End Operation */

/* Begin Operation: { 80 47 96 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 75 114 80 119 }*/
/* IO - VPL Root : { 96 115 101 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 169 84 185 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 164 115 169 120 }*/
/* IO - VPL Terminal : { 164 156 169 161 }*/
/* IO - VPL Root : { 185 136 190 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 227 85 243 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Close and Clear");
/* IO - VPL Terminal : { 222 136 227 141 }*/
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

/* Start Operations: { 60 60 }{ 220 301 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 62 77 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 56 82 61 87 }*/
/* IO - VPL Root : { 77 74 82 79 }*/
/* IO - VPL Root : { 77 88 82 93 }*/
/* End Operation */

/* Begin Operation: { 102 138 118 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 97 166 102 171 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 103 80 119 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(  )");
/* IO - VPL Root : { 119 88 124 93 }*/
/* End Operation */

/* Begin Operation: { 148 62 164 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 74 148 79 }*/
/* IO - VPL Terminal : { 143 88 148 93 }*/
/* IO - VPL Root : { 164 82 169 87 }*/
/* End Operation */

/* Begin Operation: { 181 18 189 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 269 27 277 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 24 80 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 59 51 64 56 }*/
/* IO - VPL Terminal : { 59 87 64 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 106 27 122 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Next Name");
/* IO - VPL Terminal : { 101 48 106 53 }*/
/* IO - VPL Terminal : { 101 88 106 93 }*/
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
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_POAS_20_Copy_20_Resources_2F_Next_20_Name_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Copy_20_Resources_2F_Next_20_Name_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 205 337 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 66 35 71 }*/
/* IO - VPL Root : { 30 168 35 173 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 190 80 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"got next?");
/* IO - VPL Terminal : { 59 225 64 230 }*/
/* IO - VPL Root : { 80 225 85 230 }*/
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

/* Start Operations: { 60 60 }{ 259 337 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 76 80 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Other Files");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 102 85 107 }*/
/* IO - VPL Root : { 80 130 85 135 }*/
/* End Operation */

/* Begin Operation: { 106 249 122 270 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 101 257 106 262 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 100 122 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 101 130 106 135 }*/
/* IO - VPL Root : { 122 120 127 125 }*/
/* IO - VPL Root : { 122 142 127 147 }*/
/* End Operation */

/* Begin Operation: { 148 54 164 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Name As String");
/* IO - VPL Terminal : { 143 120 148 125 }*/
/* IO - VPL Root : { 164 120 169 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 190 36 198 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 130 190 135 }*/
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 112 80 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
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

/* Begin Operation: { 106 129 122 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 101 168 106 173 }*/
/* IO - VPL Terminal : { 101 225 106 230 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 25 156 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Open_20_Editor_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Open_20_Editor_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Open_20_Editor_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Open_20_Editor_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Open_20_Editor_2F_Count_20_Completed,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 198 681 }{ 200 300 } */
Nat4 VPLU_POAS_20_Open_20_Editor_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Open_20_Editor_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 97 362 }{ 248 323 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 114 179 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 180 130 185 135 }*/
/* End Operation */

/* Begin Operation: { 78 117 95 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"open project");
/* IO - VPL Terminal : { 72 162 77 167 }*/
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

/* Start Operations: { 175 196 }{ 248 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 64 95 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 82 137 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Editor");
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 92 179 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"start setts");
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

/* Start Operations: { 285 493 }{ 206 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 48 95 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find PS Service");
/* IO - VPL Root : { 96 98 101 103 }*/
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

/* Start Operations: { 219 249 }{ 206 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 49 95 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Project Settings");
/* IO - VPL Root : { 96 94 101 99 }*/
/* End Operation */

/* Begin Operation: { 120 49 137 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Find Service");
/* IO - VPL Terminal : { 114 94 119 99 }*/
/* IO - VPL Root : { 138 94 143 99 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
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
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 68 137 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add Project");
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Terminal : { 114 130 119 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 92 70 }{ 280 332 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 80 72 96 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get VPL Data");
/* IO - VPL Root : { 96 117 101 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 135 6 151 82 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 130 42 135 47 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 140 128 156 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open Editor");
/* IO - VPL Terminal : { 135 174 140 179 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 219 27 227 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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

/* Begin Operation: { 120 43 137 287 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"VPLProject Info Tools/Update Tool Set");
/* IO - VPL Terminal : { 114 163 119 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_POAS_20_Name_20_Application_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_POAS_20_Name_20_Application_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 187 381 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_POAS_20_Name_20_Application_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_POAS_20_Name_20_Application_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_POAS_20_Name_20_Application_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Window",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 155 369 }{ 200 300 } */
Nat4 VPLU_POAS_20_Name_20_Application_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Name_20_Application_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 234 354 }{ 246 295 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 72 35 77 }*/
/* IO - VPL Root : { 30 157 35 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 42 80 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Window");
/* IO - VPL Terminal : { 59 72 64 77 }*/
/* IO - VPL Root : { 80 61 85 66 }*/
/* IO - VPL Root : { 80 82 85 87 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 101 58 106 63 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 133 122 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get WindowRef");
/* IO - VPL Terminal : { 101 185 106 190 }*/
/* IO - VPL Root : { 122 186 127 191 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 170 165 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 142 186 147 191 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 148 99 164 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 164 114 169 119 }*/
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 114 190 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 234 354 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
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


Nat4 VPLU_POAS_20_Name_20_Application_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Name_20_Application_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 227 333 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 83 35 88 }*/
/* IO - VPL Root : { 30 153 35 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 151 80 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 59 173 64 178 }*/
/* IO - VPL Terminal : { 59 213 64 218 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 64 39 80 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Start Window");
/* IO - VPL Terminal : { 59 69 64 74 }*/
/* IO - VPL Terminal : { 59 101 64 106 }*/
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

/* Start Operations: { 60 60 }{ 314 501 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 72 35 77 }*/
/* IO - VPL Root : { 30 164 35 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 287 78 419 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 57 349 62 354 }*/
/* IO - VPL Root : { 78 349 83 354 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 64 116 80 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Progress");
/* IO - VPL Terminal : { 59 164 64 169 }*/
/* IO - VPL Root : { 80 164 85 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 105 64 121 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 100 100 105 105 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 148 66 164 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"VPLProject AppName Sheet");
/* IO - VPL Terminal : { 143 149 148 154 }*/
/* IO - VPL Root : { 164 149 169 154 }*/
/* End Operation */

/* Begin Operation: { 105 180 121 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Force Window?");
/* IO - VPL Terminal : { 100 235 105 240 }*/
/* IO - VPL Root : { 121 233 126 238 }*/
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
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 70 75 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 54 114 59 119 }*/
/* IO - VPL Root : { 75 114 80 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 54 117 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 96 90 101 95 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 142 22 150 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 116 142 121 }*/
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
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 92 70 }{ 198 338 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 182 75 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Begin Window");
/* IO - VPL Terminal : { 54 233 59 238 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 70 75 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 54 114 59 119 }*/
/* IO - VPL Root : { 75 114 80 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 54 117 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 96 90 101 95 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 142 22 150 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 137 116 142 121 }*/
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
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 101 387 118 423 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 119 403 124 408 }*/
/* End Operation */

/* Begin Operation: { 143 329 160 443 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Null on Cancel?");
/* IO - VPL Terminal : { 137 365 142 370 }*/
/* IO - VPL Terminal : { 137 403 142 408 }*/
/* IO - VPL Root : { 161 384 166 389 }*/
/* End Operation */

/* Begin Operation: { 187 319 203 367 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Data");
/* IO - VPL Terminal : { 182 333 187 338 }*/
/* IO - VPL Terminal : { 182 349 187 354 }*/
/* IO - VPL Root : { 203 341 208 346 }*/
/* End Operation */

/* Begin Operation: { 190 196 206 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 185 213 190 218 }*/
/* IO - VPL Terminal : { 185 233 190 238 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 53 206 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Window");
/* IO - VPL Terminal : { 185 72 190 77 }*/
/* IO - VPL Terminal : { 185 93 190 98 }*/
/* IO - VPL Root : { 206 83 211 88 }*/
/* End Operation */

/* Begin Operation: { 254 25 262 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,1,2,8);
	result = connect_root_to_terminal(ptrA,1,4,1,9);
	result = connect_root_to_terminal(ptrA,1,5,2,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,4,2,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [9 to 8] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
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


Nat4 VPLU_POAS_20_Name_20_Application_2F_Run_20_End_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_POAS_20_Name_20_Application_2F_Run_20_End_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 84 536 }{ 234 292 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 74 35 79 }*/
/* IO - VPL Root : { 30 154 35 159 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 140 80 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run End");
/* IO - VPL Terminal : { 59 159 64 164 }*/
/* IO - VPL Terminal : { 59 192 64 197 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 64 79 81 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 82 95 87 100 }*/
/* End Operation */

/* Begin Operation: { 106 55 122 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Window");
/* IO - VPL Terminal : { 101 74 106 79 }*/
/* IO - VPL Terminal : { 101 95 106 100 }*/
/* IO - VPL Root : { 122 85 127 90 }*/
/* End Operation */

/* Begin Operation: { 148 24 156 216 } */
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



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_PFAS_20_Locate_20_Files_20_Manually_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_PFAS_20_Locate_20_Files_20_Manually_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Count Max",tempClass,tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Count_20_Max,environment);
	tempAttribute = attribute_add("Count Completed",tempClass,tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Count_20_Completed,environment);
	tempAttribute = attribute_add("Stack",tempClass,tempAttribute_PFAS_20_Locate_20_Files_20_Manually_2F_Stack,environment);
	tempAttribute = attribute_add("Current Item",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project File Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 417 97 }{ 200 300 } */
Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Run_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 161 327 }{ 252 275 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 86 33 91 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 41 82 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Item");
/* IO - VPL Terminal : { 61 86 66 91 }*/
/* IO - VPL Root : { 82 70 87 75 }*/
/* IO - VPL Root : { 82 101 87 106 }*/
/* End Operation */

/* Begin Operation: { 107 44 124 80 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 60 106 65 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 154 104 170 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 170 119 175 124 }*/
/* End Operation */

/* Begin Operation: { 111 121 127 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Item Run");
/* IO - VPL Terminal : { 106 138 111 143 }*/
/* IO - VPL Terminal : { 106 161 111 166 }*/
/* IO - VPL Terminal : { 106 186 111 191 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 199 26 207 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 194 119 199 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,1,2,4);
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 161 327 }{ 323 369 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 44 76 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Stack");
/* IO - VPL Terminal : { 55 69 60 74 }*/
/* IO - VPL Root : { 76 60 81 65 }*/
/* IO - VPL Root : { 76 78 81 83 }*/
/* End Operation */

/* Begin Operation: { 103 37 119 58 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 98 45 103 50 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 101 87 117 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 96 119 101 124 }*/
/* IO - VPL Root : { 117 107 122 112 }*/
/* IO - VPL Root : { 117 129 122 134 }*/
/* End Operation */

/* Begin Operation: { 155 44 171 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Stack");
/* IO - VPL Terminal : { 150 60 155 65 }*/
/* IO - VPL Terminal : { 150 78 155 83 }*/
/* IO - VPL Root : { 171 69 176 74 }*/
/* End Operation */

/* Begin Operation: { 197 104 213 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 213 119 218 124 }*/
/* End Operation */

/* Begin Operation: { 148 137 164 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Item Start");
/* IO - VPL Terminal : { 143 156 148 161 }*/
/* IO - VPL Terminal : { 143 177 148 182 }*/
/* IO - VPL Terminal : { 143 198 148 203 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 242 22 250 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 237 119 242 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,3,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,2,0,3,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 161 327 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 102 80 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 80 114 85 119 }*/
/* End Operation */

/* Begin Operation: { 109 20 117 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 104 114 109 119 }*/
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


Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Run_20_Begin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 267 292 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 71 33 76 }*/
/* IO - VPL Root : { 28 153 33 158 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 77 159 93 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"set max");
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

/* Start Operations: { 60 60 }{ 271 295 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 76 106 92 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Stack");
/* IO - VPL Terminal : { 71 131 76 136 }*/
/* IO - VPL Root : { 92 122 97 127 }*/
/* IO - VPL Root : { 92 140 97 145 }*/
/* End Operation */

/* Begin Operation: { 121 109 137 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 116 140 121 145 }*/
/* IO - VPL Root : { 137 140 142 145 }*/
/* End Operation */

/* Begin Operation: { 163 90 179 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Count Max");
/* IO - VPL Terminal : { 158 114 163 119 }*/
/* IO - VPL Terminal : { 158 140 163 145 }*/
/* IO - VPL Root : { 179 128 184 133 }*/
/* End Operation */

/* Begin Operation: { 202 19 210 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 77 17 93 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Run Begin");
/* IO - VPL Terminal : { 72 45 77 50 }*/
/* IO - VPL Terminal : { 72 75 77 80 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 130 21 138 213 } */
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



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Run_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Run_universal_load(V_Method method,V_Environment environment)
{
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
/* IO - VPL Root : { 28 51 33 56 }*/
/* IO - VPL Root : { 28 122 33 127 }*/
/* IO - VPL Root : { 28 181 33 186 }*/
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


Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Stop_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Stop_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 273 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 111 33 116 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 90 80 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Activity");
/* IO - VPL Terminal : { 59 123 64 128 }*/
/* IO - VPL Root : { 80 111 85 116 }*/
/* IO - VPL Root : { 80 134 85 139 }*/
/* End Operation */

/* Begin Operation: { 120 73 136 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Up Count");
/* IO - VPL Terminal : { 115 92 120 97 }*/
/* IO - VPL Terminal : { 115 117 120 122 }*/
/* IO - VPL Terminal : { 115 134 120 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 155 125 172 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 173 141 178 146 }*/
/* End Operation */

/* Begin Operation: { 195 82 211 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Current Item");
/* IO - VPL Terminal : { 190 111 195 116 }*/
/* IO - VPL Terminal : { 190 141 195 146 }*/
/* IO - VPL Root : { 211 127 216 132 }*/
/* End Operation */

/* Begin Operation: { 236 23 244 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,3,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 371 563 }{ 315 349 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 65 33 70 }*/
/* IO - VPL Root : { 28 119 33 124 }*/
/* IO - VPL Root : { 28 180 33 185 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 182 82 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"string?");
/* IO - VPL Terminal : { 59 213 64 218 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 105 147 121 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"/Nav File Callback");
/* IO - VPL Root : { 121 196 126 201 }*/
/* End Operation */

/* Begin Operation: { 140 175 156 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New Callback");
/* IO - VPL Terminal : { 135 196 140 201 }*/
/* IO - VPL Terminal : { 135 219 140 224 }*/
/* IO - VPL Terminal : { 135 242 140 247 }*/
/* IO - VPL Root : { 156 219 161 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 19 72 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Item Start");
/* IO - VPL Terminal : { 51 42 56 47 }*/
/* IO - VPL Terminal : { 51 67 56 72 }*/
/* IO - VPL Terminal : { 51 92 56 97 }*/
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

/* Start Operations: { 468 851 }{ 200 300 } */
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

/* Begin Operation: { 120 80 136 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Primary Prompt");
/* IO - VPL Terminal : { 115 114 120 119 }*/
/* IO - VPL Terminal : { 115 179 120 184 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 94 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Current Item");
/* IO - VPL Terminal : { 73 65 78 70 }*/
/* IO - VPL Terminal : { 73 96 78 101 }*/
/* IO - VPL Root : { 94 81 99 86 }*/
/* End Operation */

/* Begin Operation: { 79 162 96 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Synchronize");
/* IO - VPL Terminal : { 73 208 78 213 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 109 43 126 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"pick type");
/* IO - VPL Terminal : { 103 77 108 82 }*/
/* IO - VPL Root : { 127 65 132 70 }*/
/* IO - VPL Root : { 127 91 132 96 }*/
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

/* Start Operations: { 555 1000 }{ 276 280 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 110 95 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get .section");
/* IO - VPL Root : { 96 137 101 142 }*/
/* IO - VPL Root : { 96 166 101 171 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 108 95 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"section");
/* IO - VPL Root : { 96 129 101 134 }*/
/* End Operation */

/* Begin Operation: { 120 52 137 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get File Type Extension");
/* IO - VPL Terminal : { 114 129 119 134 }*/
/* IO - VPL Root : { 138 102 143 107 }*/
/* IO - VPL Root : { 138 154 143 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 156 161 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 110 137 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Suffix\"");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 152 119 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 162 161 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 555 1000 }{ 276 280 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 148 137 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\'****\'");
/* IO - VPL Root : { 138 162 143 167 }*/
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 162 161 167 }*/
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

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 555 1000 }{ 276 280 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 75 122 92 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get .lib");
/* IO - VPL Root : { 93 141 98 146 }*/
/* IO - VPL Root : { 93 162 98 167 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 109 95 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"library");
/* IO - VPL Root : { 96 129 101 134 }*/
/* End Operation */

/* Begin Operation: { 120 52 137 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get File Type Extension");
/* IO - VPL Terminal : { 114 129 119 134 }*/
/* IO - VPL Root : { 138 102 143 107 }*/
/* IO - VPL Root : { 138 154 143 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 157 161 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 110 137 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Suffix\"");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 152 119 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 221 36 229 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 215 98 220 103 }*/
/* IO - VPL Terminal : { 215 162 220 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 156 85 173 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 150 109 155 114 }*/
/* IO - VPL Root : { 174 109 179 114 }*/
/* End Operation */

/* Begin Operation: { 191 67 208 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Nav Get File");
/* IO - VPL Terminal : { 185 87 190 92 }*/
/* IO - VPL Terminal : { 185 109 190 114 }*/
/* IO - VPL Terminal : { 185 131 190 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 72 50 77 }*/
/* IO - VPL Root : { 45 110 50 115 }*/
/* IO - VPL Root : { 45 186 50 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 82 94 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"setup dialog");
/* IO - VPL Terminal : { 73 95 78 100 }*/
/* IO - VPL Terminal : { 73 110 78 115 }*/
/* IO - VPL Terminal : { 73 140 78 145 }*/
/* IO - VPL Root : { 94 119 99 124 }*/
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

/* Start Operations: { 367 11 }{ 428 712 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 135 46 140 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 -3 87 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"PFAS Nav Locate Files Dialog");
/* IO - VPL Terminal : { 64 89 69 94 }*/
/* IO - VPL Root : { 88 89 93 94 }*/
/* End Operation */

/* Begin Operation: { 106 53 123 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Set Type List");
/* IO - VPL Terminal : { 100 84 105 89 }*/
/* IO - VPL Terminal : { 100 117 105 122 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 76 163 92 308 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kWindowModalityAppModal");
/* IO - VPL Root : { 92 233 97 238 }*/
/* End Operation */

/* Begin Operation: { 142 70 158 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 137 101 142 106 }*/
/* IO - VPL Terminal : { 137 134 142 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 132 203 149 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 150 219 155 224 }*/
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

/* Begin Operation: { 72 363 89 461 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Please locate \xE2\x80\x9C\"");
/* IO - VPL Root : { 90 410 95 415 }*/
/* End Operation */

/* Begin Operation: { 72 472 89 496 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\xE2\x80\x9D\"");
/* IO - VPL Root : { 90 482 95 487 }*/
/* End Operation */

/* Begin Operation: { 131 413 148 471 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 125 430 130 435 }*/
/* IO - VPL Terminal : { 125 449 130 454 }*/
/* IO - VPL Terminal : { 125 464 130 469 }*/
/* IO - VPL Root : { 149 440 154 445 }*/
/* End Operation */

/* Begin Operation: { 104 268 121 432 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Find Missing Components\"");
/* IO - VPL Root : { 122 348 127 353 }*/
/* End Operation */

/* Begin Operation: { 163 273 180 399 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Window Title");
/* IO - VPL Terminal : { 157 307 162 312 }*/
/* IO - VPL Terminal : { 157 359 162 364 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 203 307 220 405 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Set Message");
/* IO - VPL Terminal : { 197 337 202 342 }*/
/* IO - VPL Terminal : { 197 369 202 374 }*/
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
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 110 104 127 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Message\"");
/* IO - VPL Root : { 128 134 133 139 }*/
/* End Operation */

/* Begin Operation: { 74 140 90 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"all blanking");
/* IO - VPL Terminal : { 69 175 74 180 }*/
/* IO - VPL Root : { 90 175 95 180 }*/
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

/* Begin Operation: { 146 61 162 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parameter String");
/* IO - VPL Terminal : { 141 96 146 101 }*/
/* IO - VPL Terminal : { 141 133 146 138 }*/
/* IO - VPL Terminal : { 141 170 146 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 184 36 192 228 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 222 282 239 314 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\'****\'");
/* IO - VPL Root : { 240 296 245 301 }*/
/* End Operation */

/* Begin Operation: { 264 208 281 330 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Set Creator Code");
/* IO - VPL Terminal : { 258 246 263 251 }*/
/* IO - VPL Terminal : { 258 286 263 291 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 164 459 181 509 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Remove");
/* IO - VPL Root : { 182 482 187 487 }*/
/* End Operation */

/* Begin Operation: { 206 428 223 514 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Set Cancel");
/* IO - VPL Terminal : { 200 454 205 459 }*/
/* IO - VPL Terminal : { 200 482 205 487 }*/
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
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 110 72 127 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Cancel Button Label\"");
/* IO - VPL Root : { 128 134 133 139 }*/
/* End Operation */

/* Begin Operation: { 74 140 90 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"all blanking");
/* IO - VPL Terminal : { 69 175 74 180 }*/
/* IO - VPL Root : { 90 175 95 180 }*/
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

/* Begin Operation: { 146 61 162 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parameter String");
/* IO - VPL Terminal : { 141 96 146 101 }*/
/* IO - VPL Terminal : { 141 133 146 138 }*/
/* IO - VPL Terminal : { 141 170 146 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 184 36 192 228 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 35 386 52 560 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Choose Object Dialog");
/* IO - VPL Terminal : { 29 471 34 476 }*/
/* IO - VPL Root : { 53 471 58 476 }*/
/* End Operation */

/* Begin Operation: { 316 70 324 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 311 143 316 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,3,0,2,7);
	result = connect_root_to_terminal(ptrA,1,8,1,10);
	result = connect_root_to_terminal(ptrA,1,0,2,10);
	result = connect_root_to_terminal(ptrA,1,9,3,10);
	result = connect_root_to_terminal(ptrA,1,1,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,1,1,1,13);
	result = connect_root_to_terminal(ptrA,1,10,2,13);
	result = connect_root_to_terminal(ptrA,1,1,1,15);
	result = connect_root_to_terminal(ptrA,1,14,2,15);
	result = connect_root_to_terminal(ptrA,1,1,1,17);
	result = connect_root_to_terminal(ptrA,1,16,2,17);
	result = connect_root_to_terminal(ptrA,1,1,1,19);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 393 109 }{ 428 712 } */
/* Begin Operation: { 33 64 41 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 41 92 46 97 }*/
/* IO - VPL Root : { 41 135 46 140 }*/
/* IO - VPL Root : { 41 182 46 187 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 70 13 87 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Nav Choose File Dialog");
/* IO - VPL Terminal : { 64 89 69 94 }*/
/* IO - VPL Root : { 88 89 93 94 }*/
/* End Operation */

/* Begin Operation: { 106 53 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Type List");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 117 106 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 76 163 92 308 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kWindowModalityAppModal");
/* IO - VPL Root : { 92 233 97 238 }*/
/* End Operation */

/* Begin Operation: { 142 70 158 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Modality");
/* IO - VPL Terminal : { 137 101 142 106 }*/
/* IO - VPL Terminal : { 137 134 142 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 132 203 149 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 150 219 155 224 }*/
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

/* Begin Operation: { 72 363 89 461 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Please locate \xE2\x80\x9C\"");
/* IO - VPL Root : { 90 410 95 415 }*/
/* End Operation */

/* Begin Operation: { 72 472 89 496 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\xE2\x80\x9D\"");
/* IO - VPL Root : { 90 482 95 487 }*/
/* End Operation */

/* Begin Operation: { 131 413 148 471 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 125 430 130 435 }*/
/* IO - VPL Terminal : { 125 449 130 454 }*/
/* IO - VPL Terminal : { 125 464 130 469 }*/
/* IO - VPL Root : { 149 440 154 445 }*/
/* End Operation */

/* Begin Operation: { 104 268 121 432 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Find Missing Components\"");
/* IO - VPL Root : { 122 348 127 353 }*/
/* End Operation */

/* Begin Operation: { 163 273 180 399 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Window Title");
/* IO - VPL Terminal : { 157 307 162 312 }*/
/* IO - VPL Terminal : { 157 359 162 364 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 203 307 220 405 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Set Message");
/* IO - VPL Terminal : { 197 337 202 342 }*/
/* IO - VPL Terminal : { 197 369 202 374 }*/
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
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 110 104 127 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Message\"");
/* IO - VPL Root : { 128 134 133 139 }*/
/* End Operation */

/* Begin Operation: { 74 140 90 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"all blanking");
/* IO - VPL Terminal : { 69 175 74 180 }*/
/* IO - VPL Root : { 90 175 95 180 }*/
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

/* Begin Operation: { 146 61 162 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parameter String");
/* IO - VPL Terminal : { 141 96 146 101 }*/
/* IO - VPL Terminal : { 141 133 146 138 }*/
/* IO - VPL Terminal : { 141 170 146 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 184 36 192 228 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 222 282 239 314 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\'****\'");
/* IO - VPL Root : { 240 296 245 301 }*/
/* End Operation */

/* Begin Operation: { 264 205 281 333 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Creator Code");
/* IO - VPL Terminal : { 258 241 263 246 }*/
/* IO - VPL Terminal : { 258 296 263 301 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 164 459 181 509 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Remove");
/* IO - VPL Root : { 182 482 187 487 }*/
/* End Operation */

/* Begin Operation: { 206 428 223 514 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Set Cancel");
/* IO - VPL Terminal : { 200 454 205 459 }*/
/* IO - VPL Terminal : { 200 482 205 487 }*/
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
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 110 72 127 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Cancel Button Label\"");
/* IO - VPL Root : { 128 134 133 139 }*/
/* End Operation */

/* Begin Operation: { 74 140 90 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"all blanking");
/* IO - VPL Terminal : { 69 175 74 180 }*/
/* IO - VPL Root : { 90 175 95 180 }*/
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

/* Begin Operation: { 146 61 162 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Parameter String");
/* IO - VPL Terminal : { 141 96 146 101 }*/
/* IO - VPL Terminal : { 141 133 146 138 }*/
/* IO - VPL Terminal : { 141 170 146 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 184 36 192 228 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 316 70 324 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 311 143 316 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,3,0,2,7);
	result = connect_root_to_terminal(ptrA,1,8,1,10);
	result = connect_root_to_terminal(ptrA,1,0,2,10);
	result = connect_root_to_terminal(ptrA,1,9,3,10);
	result = connect_root_to_terminal(ptrA,1,1,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,1,1,1,13);
	result = connect_root_to_terminal(ptrA,1,10,2,13);
	result = connect_root_to_terminal(ptrA,1,1,1,15);
	result = connect_root_to_terminal(ptrA,1,14,2,15);
	result = connect_root_to_terminal(ptrA,1,1,1,17);
	result = connect_root_to_terminal(ptrA,1,16,2,17);
	result = connect_root_to_terminal(ptrA,1,1,1,18);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 44 136 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Open");
/* IO - VPL Terminal : { 115 70 120 75 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 153 136 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Safe Run");
/* IO - VPL Terminal : { 115 183 120 188 }*/
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

/* Begin Operation: { 162 36 170 228 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 237 43 245 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,0,3,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,3,3,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 371 563 }{ 200 300 } */
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

/* Begin Operation: { 66 25 82 107 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Item Stop");
/* IO - VPL Terminal : { 61 66 66 71 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 116 21 124 213 } */
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


Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 127 247 }{ 170 308 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 72 33 77 }*/
/* IO - VPL Root : { 28 154 33 159 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 138 80 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"keep file?");
/* IO - VPL Terminal : { 59 161 64 166 }*/
/* IO - VPL Terminal : { 59 186 64 191 }*/
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

/* Start Operations: { 306 717 }{ 290 290 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 97 95 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Custom Reply");
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 162 101 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 142 137 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Cancel");
/* IO - VPL Terminal : { 114 162 119 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 66 179 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Activity");
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Root : { 180 86 185 91 }*/
/* IO - VPL Root : { 180 108 185 113 }*/
/* End Operation */

/* Begin Operation: { 204 176 221 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 198 213 203 218 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 204 60 221 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/User Cancel");
/* IO - VPL Terminal : { 198 108 203 113 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 306 717 }{ 332 274 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 78 95 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Custom Reply");
/* IO - VPL Terminal : { 72 143 77 148 }*/
/* IO - VPL Root : { 96 143 101 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 108 137 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Search Here");
/* IO - VPL Terminal : { 114 143 119 148 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 94 179 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCtl Get Location");
/* IO - VPL Terminal : { 156 164 161 169 }*/
/* IO - VPL Root : { 180 164 185 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 204 60 221 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Push Manual Find");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 138 203 143 }*/
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

/* Start Operations: { 399 576 }{ 248 499 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 407 95 463 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Stack");
/* IO - VPL Terminal : { 72 433 77 438 }*/
/* IO - VPL Root : { 96 423 101 428 }*/
/* IO - VPL Root : { 96 441 101 446 }*/
/* End Operation */

/* Begin Operation: { 78 94 95 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"POAS Find Files");
/* IO - VPL Terminal : { 72 149 77 154 }*/
/* IO - VPL Root : { 96 149 101 154 }*/
/* End Operation */

/* Begin Operation: { 120 66 137 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Activity");
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Root : { 138 86 143 91 }*/
/* IO - VPL Root : { 138 108 143 113 }*/
/* End Operation */

/* Begin Operation: { 78 293 95 391 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Item");
/* IO - VPL Terminal : { 72 340 77 345 }*/
/* IO - VPL Root : { 96 323 101 328 }*/
/* IO - VPL Root : { 96 355 101 360 }*/
/* End Operation */

/* Begin Operation: { 120 333 137 405 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-l");
/* IO - VPL Terminal : { 114 355 119 360 }*/
/* IO - VPL Terminal : { 114 379 119 384 }*/
/* IO - VPL Root : { 138 367 143 372 }*/
/* End Operation */

/* Begin Operation: { 78 225 95 277 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 72 249 77 254 }*/
/* IO - VPL Root : { 96 249 101 254 }*/
/* End Operation */

/* Begin Operation: { 120 169 137 293 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Manual Locations");
/* IO - VPL Terminal : { 114 208 119 213 }*/
/* IO - VPL Terminal : { 114 249 119 254 }*/
/* IO - VPL Root : { 138 229 143 234 }*/
/* End Operation */

/* Begin Operation: { 162 301 179 403 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Manual Items");
/* IO - VPL Terminal : { 156 333 161 338 }*/
/* IO - VPL Terminal : { 156 367 161 372 }*/
/* IO - VPL Root : { 180 350 185 355 }*/
/* End Operation */

/* Begin Operation: { 162 69 179 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Push Next Stage");
/* IO - VPL Terminal : { 156 108 161 113 }*/
/* IO - VPL Terminal : { 156 149 161 154 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,1,2,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,5,2,8);
	result = connect_root_to_terminal(ptrA,2,3,1,9);
	result = connect_root_to_terminal(ptrA,1,2,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [9 to 8] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 66 263 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"clear us");
/* IO - VPL Terminal : { 240 98 245 103 }*/
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

/* Begin Operation: { 78 93 95 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 96 109 101 114 }*/
/* End Operation */

/* Begin Operation: { 120 47 137 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Current Item");
/* IO - VPL Terminal : { 114 77 119 82 }*/
/* IO - VPL Terminal : { 114 109 119 114 }*/
/* IO - VPL Root : { 138 94 143 99 }*/
/* End Operation */

/* Begin Operation: { 78 203 95 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 96 213 101 218 }*/
/* End Operation */

/* Begin Operation: { 120 179 137 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Stack");
/* IO - VPL Terminal : { 114 195 119 200 }*/
/* IO - VPL Terminal : { 114 213 119 218 }*/
/* IO - VPL Root : { 138 205 143 210 }*/
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 288 38 296 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 306 717 }{ 248 393 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 253 94 357 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Canceled?");
/* IO - VPL Terminal : { 73 304 78 309 }*/
/* IO - VPL Root : { 94 304 99 309 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 292 136 320 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 115 304 120 309 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 167 95 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"dirty!");
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

/* Start Operations: { 161 963 }{ 280 269 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 98 95 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Activity");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 118 101 123 }*/
/* IO - VPL Root : { 96 140 101 145 }*/
/* End Operation */

/* Begin Operation: { 125 72 142 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Helper");
/* IO - VPL Terminal : { 119 140 124 145 }*/
/* IO - VPL Root : { 143 140 148 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 167 94 184 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Make Dirty");
/* IO - VPL Terminal : { 161 140 166 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 209 35 217 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 53 94 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Item");
/* IO - VPL Terminal : { 73 98 78 103 }*/
/* IO - VPL Root : { 94 82 99 87 }*/
/* IO - VPL Root : { 94 113 99 118 }*/
/* End Operation */

/* Begin Operation: { 120 53 137 89 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 69 119 74 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 120 136 137 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Removed file");
/* IO - VPL Root : { 138 174 143 179 }*/
/* End Operation */

/* Begin Operation: { 162 148 178 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 157 174 162 179 }*/
/* IO - VPL Terminal : { 157 214 162 219 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,4,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 306 717 }{ 290 269 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 98 49 103 }*/
/* IO - VPL Root : { 44 162 49 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 94 94 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Reply Selection");
/* IO - VPL Terminal : { 73 162 78 167 }*/
/* IO - VPL Root : { 94 161 99 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 188 136 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"(  )");
/* IO - VPL Terminal : { 115 195 120 200 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 120 53 136 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Current Item");
/* IO - VPL Terminal : { 115 98 120 103 }*/
/* IO - VPL Root : { 136 82 141 87 }*/
/* IO - VPL Root : { 136 113 141 118 }*/
/* End Operation */

/* Begin Operation: { 162 36 179 72 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 156 52 161 57 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 105 178 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 157 124 162 129 }*/
/* IO - VPL Root : { 178 127 183 132 }*/
/* End Operation */

/* Begin Operation: { 204 75 221 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Merge back in");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 123 203 128 }*/
/* IO - VPL Terminal : { 198 148 203 153 }*/
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

/* Start Operations: { 60 60 }{ 206 268 } */
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

/* Begin Operation: { 78 49 94 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Activity");
/* IO - VPL Terminal : { 73 82 78 87 }*/
/* IO - VPL Root : { 94 70 99 75 }*/
/* IO - VPL Root : { 94 93 99 98 }*/
/* End Operation */

/* Begin Operation: { 78 152 95 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"New Parse");
/* IO - VPL Terminal : { 72 176 77 181 }*/
/* IO - VPL Terminal : { 72 202 77 207 }*/
/* IO - VPL Root : { 96 170 101 175 }*/
/* IO - VPL Root : { 96 190 101 195 }*/
/* IO - VPL Root : { 96 210 101 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
	tempOperation = operation_output_to(tempOperation,environment,2,iList);
	tempOperation = operation_output_to(tempOperation,environment,3,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 60 60 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 164 364 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 29 82 34 87 }*/
/* IO - VPL Root : { 29 146 34 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 48 71 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"pick type");
/* IO - VPL Terminal : { 48 82 53 87 }*/
/* IO - VPL Root : { 72 81 77 86 }*/
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

/* Start Operations: { 555 1000 }{ 276 280 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 110 95 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get .section");
/* IO - VPL Root : { 96 137 101 142 }*/
/* IO - VPL Root : { 96 166 101 171 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 108 95 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"section");
/* IO - VPL Root : { 96 129 101 134 }*/
/* End Operation */

/* Begin Operation: { 120 52 137 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get File Type Extension");
/* IO - VPL Terminal : { 114 129 119 134 }*/
/* IO - VPL Root : { 138 102 143 107 }*/
/* IO - VPL Root : { 138 154 143 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 162 161 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 110 137 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Suffix\"");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 152 119 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 162 161 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 555 1000 }{ 276 280 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 137 95 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"get .lib");
/* IO - VPL Root : { 96 156 101 161 }*/
/* IO - VPL Root : { 96 177 101 182 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 109 95 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"library");
/* IO - VPL Root : { 96 129 101 134 }*/
/* End Operation */

/* Begin Operation: { 120 52 137 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get File Type Extension");
/* IO - VPL Terminal : { 114 129 119 134 }*/
/* IO - VPL Root : { 138 102 143 107 }*/
/* IO - VPL Root : { 138 154 143 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 162 161 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 110 137 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"\"Suffix\"");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 152 119 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 162 161 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 555 1000 }{ 276 280 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 148 137 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\'****\'");
/* IO - VPL Root : { 138 162 143 167 }*/
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 162 161 167 }*/
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

/* Begin Operation: { 93 67 109 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Divy Types");
/* IO - VPL Terminal : { 88 84 93 89 }*/
/* IO - VPL Terminal : { 88 125 93 130 }*/
/* IO - VPL Root : { 109 77 114 82 }*/
/* IO - VPL Root : { 109 103 114 108 }*/
/* IO - VPL Root : { 109 137 114 142 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 31 68 36 73 }*/
/* IO - VPL Root : { 31 116 36 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 133 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'vplS\'");
/* IO - VPL Terminal : { 59 148 64 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 58 106 63 }*/
/* IO - VPL Terminal : { 101 96 106 101 }*/
/* IO - VPL Terminal : { 101 172 106 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 31 68 36 73 }*/
/* IO - VPL Root : { 31 116 36 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 133 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'vplB\'");
/* IO - VPL Terminal : { 59 148 64 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 58 106 63 }*/
/* IO - VPL Terminal : { 101 96 106 101 }*/
/* IO - VPL Terminal : { 101 172 106 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 141 95 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\'FMWK\'");
/* IO - VPL Terminal : { 72 162 77 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 114 82 119 87 }*/
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 178 119 183 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 196 374 }{ 200 300 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 31 68 36 73 }*/
/* IO - VPL Root : { 31 116 36 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 72 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 59 58 64 63 }*/
/* IO - VPL Terminal : { 59 96 64 101 }*/
/* IO - VPL Terminal : { 59 172 64 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,3,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 139 20 147 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 134 56 139 61 }*/
/* IO - VPL Terminal : { 134 94 139 99 }*/
/* IO - VPL Terminal : { 134 170 139 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
	result = connect_root_to_terminal(ptrA,3,2,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 144 137 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Merge files");
/* IO - VPL Terminal : { 114 158 119 163 }*/
/* IO - VPL Terminal : { 114 174 119 179 }*/
/* IO - VPL Terminal : { 114 190 119 195 }*/
/* IO - VPL Terminal : { 114 206 119 211 }*/
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

/* Start Operations: { 80 80 }{ 374 336 } */
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

/* Begin Operation: { 78 77 95 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Section Files");
/* IO - VPL Terminal : { 72 123 77 128 }*/
/* IO - VPL Root : { 96 107 101 112 }*/
/* IO - VPL Root : { 96 139 101 144 }*/
/* End Operation */

/* Begin Operation: { 120 56 137 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Primitive Files");
/* IO - VPL Terminal : { 114 107 119 112 }*/
/* IO - VPL Root : { 138 89 143 94 }*/
/* IO - VPL Root : { 138 124 143 129 }*/
/* End Operation */

/* Begin Operation: { 162 47 179 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Other Files");
/* IO - VPL Terminal : { 156 89 161 94 }*/
/* IO - VPL Root : { 180 74 185 79 }*/
/* IO - VPL Root : { 180 103 185 108 }*/
/* End Operation */

/* Begin Operation: { 120 204 137 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(join)");
/* IO - VPL Terminal : { 114 220 119 225 }*/
/* IO - VPL Terminal : { 114 238 119 243 }*/
/* IO - VPL Root : { 138 230 143 235 }*/
/* End Operation */

/* Begin Operation: { 204 72 220 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Section Files");
/* IO - VPL Terminal : { 199 101 204 106 }*/
/* IO - VPL Terminal : { 199 132 204 137 }*/
/* IO - VPL Root : { 220 117 225 122 }*/
/* End Operation */

/* Begin Operation: { 162 224 179 280 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(join)");
/* IO - VPL Terminal : { 156 240 161 245 }*/
/* IO - VPL Terminal : { 156 258 161 263 }*/
/* IO - VPL Root : { 180 250 185 255 }*/
/* End Operation */

/* Begin Operation: { 246 85 262 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Primitive Files");
/* IO - VPL Terminal : { 241 117 246 122 }*/
/* IO - VPL Terminal : { 241 151 246 156 }*/
/* IO - VPL Root : { 262 135 267 140 }*/
/* End Operation */

/* Begin Operation: { 204 244 221 300 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(join)");
/* IO - VPL Terminal : { 198 260 203 265 }*/
/* IO - VPL Terminal : { 198 278 203 283 }*/
/* IO - VPL Root : { 222 270 227 275 }*/
/* End Operation */

/* Begin Operation: { 288 216 304 300 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Other Files");
/* IO - VPL Terminal : { 283 242 288 247 }*/
/* IO - VPL Terminal : { 283 270 288 275 }*/
/* IO - VPL Root : { 304 256 309 261 }*/
/* End Operation */

/* Begin Operation: { 330 36 338 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,2,2,1,6);
	result = connect_root_to_terminal(ptrA,3,0,2,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,2,3,1,8);
	result = connect_root_to_terminal(ptrA,4,0,2,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,2,3,3);
	result = connect_root_to_terminal(ptrA,3,2,4,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 41 254 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,1,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 249 805 }{ 354 362 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 33 80 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Item Stop");
/* IO - VPL Terminal : { 59 72 64 77 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 32 111 224 } */
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



	return kNOERROR;
}


/* Stop Universals */



Nat4 VPLC_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 144 719 }{ 446 455 } */
	tempAttribute = attribute_add("Event Callback Behavior",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Event_20_Callback_20_Behavior,environment);
	tempAttribute = attribute_add("Creation Options Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Action",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Action,environment);
	tempAttribute = attribute_add("Modality",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Modality,environment);
	tempAttribute = attribute_add("Result",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Result,environment);
	tempAttribute = attribute_add("Reply",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Error,environment);
	tempAttribute = attribute_add("Completion Behavior",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Completion_20_Behavior,environment);
	tempAttribute = attribute_add("Finished?",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Finished_3F_,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Parameter Strings",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Parameter_20_Strings,environment);
	tempAttribute = attribute_add("Filter Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("Preview Callback Behavior",tempClass,NULL,environment);
	tempAttribute = attribute_add("The Nib Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("The Custom View",tempClass,NULL,environment);
	tempAttribute = attribute_add("Last Height",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Last_20_Height,environment);
	tempAttribute = attribute_add("Last Width",tempClass,tempAttribute_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Last_20_Width,environment);
	tempAttribute = attribute_add("Custom Reply",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Nav Choose Object Dialog");
	return kNOERROR;
}

/* Start Universals: { 187 1064 }{ 463 311 } */
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 289 947 }{ 561 465 } */
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

/* Begin Operation: { 78 90 95 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"eventData");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 116 101 121 }*/
/* IO - VPL Root : { 96 144 101 149 }*/
/* End Operation */

/* Begin Operation: { 120 87 137 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"eventDataParms");
/* IO - VPL Terminal : { 114 144 119 149 }*/
/* IO - VPL Root : { 138 124 143 129 }*/
/* IO - VPL Root : { 138 163 143 168 }*/
/* End Operation */

/* Begin Operation: { 162 138 179 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"event");
/* IO - VPL Terminal : { 156 163 161 168 }*/
/* IO - VPL Root : { 180 154 185 159 }*/
/* IO - VPL Root : { 180 172 185 177 }*/
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

/* Start Operations: { 119 458 }{ 280 274 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 140 95 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 96 150 101 155 }*/
/* End Operation */

/* Begin Operation: { 78 180 95 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 96 190 101 195 }*/
/* End Operation */

/* Begin Operation: { 120 109 137 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-integer");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 153 119 158 }*/
/* IO - VPL Terminal : { 114 176 119 181 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
/* IO - VPL Root : { 138 153 143 158 }*/
/* IO - VPL Root : { 138 176 143 181 }*/
/* End Operation */

/* Begin Operation: { 162 176 179 252 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"EventRecord");
/* IO - VPL Root : { 180 212 185 217 }*/
/* End Operation */

/* Begin Operation: { 166 53 183 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-pointer");
/* IO - VPL Terminal : { 160 94 165 99 }*/
/* IO - VPL Root : { 184 94 189 99 }*/
/* End Operation */

/* Begin Operation: { 204 130 221 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"set-external-type");
/* IO - VPL Terminal : { 198 170 203 175 }*/
/* IO - VPL Terminal : { 198 212 203 217 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,3,3,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 215 221 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"what");
/* IO - VPL Terminal : { 198 240 203 245 }*/
/* IO - VPL Root : { 222 231 227 236 }*/
/* IO - VPL Root : { 222 249 227 254 }*/
/* End Operation */

/* Begin Operation: { 246 213 263 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"mouseDown");
/* IO - VPL Terminal : { 240 249 245 254 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 104 221 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"where");
/* IO - VPL Terminal : { 198 132 203 137 }*/
/* IO - VPL Root : { 222 122 227 127 }*/
/* IO - VPL Root : { 222 142 227 147 }*/
/* End Operation */

/* Begin Operation: { 246 91 263 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"GlobalToLocal");
/* IO - VPL Terminal : { 240 142 245 147 }*/
/* IO - VPL Root : { 264 142 269 147 }*/
/* End Operation */

/* Begin Operation: { 288 97 305 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"window");
/* IO - VPL Terminal : { 282 130 287 135 }*/
/* IO - VPL Root : { 306 118 311 123 }*/
/* IO - VPL Root : { 306 152 311 157 }*/
/* End Operation */

/* Begin Operation: { 330 103 347 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,3,"FindControlUnderMouse");
/* IO - VPL Terminal : { 324 142 329 147 }*/
/* IO - VPL Terminal : { 324 183 329 188 }*/
/* IO - VPL Terminal : { 324 224 329 229 }*/
/* IO - VPL Root : { 348 142 353 147 }*/
/* IO - VPL Root : { 348 183 353 188 }*/
/* IO - VPL Root : { 348 224 353 229 }*/
/* End Operation */

/* Begin Operation: { 372 126 389 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 366 142 371 147 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 330 372 347 408 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 348 388 353 393 }*/
/* End Operation */

/* Begin Operation: { 204 311 221 391 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"modifiers");
/* IO - VPL Terminal : { 198 349 203 354 }*/
/* IO - VPL Root : { 222 335 227 340 }*/
/* IO - VPL Root : { 222 361 227 366 }*/
/* End Operation */

/* Begin Operation: { 372 282 389 418 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,3,"HandleControlClick");
/* IO - VPL Terminal : { 366 307 371 312 }*/
/* IO - VPL Terminal : { 366 334 371 339 }*/
/* IO - VPL Terminal : { 366 361 371 366 }*/
/* IO - VPL Terminal : { 366 388 371 393 }*/
/* IO - VPL Root : { 390 314 395 319 }*/
/* IO - VPL Root : { 390 348 395 353 }*/
/* IO - VPL Root : { 390 382 395 387 }*/
/* End Operation */

/* Begin Operation: { 414 116 431 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"hit button?");
/* IO - VPL Terminal : { 408 142 413 147 }*/
/* IO - VPL Terminal : { 408 170 413 175 }*/
/* IO - VPL Root : { 432 156 437 161 }*/
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

/* Start Operations: { 80 80 }{ 248 343 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 191 95 307 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kControlButtonPart");
/* IO - VPL Terminal : { 72 247 77 252 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 63 95 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"GetControlTitle");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Terminal : { 72 135 77 140 }*/
/* IO - VPL Root : { 96 98 101 103 }*/
/* IO - VPL Root : { 96 135 101 140 }*/
/* End Operation */

/* Begin Operation: { 120 129 137 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get UInt8");
/* IO - VPL Terminal : { 114 153 119 158 }*/
/* IO - VPL Terminal : { 114 179 119 184 }*/
/* IO - VPL Root : { 138 153 143 158 }*/
/* IO - VPL Root : { 138 179 143 184 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 119 179 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-text");
/* IO - VPL Terminal : { 156 135 161 140 }*/
/* IO - VPL Terminal : { 156 153 161 158 }*/
/* IO - VPL Terminal : { 156 171 161 176 }*/
/* IO - VPL Root : { 180 135 185 140 }*/
/* IO - VPL Root : { 180 153 185 158 }*/
/* IO - VPL Root : { 180 171 185 176 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,3,3,4);
	result = connect_root_to_terminal(ptrA,3,4,1,5);
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

/* Begin Operation: { 456 65 473 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"done?");
/* IO - VPL Terminal : { 450 82 455 87 }*/
/* IO - VPL Terminal : { 450 101 455 106 }*/
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

/* Start Operations: { 60 60 }{ 206 276 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 204 95 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 72 220 77 225 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 78 56 95 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Custom Reply");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Terminal : { 72 142 77 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 34 137 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCtl Terminate");
/* IO - VPL Terminal : { 114 98 119 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 498 42 506 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,3,1,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,2,8,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,2,3,1,12);
	result = connect_root_to_terminal(ptrA,1,9,1,13);
	result = connect_root_to_terminal(ptrA,1,7,2,13);
	result = connect_root_to_terminal(ptrA,2,12,3,13);
	result = connect_root_to_terminal(ptrA,1,11,4,13);
	result = connect_root_to_terminal(ptrA,1,9,1,14);
	result = connect_root_to_terminal(ptrA,1,13,2,14);
	result = connect_root_to_terminal(ptrA,1,0,1,15);
	result = connect_root_to_terminal(ptrA,1,14,2,15);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 289 947 }{ 122 264 } */
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



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 206 271 } */
/* Begin Operation: { 36 39 44 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 76 49 81 }*/
/* IO - VPL Root : { 44 115 49 120 }*/
/* IO - VPL Root : { 44 154 49 159 }*/
/* IO - VPL Root : { 44 193 49 198 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 62 95 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBCustomize");
/* IO - VPL Terminal : { 72 115 77 120 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 74 137 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCB Customize");
/* IO - VPL Terminal : { 114 105 119 110 }*/
/* IO - VPL Terminal : { 114 138 119 143 }*/
/* IO - VPL Terminal : { 114 171 119 176 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 64 170 214 } */
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 206 271 } */
/* Begin Operation: { 36 39 44 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 76 49 81 }*/
/* IO - VPL Root : { 44 115 49 120 }*/
/* IO - VPL Root : { 44 154 49 159 }*/
/* IO - VPL Root : { 44 193 49 198 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 62 95 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBAdjustRect");
/* IO - VPL Terminal : { 72 115 77 120 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 72 137 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCB Adjust Rect");
/* IO - VPL Terminal : { 114 104 119 109 }*/
/* IO - VPL Terminal : { 114 138 119 143 }*/
/* IO - VPL Terminal : { 114 172 119 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 64 170 214 } */
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 206 271 } */
/* Begin Operation: { 36 39 44 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 76 49 81 }*/
/* IO - VPL Root : { 44 115 49 120 }*/
/* IO - VPL Root : { 44 154 49 159 }*/
/* IO - VPL Root : { 44 193 49 198 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 56 95 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"kNavCBNewLocation");
/* IO - VPL Terminal : { 72 115 77 120 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 67 137 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCB New Location");
/* IO - VPL Terminal : { 114 102 119 107 }*/
/* IO - VPL Terminal : { 114 139 119 144 }*/
/* IO - VPL Terminal : { 114 176 119 181 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 64 170 214 } */
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 206 271 } */
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

/* Begin Operation: { 78 57 95 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"changed");
/* IO - VPL Terminal : { 72 79 77 84 }*/
/* IO - VPL Terminal : { 72 103 77 108 }*/
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

/* Start Operations: { 97 402 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 69 95 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Unknown selector");
/* IO - VPL Root : { 96 121 101 126 }*/
/* End Operation */

/* Begin Operation: { 120 83 137 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Result");
/* IO - VPL Terminal : { 114 101 119 106 }*/
/* IO - VPL Terminal : { 114 121 119 126 }*/
/* IO - VPL Terminal : { 114 141 119 146 }*/
/* IO - VPL Terminal : { 114 161 119 166 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,2,0,3,2);
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 206 271 } */
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


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 248 305 }{ 248 267 } */
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

/* Begin Operation: { 78 118 95 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find View Size");
/* IO - VPL Terminal : { 72 167 77 172 }*/
/* IO - VPL Root : { 96 150 101 155 }*/
/* IO - VPL Root : { 96 184 101 189 }*/
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

/* Start Operations: { 268 325 }{ 332 279 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 68 95 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Nib Window");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 130 101 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 81 137 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"GetWindowPortBounds");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 181 119 186 }*/
/* IO - VPL Root : { 138 117 143 122 }*/
/* IO - VPL Root : { 138 155 143 160 }*/
/* IO - VPL Root : { 138 193 143 198 }*/
/* End Operation */

/* Begin Operation: { 162 148 179 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Rect-to-list");
/* IO - VPL Terminal : { 156 193 161 198 }*/
/* IO - VPL Root : { 180 193 185 198 }*/
/* End Operation */

/* Begin Operation: { 204 161 221 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 198 193 203 198 }*/
/* IO - VPL Root : { 222 172 227 177 }*/
/* IO - VPL Root : { 222 185 227 190 }*/
/* IO - VPL Root : { 222 198 227 203 }*/
/* IO - VPL Root : { 222 211 227 216 }*/
/* End Operation */

/* Begin Operation: { 246 146 263 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"-");
/* IO - VPL Terminal : { 240 158 245 163 }*/
/* IO - VPL Terminal : { 240 172 245 177 }*/
/* IO - VPL Root : { 264 166 269 171 }*/
/* End Operation */

/* Begin Operation: { 246 199 263 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"-");
/* IO - VPL Terminal : { 240 211 245 216 }*/
/* IO - VPL Terminal : { 240 225 245 230 }*/
/* IO - VPL Root : { 264 219 269 224 }*/
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 98 287 103 }*/
/* IO - VPL Terminal : { 282 162 287 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,3,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,4,4,1,6);
	result = connect_root_to_terminal(ptrA,2,4,2,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 86 137 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Customize Rect");
/* IO - VPL Terminal : { 114 106 119 111 }*/
/* IO - VPL Terminal : { 114 128 119 133 }*/
/* IO - VPL Terminal : { 114 150 119 155 }*/
/* IO - VPL Terminal : { 114 172 119 177 }*/
/* IO - VPL Root : { 138 120 143 125 }*/
/* IO - VPL Root : { 138 156 143 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 409 582 }{ 332 268 } */
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

/* Begin Operation: { 78 66 95 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"customRect");
/* IO - VPL Terminal : { 72 110 77 115 }*/
/* IO - VPL Root : { 96 94 101 99 }*/
/* IO - VPL Root : { 96 124 101 129 }*/
/* End Operation */

/* Begin Operation: { 120 79 137 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"Rect-to-list");
/* IO - VPL Terminal : { 114 124 119 129 }*/
/* IO - VPL Root : { 138 124 143 129 }*/
/* End Operation */

/* Begin Operation: { 162 92 179 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,4,"unpack");
/* IO - VPL Terminal : { 156 124 161 129 }*/
/* IO - VPL Root : { 180 103 185 108 }*/
/* IO - VPL Root : { 180 116 185 121 }*/
/* IO - VPL Root : { 180 129 185 134 }*/
/* IO - VPL Root : { 180 142 185 147 }*/
/* End Operation */

/* Begin Operation: { 204 91 221 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 198 103 203 108 }*/
/* IO - VPL Terminal : { 198 117 203 122 }*/
/* IO - VPL Root : { 222 106 227 111 }*/
/* End Operation */

/* Begin Operation: { 204 160 221 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 198 172 203 177 }*/
/* IO - VPL Terminal : { 198 186 203 191 }*/
/* IO - VPL Root : { 222 180 227 185 }*/
/* End Operation */

/* Begin Operation: { 246 67 263 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"negotiate");
/* IO - VPL Terminal : { 240 72 245 77 }*/
/* IO - VPL Terminal : { 240 106 245 111 }*/
/* IO - VPL Terminal : { 240 118 245 123 }*/
/* IO - VPL Terminal : { 240 130 245 135 }*/
/* IO - VPL Terminal : { 240 142 245 147 }*/
/* IO - VPL Root : { 264 99 269 104 }*/
/* IO - VPL Root : { 264 132 269 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 60 60 }{ 210 268 } */
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

/* Begin Operation: { 78 105 95 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 72 115 77 120 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 168 95 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"+");
/* IO - VPL Terminal : { 72 180 77 185 }*/
/* IO - VPL Terminal : { 72 194 77 199 }*/
/* IO - VPL Root : { 96 188 101 193 }*/
/* End Operation */

/* Begin Operation: { 120 178 137 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 114 188 119 193 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 162 161 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,1);
	result = connect_root_to_terminal(ptrA,4,0,1,2);
	result = connect_root_to_terminal(ptrA,5,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 60 60 }{ 164 264 } */
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

/* Begin Operation: { 78 48 95 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"do height");
/* IO - VPL Terminal : { 72 65 77 70 }*/
/* IO - VPL Terminal : { 72 84 77 89 }*/
/* IO - VPL Terminal : { 72 103 77 108 }*/
/* IO - VPL Root : { 96 85 101 90 }*/
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

/* Begin Operation: { 78 39 95 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Last Height");
/* IO - VPL Terminal : { 72 82 77 87 }*/
/* IO - VPL Root : { 96 67 101 72 }*/
/* IO - VPL Root : { 96 97 101 102 }*/
/* End Operation */

/* Begin Operation: { 120 152 137 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 114 164 119 169 }*/
/* IO - VPL Terminal : { 114 178 119 183 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 166 95 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"<");
/* IO - VPL Terminal : { 72 178 77 183 }*/
/* IO - VPL Terminal : { 72 192 77 197 }*/
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
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,3,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
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
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 142 95 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"do width");
/* IO - VPL Terminal : { 72 158 77 163 }*/
/* IO - VPL Terminal : { 72 176 77 181 }*/
/* IO - VPL Terminal : { 72 194 77 199 }*/
/* IO - VPL Root : { 96 176 101 181 }*/
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

/* Begin Operation: { 78 41 95 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Last Width");
/* IO - VPL Terminal : { 72 82 77 87 }*/
/* IO - VPL Root : { 96 67 101 72 }*/
/* IO - VPL Root : { 96 95 101 100 }*/
/* End Operation */

/* Begin Operation: { 120 152 137 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 114 164 119 169 }*/
/* IO - VPL Terminal : { 114 178 119 183 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 166 95 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"<");
/* IO - VPL Terminal : { 72 178 77 183 }*/
/* IO - VPL Terminal : { 72 192 77 197 }*/
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
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,3,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
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
/* IO - VPL Terminal : { 72 130 77 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
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
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,4,0,3,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,5,0,3,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
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
/* IO - VPL Terminal : { 282 98 287 103 }*/
/* IO - VPL Terminal : { 282 162 287 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,4,0,2,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,3,3,4,6);
	result = connect_root_to_terminal(ptrA,4,3,5,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,6,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 65 179 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"save changes");
/* IO - VPL Terminal : { 156 82 161 87 }*/
/* IO - VPL Terminal : { 156 101 161 106 }*/
/* IO - VPL Terminal : { 156 120 161 125 }*/
/* IO - VPL Terminal : { 156 139 161 144 }*/
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

/* Start Operations: { 268 325 }{ 290 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 72 50 77 }*/
/* IO - VPL Root : { 45 110 50 115 }*/
/* IO - VPL Root : { 45 148 50 153 }*/
/* IO - VPL Root : { 45 199 50 204 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 44 137 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Last Height");
/* IO - VPL Terminal : { 114 72 119 77 }*/
/* IO - VPL Terminal : { 114 119 119 124 }*/
/* IO - VPL Root : { 138 87 143 92 }*/
/* End Operation */

/* Begin Operation: { 162 61 179 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Last Width");
/* IO - VPL Terminal : { 156 87 161 92 }*/
/* IO - VPL Terminal : { 156 124 161 129 }*/
/* IO - VPL Root : { 180 102 185 107 }*/
/* End Operation */

/* Begin Operation: { 78 66 95 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"customRect");
/* IO - VPL Terminal : { 72 110 77 115 }*/
/* IO - VPL Root : { 96 94 101 99 }*/
/* IO - VPL Root : { 96 138 101 143 }*/
/* End Operation */

/* Begin Operation: { 120 150 137 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"bottom");
/* IO - VPL Terminal : { 114 170 119 175 }*/
/* IO - VPL Terminal : { 114 192 119 197 }*/
/* IO - VPL Root : { 138 181 143 186 }*/
/* End Operation */

/* Begin Operation: { 162 165 179 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"right");
/* IO - VPL Terminal : { 156 181 161 186 }*/
/* IO - VPL Terminal : { 156 199 161 204 }*/
/* IO - VPL Root : { 180 190 185 195 }*/
/* End Operation */

/* Begin Operation: { 204 82 221 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extset(tempOperation,environment,"customRect");
/* IO - VPL Terminal : { 198 110 203 115 }*/
/* IO - VPL Terminal : { 198 140 203 145 }*/
/* IO - VPL Root : { 222 126 227 131 }*/
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,4,0,2,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,4,0,2,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 39 212 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,2,1,4,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,2,2,4,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 350 242 }{ 248 268 } */
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

/* Begin Operation: { 78 58 95 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Custom View");
/* IO - VPL Terminal : { 72 129 77 134 }*/
/* IO - VPL Root : { 96 129 101 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 37 137 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCtl Add Control");
/* IO - VPL Terminal : { 114 82 119 87 }*/
/* IO - VPL Terminal : { 114 129 119 134 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 27 179 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Location Prompt");
/* IO - VPL Terminal : { 156 81 161 86 }*/
/* IO - VPL Terminal : { 156 130 161 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 40 212 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 350 242 }{ 206 264 } */
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

/* Begin Operation: { 78 67 95 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Nav Customize FAILED!");
/* IO - VPL Root : { 96 134 101 139 }*/
/* End Operation */

/* Begin Operation: { 120 80 137 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Console");
/* IO - VPL Terminal : { 114 134 119 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Accept_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Accept_universal_load(V_Method method,V_Environment environment)
{
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



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 151 211 }{ 248 342 } */
/* Begin Operation: { 36 43 44 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 89 50 94 }*/
/* IO - VPL Root : { 45 137 50 142 }*/
/* IO - VPL Root : { 45 185 50 190 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 47 95 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Custom View");
/* IO - VPL Terminal : { 72 89 77 94 }*/
/* IO - VPL Terminal : { 72 137 77 142 }*/
/* IO - VPL Root : { 96 112 101 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 214 95 306 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"customRect");
/* IO - VPL Terminal : { 72 258 77 263 }*/
/* IO - VPL Root : { 96 242 101 247 }*/
/* IO - VPL Root : { 96 272 101 277 }*/
/* End Operation */

/* Begin Operation: { 120 108 137 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"left");
/* IO - VPL Terminal : { 114 129 119 134 }*/
/* IO - VPL Root : { 138 121 143 126 }*/
/* IO - VPL Root : { 138 136 143 141 }*/
/* End Operation */

/* Begin Operation: { 120 252 137 296 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"top");
/* IO - VPL Terminal : { 114 272 119 277 }*/
/* IO - VPL Root : { 138 264 143 269 }*/
/* IO - VPL Root : { 138 278 143 283 }*/
/* End Operation */

/* Begin Operation: { 162 90 179 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"MoveControl");
/* IO - VPL Terminal : { 156 112 161 117 }*/
/* IO - VPL Terminal : { 156 136 161 141 }*/
/* IO - VPL Terminal : { 156 160 161 165 }*/
/* IO - VPL Root : { 180 137 185 142 }*/
/* End Operation */

/* Begin Operation: { 162 224 179 296 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"changed");
/* IO - VPL Terminal : { 156 246 161 251 }*/
/* IO - VPL Terminal : { 156 270 161 275 }*/
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

/* Start Operations: { 60 60 }{ 236 397 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 111 50 116 }*/
/* IO - VPL Root : { 45 169 50 174 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 95 95 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"View moved.");
/* IO - VPL Root : { 96 132 101 137 }*/
/* End Operation */

/* Begin Operation: { 74 221 91 361 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"View moved x: %d  y:%d");
/* IO - VPL Root : { 92 289 97 294 }*/
/* End Operation */

/* Begin Operation: { 116 270 133 334 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"format");
/* IO - VPL Terminal : { 110 289 115 294 }*/
/* IO - VPL Terminal : { 110 310 115 315 }*/
/* IO - VPL Terminal : { 110 326 115 331 }*/
/* IO - VPL Root : { 134 300 139 305 }*/
/* End Operation */

/* Begin Operation: { 120 78 137 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Console");
/* IO - VPL Terminal : { 114 132 119 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 188 36 196 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 55 212 247 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,2,4,3,5);
	result = connect_root_to_terminal(ptrA,2,3,1,6);
	result = connect_root_to_terminal(ptrA,2,4,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 151 211 }{ 218 269 } */
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

/* Begin Operation: { 78 122 95 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"changed");

	{
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

/* Begin Operation: { 78 81 95 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Did not find view!");
/* IO - VPL Root : { 96 132 101 137 }*/
/* End Operation */

/* Begin Operation: { 120 78 137 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Console");
/* IO - VPL Terminal : { 114 132 119 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 120 36 128 228 } */
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


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 45 82 50 87 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 178 50 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 64 95 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//NavCB Terminate");
/* IO - VPL Terminal : { 72 96 77 101 }*/
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Terminal : { 72 164 77 169 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 120 42 137 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"do window");
/* IO - VPL Terminal : { 114 82 119 87 }*/
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

/* Start Operations: { 60 60 }{ 290 297 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 73 95 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"The Nib Window");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 110 101 115 }*/
/* IO - VPL Root : { 96 149 101 154 }*/
/* End Operation */

/* Begin Operation: { 120 225 137 261 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 241 119 246 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 120 93 137 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"DisposeWindow");
/* IO - VPL Terminal : { 114 149 119 154 }*/
/* IO - VPL Root : { 138 149 143 154 }*/
/* End Operation */

/* Begin Operation: { 162 133 179 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 180 149 185 154 }*/
/* End Operation */

/* Begin Operation: { 204 73 221 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"The Nib Window");
/* IO - VPL Terminal : { 198 110 203 115 }*/
/* IO - VPL Terminal : { 198 149 203 154 }*/
/* IO - VPL Root : { 222 130 227 135 }*/
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
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

/* Begin Operation: { 120 171 137 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"do view");
/* IO - VPL Terminal : { 114 202 119 207 }*/
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

/* Begin Operation: { 78 156 95 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 96 172 101 177 }*/
/* End Operation */

/* Begin Operation: { 120 90 137 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"The Custom View");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 172 119 177 }*/
/* IO - VPL Root : { 138 151 143 156 }*/
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 206 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 142 95 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"100");
/* IO - VPL Root : { 96 154 101 159 }*/
/* End Operation */

/* Begin Operation: { 78 85 95 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\'usrb\'");
/* IO - VPL Root : { 96 102 101 107 }*/
/* End Operation */

/* Begin Operation: { 120 78 137 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New ControlID");
/* IO - VPL Terminal : { 114 112 119 117 }*/
/* IO - VPL Terminal : { 114 148 119 153 }*/
/* IO - VPL Root : { 138 130 143 135 }*/
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
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 206 264 } */
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



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 466 854 }{ 332 337 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 218 95 296 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"external?");
/* IO - VPL Terminal : { 72 255 77 260 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 78 129 95 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extget(tempOperation,environment,"window");
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 150 101 155 }*/
/* IO - VPL Root : { 96 173 101 178 }*/
/* End Operation */

/* Begin Operation: { 120 246 137 282 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 262 119 267 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 120 120 137 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"HIViewGetRoot");
/* IO - VPL Terminal : { 114 173 119 178 }*/
/* IO - VPL Root : { 138 154 143 159 }*/
/* IO - VPL Root : { 138 190 143 195 }*/
/* End Operation */

/* Begin Operation: { 162 36 179 72 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 156 52 161 57 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 162 112 179 258 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Custom View ID");
/* IO - VPL Terminal : { 156 183 161 188 }*/
/* IO - VPL Root : { 180 183 185 188 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 127 221 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,3,"HIViewFindByID");
/* IO - VPL Terminal : { 198 154 203 159 }*/
/* IO - VPL Terminal : { 198 183 203 188 }*/
/* IO - VPL Terminal : { 198 212 203 217 }*/
/* IO - VPL Root : { 222 154 227 159 }*/
/* IO - VPL Root : { 222 183 227 188 }*/
/* IO - VPL Root : { 222 212 227 217 }*/
/* End Operation */

/* Begin Operation: { 246 138 263 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 240 154 245 159 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 242 224 259 294 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"CFShow");
/* IO - VPL Terminal : { 236 257 241 262 }*/
/* End Operation */

/* Begin Operation: { 288 43 296 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 212 287 217 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,3,7,1,9);
	result = connect_root_to_terminal(ptrA,3,7,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [4 to 3] */
/* Synchro [6 to 5] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 244 272 }{ 206 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 37 95 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"The Custom View");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 77 101 82 }*/
/* IO - VPL Root : { 96 119 101 124 }*/
/* End Operation */

/* Begin Operation: { 120 103 137 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 119 119 124 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 118 161 123 }*/
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


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 71 616 }{ 293 291 } */
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

/* Begin Operation: { 120 120 137 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Default ControlID");
/* IO - VPL Terminal : { 114 178 119 183 }*/
/* IO - VPL Root : { 138 178 143 183 }*/
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
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 138 95 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"external?");
/* IO - VPL Terminal : { 72 175 77 180 }*/
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

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 206 95 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"list?");
/* IO - VPL Terminal : { 72 229 77 234 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 36 95 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 72 69 77 74 }*/
/* IO - VPL Root : { 96 69 101 74 }*/
/* End Operation */

/* Begin Operation: { 120 42 137 66 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"2");
/* IO - VPL Terminal : { 114 52 119 57 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 122 95 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 72 154 77 159 }*/
/* IO - VPL Root : { 96 142 101 147 }*/
/* IO - VPL Root : { 96 164 101 169 }*/
/* End Operation */

/* Begin Operation: { 120 99 137 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"New ControlID");
/* IO - VPL Terminal : { 114 133 119 138 }*/
/* IO - VPL Terminal : { 114 169 119 174 }*/
/* IO - VPL Root : { 138 151 143 156 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 124 146 }{ 200 300 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 78 40 95 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Custom View");
/* IO - VPL Terminal : { 72 82 77 87 }*/
/* IO - VPL Terminal : { 72 126 77 131 }*/
/* IO - VPL Root : { 96 105 101 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 78 179 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,3,"HIViewFindByID");
/* IO - VPL Terminal : { 156 105 161 110 }*/
/* IO - VPL Terminal : { 156 134 161 139 }*/
/* IO - VPL Terminal : { 156 163 161 168 }*/
/* IO - VPL Root : { 180 105 185 110 }*/
/* IO - VPL Root : { 180 134 185 139 }*/
/* IO - VPL Root : { 180 163 185 168 }*/
/* End Operation */

/* Begin Operation: { 204 89 221 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 198 105 203 110 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 40 254 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 134 245 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,3,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 248 351 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"The Nib Window");
/* IO - VPL Terminal : { 72 93 77 98 }*/
/* IO - VPL Root : { 96 73 101 78 }*/
/* IO - VPL Root : { 96 112 101 117 }*/
/* End Operation */

/* Begin Operation: { 120 96 137 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 112 119 117 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 78 175 95 315 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Nib Window");
/* IO - VPL Terminal : { 72 243 77 248 }*/
/* IO - VPL Root : { 96 243 101 248 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 93 179 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"The Nib Window");
/* IO - VPL Terminal : { 156 130 161 135 }*/
/* IO - VPL Terminal : { 156 169 161 174 }*/
/* IO - VPL Root : { 180 150 185 155 }*/
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
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
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

/* Begin Operation: { 78 73 95 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"The Nib Window");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 110 101 115 }*/
/* IO - VPL Root : { 96 149 101 154 }*/
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


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_Reply_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_Reply_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 78 80 95 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Custom Reply");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 112 101 117 }*/
/* IO - VPL Root : { 96 148 101 153 }*/
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


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Set_20_Custom_20_Reply_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Set_20_Custom_20_Reply_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 78 80 95 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Custom Reply");
/* IO - VPL Terminal : { 72 112 77 117 }*/
/* IO - VPL Terminal : { 72 148 77 153 }*/
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


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 115 414 }{ 206 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 69 95 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"The Custom View");
/* IO - VPL Terminal : { 72 130 77 135 }*/
/* IO - VPL Root : { 96 109 101 114 }*/
/* IO - VPL Root : { 96 151 101 156 }*/
/* End Operation */

/* Begin Operation: { 120 135 137 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 151 119 156 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 115 414 }{ 347 422 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 40 95 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"The Nib Window");
/* IO - VPL Terminal : { 72 97 77 102 }*/
/* IO - VPL Root : { 96 77 101 82 }*/
/* IO - VPL Root : { 96 116 101 121 }*/
/* End Operation */

/* Begin Operation: { 120 53 137 89 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 69 119 74 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 78 174 95 320 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Custom View ID");
/* IO - VPL Terminal : { 72 245 77 250 }*/
/* IO - VPL Root : { 96 245 101 250 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 182 137 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"HIViewGetRoot");
/* IO - VPL Terminal : { 114 235 119 240 }*/
/* IO - VPL Root : { 138 216 143 221 }*/
/* IO - VPL Root : { 138 252 143 257 }*/
/* End Operation */

/* Begin Operation: { 162 189 179 305 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,3,"HIViewFindByID");
/* IO - VPL Terminal : { 156 216 161 221 }*/
/* IO - VPL Terminal : { 156 245 161 250 }*/
/* IO - VPL Terminal : { 156 274 161 279 }*/
/* IO - VPL Root : { 180 216 185 221 }*/
/* IO - VPL Root : { 180 245 185 250 }*/
/* IO - VPL Root : { 180 274 185 279 }*/
/* End Operation */

/* Begin Operation: { 204 51 221 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"changed");
/* IO - VPL Terminal : { 198 85 203 90 }*/
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

/* Start Operations: { 60 60 }{ 206 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 63 95 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"HIViewFindByID");
/* IO - VPL Root : { 96 109 101 114 }*/
/* End Operation */

/* Begin Operation: { 120 75 137 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 114 109 119 114 }*/
/* IO - VPL Terminal : { 114 145 119 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
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

/* Begin Operation: { 204 143 221 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 198 159 203 164 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 90 263 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"The Custom View");
/* IO - VPL Terminal : { 240 130 245 135 }*/
/* IO - VPL Terminal : { 240 172 245 177 }*/
/* IO - VPL Root : { 264 151 269 156 }*/
/* End Operation */

/* Begin Operation: { 288 46 296 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 282 140 287 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,3,5,2,8);
	result = connect_root_to_terminal(ptrA,3,5,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Nib_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Nib_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 248 282 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 144 95 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"LocateItemsView");
/* IO - VPL Root : { 96 193 101 198 }*/
/* End Operation */

/* Begin Operation: { 78 38 95 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NavLocateItem");
/* IO - VPL Root : { 96 81 101 86 }*/
/* End Operation */

/* Begin Operation: { 120 71 137 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Create Nib Window");
/* IO - VPL Terminal : { 114 113 119 118 }*/
/* IO - VPL Terminal : { 114 157 119 162 }*/
/* IO - VPL Root : { 138 113 143 118 }*/
/* IO - VPL Root : { 138 157 143 162 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 97 179 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 113 161 118 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 320 289 } */
/* Begin Operation: { 36 59 44 251 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 105 50 110 }*/
/* IO - VPL Root : { 45 153 50 158 }*/
/* IO - VPL Root : { 45 201 50 206 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window Record");
/* IO - VPL Terminal : { 72 105 77 110 }*/
/* IO - VPL Root : { 96 105 101 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 43 137 79 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 59 119 64 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 120 153 137 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Default NULL");
/* IO - VPL Terminal : { 114 201 119 206 }*/
/* IO - VPL Root : { 138 201 143 206 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 89 179 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,3,"NavCustomControl");
/* IO - VPL Terminal : { 156 120 161 125 }*/
/* IO - VPL Terminal : { 156 153 161 158 }*/
/* IO - VPL Terminal : { 156 186 161 191 }*/
/* IO - VPL Root : { 180 120 185 125 }*/
/* IO - VPL Root : { 180 153 185 158 }*/
/* IO - VPL Root : { 180 186 185 191 }*/
/* End Operation */

/* Begin Operation: { 223 93 240 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"report");
/* IO - VPL Terminal : { 217 105 222 110 }*/
/* IO - VPL Terminal : { 217 119 222 124 }*/
/* IO - VPL Terminal : { 217 133 222 138 }*/
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

/* Start Operations: { 259 376 }{ 248 326 } */
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

/* Begin Operation: { 78 36 95 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"NavCustomControl: selector: \"");
/* IO - VPL Root : { 96 124 101 129 }*/
/* End Operation */

/* Begin Operation: { 78 232 95 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\" result: \"");
/* IO - VPL Root : { 96 259 101 264 }*/
/* End Operation */

/* Begin Operation: { 120 75 137 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 114 92 119 97 }*/
/* IO - VPL Terminal : { 114 111 119 116 }*/
/* IO - VPL Terminal : { 114 127 119 132 }*/
/* IO - VPL Root : { 138 102 143 107 }*/
/* End Operation */

/* Begin Operation: { 162 64 179 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Result");
/* IO - VPL Terminal : { 156 82 161 87 }*/
/* IO - VPL Terminal : { 156 102 161 107 }*/
/* IO - VPL Terminal : { 156 122 161 127 }*/
/* IO - VPL Terminal : { 156 142 161 147 }*/
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
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,0,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 276 47 284 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 270 142 275 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,2,0,3,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
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
/* IO - VPL Root : { 45 82 50 87 }*/
/* IO - VPL Root : { 45 130 50 135 }*/
/* IO - VPL Root : { 45 178 50 183 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 103 95 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"paramErr");
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


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Get_20_Location_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Get_20_Location_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 290 397 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 233 95 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"AEDesc");
/* IO - VPL Root : { 96 255 101 260 }*/
/* End Operation */

/* Begin Operation: { 78 297 95 321 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 96 307 101 312 }*/
/* End Operation */

/* Begin Operation: { 78 337 95 361 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 96 347 101 352 }*/
/* End Operation */

/* Begin Operation: { 120 225 137 353 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Create Block Type");
/* IO - VPL Terminal : { 114 255 119 260 }*/
/* IO - VPL Terminal : { 114 287 119 292 }*/
/* IO - VPL Terminal : { 114 319 119 324 }*/
/* IO - VPL Root : { 138 287 143 292 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 77 137 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kNavCtlGetLocation");
/* IO - VPL Root : { 138 134 143 139 }*/
/* End Operation */

/* Begin Operation: { 162 64 179 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Nav Custom Control");
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 134 161 139 }*/
/* IO - VPL Terminal : { 156 170 161 175 }*/
/* IO - VPL Root : { 180 135 185 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 119 221 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 198 135 203 140 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 239 221 339 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From AEDesc");
/* IO - VPL Terminal : { 198 287 203 292 }*/
/* IO - VPL Root : { 222 287 227 292 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 246 36 254 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 240 130 245 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,4,3,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Terminate_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Terminate_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 248 278 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 114 95 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kNavCtlTerminate");
/* IO - VPL Root : { 96 166 101 171 }*/
/* End Operation */

/* Begin Operation: { 120 96 137 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Nav Custom Control");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 166 119 171 }*/
/* IO - VPL Terminal : { 114 202 119 207 }*/
/* IO - VPL Root : { 138 167 143 172 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 151 179 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 167 161 172 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
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
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Add_20_Control_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Add_20_Control_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 248 348 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 170 50 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 78 95 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kNavCtlAddControl");
/* IO - VPL Root : { 96 134 101 139 }*/
/* End Operation */

/* Begin Operation: { 36 280 53 304 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 54 290 59 295 }*/
/* End Operation */

/* Begin Operation: { 78 210 95 312 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"from-pointer");
/* IO - VPL Terminal : { 72 238 77 243 }*/
/* IO - VPL Terminal : { 72 283 77 288 }*/
/* IO - VPL Root : { 96 259 101 264 }*/
/* End Operation */

/* Begin Operation: { 120 64 137 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Nav Custom Control");
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Terminal : { 114 134 119 139 }*/
/* IO - VPL Terminal : { 114 170 119 175 }*/
/* IO - VPL Root : { 138 135 143 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 119 179 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 156 135 161 140 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,2,0,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 371 639 }{ 164 264 } */
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

/* Begin Operation: { 78 39 95 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Location Prompt");
/* IO - VPL Terminal : { 72 93 77 98 }*/
/* IO - VPL Terminal : { 72 149 77 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 371 639 }{ 122 264 } */
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



	return kNOERROR;
}


Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 398 657 }{ 374 457 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 135 95 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( \'LNam\' 1 )");
/* IO - VPL Root : { 96 168 101 173 }*/
/* End Operation */

/* Begin Operation: { 120 71 137 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Find Custom Item");
/* IO - VPL Terminal : { 114 102 119 107 }*/
/* IO - VPL Terminal : { 114 135 119 140 }*/
/* IO - VPL Terminal : { 114 168 119 173 }*/
/* IO - VPL Root : { 138 135 143 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 277 137 421 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/NavCtl Get Location");
/* IO - VPL Terminal : { 114 347 119 352 }*/
/* IO - VPL Root : { 138 347 143 352 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 162 145 179 277 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Display Name");
/* IO - VPL Terminal : { 156 209 161 214 }*/
/* IO - VPL Root : { 180 209 185 214 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 291 221 369 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 198 328 203 333 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 204 147 221 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get CF Reference");
/* IO - VPL Terminal : { 198 209 203 214 }*/
/* IO - VPL Root : { 222 209 227 214 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 247 102 264 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"HIViewSetText");
/* IO - VPL Terminal : { 241 134 246 139 }*/
/* IO - VPL Terminal : { 241 168 246 173 }*/
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

/* Start Operations: { 80 80 }{ 290 422 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 100 95 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 96 110 101 115 }*/
/* End Operation */

/* Begin Operation: { 162 78 179 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kControlLabelPart");
/* IO - VPL Root : { 180 130 185 135 }*/
/* End Operation */

/* Begin Operation: { 162 206 179 386 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kControlStaticTextCFStringTag");
/* IO - VPL Root : { 180 294 185 299 }*/
/* End Operation */

/* Begin Operation: { 120 131 137 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"New Num*");
/* IO - VPL Terminal : { 114 156 119 161 }*/
/* IO - VPL Terminal : { 114 183 119 188 }*/
/* IO - VPL Root : { 138 170 143 175 }*/
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

/* Start Operations: { 60 60 }{ 248 295 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 48 95 78 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"void");
/* IO - VPL Root : { 96 61 101 66 }*/
/* End Operation */

/* Begin Operation: { 120 36 137 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"make-external");
/* IO - VPL Terminal : { 114 70 119 75 }*/
/* IO - VPL Terminal : { 114 106 119 111 }*/
/* IO - VPL Root : { 138 89 143 94 }*/
/* End Operation */

/* Begin Operation: { 120 162 137 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 138 172 143 177 }*/
/* End Operation */

/* Begin Operation: { 78 157 95 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"from-pointer");
/* IO - VPL Terminal : { 72 206 77 211 }*/
/* IO - VPL Root : { 96 206 101 211 }*/
/* End Operation */

/* Begin Operation: { 162 90 179 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,2,"put-integer");
/* IO - VPL Terminal : { 156 106 161 111 }*/
/* IO - VPL Terminal : { 156 124 161 129 }*/
/* IO - VPL Terminal : { 156 142 161 147 }*/
/* IO - VPL Terminal : { 156 160 161 165 }*/
/* IO - VPL Root : { 180 118 185 123 }*/
/* IO - VPL Root : { 180 148 185 153 }*/
/* End Operation */

/* Begin Operation: { 204 36 212 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,0,3,5);
	result = connect_root_to_terminal(ptrA,1,4,4,5);
	result = connect_root_to_terminal(ptrA,1,2,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 82 221 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,5,2,"SetControlData");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 116 203 121 }*/
/* IO - VPL Terminal : { 198 134 203 139 }*/
/* IO - VPL Terminal : { 198 152 203 157 }*/
/* IO - VPL Terminal : { 198 170 203 175 }*/
/* IO - VPL Root : { 222 117 227 122 }*/
/* IO - VPL Root : { 222 154 227 159 }*/
/* End Operation */

/* Begin Operation: { 80 242 97 312 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"debug it");
/* IO - VPL Terminal : { 74 275 79 280 }*/
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

/* Start Operations: { 165 413 }{ 206 325 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 47 95 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Current location");
/* IO - VPL Root : { 96 94 101 99 }*/
/* End Operation */

/* Begin Operation: { 78 163 95 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"From CFStringRef");
/* IO - VPL Terminal : { 72 224 77 229 }*/
/* IO - VPL Root : { 96 224 101 229 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 246 38 254 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,3,3,5);
	result = connect_root_to_terminal(ptrA,1,1,4,5);
	result = connect_root_to_terminal(ptrA,1,4,5,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 317 179 381 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Close");
/* IO - VPL Terminal : { 156 347 161 352 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 304 263 380 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 240 340 245 345 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 101 305 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"refresh window");
/* IO - VPL Terminal : { 282 135 287 140 }*/
/* IO - VPL Terminal : { 282 171 287 176 }*/
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

/* Start Operations: { 157 420 }{ 248 293 } */
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
	tempOperation = operation_to_extget(tempOperation,environment,"window");
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 150 101 155 }*/
/* IO - VPL Root : { 96 173 101 178 }*/
/* End Operation */

/* Begin Operation: { 120 205 137 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 221 119 226 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 120 57 137 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,3,"GetControlBounds");
/* IO - VPL Terminal : { 114 98 119 103 }*/
/* IO - VPL Terminal : { 114 141 119 146 }*/
/* IO - VPL Root : { 138 87 143 92 }*/
/* IO - VPL Root : { 138 119 143 124 }*/
/* IO - VPL Root : { 138 151 143 156 }*/
/* End Operation */

/* Begin Operation: { 162 135 179 257 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"InvalWindowRect");
/* IO - VPL Terminal : { 156 173 161 178 }*/
/* IO - VPL Terminal : { 156 213 161 218 }*/
/* IO - VPL Root : { 180 173 185 178 }*/
/* IO - VPL Root : { 180 213 185 218 }*/
/* End Operation */

/* Begin Operation: { 204 40 212 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 286 244 303 316 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"changed");

	{
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

/* Begin Operation: { 78 81 95 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Location updated.");
/* IO - VPL Root : { 96 132 101 137 }*/
/* End Operation */

/* Begin Operation: { 120 78 137 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Console");
/* IO - VPL Terminal : { 114 132 119 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 330 37 338 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,3,1,8);
	result = connect_root_to_terminal(ptrA,1,4,1,9);
	result = connect_root_to_terminal(ptrA,1,2,1,10);
	result = connect_root_to_terminal(ptrA,2,0,2,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [6 to 5] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 398 657 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 73 102 90 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"changed");

	{
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

/* Begin Operation: { 78 62 95 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Location update FAILED!");
/* IO - VPL Root : { 96 132 101 137 }*/
/* End Operation */

/* Begin Operation: { 120 78 137 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug Console");
/* IO - VPL Terminal : { 114 132 119 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Begin Operation: { 120 36 128 228 } */
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






Nat4	loadClasses_Project_20_Open_20_Activity(V_Environment environment);
Nat4	loadClasses_Project_20_Open_20_Activity(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Project Open Activity",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_Open_20_Activity_class_load(result,environment);
	result = class_new("Project File Activity Stage",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_File_20_Activity_20_Stage_class_load(result,environment);
	result = class_new("POAS Load File",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Load_20_File_class_load(result,environment);
	result = class_new("POAS Find Files",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Find_20_Files_class_load(result,environment);
	result = class_new("POAS Read Primitives",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Read_20_Primitives_class_load(result,environment);
	result = class_new("POAS Read Sections",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Read_20_Sections_class_load(result,environment);
	result = class_new("POAS Open Project",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Open_20_Project_class_load(result,environment);
	result = class_new("POAS Open Sections",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Open_20_Sections_class_load(result,environment);
	result = class_new("POAS Resolve References",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Resolve_20_References_class_load(result,environment);
	result = class_new("POAS Post Load",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Post_20_Load_class_load(result,environment);
	result = class_new("POAS Update Classes",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Update_20_Classes_class_load(result,environment);
	result = class_new("POAS Update Persistents",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Update_20_Persistents_class_load(result,environment);
	result = class_new("POAS Install Tools",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Install_20_Tools_class_load(result,environment);
	result = class_new("POAS Copy Resources",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Copy_20_Resources_class_load(result,environment);
	result = class_new("POAS Open Editor",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Open_20_Editor_class_load(result,environment);
	result = class_new("POAS Name Application",environment);
	if(result == NULL) return kERROR;
	VPLC_POAS_20_Name_20_Application_class_load(result,environment);
	result = class_new("PFAS Locate Files Manually",environment);
	if(result == NULL) return kERROR;
	VPLC_PFAS_20_Locate_20_Files_20_Manually_class_load(result,environment);
	result = class_new("PFAS Nav Locate Files Dialog",environment);
	if(result == NULL) return kERROR;
	VPLC_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Project_20_Open_20_Activity(V_Environment environment);
Nat4	loadUniversals_Project_20_Open_20_Activity(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("VPL Add Search Locations",environment);
	if(result == NULL) return kERROR;
	VPLU_VPL_20_Add_20_Search_20_Locations_universal_load(result,environment);

	result = method_new("Project Open Activity/Error",environment);
	if(result == NULL) return kERROR;
	VPLU_Project_20_Open_20_Activity_2F_Error_universal_load(result,environment);

	result = method_new("Project Open Activity/Get Project Helper",environment);
	if(result == NULL) return kERROR;
	VPLU_Project_20_Open_20_Activity_2F_Get_20_Project_20_Helper_universal_load(result,environment);

	result = method_new("Project Open Activity/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_Project_20_Open_20_Activity_2F_Run_universal_load(result,environment);

	result = method_new("Project Open Activity/Initialize Progress Window",environment);
	if(result == NULL) return kERROR;
	VPLU_Project_20_Open_20_Activity_2F_Initialize_20_Progress_20_Window_universal_load(result,environment);

	result = method_new("Project File Activity Stage/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_Project_20_File_20_Activity_20_Stage_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("Project File Activity Stage/Update Percent",environment);
	if(result == NULL) return kERROR;
	VPLU_Project_20_File_20_Activity_20_Stage_2F_Update_20_Percent_universal_load(result,environment);

	result = method_new("Project File Activity Stage/Up Count",environment);
	if(result == NULL) return kERROR;
	VPLU_Project_20_File_20_Activity_20_Stage_2F_Up_20_Count_universal_load(result,environment);

	result = method_new("Project File Activity Stage/Set Count",environment);
	if(result == NULL) return kERROR;
	VPLU_Project_20_File_20_Activity_20_Stage_2F_Set_20_Count_universal_load(result,environment);

	result = method_new("POAS Load File/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Load_20_File_2F_Run_universal_load(result,environment);

	result = method_new("POAS Find Files/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Find_20_Files_2F_Run_universal_load(result,environment);

	result = method_new("POAS Find Files/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Find_20_Files_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("POAS Find Files/Run End",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Find_20_Files_2F_Run_20_End_universal_load(result,environment);

	result = method_new("POAS Read Primitives/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Read_20_Primitives_2F_Run_universal_load(result,environment);

	result = method_new("POAS Read Primitives/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Read_20_Primitives_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("POAS Read Primitives/Next Name",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Read_20_Primitives_2F_Next_20_Name_universal_load(result,environment);

	result = method_new("POAS Read Sections/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Read_20_Sections_2F_Run_universal_load(result,environment);

	result = method_new("POAS Read Sections/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Read_20_Sections_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("POAS Read Sections/Run End",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Read_20_Sections_2F_Run_20_End_universal_load(result,environment);

	result = method_new("POAS Open Project/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Open_20_Project_2F_Run_universal_load(result,environment);

	result = method_new("POAS Open Sections/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Open_20_Sections_2F_Run_universal_load(result,environment);

	result = method_new("POAS Open Sections/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Open_20_Sections_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("POAS Open Sections/Run End",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Open_20_Sections_2F_Run_20_End_universal_load(result,environment);

	result = method_new("POAS Open Sections/Push On Stack",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Open_20_Sections_2F_Push_20_On_20_Stack_universal_load(result,environment);

	result = method_new("POAS Resolve References/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Resolve_20_References_2F_Run_universal_load(result,environment);

	result = method_new("POAS Resolve References/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Resolve_20_References_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("POAS Resolve References/Run End",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Resolve_20_References_2F_Run_20_End_universal_load(result,environment);

	result = method_new("POAS Post Load/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Post_20_Load_2F_Run_universal_load(result,environment);

	result = method_new("POAS Update Classes/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Update_20_Classes_2F_Run_universal_load(result,environment);

	result = method_new("POAS Update Classes/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Update_20_Classes_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("POAS Update Classes/Run End",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Update_20_Classes_2F_Run_20_End_universal_load(result,environment);

	result = method_new("POAS Update Persistents/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Update_20_Persistents_2F_Run_universal_load(result,environment);

	result = method_new("POAS Update Persistents/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Update_20_Persistents_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("POAS Update Persistents/Run End",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Update_20_Persistents_2F_Run_20_End_universal_load(result,environment);

	result = method_new("POAS Install Tools/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Install_20_Tools_2F_Run_universal_load(result,environment);

	result = method_new("POAS Copy Resources/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Copy_20_Resources_2F_Run_universal_load(result,environment);

	result = method_new("POAS Copy Resources/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Copy_20_Resources_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("POAS Copy Resources/Next Name",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Copy_20_Resources_2F_Next_20_Name_universal_load(result,environment);

	result = method_new("POAS Open Editor/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Open_20_Editor_2F_Run_universal_load(result,environment);

	result = method_new("POAS Name Application/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Name_20_Application_2F_Run_universal_load(result,environment);

	result = method_new("POAS Name Application/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Name_20_Application_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("POAS Name Application/Run End",environment);
	if(result == NULL) return kERROR;
	VPLU_POAS_20_Name_20_Application_2F_Run_20_End_universal_load(result,environment);

	result = method_new("PFAS Locate Files Manually/Run",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Run_universal_load(result,environment);

	result = method_new("PFAS Locate Files Manually/Run Begin",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Run_20_Begin_universal_load(result,environment);

	result = method_new("PFAS Locate Files Manually/Item Run",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Run_universal_load(result,environment);

	result = method_new("PFAS Locate Files Manually/Item Stop",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Stop_universal_load(result,environment);

	result = method_new("PFAS Locate Files Manually/Item Start",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Item_20_Start_universal_load(result,environment);

	result = method_new("PFAS Locate Files Manually/Nav File Callback",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Locate_20_Files_20_Manually_2F_Nav_20_File_20_Callback_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Event",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Event_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Unknown Selector",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Unknown_20_Selector_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Customize",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Customize_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Start",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Start_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Accept",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Accept_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Adjust Rect",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Adjust_20_Rect_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB Terminate",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_Terminate_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/Get Custom View ID",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_View_20_ID_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/Find Custom View",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_View_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/Find Custom Item",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Custom_20_Item_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/Find Nib Window",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Find_20_Nib_20_Window_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/Get Custom Reply",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Get_20_Custom_20_Reply_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/Set Custom Reply",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Set_20_Custom_20_Reply_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/Create Custom View",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Custom_20_View_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/Create Nib Window",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Create_20_Nib_20_Window_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/Nav Custom Control",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Nav_20_Custom_20_Control_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/NavCtl Get Location",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Get_20_Location_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/NavCtl Terminate",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Terminate_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/NavCtl Add Control",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCtl_20_Add_20_Control_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/NavCB New Location",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_NavCB_20_New_20_Location_universal_load(result,environment);

	result = method_new("PFAS Nav Locate Files Dialog/Update Location Prompt",environment);
	if(result == NULL) return kERROR;
	VPLU_PFAS_20_Nav_20_Locate_20_Files_20_Dialog_2F_Update_20_Location_20_Prompt_universal_load(result,environment);

	return kNOERROR;

}



Nat4	loadPersistents_Project_20_Open_20_Activity(V_Environment environment);
Nat4	loadPersistents_Project_20_Open_20_Activity(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Project_20_Open_20_Activity(V_Environment environment);
Nat4	load_Project_20_Open_20_Activity(V_Environment environment)
{

	loadClasses_Project_20_Open_20_Activity(environment);
	loadUniversals_Project_20_Open_20_Activity(environment);
	loadPersistents_Project_20_Open_20_Activity(environment);
	return kNOERROR;

}

