/* A VPL Section File */
/*

MyUniversalData.rnt.c
Copyright: 2002 Scott B. Anderson

*/




	Nat4 tempAttribute_Universal_20_Data_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X12000000, 0X556E7469, 0X746C6564, 0X20556E69,
0X76657273, 0X616C0000
	};
	Nat4 tempAttribute_Universal_20_Data_2F_Inarity[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Universal_20_Data_2F_Outarity[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Universal_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Universal_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 300 347 }{ 163 438 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Universal_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Text",tempClass,NULL,environment);
	tempAttribute = attribute_add("Inarity",tempClass,tempAttribute_Universal_20_Data_2F_Inarity,environment);
	tempAttribute = attribute_add("Outarity",tempClass,tempAttribute_Universal_20_Data_2F_Outarity,environment);
	tempAttribute = attribute_add("Record",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 149 705 }{ 552 340 } */
Nat4 VPLU_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 276 350 }{ 379 355 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 41 135 56 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
/* IO - VPL Root : { 56 160 61 165 }*/
/* End Operation */

/* Begin Operation: { 75 72 91 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 70 115 75 120 }*/
/* IO - VPL Terminal : { 70 160 75 165 }*/
/* IO - VPL Root : { 91 137 96 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 201 152 217 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 196 184 201 189 }*/
/* IO - VPL Root : { 217 176 222 181 }*/
/* IO - VPL Root : { 217 192 222 197 }*/
/* End Operation */

/* Begin Operation: { 159 77 174 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\n");
/* IO - VPL Root : { 174 79 179 84 }*/
/* End Operation */

/* Begin Operation: { 240 73 256 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Export The Object Data");
/* IO - VPL Terminal : { 233 91 241 102 }*/
/* IO - VPL Terminal : { 235 188 240 200 }*/
/* IO - VPL Root : { 254 93 262 104 }*/
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

/* Start Cases: { 296 354 }{ 50 312 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 292 361 }{ 279 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 88 33 93 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 103 79 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 58 142 63 147 }*/
/* IO - VPL Root : { 79 134 84 139 }*/
/* IO - VPL Root : { 79 150 84 155 }*/
/* End Operation */

/* Begin Operation: { 112 92 128 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Export Text");
/* IO - VPL Terminal : { 107 150 112 155 }*/
/* IO - VPL Root : { 128 150 133 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 155 63 171 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 150 88 155 93 }*/
/* IO - VPL Terminal : { 150 115 155 120 }*/
/* IO - VPL Root : { 171 101 176 106 }*/
/* End Operation */

/* Begin Operation: { 205 20 213 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 200 115 205 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 271 116 286 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\n\n");
/* IO - VPL Root : { 286 122 291 127 }*/
/* End Operation */

/* Begin Operation: { 302 70 318 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 297 95 302 100 }*/
/* IO - VPL Terminal : { 297 122 302 127 }*/
/* IO - VPL Root : { 318 108 323 113 }*/
/* End Operation */

/* Begin Operation: { 345 20 353 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 340 115 345 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 271 334 }{ 145 278 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 8 68 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\n/* UNIVERSAL DATA NOT FOUND! */\n");
/* IO - VPL Root : { 68 118 73 123 }*/
/* End Operation */

/* Begin Operation: { 97 23 105 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 92 118 97 123 }*/
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


Nat4 VPLU_Universal_20_Data_2F_C_20_Code_20_Footer_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_C_20_Code_20_Footer_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 276 350 }{ 154 263 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 46 68 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\treturn kNOERROR;\n}\n\n\n");
/* IO - VPL Root : { 68 115 73 120 }*/
/* End Operation */

/* Begin Operation: { 105 20 113 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 100 115 105 120 }*/
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


Nat4 VPLU_Universal_20_Data_2F_C_20_Code_20_Header_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_C_20_Code_20_Header_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 209 480 }{ 513 564 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 42 265 58 369 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Full Name");
/* IO - VPL Terminal : { 37 316 42 321 }*/
/* IO - VPL Root : { 58 316 63 321 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 75 260 91 374 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Mangle Name");
/* IO - VPL Terminal : { 70 316 75 321 }*/
/* IO - VPL Root : { 91 316 96 321 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 213 131 228 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\n");
/* IO - VPL Root : { 228 133 233 138 }*/
/* End Operation */

/* Begin Operation: { 133 261 148 325 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Nat4 VPLU_");
/* IO - VPL Root : { 148 291 153 296 }*/
/* End Operation */

/* Begin Operation: { 107 169 122 523 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"_universal_load(V_Method method,V_Environment environment);");
/* IO - VPL Root : { 122 344 127 349 }*/
/* End Operation */

/* Begin Operation: { 163 278 179 356 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 158 291 163 296 }*/
/* IO - VPL Terminal : { 158 316 163 321 }*/
/* IO - VPL Terminal : { 158 344 163 349 }*/
/* IO - VPL Root : { 179 295 184 300 }*/
/* End Operation */

/* Begin Operation: { 251 81 267 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 246 106 251 111 }*/
/* IO - VPL Terminal : { 246 133 251 138 }*/
/* IO - VPL Root : { 267 119 272 124 }*/
/* End Operation */

/* Begin Operation: { 301 216 316 346 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"{\n\tInt4 result = 0;\n");
/* IO - VPL Root : { 316 279 321 284 }*/
/* End Operation */

/* Begin Operation: { 322 235 337 375 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\tV_Case ptrA = NULL;\n");
/* IO - VPL Root : { 337 303 342 308 }*/
/* End Operation */

/* Begin Operation: { 343 233 358 453 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\tV_Operation tempOperation = NULL;\n");
/* IO - VPL Root : { 358 341 363 346 }*/
/* End Operation */

/* Begin Operation: { 365 232 380 444 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\tV_Terminal tempTerminal = NULL;\n");
/* IO - VPL Root : { 380 336 385 341 }*/
/* End Operation */

/* Begin Operation: { 388 233 403 410 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\tV_Root tempRoot = NULL;\n\n");
/* IO - VPL Root : { 403 319 408 324 }*/
/* End Operation */

/* Begin Operation: { 191 165 206 527 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"_universal_load(V_Method method,V_Environment environment)\n");
/* IO - VPL Root : { 206 344 211 349 }*/
/* End Operation */

/* Begin Operation: { 214 261 229 325 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Nat4 VPLU_");
/* IO - VPL Root : { 229 291 234 296 }*/
/* End Operation */

/* Begin Operation: { 244 278 260 356 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 239 291 244 296 }*/
/* IO - VPL Terminal : { 239 316 244 321 }*/
/* IO - VPL Terminal : { 239 344 244 349 }*/
/* IO - VPL Root : { 260 316 265 321 }*/
/* End Operation */

/* Begin Operation: { 319 47 335 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 314 63 319 68 }*/
/* IO - VPL Terminal : { 314 81 319 86 }*/
/* IO - VPL Root : { 335 72 340 77 }*/
/* End Operation */

/* Begin Operation: { 425 153 441 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,1,"\"join\"");
/* IO - VPL Terminal : { 420 158 425 163 }*/
/* IO - VPL Terminal : { 420 171 425 176 }*/
/* IO - VPL Terminal : { 420 186 425 191 }*/
/* IO - VPL Terminal : { 420 200 425 205 }*/
/* IO - VPL Terminal : { 420 213 425 218 }*/
/* IO - VPL Terminal : { 420 224 425 229 }*/
/* IO - VPL Root : { 441 191 446 196 }*/
/* End Operation */

/* Begin Operation: { 466 17 474 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 461 112 466 117 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,2,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,3,2,7);
	result = connect_root_to_terminal(ptrA,1,14,1,15);
	result = connect_root_to_terminal(ptrA,1,2,2,15);
	result = connect_root_to_terminal(ptrA,1,13,3,15);
	result = connect_root_to_terminal(ptrA,1,7,1,16);
	result = connect_root_to_terminal(ptrA,1,15,2,16);
	result = connect_root_to_terminal(ptrA,1,16,1,17);
	result = connect_root_to_terminal(ptrA,1,8,2,17);
	result = connect_root_to_terminal(ptrA,1,9,3,17);
	result = connect_root_to_terminal(ptrA,1,10,4,17);
	result = connect_root_to_terminal(ptrA,1,11,5,17);
	result = connect_root_to_terminal(ptrA,1,12,6,17);
	result = connect_root_to_terminal(ptrA,1,17,1,18);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Create_20_Roots_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Create_20_Roots_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 315 346 }{ 274 307 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 74 67 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Inarity");
/* IO - VPL Terminal : { 46 115 51 120 }*/
/* IO - VPL Root : { 67 107 72 112 }*/
/* IO - VPL Root : { 67 123 72 128 }*/
/* End Operation */

/* Begin Operation: { 54 207 69 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 69 210 74 215 }*/
/* End Operation */

/* Begin Operation: { 108 43 123 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 103 46 108 51 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 108 100 124 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"make-list");
/* IO - VPL Terminal : { 103 123 108 128 }*/
/* IO - VPL Terminal : { 103 148 108 153 }*/
/* IO - VPL Terminal : { 103 173 108 178 }*/
/* IO - VPL Root : { 124 148 129 153 }*/
/* End Operation */

/* Begin Operation: { 154 67 170 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Root");
/* IO - VPL Terminal : { 149 110 154 122 }*/
/* IO - VPL Root : { 170 111 175 123 }*/
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

/* Start Operations: { 354 347 }{ 157 285 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 81 71 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Root");
/* IO - VPL Terminal : { 50 115 55 120 }*/
/* IO - VPL Root : { 71 115 76 120 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
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

/* Begin Operation: { 213 20 221 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 208 115 213 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 325 350 }{ 150 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 49 108 64 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 64 115 69 120 }*/
/* End Operation */

/* Begin Operation: { 88 20 96 212 } */
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


Nat4 VPLU_Universal_20_Data_2F_Create_20_Terminals_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Create_20_Terminals_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 315 346 }{ 274 307 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 70 67 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Outarity");
/* IO - VPL Terminal : { 46 115 51 120 }*/
/* IO - VPL Root : { 67 107 72 112 }*/
/* IO - VPL Root : { 67 123 72 128 }*/
/* End Operation */

/* Begin Operation: { 54 207 69 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 69 210 74 215 }*/
/* End Operation */

/* Begin Operation: { 108 43 123 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 103 46 108 51 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 108 100 124 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"make-list");
/* IO - VPL Terminal : { 103 123 108 128 }*/
/* IO - VPL Terminal : { 103 148 108 153 }*/
/* IO - VPL Terminal : { 103 173 108 178 }*/
/* IO - VPL Root : { 124 148 129 153 }*/
/* End Operation */

/* Begin Operation: { 154 55 170 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Terminal");
/* IO - VPL Terminal : { 149 110 154 122 }*/
/* IO - VPL Root : { 170 111 175 123 }*/
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

/* Start Cases: { 340 327 }{ 50 333 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 354 347 }{ 157 285 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 69 71 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Terminal");
/* IO - VPL Terminal : { 50 115 55 120 }*/
/* IO - VPL Root : { 71 115 76 120 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
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

/* Begin Operation: { 213 20 221 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 208 115 213 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 325 350 }{ 150 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 49 108 64 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 64 115 69 120 }*/
/* End Operation */

/* Begin Operation: { 88 20 96 212 } */
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


Nat4 VPLU_Universal_20_Data_2F_Export_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Export_20_Text_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 248 547 }{ 317 336 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 117 35 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 219 80 309 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Export Mode");
/* IO - VPL Root : { 80 260 85 265 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 226 122 299 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Experimental");
/* IO - VPL Terminal : { 101 260 106 265 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 126 122 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
/* IO - VPL Root : { 122 151 127 156 }*/
/* End Operation */

/* Begin Operation: { 148 83 164 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 143 117 148 122 }*/
/* IO - VPL Terminal : { 143 153 148 158 }*/
/* IO - VPL Root : { 164 135 169 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 116 206 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 185 135 190 140 }*/
/* IO - VPL Root : { 206 128 211 133 }*/
/* IO - VPL Root : { 206 142 211 147 }*/
/* End Operation */

/* Begin Operation: { 232 102 248 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Construct The Text");
/* IO - VPL Terminal : { 227 142 232 147 }*/
/* IO - VPL Terminal : { 227 184 232 189 }*/
/* IO - VPL Root : { 248 163 253 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 198 120 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 198 422 }{ 194 272 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 113 122 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 122 118 127 123 }*/
/* End Operation */

/* Begin Operation: { 64 78 80 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"( )");
/* IO - VPL Terminal : { 59 84 64 89 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 198 422 }{ 462 311 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 98 49 103 }*/
/* IO - VPL Root : { 44 162 49 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 191 178 272 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 178 229 183 234 }*/
/* End Operation */

/* Begin Operation: { 78 43 95 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 72 76 77 81 }*/
/* IO - VPL Root : { 96 76 101 81 }*/
/* End Operation */

/* Begin Operation: { 120 66 137 90 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"1");
/* IO - VPL Terminal : { 114 76 119 81 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 120 167 136 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 115 193 120 198 }*/
/* IO - VPL Root : { 136 193 141 198 }*/
/* End Operation */

/* Begin Operation: { 204 159 220 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 199 193 204 198 }*/
/* IO - VPL Terminal : { 199 229 204 234 }*/
/* IO - VPL Root : { 220 211 225 216 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 225 262 267 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 241 244 246 249 }*/
/* IO - VPL Root : { 262 237 267 242 }*/
/* IO - VPL Root : { 262 251 267 256 }*/
/* End Operation */

/* Begin Operation: { 288 89 304 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create The Header");
/* IO - VPL Terminal : { 283 162 288 167 }*/
/* IO - VPL Terminal : { 283 196 288 201 }*/
/* IO - VPL Root : { 304 148 309 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 422 844 }{ 69 403 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 320 389 }{ 726 462 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 139 50 155 486 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,");
/* IO - VPL Root : { 155 266 160 271 }*/
/* End Operation */

/* Begin Operation: { 61 9 77 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Export Name");
/* IO - VPL Terminal : { 56 66 61 71 }*/
/* IO - VPL Root : { 77 66 82 71 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 8 110 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"enum opTrigger \"");
/* IO - VPL Root : { 110 56 115 61 }*/
/* End Operation */

/* Begin Operation: { 139 32 155 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 134 48 139 53 }*/
/* IO - VPL Terminal : { 134 66 139 71 }*/
/* IO - VPL Root : { 155 57 160 62 }*/
/* End Operation */

/* Begin Operation: { 184 82 200 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 179 98 184 103 }*/
/* IO - VPL Terminal : { 179 116 184 121 }*/
/* IO - VPL Root : { 200 107 205 112 }*/
/* End Operation */

/* Begin Operation: { 62 152 78 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-r");
/* IO - VPL Terminal : { 57 184 62 189 }*/
/* IO - VPL Root : { 78 172 83 177 }*/
/* IO - VPL Root : { 78 194 83 199 }*/
/* End Operation */

/* Begin Operation: { 102 141 118 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 97 172 102 177 }*/
/* IO - VPL Root : { 118 161 123 166 }*/
/* IO - VPL Root : { 118 183 123 188 }*/
/* End Operation */

/* Begin Operation: { 184 154 200 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 179 180 184 185 }*/
/* IO - VPL Root : { 200 170 205 175 }*/
/* IO - VPL Root : { 200 188 205 193 }*/
/* End Operation */

/* Begin Operation: { 230 159 246 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Outputs");
/* IO - VPL Terminal : { 225 188 230 193 }*/
/* IO - VPL Root : { 246 177 251 182 }*/
/* IO - VPL Root : { 246 197 251 202 }*/
/* End Operation */

/* Begin Operation: { 229 132 245 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 245 134 250 139 }*/
/* End Operation */

/* Begin Operation: { 274 102 290 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Terminal");
/* IO - VPL Terminal : { 269 107 274 112 }*/
/* IO - VPL Terminal : { 269 140 274 145 }*/
/* IO - VPL Terminal : { 269 172 274 177 }*/
/* IO - VPL Root : { 290 108 295 113 }*/
/* IO - VPL Root : { 290 172 295 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 643 929 }{ 85 355 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 407 533 }{ 228 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 21 116 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"V_Object terminal");
/* IO - VPL Root : { 116 69 121 74 }*/
/* End Operation */

/* Begin Operation: { 57 49 73 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 52 82 57 87 }*/
/* IO - VPL Root : { 73 82 78 87 }*/
/* End Operation */

/* Begin Operation: { 100 155 116 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,",");
/* IO - VPL Root : { 116 156 121 161 }*/
/* End Operation */

/* Begin Operation: { 147 52 163 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 142 56 147 61 }*/
/* IO - VPL Terminal : { 142 69 147 74 }*/
/* IO - VPL Terminal : { 142 82 147 87 }*/
/* IO - VPL Terminal : { 142 96 147 101 }*/
/* IO - VPL Root : { 163 77 168 82 }*/
/* End Operation */

/* Begin Operation: { 56 155 72 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 51 170 56 175 }*/
/* IO - VPL Root : { 72 170 77 175 }*/
/* End Operation */

/* Begin Operation: { 184 24 192 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 179 77 184 82 }*/
/* IO - VPL Terminal : { 179 170 184 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 184 229 200 285 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 179 255 184 260 }*/
/* IO - VPL Root : { 200 245 205 250 }*/
/* IO - VPL Root : { 200 263 205 268 }*/
/* End Operation */

/* Begin Operation: { 230 238 246 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Inputs");
/* IO - VPL Terminal : { 225 263 230 268 }*/
/* IO - VPL Root : { 246 254 251 259 }*/
/* IO - VPL Root : { 246 272 251 277 }*/
/* End Operation */

/* Begin Operation: { 322 155 338 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Root");
/* IO - VPL Terminal : { 317 163 322 168 }*/
/* IO - VPL Terminal : { 317 188 322 193 }*/
/* IO - VPL Terminal : { 317 215 322 220 }*/
/* IO - VPL Root : { 338 164 343 169 }*/
/* IO - VPL Root : { 338 216 343 221 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 590 897 }{ 68 350 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 407 533 }{ 228 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 29 116 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"V_Object *root");
/* IO - VPL Root : { 116 69 121 74 }*/
/* End Operation */

/* Begin Operation: { 57 49 73 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 52 82 57 87 }*/
/* IO - VPL Root : { 73 82 78 87 }*/
/* End Operation */

/* Begin Operation: { 100 155 116 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,",");
/* IO - VPL Root : { 116 156 121 161 }*/
/* End Operation */

/* Begin Operation: { 147 52 163 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 142 56 147 61 }*/
/* IO - VPL Terminal : { 142 69 147 74 }*/
/* IO - VPL Terminal : { 142 82 147 87 }*/
/* IO - VPL Terminal : { 142 96 147 101 }*/
/* IO - VPL Root : { 163 77 168 82 }*/
/* End Operation */

/* Begin Operation: { 56 155 72 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 51 170 56 175 }*/
/* IO - VPL Root : { 72 170 77 175 }*/
/* End Operation */

/* Begin Operation: { 184 24 192 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 179 77 184 82 }*/
/* IO - VPL Terminal : { 179 170 184 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 315 261 331 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 331 263 336 268 }*/
/* End Operation */

/* Begin Operation: { 360 229 376 283 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 355 245 360 250 }*/
/* IO - VPL Terminal : { 355 263 360 268 }*/
/* IO - VPL Root : { 376 245 381 250 }*/
/* IO - VPL Root : { 376 263 381 268 }*/
/* End Operation */

/* Begin Operation: { 362 132 378 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,")");
/* IO - VPL Root : { 378 133 383 138 }*/
/* End Operation */

/* Begin Operation: { 407 110 423 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 402 124 407 129 }*/
/* IO - VPL Terminal : { 402 144 407 149 }*/
/* IO - VPL Root : { 423 135 428 140 }*/
/* End Operation */

/* Begin Operation: { 321 2 337 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unix Carriage Return");
/* IO - VPL Root : { 337 68 342 73 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 505 84 521 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 500 108 505 113 }*/
/* IO - VPL Terminal : { 500 125 505 130 }*/
/* IO - VPL Root : { 521 109 526 114 }*/
/* End Operation */

/* Begin Operation: { 505 157 521 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"{");
/* IO - VPL Root : { 521 158 526 163 }*/
/* End Operation */

/* Begin Operation: { 550 133 566 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 545 142 550 147 }*/
/* IO - VPL Terminal : { 545 158 550 163 }*/
/* IO - VPL Terminal : { 545 176 550 181 }*/
/* IO - VPL Root : { 566 158 571 163 }*/
/* End Operation */

/* Begin Operation: { 683 32 691 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 678 126 683 131 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,2,8,1,9);
	result = connect_root_to_terminal(ptrA,1,5,1,11);
	result = connect_root_to_terminal(ptrA,1,11,1,11);
	result = connect_root_to_terminal(ptrA,2,9,2,11);
	result = connect_root_to_terminal(ptrA,1,10,3,11);
	result = connect_root_to_terminal(ptrA,2,11,3,11);
	result = connect_root_to_terminal(ptrA,2,6,1,12);
	result = connect_root_to_terminal(ptrA,2,12,1,13);
	result = connect_root_to_terminal(ptrA,1,11,1,14);
	result = connect_root_to_terminal(ptrA,1,14,1,14);
	result = connect_root_to_terminal(ptrA,2,13,2,14);
	result = connect_root_to_terminal(ptrA,1,10,3,14);
	result = connect_root_to_terminal(ptrA,2,14,3,14);
	result = connect_root_to_terminal(ptrA,1,14,1,16);
	result = connect_root_to_terminal(ptrA,1,15,2,16);
	result = connect_root_to_terminal(ptrA,1,16,1,18);
	result = connect_root_to_terminal(ptrA,1,17,2,18);
	result = connect_root_to_terminal(ptrA,1,18,1,20);
	result = connect_root_to_terminal(ptrA,1,19,2,20);
	result = connect_root_to_terminal(ptrA,1,20,1,22);
	result = connect_root_to_terminal(ptrA,1,21,2,22);
	result = connect_root_to_terminal(ptrA,1,19,3,22);
	result = connect_root_to_terminal(ptrA,1,22,1,23);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 330 122 346 260 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Export The Case Text");
/* IO - VPL Terminal : { 325 148 330 153 }*/
/* IO - VPL Terminal : { 325 195 330 200 }*/
/* IO - VPL Root : { 346 147 351 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 485 927 }{ 68 353 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 156 740 }{ 777 300 } */
/* Begin Operation: { 20 17 28 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 76 33 81 }*/
/* IO - VPL Root : { 28 136 33 141 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 84 135 100 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 100 173 105 178 }*/
/* End Operation */

/* Begin Operation: { 126 103 142 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 121 137 126 142 }*/
/* IO - VPL Terminal : { 121 173 126 178 }*/
/* IO - VPL Root : { 142 155 147 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 168 136 184 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 163 155 168 160 }*/
/* IO - VPL Root : { 184 148 189 153 }*/
/* IO - VPL Root : { 184 162 189 167 }*/
/* End Operation */

/* Begin Operation: { 252 184 268 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Needs NONE");
/* IO - VPL Terminal : { 247 224 252 229 }*/
/* IO - VPL Root : { 268 224 273 229 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 260 187 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 261 494 }{ 166 276 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 80 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get All Terminals");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
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

/* Start Cases: { 389 153 }{ 54 343 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 530 962 }{ 282 259 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 90 80 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 124 85 129 }*/
/* End Operation */

/* Begin Operation: { 106 98 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Inputs");
/* IO - VPL Terminal : { 101 124 106 129 }*/
/* IO - VPL Root : { 122 114 127 119 }*/
/* IO - VPL Root : { 122 132 127 137 }*/
/* End Operation */

/* Begin Operation: { 148 99 164 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Root");
/* IO - VPL Terminal : { 143 132 148 137 }*/
/* IO - VPL Root : { 164 133 169 138 }*/
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

/* Start Cases: { 603 253 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 603 554 }{ 228 273 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 94 80 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Root");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 108 85 113 }*/
/* IO - VPL Root : { 80 124 85 129 }*/
/* End Operation */

/* Begin Operation: { 106 113 122 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 124 106 129 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 104 164 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 164 116 169 121 }*/
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 116 190 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 603 828 }{ 155 254 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 121 206 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 185 133 190 138 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 133 232 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
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

/* Begin Operation: { 210 164 226 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Roots");
/* IO - VPL Terminal : { 205 199 210 204 }*/
/* IO - VPL Root : { 226 199 231 204 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 446 166 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 446 467 }{ 206 266 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 74 80 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get All Roots");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
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

/* Start Cases: { 453 963 }{ 54 343 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 530 962 }{ 199 253 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 88 75 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 54 114 59 119 }*/
/* IO - VPL Root : { 75 104 80 109 }*/
/* IO - VPL Root : { 75 122 80 127 }*/
/* End Operation */

/* Begin Operation: { 109 93 125 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Outputs");
/* IO - VPL Terminal : { 104 122 109 127 }*/
/* IO - VPL Root : { 125 111 130 116 }*/
/* IO - VPL Root : { 125 131 130 136 }*/
/* End Operation */

/* Begin Operation: { 160 20 168 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 155 114 160 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 73 122 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Lists To List");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 294 110 310 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create The Header");
/* IO - VPL Terminal : { 289 199 294 204 }*/
/* IO - VPL Terminal : { 289 224 294 229 }*/
/* IO - VPL Root : { 310 110 315 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 422 844 }{ 69 403 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 165 777 }{ 515 338 } */
/* Begin Operation: { 36 39 44 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 151 49 156 }*/
/* IO - VPL Root : { 44 189 49 194 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 157 304 293 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unix Carriage Return");
/* IO - VPL Root : { 304 223 309 228 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 123 178 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 157 153 162 158 }*/
/* IO - VPL Root : { 178 153 183 158 }*/
/* End Operation */

/* Begin Operation: { 372 211 388 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,")");
/* IO - VPL Root : { 388 212 393 217 }*/
/* End Operation */

/* Begin Operation: { 204 163 220 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 220 166 225 171 }*/
/* End Operation */

/* Begin Operation: { 246 138 262 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"max");
/* IO - VPL Terminal : { 241 151 246 156 }*/
/* IO - VPL Terminal : { 241 166 246 171 }*/
/* IO - VPL Root : { 262 159 267 164 }*/
/* End Operation */

/* Begin Operation: { 330 126 346 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 325 159 330 164 }*/
/* IO - VPL Root : { 346 159 351 164 }*/
/* End Operation */

/* Begin Operation: { 120 129 136 254 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Header With NONE?");
/* IO - VPL Terminal : { 115 189 120 194 }*/
/* IO - VPL Root : { 136 189 141 194 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 480 299 }{ 89 313 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 451 784 }{ 194 264 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 67 122 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"HEADERWITHNONE(");
/* IO - VPL Root : { 122 116 127 121 }*/
/* End Operation */

/* Begin Operation: { 64 104 80 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 59 116 64 121 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 451 784 }{ 161 260 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 95 80 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"HEADER(");
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

/* Begin Operation: { 414 175 430 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 409 189 414 194 }*/
/* IO - VPL Terminal : { 409 201 414 206 }*/
/* IO - VPL Terminal : { 409 212 414 217 }*/
/* IO - VPL Terminal : { 409 223 414 228 }*/
/* IO - VPL Root : { 430 200 435 205 }*/
/* End Operation */

/* Begin Operation: { 456 58 464 250 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 451 152 456 157 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
	result = connect_root_to_terminal(ptrA,1,3,3,8);
	result = connect_root_to_terminal(ptrA,1,1,4,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 336 129 352 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-r");
/* IO - VPL Terminal : { 331 162 336 167 }*/
/* IO - VPL Root : { 352 150 357 155 }*/
/* IO - VPL Root : { 352 173 357 178 }*/
/* End Operation */

/* Begin Operation: { 378 118 394 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 373 150 378 155 }*/
/* IO - VPL Root : { 394 144 399 149 }*/
/* IO - VPL Root : { 394 155 399 160 }*/
/* End Operation */

/* Begin Operation: { 420 84 436 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Export The Operation Text");
/* IO - VPL Terminal : { 415 110 420 115 }*/
/* IO - VPL Terminal : { 415 144 420 149 }*/
/* IO - VPL Terminal : { 415 173 420 178 }*/
/* IO - VPL Terminal : { 415 199 420 204 }*/
/* IO - VPL Root : { 436 109 441 114 }*/
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

/* Start Cases: { 485 927 }{ 77 358 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 425 903 }{ 310 259 } */
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

/* Begin Operation: { 64 70 80 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 59 96 64 101 }*/
/* IO - VPL Root : { 80 86 85 91 }*/
/* IO - VPL Root : { 80 104 85 109 }*/
/* End Operation */

/* Begin Operation: { 148 231 164 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 164 233 169 238 }*/
/* End Operation */

/* Begin Operation: { 148 112 164 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 164 116 169 121 }*/
/* End Operation */

/* Begin Operation: { 106 75 122 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Outputs");
/* IO - VPL Terminal : { 101 104 106 109 }*/
/* IO - VPL Root : { 122 93 127 98 }*/
/* IO - VPL Root : { 122 113 127 118 }*/
/* End Operation */

/* Begin Operation: { 148 161 164 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 143 172 148 177 }*/
/* IO - VPL Terminal : { 143 185 148 190 }*/
/* IO - VPL Root : { 164 179 169 184 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 190 144 206 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Root");
/* IO - VPL Terminal : { 185 154 190 159 }*/
/* IO - VPL Terminal : { 185 179 190 184 }*/
/* IO - VPL Terminal : { 185 207 190 212 }*/
/* IO - VPL Root : { 206 154 211 159 }*/
/* IO - VPL Root : { 206 207 211 212 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 590 897 }{ 68 350 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 759 997 }{ 282 292 } */
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

/* Begin Operation: { 123 58 139 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"INPUT(");
/* IO - VPL Root : { 139 75 144 80 }*/
/* End Operation */

/* Begin Operation: { 57 99 73 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"-1");
/* IO - VPL Terminal : { 52 114 57 119 }*/
/* IO - VPL Root : { 73 114 78 119 }*/
/* End Operation */

/* Begin Operation: { 93 81 109 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 88 114 93 119 }*/
/* IO - VPL Root : { 109 114 114 119 }*/
/* End Operation */

/* Begin Operation: { 123 113 139 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,",");
/* IO - VPL Root : { 139 114 144 119 }*/
/* End Operation */

/* Begin Operation: { 93 162 109 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 88 195 93 200 }*/
/* IO - VPL Root : { 109 195 114 200 }*/
/* End Operation */

/* Begin Operation: { 123 144 139 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,")");
/* IO - VPL Root : { 139 145 144 150 }*/
/* End Operation */

/* Begin Operation: { 168 63 184 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,1,"\"join\"");
/* IO - VPL Terminal : { 163 66 168 71 }*/
/* IO - VPL Terminal : { 163 75 168 80 }*/
/* IO - VPL Terminal : { 163 84 168 89 }*/
/* IO - VPL Terminal : { 163 93 168 98 }*/
/* IO - VPL Terminal : { 163 104 168 109 }*/
/* IO - VPL Terminal : { 163 114 168 119 }*/
/* IO - VPL Root : { 184 88 189 93 }*/
/* End Operation */

/* Begin Operation: { 168 139 184 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unix Carriage Return");
/* IO - VPL Root : { 184 205 189 210 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 202 72 218 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 197 88 202 93 }*/
/* IO - VPL Terminal : { 197 106 202 111 }*/
/* IO - VPL Root : { 218 97 223 102 }*/
/* End Operation */

/* Begin Operation: { 203 147 219 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 198 162 203 167 }*/
/* IO - VPL Root : { 219 162 224 167 }*/
/* End Operation */

/* Begin Operation: { 250 21 258 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 245 83 250 88 }*/
/* IO - VPL Terminal : { 245 147 250 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,1,2,7);
	result = connect_root_to_terminal(ptrA,1,3,3,7);
	result = connect_root_to_terminal(ptrA,1,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,5,7);
	result = connect_root_to_terminal(ptrA,1,6,6,7);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,3,0,1,10);
	result = connect_root_to_terminal(ptrA,1,9,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 232 42 248 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 227 58 232 63 }*/
/* IO - VPL Terminal : { 227 76 232 81 }*/
/* IO - VPL Root : { 248 67 253 72 }*/
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 116 274 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,4,0,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,2,3,6);
	result = connect_root_to_terminal(ptrA,2,6,3,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 425 903 }{ 489 263 } */
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

/* Begin Operation: { 64 70 80 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 59 96 64 101 }*/
/* IO - VPL Root : { 80 86 85 91 }*/
/* IO - VPL Root : { 80 104 85 109 }*/
/* End Operation */

/* Begin Operation: { 148 231 164 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 164 233 169 238 }*/
/* End Operation */

/* Begin Operation: { 148 112 164 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 164 116 169 121 }*/
/* End Operation */

/* Begin Operation: { 106 75 122 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Outputs");
/* IO - VPL Terminal : { 101 104 106 109 }*/
/* IO - VPL Root : { 122 93 127 98 }*/
/* IO - VPL Root : { 122 113 127 118 }*/
/* End Operation */

/* Begin Operation: { 148 161 164 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 143 172 148 177 }*/
/* IO - VPL Terminal : { 143 185 148 190 }*/
/* IO - VPL Root : { 164 179 169 184 }*/
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
	tempOperation = operation_output_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 190 144 206 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Root");
/* IO - VPL Terminal : { 185 154 190 159 }*/
/* IO - VPL Terminal : { 185 179 190 184 }*/
/* IO - VPL Terminal : { 185 207 190 212 }*/
/* IO - VPL Root : { 206 154 211 159 }*/
/* IO - VPL Root : { 206 207 211 212 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 590 897 }{ 68 350 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 759 997 }{ 282 292 } */
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

/* Begin Operation: { 123 58 139 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"INPUT(");
/* IO - VPL Root : { 139 75 144 80 }*/
/* End Operation */

/* Begin Operation: { 57 99 73 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"-1");
/* IO - VPL Terminal : { 52 114 57 119 }*/
/* IO - VPL Root : { 73 114 78 119 }*/
/* End Operation */

/* Begin Operation: { 93 81 109 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 88 114 93 119 }*/
/* IO - VPL Root : { 109 114 114 119 }*/
/* End Operation */

/* Begin Operation: { 123 113 139 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,",");
/* IO - VPL Root : { 139 114 144 119 }*/
/* End Operation */

/* Begin Operation: { 93 162 109 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 88 195 93 200 }*/
/* IO - VPL Root : { 109 195 114 200 }*/
/* End Operation */

/* Begin Operation: { 123 144 139 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,")");
/* IO - VPL Root : { 139 145 144 150 }*/
/* End Operation */

/* Begin Operation: { 168 63 184 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,1,"\"join\"");
/* IO - VPL Terminal : { 163 66 168 71 }*/
/* IO - VPL Terminal : { 163 75 168 80 }*/
/* IO - VPL Terminal : { 163 84 168 89 }*/
/* IO - VPL Terminal : { 163 93 168 98 }*/
/* IO - VPL Terminal : { 163 104 168 109 }*/
/* IO - VPL Terminal : { 163 114 168 119 }*/
/* IO - VPL Root : { 184 88 189 93 }*/
/* End Operation */

/* Begin Operation: { 168 139 184 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unix Carriage Return");
/* IO - VPL Root : { 184 205 189 210 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 202 72 218 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 197 88 202 93 }*/
/* IO - VPL Terminal : { 197 106 202 111 }*/
/* IO - VPL Root : { 218 97 223 102 }*/
/* End Operation */

/* Begin Operation: { 203 147 219 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 198 162 203 167 }*/
/* IO - VPL Root : { 219 162 224 167 }*/
/* End Operation */

/* Begin Operation: { 250 21 258 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 245 83 250 88 }*/
/* IO - VPL Terminal : { 245 147 250 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,1,2,7);
	result = connect_root_to_terminal(ptrA,1,3,3,7);
	result = connect_root_to_terminal(ptrA,1,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,5,7);
	result = connect_root_to_terminal(ptrA,1,6,6,7);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,3,0,1,10);
	result = connect_root_to_terminal(ptrA,1,9,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 232 42 248 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 227 58 232 63 }*/
/* IO - VPL Terminal : { 227 76 232 81 }*/
/* IO - VPL Root : { 248 67 253 72 }*/
/* End Operation */

/* Begin Operation: { 316 192 332 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 332 194 337 199 }*/
/* End Operation */

/* Begin Operation: { 316 82 332 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 332 86 337 91 }*/
/* End Operation */

/* Begin Operation: { 274 108 290 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 269 134 274 139 }*/
/* IO - VPL Root : { 290 124 295 129 }*/
/* IO - VPL Root : { 290 142 295 147 }*/
/* End Operation */

/* Begin Operation: { 316 116 332 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Inputs");
/* IO - VPL Terminal : { 311 142 316 147 }*/
/* IO - VPL Root : { 332 132 337 137 }*/
/* IO - VPL Root : { 332 150 337 155 }*/
/* End Operation */

/* Begin Operation: { 358 115 374 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Root");
/* IO - VPL Terminal : { 353 125 358 130 }*/
/* IO - VPL Terminal : { 353 150 358 155 }*/
/* IO - VPL Terminal : { 353 178 358 183 }*/
/* IO - VPL Root : { 374 125 379 130 }*/
/* IO - VPL Root : { 374 178 379 183 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 590 897 }{ 68 350 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 148 388 }{ 269 301 } */
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

/* Begin Operation: { 106 63 122 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"RESET(");
/* IO - VPL Root : { 122 82 127 87 }*/
/* End Operation */

/* Begin Operation: { 64 62 80 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 59 95 64 100 }*/
/* IO - VPL Root : { 80 95 85 100 }*/
/* End Operation */

/* Begin Operation: { 106 121 122 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,")");
/* IO - VPL Root : { 122 122 127 127 }*/
/* End Operation */

/* Begin Operation: { 148 65 164 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 143 68 148 73 }*/
/* IO - VPL Terminal : { 143 82 148 87 }*/
/* IO - VPL Terminal : { 143 95 148 100 }*/
/* IO - VPL Terminal : { 143 110 148 115 }*/
/* IO - VPL Root : { 164 90 169 95 }*/
/* End Operation */

/* Begin Operation: { 148 144 164 280 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unix Carriage Return");
/* IO - VPL Root : { 164 210 169 215 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 74 206 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 185 90 190 95 }*/
/* IO - VPL Terminal : { 185 108 190 113 }*/
/* IO - VPL Root : { 206 99 211 104 }*/
/* End Operation */

/* Begin Operation: { 190 149 206 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 185 164 190 169 }*/
/* IO - VPL Root : { 206 164 211 169 }*/
/* End Operation */

/* Begin Operation: { 232 23 240 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 85 232 90 }*/
/* IO - VPL Terminal : { 227 149 232 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,3,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 400 51 416 105 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 395 67 400 72 }*/
/* IO - VPL Terminal : { 395 85 400 90 }*/
/* IO - VPL Root : { 416 76 421 81 }*/
/* End Operation */

/* Begin Operation: { 442 22 450 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 437 116 442 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,4,0,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,2,3,6);
	result = connect_root_to_terminal(ptrA,2,6,3,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,3,0,1,10);
	result = connect_root_to_terminal(ptrA,2,10,1,11);
	result = connect_root_to_terminal(ptrA,1,9,1,12);
	result = connect_root_to_terminal(ptrA,1,12,1,12);
	result = connect_root_to_terminal(ptrA,2,11,2,12);
	result = connect_root_to_terminal(ptrA,1,8,3,12);
	result = connect_root_to_terminal(ptrA,2,12,3,12);
	result = connect_root_to_terminal(ptrA,1,7,1,13);
	result = connect_root_to_terminal(ptrA,1,12,2,13);
	result = connect_root_to_terminal(ptrA,1,13,1,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 462 84 478 249 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Export The Operation Text");
/* IO - VPL Terminal : { 457 109 462 114 }*/
/* IO - VPL Terminal : { 457 162 462 167 }*/
/* IO - VPL Terminal : { 457 199 462 204 }*/
/* IO - VPL Root : { 478 109 483 114 }*/
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

/* Start Cases: { 485 927 }{ 54 341 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 645 922 }{ 306 284 } */
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

/* Begin Operation: { 66 88 82 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 61 114 66 119 }*/
/* IO - VPL Root : { 82 104 87 109 }*/
/* IO - VPL Root : { 82 122 87 127 }*/
/* End Operation */

/* Begin Operation: { 122 99 138 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Export Text");
/* IO - VPL Terminal : { 117 122 122 127 }*/
/* IO - VPL Terminal : { 117 162 122 167 }*/
/* IO - VPL Root : { 138 143 143 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 174 50 190 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 169 66 174 71 }*/
/* IO - VPL Terminal : { 169 84 174 89 }*/
/* IO - VPL Root : { 190 75 195 80 }*/
/* End Operation */

/* Begin Operation: { 255 21 263 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 250 115 255 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 546 110 562 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create The Footer");
/* IO - VPL Terminal : { 541 199 546 204 }*/
/* IO - VPL Terminal : { 541 224 546 229 }*/
/* IO - VPL Root : { 562 167 567 172 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 492 809 }{ 44 328 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 551 844 }{ 346 417 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 132 33 137 }*/
/* IO - VPL Root : { 28 170 33 175 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 132 74 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 53 162 58 167 }*/
/* IO - VPL Root : { 74 162 79 167 }*/
/* End Operation */

/* Begin Operation: { 177 197 193 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,")");
/* IO - VPL Root : { 193 198 198 203 }*/
/* End Operation */

/* Begin Operation: { 140 120 156 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unix Carriage Return");
/* IO - VPL Root : { 156 186 161 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 244 69 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 69 247 74 252 }*/
/* End Operation */

/* Begin Operation: { 98 219 114 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"max");
/* IO - VPL Terminal : { 93 232 98 237 }*/
/* IO - VPL Terminal : { 93 247 98 252 }*/
/* IO - VPL Root : { 114 240 119 245 }*/
/* End Operation */

/* Begin Operation: { 100 129 116 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 95 162 100 167 }*/
/* IO - VPL Root : { 116 162 121 167 }*/
/* End Operation */

/* Begin Operation: { 182 9 198 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Footer With NONE?");
/* IO - VPL Terminal : { 177 68 182 73 }*/
/* IO - VPL Root : { 198 68 203 73 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 546 197 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 533 515 }{ 201 271 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 27 123 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FOOTERSINGLECASEWITHNONE(");
/* IO - VPL Root : { 124 119 129 124 }*/
/* End Operation */

/* Begin Operation: { 64 104 80 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 59 116 64 121 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 25 156 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 119 148 124 }*/
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

/* Start Operations: { 533 515 }{ 157 258 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 59 81 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FOOTERSINGLECASE(");
/* IO - VPL Root : { 82 119 87 124 }*/
/* End Operation */

/* Begin Operation: { 106 25 114 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 119 106 124 }*/
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

/* Begin Operation: { 223 143 239 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 218 148 223 153 }*/
/* IO - VPL Terminal : { 218 162 223 167 }*/
/* IO - VPL Terminal : { 218 176 223 181 }*/
/* IO - VPL Terminal : { 218 186 223 191 }*/
/* IO - VPL Root : { 239 168 244 173 }*/
/* End Operation */

/* Begin Operation: { 224 77 240 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"}");
/* IO - VPL Root : { 240 78 245 83 }*/
/* End Operation */

/* Begin Operation: { 269 58 285 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 264 67 269 72 }*/
/* IO - VPL Terminal : { 264 78 269 83 }*/
/* IO - VPL Terminal : { 264 92 269 97 }*/
/* IO - VPL Terminal : { 264 105 269 110 }*/
/* IO - VPL Root : { 285 83 290 88 }*/
/* End Operation */

/* Begin Operation: { 311 27 319 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 306 83 311 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
	result = connect_root_to_terminal(ptrA,1,2,3,8);
	result = connect_root_to_terminal(ptrA,1,3,4,8);
	result = connect_root_to_terminal(ptrA,1,8,1,10);
	result = connect_root_to_terminal(ptrA,1,9,2,10);
	result = connect_root_to_terminal(ptrA,1,3,3,10);
	result = connect_root_to_terminal(ptrA,1,3,4,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 504 83 520 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Export The Operation Text");
/* IO - VPL Terminal : { 499 109 504 114 }*/
/* IO - VPL Terminal : { 499 173 504 178 }*/
/* IO - VPL Terminal : { 499 199 504 204 }*/
/* IO - VPL Root : { 520 108 525 113 }*/
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

/* Start Cases: { 485 927 }{ 54 341 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 326 604 }{ 361 265 } */
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

/* Begin Operation: { 64 89 80 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 125 85 130 }*/
/* End Operation */

/* Begin Operation: { 106 91 122 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Inputs");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Root : { 122 107 127 112 }*/
/* IO - VPL Root : { 122 125 127 130 }*/
/* End Operation */

/* Begin Operation: { 148 120 164 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Root");
/* IO - VPL Terminal : { 143 134 148 139 }*/
/* IO - VPL Terminal : { 143 164 148 169 }*/
/* IO - VPL Root : { 164 152 169 157 }*/
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

/* Start Cases: { 562 888 }{ 74 321 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 665 886 }{ 230 270 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 64 80 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Root");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
/* IO - VPL Root : { 80 92 85 97 }*/
/* End Operation */

/* Begin Operation: { 106 137 122 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(in)");
/* IO - VPL Terminal : { 101 148 106 153 }*/
/* IO - VPL Terminal : { 101 161 106 166 }*/
/* IO - VPL Root : { 122 155 127 160 }*/
/* End Operation */

/* Begin Operation: { 148 128 164 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Found?");
/* IO - VPL Terminal : { 143 155 148 160 }*/
/* IO - VPL Root : { 164 155 169 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 687 1254 }{ 64 322 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 771 1238 }{ 149 254 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 112 73 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 52 114 57 119 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 774 1249 }{ 152 266 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 155 190 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 178 206 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 206 180 211 185 }*/
/* End Operation */

/* Begin Operation: { 190 123 206 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 206 127 211 132 }*/
/* End Operation */

/* Begin Operation: { 232 117 248 193 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Root");
/* IO - VPL Terminal : { 227 127 232 132 }*/
/* IO - VPL Terminal : { 227 152 232 157 }*/
/* IO - VPL Terminal : { 227 180 232 185 }*/
/* IO - VPL Root : { 248 127 253 132 }*/
/* IO - VPL Root : { 248 180 253 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 590 897 }{ 68 350 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 148 388 }{ 282 292 } */
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

/* Begin Operation: { 123 53 139 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"OUTPUT(");
/* IO - VPL Root : { 139 75 144 80 }*/
/* End Operation */

/* Begin Operation: { 123 113 139 119 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,",");
/* IO - VPL Root : { 139 114 144 119 }*/
/* End Operation */

/* Begin Operation: { 93 162 109 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 88 195 93 200 }*/
/* IO - VPL Root : { 109 195 114 200 }*/
/* End Operation */

/* Begin Operation: { 123 144 139 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,")");
/* IO - VPL Root : { 139 145 144 150 }*/
/* End Operation */

/* Begin Operation: { 58 66 74 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Index Or NONE");
/* IO - VPL Terminal : { 53 114 58 119 }*/
/* IO - VPL Root : { 74 114 79 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 685 297 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 684 599 }{ 191 250 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 105 80 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 59 116 64 121 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 98 122 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"NONE\"");
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
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 684 851 }{ 278 258 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 101 80 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"-1");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
/* End Operation */

/* Begin Operation: { 106 83 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Root : { 122 116 127 121 }*/
/* End Operation */

/* Begin Operation: { 148 61 164 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"TERMINAL(\"");
/* IO - VPL Root : { 164 95 169 100 }*/
/* End Operation */

/* Begin Operation: { 148 150 164 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\")\"");
/* IO - VPL Root : { 164 158 169 163 }*/
/* End Operation */

/* Begin Operation: { 190 91 206 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 185 95 190 100 }*/
/* IO - VPL Terminal : { 185 116 190 121 }*/
/* IO - VPL Terminal : { 185 136 190 141 }*/
/* IO - VPL Root : { 206 117 211 122 }*/
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 116 232 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 168 63 184 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,6,1,"\"join\"");
/* IO - VPL Terminal : { 163 66 168 71 }*/
/* IO - VPL Terminal : { 163 75 168 80 }*/
/* IO - VPL Terminal : { 163 84 168 89 }*/
/* IO - VPL Terminal : { 163 93 168 98 }*/
/* IO - VPL Terminal : { 163 104 168 109 }*/
/* IO - VPL Terminal : { 163 114 168 119 }*/
/* IO - VPL Root : { 184 88 189 93 }*/
/* End Operation */

/* Begin Operation: { 168 139 184 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unix Carriage Return");
/* IO - VPL Root : { 184 205 189 210 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 202 72 218 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 197 88 202 93 }*/
/* IO - VPL Terminal : { 197 106 202 111 }*/
/* IO - VPL Root : { 218 97 223 102 }*/
/* End Operation */

/* Begin Operation: { 203 147 219 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 198 162 203 167 }*/
/* IO - VPL Root : { 219 162 224 167 }*/
/* End Operation */

/* Begin Operation: { 250 21 258 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 245 83 250 88 }*/
/* IO - VPL Terminal : { 245 147 250 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,1,2,6);
	result = connect_root_to_terminal(ptrA,1,3,3,6);
	result = connect_root_to_terminal(ptrA,1,2,4,6);
	result = connect_root_to_terminal(ptrA,1,5,5,6);
	result = connect_root_to_terminal(ptrA,1,4,6,6);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,3,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,1,10);
	result = connect_root_to_terminal(ptrA,1,9,2,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 274 52 290 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 269 68 274 73 }*/
/* IO - VPL Terminal : { 269 86 274 91 }*/
/* IO - VPL Root : { 290 77 295 82 }*/
/* End Operation */

/* Begin Operation: { 316 22 324 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 311 116 316 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,3,0,2,3);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,4,3,6);
	result = connect_root_to_terminal(ptrA,2,6,3,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 588 93 604 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 583 109 588 114 }*/
/* IO - VPL Terminal : { 583 127 588 132 }*/
/* IO - VPL Root : { 604 118 609 123 }*/
/* End Operation */

/* Begin Operation: { 210 53 226 66 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 226 57 231 62 }*/
/* End Operation */

/* Begin Operation: { 252 22 268 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Export The Local");
/* IO - VPL Terminal : { 247 57 252 62 }*/
/* IO - VPL Terminal : { 247 94 252 99 }*/
/* IO - VPL Root : { 268 57 273 62 }*/
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

/* Start Cases: { 504 1012 }{ 84 315 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 624 686 }{ 304 277 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 120 74 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 53 146 58 151 }*/
/* IO - VPL Root : { 74 136 79 141 }*/
/* IO - VPL Root : { 74 154 79 159 }*/
/* End Operation */

/* Begin Operation: { 120 164 136 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Type");
/* IO - VPL Terminal : { 115 185 120 190 }*/
/* IO - VPL Root : { 136 177 141 182 }*/
/* IO - VPL Root : { 136 192 141 197 }*/
/* End Operation */

/* Begin Operation: { 160 181 176 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"local");
/* IO - VPL Terminal : { 155 192 160 197 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 160 40 176 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Export Local Text");
/* IO - VPL Terminal : { 155 100 160 105 }*/
/* IO - VPL Root : { 176 100 181 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 66 220 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 199 82 204 87 }*/
/* IO - VPL Terminal : { 199 100 204 105 }*/
/* IO - VPL Root : { 220 91 225 96 }*/
/* End Operation */

/* Begin Operation: { 258 27 266 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 253 121 258 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 624 966 }{ 106 270 } */
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

/* Begin Operation: { 680 52 696 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 675 57 680 62 }*/
/* IO - VPL Terminal : { 674 76 679 81 }*/
/* IO - VPL Terminal : { 675 96 680 101 }*/
/* IO - VPL Root : { 696 77 701 82 }*/
/* End Operation */

/* Begin Operation: { 728 39 736 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 723 133 728 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,3,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,2,3,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,6,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,2,7,3,9);
	result = connect_root_to_terminal(ptrA,1,5,4,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,1,10,1,10);
	result = connect_root_to_terminal(ptrA,2,3,2,10);
	result = connect_root_to_terminal(ptrA,1,5,3,10);
	result = connect_root_to_terminal(ptrA,1,5,1,11);
	result = connect_root_to_terminal(ptrA,1,4,2,11);
	result = connect_root_to_terminal(ptrA,1,10,1,12);
	result = connect_root_to_terminal(ptrA,2,7,2,12);
	result = connect_root_to_terminal(ptrA,1,5,3,12);
	result = connect_root_to_terminal(ptrA,1,12,1,13);
	result = connect_root_to_terminal(ptrA,1,11,2,13);
	result = connect_root_to_terminal(ptrA,1,14,1,15);
	result = connect_root_to_terminal(ptrA,1,15,1,15);
	result = connect_root_to_terminal(ptrA,2,3,2,15);
	result = connect_root_to_terminal(ptrA,1,15,1,16);
	result = connect_root_to_terminal(ptrA,1,0,2,16);
	result = connect_root_to_terminal(ptrA,1,13,3,16);
	result = connect_root_to_terminal(ptrA,1,16,1,17);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 414 36 422 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 409 130 414 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,2,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,4,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 198 422 }{ 523 310 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 193 122 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 122 231 127 236 }*/
/* End Operation */

/* Begin Operation: { 64 169 80 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 59 195 64 200 }*/
/* IO - VPL Root : { 80 195 85 200 }*/
/* End Operation */

/* Begin Operation: { 148 161 164 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 143 195 148 200 }*/
/* IO - VPL Terminal : { 143 231 148 236 }*/
/* IO - VPL Root : { 164 213 169 218 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 227 206 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 185 246 190 251 }*/
/* IO - VPL Root : { 206 239 211 244 }*/
/* IO - VPL Root : { 206 253 211 258 }*/
/* End Operation */

/* Begin Operation: { 232 75 248 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create The Header");
/* IO - VPL Terminal : { 227 148 232 153 }*/
/* IO - VPL Terminal : { 227 182 232 187 }*/
/* IO - VPL Root : { 248 75 253 80 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 422 844 }{ 69 403 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 320 389 }{ 726 462 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 139 50 155 486 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,");
/* IO - VPL Root : { 155 266 160 271 }*/
/* End Operation */

/* Begin Operation: { 61 9 77 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Export Name");
/* IO - VPL Terminal : { 56 66 61 71 }*/
/* IO - VPL Root : { 77 66 82 71 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 8 110 109 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"enum opTrigger \"");
/* IO - VPL Root : { 110 56 115 61 }*/
/* End Operation */

/* Begin Operation: { 139 32 155 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 134 48 139 53 }*/
/* IO - VPL Terminal : { 134 66 139 71 }*/
/* IO - VPL Root : { 155 57 160 62 }*/
/* End Operation */

/* Begin Operation: { 184 82 200 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 179 98 184 103 }*/
/* IO - VPL Terminal : { 179 116 184 121 }*/
/* IO - VPL Root : { 200 107 205 112 }*/
/* End Operation */

/* Begin Operation: { 62 152 78 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-r");
/* IO - VPL Terminal : { 57 184 62 189 }*/
/* IO - VPL Root : { 78 172 83 177 }*/
/* IO - VPL Root : { 78 194 83 199 }*/
/* End Operation */

/* Begin Operation: { 102 141 118 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 97 172 102 177 }*/
/* IO - VPL Root : { 118 161 123 166 }*/
/* IO - VPL Root : { 118 183 123 188 }*/
/* End Operation */

/* Begin Operation: { 184 154 200 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 179 180 184 185 }*/
/* IO - VPL Root : { 200 170 205 175 }*/
/* IO - VPL Root : { 200 188 205 193 }*/
/* End Operation */

/* Begin Operation: { 230 159 246 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Outputs");
/* IO - VPL Terminal : { 225 188 230 193 }*/
/* IO - VPL Root : { 246 177 251 182 }*/
/* IO - VPL Root : { 246 197 251 202 }*/
/* End Operation */

/* Begin Operation: { 229 132 245 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 245 134 250 139 }*/
/* End Operation */

/* Begin Operation: { 274 102 290 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Terminal");
/* IO - VPL Terminal : { 269 107 274 112 }*/
/* IO - VPL Terminal : { 269 140 274 145 }*/
/* IO - VPL Terminal : { 269 172 274 177 }*/
/* IO - VPL Root : { 290 108 295 113 }*/
/* IO - VPL Root : { 290 172 295 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 643 929 }{ 85 355 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 407 533 }{ 228 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 21 116 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"V_Object terminal");
/* IO - VPL Root : { 116 69 121 74 }*/
/* End Operation */

/* Begin Operation: { 57 49 73 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 52 82 57 87 }*/
/* IO - VPL Root : { 73 82 78 87 }*/
/* End Operation */

/* Begin Operation: { 100 155 116 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,",");
/* IO - VPL Root : { 116 156 121 161 }*/
/* End Operation */

/* Begin Operation: { 147 52 163 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 142 56 147 61 }*/
/* IO - VPL Terminal : { 142 69 147 74 }*/
/* IO - VPL Terminal : { 142 82 147 87 }*/
/* IO - VPL Terminal : { 142 96 147 101 }*/
/* IO - VPL Root : { 163 77 168 82 }*/
/* End Operation */

/* Begin Operation: { 56 155 72 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 51 170 56 175 }*/
/* IO - VPL Root : { 72 170 77 175 }*/
/* End Operation */

/* Begin Operation: { 184 24 192 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 179 77 184 82 }*/
/* IO - VPL Terminal : { 179 170 184 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 184 229 200 285 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 179 255 184 260 }*/
/* IO - VPL Root : { 200 245 205 250 }*/
/* IO - VPL Root : { 200 263 205 268 }*/
/* End Operation */

/* Begin Operation: { 230 238 246 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Inputs");
/* IO - VPL Terminal : { 225 263 230 268 }*/
/* IO - VPL Root : { 246 254 251 259 }*/
/* IO - VPL Root : { 246 272 251 277 }*/
/* End Operation */

/* Begin Operation: { 322 155 338 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Root");
/* IO - VPL Terminal : { 317 163 322 168 }*/
/* IO - VPL Terminal : { 317 188 322 193 }*/
/* IO - VPL Terminal : { 317 215 322 220 }*/
/* IO - VPL Root : { 338 164 343 169 }*/
/* IO - VPL Root : { 338 216 343 221 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 590 897 }{ 68 350 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 407 533 }{ 228 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 29 116 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"V_Object *root");
/* IO - VPL Root : { 116 69 121 74 }*/
/* End Operation */

/* Begin Operation: { 57 49 73 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 52 82 57 87 }*/
/* IO - VPL Root : { 73 82 78 87 }*/
/* End Operation */

/* Begin Operation: { 100 155 116 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,",");
/* IO - VPL Root : { 116 156 121 161 }*/
/* End Operation */

/* Begin Operation: { 147 52 163 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 142 56 147 61 }*/
/* IO - VPL Terminal : { 142 69 147 74 }*/
/* IO - VPL Terminal : { 142 82 147 87 }*/
/* IO - VPL Terminal : { 142 96 147 101 }*/
/* IO - VPL Root : { 163 77 168 82 }*/
/* End Operation */

/* Begin Operation: { 56 155 72 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 51 170 56 175 }*/
/* IO - VPL Root : { 72 170 77 175 }*/
/* End Operation */

/* Begin Operation: { 184 24 192 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 179 77 184 82 }*/
/* IO - VPL Terminal : { 179 170 184 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 315 261 331 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 331 263 336 268 }*/
/* End Operation */

/* Begin Operation: { 360 229 376 283 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 355 245 360 250 }*/
/* IO - VPL Terminal : { 355 263 360 268 }*/
/* IO - VPL Root : { 376 245 381 250 }*/
/* IO - VPL Root : { 376 263 381 268 }*/
/* End Operation */

/* Begin Operation: { 362 132 378 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,")");
/* IO - VPL Root : { 378 133 383 138 }*/
/* End Operation */

/* Begin Operation: { 407 110 423 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 402 124 407 129 }*/
/* IO - VPL Terminal : { 402 144 407 149 }*/
/* IO - VPL Root : { 423 135 428 140 }*/
/* End Operation */

/* Begin Operation: { 321 2 337 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unix Carriage Return");
/* IO - VPL Root : { 337 68 342 73 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 505 84 521 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 500 108 505 113 }*/
/* IO - VPL Terminal : { 500 125 505 130 }*/
/* IO - VPL Root : { 521 109 526 114 }*/
/* End Operation */

/* Begin Operation: { 505 157 521 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"{");
/* IO - VPL Root : { 521 158 526 163 }*/
/* End Operation */

/* Begin Operation: { 550 133 566 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 545 142 550 147 }*/
/* IO - VPL Terminal : { 545 158 550 163 }*/
/* IO - VPL Terminal : { 545 176 550 181 }*/
/* IO - VPL Root : { 566 158 571 163 }*/
/* End Operation */

/* Begin Operation: { 587 110 603 312 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"enum opTrigger outcome = kSuccess;");
/* IO - VPL Root : { 603 209 608 214 }*/
/* End Operation */

/* Begin Operation: { 632 184 648 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 627 190 632 195 }*/
/* IO - VPL Terminal : { 627 209 632 214 }*/
/* IO - VPL Terminal : { 627 229 632 234 }*/
/* IO - VPL Root : { 648 209 653 214 }*/
/* End Operation */

/* Begin Operation: { 683 32 691 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 678 126 683 131 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,2,8,1,9);
	result = connect_root_to_terminal(ptrA,1,5,1,11);
	result = connect_root_to_terminal(ptrA,1,11,1,11);
	result = connect_root_to_terminal(ptrA,2,9,2,11);
	result = connect_root_to_terminal(ptrA,1,10,3,11);
	result = connect_root_to_terminal(ptrA,2,11,3,11);
	result = connect_root_to_terminal(ptrA,2,6,1,12);
	result = connect_root_to_terminal(ptrA,2,12,1,13);
	result = connect_root_to_terminal(ptrA,1,11,1,14);
	result = connect_root_to_terminal(ptrA,1,14,1,14);
	result = connect_root_to_terminal(ptrA,2,13,2,14);
	result = connect_root_to_terminal(ptrA,1,10,3,14);
	result = connect_root_to_terminal(ptrA,2,14,3,14);
	result = connect_root_to_terminal(ptrA,1,14,1,16);
	result = connect_root_to_terminal(ptrA,1,15,2,16);
	result = connect_root_to_terminal(ptrA,1,16,1,18);
	result = connect_root_to_terminal(ptrA,1,17,2,18);
	result = connect_root_to_terminal(ptrA,1,18,1,20);
	result = connect_root_to_terminal(ptrA,1,19,2,20);
	result = connect_root_to_terminal(ptrA,1,20,1,22);
	result = connect_root_to_terminal(ptrA,1,21,2,22);
	result = connect_root_to_terminal(ptrA,1,19,3,22);
	result = connect_root_to_terminal(ptrA,1,22,1,24);
	result = connect_root_to_terminal(ptrA,1,23,2,24);
	result = connect_root_to_terminal(ptrA,1,19,3,24);
	result = connect_root_to_terminal(ptrA,1,24,1,25);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 95 206 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-r");
/* IO - VPL Terminal : { 185 127 190 132 }*/
/* IO - VPL Root : { 206 115 211 120 }*/
/* IO - VPL Root : { 206 137 211 142 }*/
/* End Operation */

/* Begin Operation: { 274 49 290 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Export The Case Text");
/* IO - VPL Terminal : { 269 75 274 80 }*/
/* IO - VPL Terminal : { 269 114 274 119 }*/
/* IO - VPL Terminal : { 269 161 274 166 }*/
/* IO - VPL Root : { 290 74 295 79 }*/
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

/* Start Cases: { 485 927 }{ 68 353 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 313 1317 }{ 644 350 } */
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

/* Begin Operation: { 139 65 155 357 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(environment, &outcome, inputRepeat, contextIndex,");
/* IO - VPL Root : { 155 209 160 214 }*/
/* End Operation */

/* Begin Operation: { 61 60 77 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 56 86 61 91 }*/
/* IO - VPL Root : { 77 76 82 81 }*/
/* IO - VPL Root : { 77 94 82 99 }*/
/* End Operation */

/* Begin Operation: { 101 17 117 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Export Name");
/* IO - VPL Terminal : { 96 74 101 79 }*/
/* IO - VPL Root : { 117 74 122 79 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 139 32 155 47 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"if(");
/* IO - VPL Root : { 155 37 160 42 }*/
/* End Operation */

/* Begin Operation: { 184 82 200 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 179 89 184 94 }*/
/* IO - VPL Terminal : { 179 107 184 112 }*/
/* IO - VPL Terminal : { 179 127 184 132 }*/
/* IO - VPL Root : { 200 107 205 112 }*/
/* End Operation */

/* Begin Operation: { 62 152 78 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-r");
/* IO - VPL Terminal : { 57 184 62 189 }*/
/* IO - VPL Root : { 78 172 83 177 }*/
/* IO - VPL Root : { 78 194 83 199 }*/
/* End Operation */

/* Begin Operation: { 102 141 118 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 97 172 102 177 }*/
/* IO - VPL Root : { 118 161 123 166 }*/
/* IO - VPL Root : { 118 183 123 188 }*/
/* End Operation */

/* Begin Operation: { 184 154 200 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 179 180 184 185 }*/
/* IO - VPL Root : { 200 170 205 175 }*/
/* IO - VPL Root : { 200 188 205 193 }*/
/* End Operation */

/* Begin Operation: { 230 159 246 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Outputs");
/* IO - VPL Terminal : { 225 188 230 193 }*/
/* IO - VPL Root : { 246 177 251 182 }*/
/* IO - VPL Root : { 246 197 251 202 }*/
/* End Operation */

/* Begin Operation: { 229 132 245 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 245 134 250 139 }*/
/* End Operation */

/* Begin Operation: { 274 102 290 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Terminal");
/* IO - VPL Terminal : { 269 107 274 112 }*/
/* IO - VPL Terminal : { 269 140 274 145 }*/
/* IO - VPL Terminal : { 269 172 274 177 }*/
/* IO - VPL Root : { 290 108 295 113 }*/
/* IO - VPL Root : { 290 172 295 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 643 929 }{ 85 355 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 407 533 }{ 228 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 48 116 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"terminal");
/* IO - VPL Root : { 116 69 121 74 }*/
/* End Operation */

/* Begin Operation: { 57 49 73 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 52 82 57 87 }*/
/* IO - VPL Root : { 73 82 78 87 }*/
/* End Operation */

/* Begin Operation: { 100 155 116 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,",");
/* IO - VPL Root : { 116 156 121 161 }*/
/* End Operation */

/* Begin Operation: { 147 52 163 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 142 56 147 61 }*/
/* IO - VPL Terminal : { 142 69 147 74 }*/
/* IO - VPL Terminal : { 142 82 147 87 }*/
/* IO - VPL Terminal : { 142 96 147 101 }*/
/* IO - VPL Root : { 163 77 168 82 }*/
/* End Operation */

/* Begin Operation: { 56 155 72 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 51 170 56 175 }*/
/* IO - VPL Root : { 72 170 77 175 }*/
/* End Operation */

/* Begin Operation: { 184 24 192 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 179 77 184 82 }*/
/* IO - VPL Terminal : { 179 170 184 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 184 229 200 285 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 179 255 184 260 }*/
/* IO - VPL Root : { 200 245 205 250 }*/
/* IO - VPL Root : { 200 263 205 268 }*/
/* End Operation */

/* Begin Operation: { 230 238 246 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Inputs");
/* IO - VPL Terminal : { 225 263 230 268 }*/
/* IO - VPL Root : { 246 254 251 259 }*/
/* IO - VPL Root : { 246 272 251 277 }*/
/* End Operation */

/* Begin Operation: { 322 155 338 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Root");
/* IO - VPL Terminal : { 317 163 322 168 }*/
/* IO - VPL Terminal : { 317 188 322 193 }*/
/* IO - VPL Terminal : { 317 215 322 220 }*/
/* IO - VPL Root : { 338 164 343 169 }*/
/* IO - VPL Root : { 338 216 343 221 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 590 897 }{ 68 350 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 407 533 }{ 228 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 59 116 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"root");
/* IO - VPL Root : { 116 69 121 74 }*/
/* End Operation */

/* Begin Operation: { 57 49 73 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 52 82 57 87 }*/
/* IO - VPL Root : { 73 82 78 87 }*/
/* End Operation */

/* Begin Operation: { 100 155 116 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,",");
/* IO - VPL Root : { 116 156 121 161 }*/
/* End Operation */

/* Begin Operation: { 147 52 163 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 142 56 147 61 }*/
/* IO - VPL Terminal : { 142 69 147 74 }*/
/* IO - VPL Terminal : { 142 82 147 87 }*/
/* IO - VPL Terminal : { 142 96 147 101 }*/
/* IO - VPL Root : { 163 77 168 82 }*/
/* End Operation */

/* Begin Operation: { 56 155 72 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 51 170 56 175 }*/
/* IO - VPL Root : { 72 170 77 175 }*/
/* End Operation */

/* Begin Operation: { 184 24 192 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 179 77 184 82 }*/
/* IO - VPL Terminal : { 179 170 184 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 315 261 331 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 331 263 336 268 }*/
/* End Operation */

/* Begin Operation: { 360 229 376 283 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 355 245 360 250 }*/
/* IO - VPL Terminal : { 355 263 360 268 }*/
/* IO - VPL Root : { 376 245 381 250 }*/
/* IO - VPL Root : { 376 263 381 268 }*/
/* End Operation */

/* Begin Operation: { 362 132 378 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,")");
/* IO - VPL Root : { 378 133 383 138 }*/
/* End Operation */

/* Begin Operation: { 407 110 423 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 402 124 407 129 }*/
/* IO - VPL Terminal : { 402 144 407 149 }*/
/* IO - VPL Root : { 423 135 428 140 }*/
/* End Operation */

/* Begin Operation: { 406 49 422 55 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,")");
/* IO - VPL Root : { 422 50 427 55 }*/
/* End Operation */

/* Begin Operation: { 321 2 337 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unix Carriage Return");
/* IO - VPL Root : { 337 68 342 73 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 451 25 467 79 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 446 32 451 37 }*/
/* IO - VPL Terminal : { 446 50 451 55 }*/
/* IO - VPL Terminal : { 446 68 451 73 }*/
/* IO - VPL Root : { 467 50 472 55 }*/
/* End Operation */

/* Begin Operation: { 530 50 546 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 525 66 530 71 }*/
/* IO - VPL Terminal : { 525 84 530 89 }*/
/* IO - VPL Root : { 546 75 551 80 }*/
/* End Operation */

/* Begin Operation: { 598 30 606 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 593 124 598 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,1,3,5);
	result = connect_root_to_terminal(ptrA,3,0,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,2,8,1,9);
	result = connect_root_to_terminal(ptrA,1,5,1,11);
	result = connect_root_to_terminal(ptrA,1,11,1,11);
	result = connect_root_to_terminal(ptrA,2,9,2,11);
	result = connect_root_to_terminal(ptrA,1,10,3,11);
	result = connect_root_to_terminal(ptrA,2,11,3,11);
	result = connect_root_to_terminal(ptrA,2,6,1,12);
	result = connect_root_to_terminal(ptrA,2,12,1,13);
	result = connect_root_to_terminal(ptrA,1,11,1,14);
	result = connect_root_to_terminal(ptrA,1,14,1,14);
	result = connect_root_to_terminal(ptrA,2,13,2,14);
	result = connect_root_to_terminal(ptrA,1,10,3,14);
	result = connect_root_to_terminal(ptrA,2,14,3,14);
	result = connect_root_to_terminal(ptrA,1,14,1,16);
	result = connect_root_to_terminal(ptrA,1,15,2,16);
	result = connect_root_to_terminal(ptrA,1,16,1,18);
	result = connect_root_to_terminal(ptrA,1,17,2,18);
	result = connect_root_to_terminal(ptrA,1,18,1,21);
	result = connect_root_to_terminal(ptrA,1,19,2,21);
	result = connect_root_to_terminal(ptrA,1,20,3,21);
	result = connect_root_to_terminal(ptrA,1,0,1,22);
	result = connect_root_to_terminal(ptrA,1,21,2,22);
	result = connect_root_to_terminal(ptrA,1,22,1,23);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 358 91 374 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create The Footer");
/* IO - VPL Terminal : { 353 148 358 153 }*/
/* IO - VPL Root : { 374 148 379 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 492 809 }{ 44 328 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 551 844 }{ 304 264 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 72 114 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unix Carriage Return");
/* IO - VPL Root : { 114 138 119 143 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 175 80 191 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"}");
/* IO - VPL Root : { 191 81 196 86 }*/
/* End Operation */

/* Begin Operation: { 55 19 71 108 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"return outcome;");
/* IO - VPL Root : { 71 61 76 66 }*/
/* End Operation */

/* Begin Operation: { 147 45 163 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 142 61 147 66 }*/
/* IO - VPL Terminal : { 142 79 147 84 }*/
/* IO - VPL Root : { 163 70 168 75 }*/
/* End Operation */

/* Begin Operation: { 220 61 236 115 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 215 70 220 75 }*/
/* IO - VPL Terminal : { 215 81 220 86 }*/
/* IO - VPL Terminal : { 215 95 220 100 }*/
/* IO - VPL Terminal : { 215 108 220 113 }*/
/* IO - VPL Root : { 236 86 241 91 }*/
/* End Operation */

/* Begin Operation: { 262 30 270 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 257 86 262 91 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,1,3,5);
	result = connect_root_to_terminal(ptrA,1,1,4,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 316 48 332 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Export The Case Text");
/* IO - VPL Terminal : { 311 74 316 79 }*/
/* IO - VPL Terminal : { 311 137 316 142 }*/
/* IO - VPL Terminal : { 311 160 316 165 }*/
/* IO - VPL Root : { 332 73 337 78 }*/
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

/* Start Cases: { 485 927 }{ 68 353 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 313 1317 }{ 644 350 } */
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

/* Begin Operation: { 139 65 155 357 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"(environment, &outcome, inputRepeat, contextIndex,");
/* IO - VPL Root : { 155 209 160 214 }*/
/* End Operation */

/* Begin Operation: { 61 60 77 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 56 86 61 91 }*/
/* IO - VPL Root : { 77 76 82 81 }*/
/* IO - VPL Root : { 77 94 82 99 }*/
/* End Operation */

/* Begin Operation: { 101 17 117 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Export Name");
/* IO - VPL Terminal : { 96 74 101 79 }*/
/* IO - VPL Root : { 117 74 122 79 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 184 82 200 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 179 98 184 103 }*/
/* IO - VPL Terminal : { 179 116 184 121 }*/
/* IO - VPL Root : { 200 107 205 112 }*/
/* End Operation */

/* Begin Operation: { 62 152 78 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-r");
/* IO - VPL Terminal : { 57 184 62 189 }*/
/* IO - VPL Root : { 78 172 83 177 }*/
/* IO - VPL Root : { 78 194 83 199 }*/
/* End Operation */

/* Begin Operation: { 102 141 118 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 97 172 102 177 }*/
/* IO - VPL Root : { 118 161 123 166 }*/
/* IO - VPL Root : { 118 183 123 188 }*/
/* End Operation */

/* Begin Operation: { 184 154 200 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 179 180 184 185 }*/
/* IO - VPL Root : { 200 170 205 175 }*/
/* IO - VPL Root : { 200 188 205 193 }*/
/* End Operation */

/* Begin Operation: { 230 159 246 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Outputs");
/* IO - VPL Terminal : { 225 188 230 193 }*/
/* IO - VPL Root : { 246 177 251 182 }*/
/* IO - VPL Root : { 246 197 251 202 }*/
/* End Operation */

/* Begin Operation: { 229 132 245 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 245 134 250 139 }*/
/* End Operation */

/* Begin Operation: { 274 102 290 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Terminal");
/* IO - VPL Terminal : { 269 107 274 112 }*/
/* IO - VPL Terminal : { 269 140 274 145 }*/
/* IO - VPL Terminal : { 269 172 274 177 }*/
/* IO - VPL Root : { 290 108 295 113 }*/
/* IO - VPL Root : { 290 172 295 177 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 643 929 }{ 85 355 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 407 533 }{ 228 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 48 116 95 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"terminal");
/* IO - VPL Root : { 116 69 121 74 }*/
/* End Operation */

/* Begin Operation: { 57 49 73 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 52 82 57 87 }*/
/* IO - VPL Root : { 73 82 78 87 }*/
/* End Operation */

/* Begin Operation: { 100 155 116 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,",");
/* IO - VPL Root : { 116 156 121 161 }*/
/* End Operation */

/* Begin Operation: { 147 52 163 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 142 56 147 61 }*/
/* IO - VPL Terminal : { 142 69 147 74 }*/
/* IO - VPL Terminal : { 142 82 147 87 }*/
/* IO - VPL Terminal : { 142 96 147 101 }*/
/* IO - VPL Root : { 163 77 168 82 }*/
/* End Operation */

/* Begin Operation: { 56 155 72 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 51 170 56 175 }*/
/* IO - VPL Root : { 72 170 77 175 }*/
/* End Operation */

/* Begin Operation: { 184 24 192 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 179 77 184 82 }*/
/* IO - VPL Terminal : { 179 170 184 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 184 229 200 285 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 179 255 184 260 }*/
/* IO - VPL Root : { 200 245 205 250 }*/
/* IO - VPL Root : { 200 263 205 268 }*/
/* End Operation */

/* Begin Operation: { 230 238 246 292 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Inputs");
/* IO - VPL Terminal : { 225 263 230 268 }*/
/* IO - VPL Root : { 246 254 251 259 }*/
/* IO - VPL Root : { 246 272 251 277 }*/
/* End Operation */

/* Begin Operation: { 322 155 338 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Make Root");
/* IO - VPL Terminal : { 317 163 322 168 }*/
/* IO - VPL Terminal : { 317 188 322 193 }*/
/* IO - VPL Terminal : { 317 215 322 220 }*/
/* IO - VPL Root : { 338 164 343 169 }*/
/* IO - VPL Root : { 338 216 343 221 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 590 897 }{ 68 350 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 407 533 }{ 228 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 56 33 61 }*/
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 132 33 137 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 59 116 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"root");
/* IO - VPL Root : { 116 69 121 74 }*/
/* End Operation */

/* Begin Operation: { 57 49 73 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 52 82 57 87 }*/
/* IO - VPL Root : { 73 82 78 87 }*/
/* End Operation */

/* Begin Operation: { 100 155 116 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,",");
/* IO - VPL Root : { 116 156 121 161 }*/
/* End Operation */

/* Begin Operation: { 147 52 163 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"\"join\"");
/* IO - VPL Terminal : { 142 56 147 61 }*/
/* IO - VPL Terminal : { 142 69 147 74 }*/
/* IO - VPL Terminal : { 142 82 147 87 }*/
/* IO - VPL Terminal : { 142 96 147 101 }*/
/* IO - VPL Root : { 163 77 168 82 }*/
/* End Operation */

/* Begin Operation: { 56 155 72 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 51 170 56 175 }*/
/* IO - VPL Root : { 72 170 77 175 }*/
/* End Operation */

/* Begin Operation: { 184 24 192 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 179 77 184 82 }*/
/* IO - VPL Terminal : { 179 170 184 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,2,3,4);
	result = connect_root_to_terminal(ptrA,1,3,4,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 315 261 331 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 331 263 336 268 }*/
/* End Operation */

/* Begin Operation: { 360 229 376 283 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"suffix");
/* IO - VPL Terminal : { 355 245 360 250 }*/
/* IO - VPL Terminal : { 355 263 360 268 }*/
/* IO - VPL Root : { 376 245 381 250 }*/
/* IO - VPL Root : { 376 263 381 268 }*/
/* End Operation */

/* Begin Operation: { 362 132 378 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,")");
/* IO - VPL Root : { 378 133 383 138 }*/
/* End Operation */

/* Begin Operation: { 407 110 423 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 402 124 407 129 }*/
/* IO - VPL Terminal : { 402 144 407 149 }*/
/* IO - VPL Root : { 423 135 428 140 }*/
/* End Operation */

/* Begin Operation: { 406 49 422 55 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,";");
/* IO - VPL Root : { 422 50 427 55 }*/
/* End Operation */

/* Begin Operation: { 321 2 337 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unix Carriage Return");
/* IO - VPL Root : { 337 68 342 73 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 451 25 467 79 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 446 32 451 37 }*/
/* IO - VPL Terminal : { 446 50 451 55 }*/
/* IO - VPL Terminal : { 446 68 451 73 }*/
/* IO - VPL Root : { 467 50 472 55 }*/
/* End Operation */

/* Begin Operation: { 530 50 546 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 525 66 530 71 }*/
/* IO - VPL Terminal : { 525 84 530 89 }*/
/* IO - VPL Root : { 546 75 551 80 }*/
/* End Operation */

/* Begin Operation: { 598 30 606 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 593 124 598 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,7,1,8);
	result = connect_root_to_terminal(ptrA,1,4,1,10);
	result = connect_root_to_terminal(ptrA,1,10,1,10);
	result = connect_root_to_terminal(ptrA,2,8,2,10);
	result = connect_root_to_terminal(ptrA,1,9,3,10);
	result = connect_root_to_terminal(ptrA,2,10,3,10);
	result = connect_root_to_terminal(ptrA,2,5,1,11);
	result = connect_root_to_terminal(ptrA,2,11,1,12);
	result = connect_root_to_terminal(ptrA,1,10,1,13);
	result = connect_root_to_terminal(ptrA,1,13,1,13);
	result = connect_root_to_terminal(ptrA,2,12,2,13);
	result = connect_root_to_terminal(ptrA,1,9,3,13);
	result = connect_root_to_terminal(ptrA,2,13,3,13);
	result = connect_root_to_terminal(ptrA,1,13,1,15);
	result = connect_root_to_terminal(ptrA,1,14,2,15);
	result = connect_root_to_terminal(ptrA,1,15,1,17);
	result = connect_root_to_terminal(ptrA,1,16,2,17);
	result = connect_root_to_terminal(ptrA,1,17,1,20);
	result = connect_root_to_terminal(ptrA,1,18,2,20);
	result = connect_root_to_terminal(ptrA,1,19,3,20);
	result = connect_root_to_terminal(ptrA,1,0,1,21);
	result = connect_root_to_terminal(ptrA,1,20,2,21);
	result = connect_root_to_terminal(ptrA,1,21,1,22);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 400 57 416 111 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 395 73 400 78 }*/
/* IO - VPL Terminal : { 395 91 400 96 }*/
/* IO - VPL Root : { 416 82 421 87 }*/
/* End Operation */

/* Begin Operation: { 106 51 122 64 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"");
/* IO - VPL Root : { 122 55 127 60 }*/
/* End Operation */

/* Begin Operation: { 148 36 164 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Export The Case");
/* IO - VPL Terminal : { 143 55 148 60 }*/
/* IO - VPL Terminal : { 143 84 148 89 }*/
/* IO - VPL Root : { 164 56 169 61 }*/
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

/* Start Cases: { 504 1012 }{ 84 315 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 624 686 }{ 269 273 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 120 74 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 53 146 58 151 }*/
/* IO - VPL Root : { 74 136 79 141 }*/
/* IO - VPL Root : { 74 154 79 159 }*/
/* End Operation */

/* Begin Operation: { 115 110 131 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Export Text");
/* IO - VPL Terminal : { 110 154 115 159 }*/
/* IO - VPL Root : { 131 154 136 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 159 66 175 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 154 82 159 87 }*/
/* IO - VPL Terminal : { 154 100 159 105 }*/
/* IO - VPL Root : { 175 91 180 96 }*/
/* End Operation */

/* Begin Operation: { 213 27 221 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 208 121 213 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 442 40 458 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 437 56 442 61 }*/
/* IO - VPL Terminal : { 437 74 442 79 }*/
/* IO - VPL Root : { 458 65 463 70 }*/
/* End Operation */

/* Begin Operation: { 484 29 492 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 479 123 484 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,7,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,2,4,3,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,1,9);
	result = connect_root_to_terminal(ptrA,2,6,2,9);
	result = connect_root_to_terminal(ptrA,2,4,3,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,1,8,2,10);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
	result = connect_root_to_terminal(ptrA,1,12,1,12);
	result = connect_root_to_terminal(ptrA,1,0,2,12);
	result = connect_root_to_terminal(ptrA,1,12,1,13);
	result = connect_root_to_terminal(ptrA,1,10,2,13);
	result = connect_root_to_terminal(ptrA,1,13,1,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 274 27 282 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 269 122 274 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,1,0,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 387 325 }{ 250 358 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 43 16 59 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/C Code Header");
/* IO - VPL Terminal : { 38 80 43 85 }*/
/* IO - VPL Root : { 59 80 64 85 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 85 153 101 317 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/C Code Export Cases");
/* IO - VPL Terminal : { 80 234 85 239 }*/
/* IO - VPL Root : { 101 234 106 239 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 45 179 61 279 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/C Code Value");
/* IO - VPL Terminal : { 40 227 45 232 }*/
/* IO - VPL Root : { 61 227 66 232 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 85 64 101 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 80 80 85 85 }*/
/* IO - VPL Terminal : { 80 98 85 103 }*/
/* IO - VPL Root : { 101 90 106 95 }*/
/* End Operation */

/* Begin Operation: { 134 65 150 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 129 90 134 95 }*/
/* IO - VPL Terminal : { 129 117 134 122 }*/
/* IO - VPL Root : { 150 103 155 108 }*/
/* End Operation */

/* Begin Operation: { 134 156 150 284 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/C Code Footer");
/* IO - VPL Terminal : { 129 219 134 224 }*/
/* IO - VPL Root : { 150 219 155 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 169 78 185 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 164 103 169 108 }*/
/* IO - VPL Terminal : { 164 130 169 135 }*/
/* IO - VPL Root : { 185 116 190 121 }*/
/* End Operation */

/* Begin Operation: { 209 20 217 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 204 115 209 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Full_20_Name_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Full_20_Name_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 321 335 }{ 188 252 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 26 76 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Grandparent Helper");
/* IO - VPL Terminal : { 55 115 60 120 }*/
/* IO - VPL Root : { 76 115 81 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 36 119 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Full Universal Name");
/* IO - VPL Terminal : { 98 88 103 93 }*/
/* IO - VPL Terminal : { 98 142 103 147 }*/
/* IO - VPL Root : { 119 115 124 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 151 20 159 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 146 115 151 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Get_20_Inarity_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Get_20_Inarity_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 447 374 }{ 165 269 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 74 73 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Inarity");
/* IO - VPL Terminal : { 52 115 57 120 }*/
/* IO - VPL Root : { 73 107 78 112 }*/
/* IO - VPL Root : { 73 123 78 128 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 115 100 120 }*/
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


Nat4 VPLU_Universal_20_Data_2F_Get_20_Outarity_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Get_20_Outarity_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 447 374 }{ 165 269 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 70 73 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Outarity");
/* IO - VPL Terminal : { 52 115 57 120 }*/
/* IO - VPL Root : { 73 107 78 112 }*/
/* IO - VPL Root : { 73 123 78 128 }*/
/* End Operation */

/* Begin Operation: { 100 20 108 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 95 115 100 120 }*/
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


Nat4 VPLU_Universal_20_Data_2F_Get_20_Project_20_Data_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Get_20_Project_20_Data_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 369 363 }{ 317 361 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 76 66 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 45 115 50 120 }*/
/* IO - VPL Root : { 66 107 71 112 }*/
/* IO - VPL Root : { 66 123 71 128 }*/
/* End Operation */

/* Begin Operation: { 95 218 110 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 90 231 95 236 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 94 83 110 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 89 123 94 128 }*/
/* IO - VPL Root : { 110 115 115 120 }*/
/* IO - VPL Root : { 110 131 115 136 }*/
/* End Operation */

/* Begin Operation: { 140 218 155 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 135 231 140 236 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 140 91 156 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 135 131 140 136 }*/
/* IO - VPL Root : { 156 123 161 128 }*/
/* IO - VPL Root : { 156 139 161 144 }*/
/* End Operation */

/* Begin Operation: { 183 218 198 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 178 231 183 236 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 182 100 198 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 177 139 182 144 }*/
/* IO - VPL Root : { 198 131 203 136 }*/
/* IO - VPL Root : { 198 147 203 152 }*/
/* End Operation */

/* Begin Operation: { 221 244 236 274 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 216 257 221 262 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 220 76 236 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 215 147 220 152 }*/
/* IO - VPL Root : { 236 147 241 152 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 259 20 267 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 254 115 259 120 }*/
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
	result = connect_root_to_terminal(ptrA,2,7,1,8);
	result = connect_root_to_terminal(ptrA,2,7,1,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [5 to 4] */
/* Synchro [7 to 6] */
/* Synchro [9 to 8] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 378 366 }{ 177 283 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 102 79 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 79 115 84 120 }*/
/* End Operation */

/* Begin Operation: { 104 20 112 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 99 115 104 120 }*/
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


Nat4 VPLU_Universal_20_Data_2F_Initialize_20_Item_20_Data_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Initialize_20_Item_20_Data_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 477 301 }{ 275 631 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 72 35 77 }*/
/* IO - VPL Root : { 30 144 35 149 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 238 122 326 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create Case");
/* IO - VPL Terminal : { 101 280 106 285 }*/
/* IO - VPL Root : { 122 280 127 285 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 274 312 }{ 50 296 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 543 913 }{ 319 290 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 134 35 139 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 43 80 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Item Data");
/* IO - VPL Terminal : { 59 91 64 96 }*/
/* IO - VPL Root : { 80 91 85 96 }*/
/* End Operation */

/* Begin Operation: { 64 159 80 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Case Data");
/* IO - VPL Terminal : { 59 195 64 200 }*/
/* IO - VPL Root : { 80 195 85 200 }*/
/* End Operation */

/* Begin Operation: { 106 164 122 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 101 195 106 200 }*/
/* IO - VPL Terminal : { 101 211 106 216 }*/
/* IO - VPL Root : { 122 203 127 208 }*/
/* End Operation */

/* Begin Operation: { 148 50 164 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Helper");
/* IO - VPL Terminal : { 143 91 148 96 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 203 23 219 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Default Case");
/* IO - VPL Terminal : { 198 47 203 52 }*/
/* IO - VPL Terminal : { 198 90 203 95 }*/
/* IO - VPL Terminal : { 198 134 203 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 270 22 278 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 265 117 270 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,1,2,5);
	result = connect_root_to_terminal(ptrA,1,0,3,5);
	result = connect_root_to_terminal(ptrA,1,1,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 106 80 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"List Data");
/* IO - VPL Terminal : { 59 152 64 157 }*/
/* IO - VPL Root : { 80 152 85 157 }*/
/* End Operation */

/* Begin Operation: { 64 222 79 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
/* IO - VPL Root : { 79 247 84 252 }*/
/* End Operation */

/* Begin Operation: { 106 105 122 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 101 152 106 157 }*/
/* IO - VPL Terminal : { 101 168 106 173 }*/
/* IO - VPL Root : { 122 160 127 165 }*/
/* End Operation */

/* Begin Operation: { 148 126 164 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 143 160 148 165 }*/
/* IO - VPL Root : { 164 160 169 165 }*/
/* End Operation */

/* Begin Operation: { 190 117 206 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Lists");
/* IO - VPL Terminal : { 185 144 190 149 }*/
/* IO - VPL Terminal : { 185 160 190 165 }*/
/* IO - VPL Root : { 206 152 211 157 }*/
/* End Operation */

/* Begin Operation: { 148 260 164 305 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 143 280 148 285 }*/
/* IO - VPL Root : { 164 280 169 285 }*/
/* End Operation */

/* Begin Operation: { 190 254 206 296 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 185 266 190 271 }*/
/* IO - VPL Terminal : { 185 280 190 285 }*/
/* IO - VPL Root : { 206 273 211 278 }*/
/* End Operation */

/* Begin Operation: { 64 296 81 398 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"change name?");
/* IO - VPL Terminal : { 58 328 63 333 }*/
/* IO - VPL Terminal : { 58 362 63 367 }*/
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

/* Start Operations: { 60 60 }{ 344 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 160 95 326 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Grandparent Helper");
/* IO - VPL Terminal : { 72 241 77 246 }*/
/* IO - VPL Root : { 96 241 101 246 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 218 137 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 114 241 119 246 }*/
/* IO - VPL Root : { 138 241 143 246 }*/
/* End Operation */

/* Begin Operation: { 162 210 179 276 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Class Data");
/* IO - VPL Terminal : { 156 241 161 246 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 78 71 95 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Root : { 96 88 101 93 }*/
/* IO - VPL Root : { 96 107 101 112 }*/
/* End Operation */

/* Begin Operation: { 120 50 137 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"Untitled Universal\"");
/* IO - VPL Terminal : { 114 107 119 112 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 162 65 179 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"Untitled Method\"");
/* IO - VPL Root : { 180 117 185 122 }*/
/* End Operation */

/* Begin Operation: { 204 81 221 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 117 203 122 }*/
/* IO - VPL Root : { 222 108 227 113 }*/
/* End Operation */

/* Begin Operation: { 246 145 263 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 240 162 245 167 }*/
/* IO - VPL Terminal : { 240 181 245 186 }*/
/* IO - VPL Root : { 264 172 269 177 }*/
/* End Operation */

/* Begin Operation: { 288 36 296 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 232 25 240 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,1,4,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,2,0,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 881 414 }{ 265 752 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 72 35 77 }*/
/* IO - VPL Root : { 30 144 35 149 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 31 80 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"List Data");
/* IO - VPL Terminal : { 59 77 64 82 }*/
/* IO - VPL Root : { 80 77 85 82 }*/
/* End Operation */

/* Begin Operation: { 64 147 79 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
/* IO - VPL Root : { 79 172 84 177 }*/
/* End Operation */

/* Begin Operation: { 106 30 122 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 101 77 106 82 }*/
/* IO - VPL Terminal : { 101 93 106 98 }*/
/* IO - VPL Root : { 122 85 127 90 }*/
/* End Operation */

/* Begin Operation: { 148 51 164 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 143 85 148 90 }*/
/* IO - VPL Root : { 164 85 169 90 }*/
/* End Operation */

/* Begin Operation: { 190 42 206 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Lists");
/* IO - VPL Terminal : { 185 69 190 74 }*/
/* IO - VPL Terminal : { 185 85 190 90 }*/
/* IO - VPL Root : { 206 77 211 82 }*/
/* End Operation */

/* Begin Operation: { 64 300 80 394 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"List Data");
/* IO - VPL Terminal : { 59 346 64 351 }*/
/* IO - VPL Root : { 80 346 85 351 }*/
/* End Operation */

/* Begin Operation: { 64 410 79 491 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 79 448 84 453 }*/
/* End Operation */

/* Begin Operation: { 106 299 122 411 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 101 346 106 351 }*/
/* IO - VPL Terminal : { 101 362 106 367 }*/
/* IO - VPL Root : { 122 354 127 359 }*/
/* End Operation */

/* Begin Operation: { 148 320 164 390 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 143 354 148 359 }*/
/* IO - VPL Root : { 164 354 169 359 }*/
/* End Operation */

/* Begin Operation: { 106 182 122 270 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create Case");
/* IO - VPL Root : { 122 224 127 229 }*/
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 274 312 }{ 50 296 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 238 340 }{ 243 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 43 80 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Item Data");
/* IO - VPL Terminal : { 59 91 64 96 }*/
/* IO - VPL Root : { 80 91 85 96 }*/
/* End Operation */

/* Begin Operation: { 64 159 80 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Case Data");
/* IO - VPL Terminal : { 59 195 64 200 }*/
/* IO - VPL Root : { 80 195 85 200 }*/
/* End Operation */

/* Begin Operation: { 106 164 122 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 101 195 106 200 }*/
/* IO - VPL Terminal : { 101 211 106 216 }*/
/* IO - VPL Root : { 122 203 127 208 }*/
/* End Operation */

/* Begin Operation: { 148 50 164 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Helper");
/* IO - VPL Terminal : { 143 91 148 96 }*/
/* IO - VPL Terminal : { 143 134 148 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 91 190 96 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 274 206 346 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Lists");
/* IO - VPL Terminal : { 185 301 190 306 }*/
/* IO - VPL Terminal : { 185 317 190 322 }*/
/* IO - VPL Root : { 206 309 211 314 }*/
/* End Operation */

/* Begin Operation: { 106 436 122 572 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create Input Bar");
/* IO - VPL Terminal : { 101 500 106 505 }*/
/* IO - VPL Root : { 122 500 127 505 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 274 312 }{ 50 296 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 238 340 }{ 339 459 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 88 33 93 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 59 136 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Item Data");
/* IO - VPL Terminal : { 115 107 120 112 }*/
/* IO - VPL Root : { 136 107 141 112 }*/
/* End Operation */

/* Begin Operation: { 119 302 134 398 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 22 22 30 214 )");
/* IO - VPL Root : { 134 348 139 353 }*/
/* End Operation */

/* Begin Operation: { 168 77 184 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 163 107 168 112 }*/
/* IO - VPL Terminal : { 163 123 168 128 }*/
/* IO - VPL Root : { 184 115 189 120 }*/
/* End Operation */

/* Begin Operation: { 82 314 97 370 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"input_bar");
/* IO - VPL Root : { 97 340 102 345 }*/
/* End Operation */

/* Begin Operation: { 46 38 62 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Operation Data");
/* IO - VPL Terminal : { 41 100 46 105 }*/
/* IO - VPL Root : { 62 100 67 105 }*/
/* End Operation */

/* Begin Operation: { 47 184 63 306 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Roots");
/* IO - VPL Terminal : { 42 244 47 249 }*/
/* IO - VPL Root : { 63 244 68 249 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 83 66 99 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Outputs");
/* IO - VPL Terminal : { 78 100 83 105 }*/
/* IO - VPL Terminal : { 78 116 83 121 }*/
/* IO - VPL Root : { 99 108 104 113 }*/
/* End Operation */

/* Begin Operation: { 119 207 135 279 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Type");
/* IO - VPL Terminal : { 114 234 119 239 }*/
/* IO - VPL Terminal : { 114 250 119 255 }*/
/* IO - VPL Root : { 135 242 140 247 }*/
/* End Operation */

/* Begin Operation: { 168 212 184 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 163 242 168 247 }*/
/* IO - VPL Terminal : { 163 258 168 263 }*/
/* IO - VPL Root : { 184 250 189 255 }*/
/* End Operation */

/* Begin Operation: { 209 219 225 299 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 204 250 209 255 }*/
/* IO - VPL Terminal : { 204 266 209 271 }*/
/* IO - VPL Root : { 225 258 230 263 }*/
/* End Operation */

/* Begin Operation: { 247 74 263 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Helper");
/* IO - VPL Terminal : { 242 115 247 120 }*/
/* IO - VPL Terminal : { 242 158 247 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 83 162 99 286 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Position Root");
/* IO - VPL Terminal : { 78 202 83 207 }*/
/* IO - VPL Terminal : { 78 244 83 249 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 289 20 297 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 284 115 289 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,4,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,2,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,1,3,2,10);
	result = connect_root_to_terminal(ptrA,1,3,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,5,1,12);
	result = connect_root_to_terminal(ptrA,1,6,2,12);
	result = connect_root_to_terminal(ptrA,1,3,1,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [12 to 7] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 106 588 122 732 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create Output Bar");
/* IO - VPL Terminal : { 101 654 106 659 }*/
/* IO - VPL Root : { 122 655 127 660 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 293 290 }{ 50 340 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 263 350 }{ 429 463 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 88 33 93 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 149 59 165 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Item Data");
/* IO - VPL Terminal : { 144 107 149 112 }*/
/* IO - VPL Root : { 165 107 170 112 }*/
/* End Operation */

/* Begin Operation: { 188 302 203 398 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 64 22 72 214 )");
/* IO - VPL Root : { 203 348 208 353 }*/
/* End Operation */

/* Begin Operation: { 237 77 253 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 232 107 237 112 }*/
/* IO - VPL Terminal : { 232 123 237 128 }*/
/* IO - VPL Root : { 253 115 258 120 }*/
/* End Operation */

/* Begin Operation: { 151 221 166 283 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"output_bar");
/* IO - VPL Root : { 166 250 171 255 }*/
/* End Operation */

/* Begin Operation: { 52 46 68 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Operation Data");
/* IO - VPL Terminal : { 47 108 52 113 }*/
/* IO - VPL Root : { 68 108 73 113 }*/
/* End Operation */

/* Begin Operation: { 52 207 68 353 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Terminals");
/* IO - VPL Terminal : { 47 279 52 284 }*/
/* IO - VPL Root : { 68 279 73 284 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 78 119 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Inputs");
/* IO - VPL Terminal : { 98 108 103 113 }*/
/* IO - VPL Terminal : { 98 124 103 129 }*/
/* IO - VPL Root : { 119 116 124 121 }*/
/* End Operation */

/* Begin Operation: { 188 207 204 279 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Type");
/* IO - VPL Terminal : { 183 234 188 239 }*/
/* IO - VPL Terminal : { 183 250 188 255 }*/
/* IO - VPL Root : { 204 242 209 247 }*/
/* End Operation */

/* Begin Operation: { 237 212 253 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 232 242 237 247 }*/
/* IO - VPL Terminal : { 232 258 237 263 }*/
/* IO - VPL Root : { 253 250 258 255 }*/
/* End Operation */

/* Begin Operation: { 278 219 294 299 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 273 250 278 255 }*/
/* IO - VPL Terminal : { 273 266 278 271 }*/
/* IO - VPL Root : { 294 258 299 263 }*/
/* End Operation */

/* Begin Operation: { 316 74 332 200 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Helper");
/* IO - VPL Terminal : { 311 115 316 120 }*/
/* IO - VPL Terminal : { 311 158 316 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 181 119 329 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Position Terminal");
/* IO - VPL Terminal : { 98 229 103 234 }*/
/* IO - VPL Terminal : { 98 279 103 284 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 358 20 366 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 353 115 358 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,1,4,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,2,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,1,3,2,10);
	result = connect_root_to_terminal(ptrA,1,3,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,5,1,12);
	result = connect_root_to_terminal(ptrA,1,6,2,12);
	result = connect_root_to_terminal(ptrA,1,3,1,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [12 to 7] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 562 164 607 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 143 571 148 576 }*/
/* IO - VPL Terminal : { 143 594 148 599 }*/
/* IO - VPL Root : { 164 582 169 587 }*/
/* End Operation */

/* Begin Operation: { 190 428 206 470 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 185 440 190 445 }*/
/* IO - VPL Terminal : { 185 454 190 459 }*/
/* IO - VPL Root : { 206 447 211 452 }*/
/* End Operation */

/* Begin Operation: { 148 171 164 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 143 191 148 196 }*/
/* IO - VPL Root : { 164 191 169 196 }*/
/* End Operation */

/* Begin Operation: { 190 165 206 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"List");
/* IO - VPL Terminal : { 185 177 190 182 }*/
/* IO - VPL Terminal : { 185 191 190 196 }*/
/* IO - VPL Root : { 206 184 211 189 }*/
/* End Operation */

/* Begin Operation: { 232 28 240 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
	result = connect_root_to_terminal(ptrA,1,9,2,11);
	result = connect_root_to_terminal(ptrA,1,0,1,12);
	result = connect_root_to_terminal(ptrA,1,0,1,13);
	result = connect_root_to_terminal(ptrA,1,12,1,14);
	result = connect_root_to_terminal(ptrA,1,13,2,14);
	result = connect_root_to_terminal(ptrA,1,8,1,15);
	result = connect_root_to_terminal(ptrA,1,14,2,15);
	result = connect_root_to_terminal(ptrA,1,10,1,16);
	result = connect_root_to_terminal(ptrA,1,3,1,17);
	result = connect_root_to_terminal(ptrA,1,16,2,17);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 757 828 }{ 291 397 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 70 33 75 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 104 66 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"List Data");
/* IO - VPL Terminal : { 45 150 50 155 }*/
/* IO - VPL Root : { 66 150 71 155 }*/
/* End Operation */

/* Begin Operation: { 96 141 111 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
/* IO - VPL Root : { 111 166 116 171 }*/
/* End Operation */

/* Begin Operation: { 133 103 149 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 128 150 133 155 }*/
/* IO - VPL Terminal : { 128 166 133 171 }*/
/* IO - VPL Root : { 149 158 154 163 }*/
/* End Operation */

/* Begin Operation: { 170 124 186 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 165 158 170 163 }*/
/* IO - VPL Root : { 186 158 191 163 }*/
/* End Operation */

/* Begin Operation: { 206 115 222 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Lists");
/* IO - VPL Terminal : { 201 142 206 147 }*/
/* IO - VPL Terminal : { 201 158 206 163 }*/
/* IO - VPL Root : { 222 150 227 155 }*/
/* End Operation */

/* Begin Operation: { 238 20 246 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Install_20_Names_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Install_20_Names_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 265 337 }{ 299 293 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 94 33 99 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 110 69 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 48 142 53 147 }*/
/* IO - VPL Root : { 69 134 74 139 }*/
/* IO - VPL Root : { 69 150 74 155 }*/
/* End Operation */

/* Begin Operation: { 120 155 136 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 115 198 120 203 }*/
/* IO - VPL Root : { 136 198 141 203 }*/
/* End Operation */

/* Begin Operation: { 156 58 172 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 151 94 156 99 }*/
/* IO - VPL Root : { 172 86 177 91 }*/
/* IO - VPL Root : { 172 102 177 107 }*/
/* End Operation */

/* Begin Operation: { 121 258 136 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 136 261 141 266 }*/
/* End Operation */

/* Begin Operation: { 156 175 172 273 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"make-list");
/* IO - VPL Terminal : { 151 198 156 203 }*/
/* IO - VPL Terminal : { 151 223 156 228 }*/
/* IO - VPL Terminal : { 151 248 156 253 }*/
/* IO - VPL Root : { 172 223 177 228 }*/
/* End Operation */

/* Begin Operation: { 199 103 215 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Install New Name");
/* IO - VPL Terminal : { 194 121 199 126 }*/
/* IO - VPL Terminal : { 194 146 199 158 }*/
/* IO - VPL Terminal : { 194 178 199 190 }*/
/* IO - VPL Terminal : { 194 217 199 222 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Cases: { 354 319 }{ 50 338 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 292 390 }{ 383 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 67 33 72 }*/
/* IO - VPL Root : { 28 100 33 105 }*/
/* IO - VPL Root : { 28 133 33 138 }*/
/* IO - VPL Root : { 28 166 33 171 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 228 61 244 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 223 100 228 105 }*/
/* IO - VPL Root : { 244 92 249 97 }*/
/* IO - VPL Root : { 244 108 249 113 }*/
/* End Operation */

/* Begin Operation: { 116 140 131 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\":\"");
/* IO - VPL Root : { 131 148 136 153 }*/
/* End Operation */

/* Begin Operation: { 45 86 61 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 40 133 45 138 }*/
/* IO - VPL Root : { 61 133 66 138 }*/
/* End Operation */

/* Begin Operation: { 44 49 59 69 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\" \"");
/* IO - VPL Root : { 59 57 64 62 }*/
/* End Operation */

/* Begin Operation: { 86 42 102 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 81 67 86 72 }*/
/* IO - VPL Terminal : { 81 94 86 99 }*/
/* IO - VPL Root : { 102 80 107 85 }*/
/* End Operation */

/* Begin Operation: { 154 81 170 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 149 106 154 111 }*/
/* IO - VPL Terminal : { 149 133 154 138 }*/
/* IO - VPL Terminal : { 149 148 154 153 }*/
/* IO - VPL Root : { 170 119 175 124 }*/
/* End Operation */

/* Begin Operation: { 86 132 102 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 81 179 86 184 }*/
/* IO - VPL Root : { 102 179 107 184 }*/
/* End Operation */

/* Begin Operation: { 191 127 207 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 186 152 191 157 }*/
/* IO - VPL Terminal : { 186 179 191 184 }*/
/* IO - VPL Root : { 207 165 212 170 }*/
/* End Operation */

/* Begin Operation: { 263 75 279 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Name");
/* IO - VPL Terminal : { 258 108 263 113 }*/
/* IO - VPL Terminal : { 258 143 263 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 301 20 309 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,2,3,6);
	result = connect_root_to_terminal(ptrA,4,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,2,1,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 244 19 252 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,2,3,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,1,2,4,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Open_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 194 403 }{ 202 257 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 113 33 118 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 86 76 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Open");
/* IO - VPL Terminal : { 55 113 60 118 }*/
/* IO - VPL Terminal : { 55 142 60 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 104 66 120 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create Method");
/* IO - VPL Terminal : { 99 113 104 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 302 656 }{ 61 318 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 203 695 }{ 272 358 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 23 70 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 49 80 54 85 }*/
/* IO - VPL Root : { 70 80 75 85 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 151 111 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 88 167 93 172 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 93 38 109 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 88 80 93 85 }*/
/* IO - VPL Root : { 109 65 114 70 }*/
/* IO - VPL Root : { 109 94 114 99 }*/
/* End Operation */

/* Begin Operation: { 137 78 154 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 131 94 136 99 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 55 183 71 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Full Name");
/* IO - VPL Terminal : { 50 221 55 226 }*/
/* IO - VPL Root : { 71 221 76 226 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 138 153 154 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Create Method");
/* IO - VPL Terminal : { 133 186 138 191 }*/
/* IO - VPL Terminal : { 133 221 138 226 }*/
/* IO - VPL Root : { 154 204 159 209 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 179 264 196 300 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 173 280 178 285 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 179 168 195 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Record");
/* IO - VPL Terminal : { 174 185 179 190 }*/
/* IO - VPL Terminal : { 174 204 179 209 }*/
/* IO - VPL Root : { 195 195 200 200 }*/
/* End Operation */

/* Begin Operation: { 218 36 226 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,2,3,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [6 to 4] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 203 695 }{ 326 275 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 92 74 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 53 114 58 119 }*/
/* IO - VPL Root : { 74 106 79 111 }*/
/* IO - VPL Root : { 74 122 79 127 }*/
/* End Operation */

/* Begin Operation: { 98 84 115 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unique Name For String");
/* IO - VPL Terminal : { 92 162 97 167 }*/
/* IO - VPL Root : { 116 162 121 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 138 92 154 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 133 106 138 111 }*/
/* IO - VPL Terminal : { 133 122 138 127 }*/
/* IO - VPL Root : { 154 114 159 119 }*/
/* End Operation */

/* Begin Operation: { 183 89 199 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 178 114 183 119 }*/
/* IO - VPL Root : { 199 105 204 110 }*/
/* IO - VPL Root : { 199 123 204 128 }*/
/* End Operation */

/* Begin Operation: { 231 132 247 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 226 146 231 151 }*/
/* IO - VPL Terminal : { 226 162 231 167 }*/
/* IO - VPL Root : { 247 154 252 159 }*/
/* End Operation */

/* Begin Operation: { 281 24 289 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 153 24 161 216 } */
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
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 194 403 }{ 192 260 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 35 78 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Method record create failure!");
/* IO - VPL Root : { 78 114 83 119 }*/
/* End Operation */

/* Begin Operation: { 107 92 123 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"show");
/* IO - VPL Terminal : { 102 114 107 119 }*/
/* End Operation */

/* Begin Operation: { 146 21 154 213 } */
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


Nat4 VPLU_Universal_20_Data_2F_Close_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Close_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 337 713 }{ 232 299 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 161 76 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Record");
/* IO - VPL Terminal : { 55 188 60 193 }*/
/* IO - VPL Root : { 76 178 81 183 }*/
/* IO - VPL Root : { 76 197 81 202 }*/
/* End Operation */

/* Begin Operation: { 57 5 73 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 52 62 57 67 }*/
/* IO - VPL Root : { 73 62 78 67 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 234 74 261 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 74 245 79 250 }*/
/* End Operation */

/* Begin Operation: { 100 30 116 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Dispose Method");
/* IO - VPL Terminal : { 95 62 100 67 }*/
/* IO - VPL Terminal : { 95 96 100 101 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 592 709 }{ 53 316 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 672 720 }{ 192 273 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 165 33 170 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 179 72 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 51 190 56 195 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 55 40 71 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 50 82 55 87 }*/
/* IO - VPL Root : { 71 67 76 72 }*/
/* IO - VPL Root : { 71 96 76 101 }*/
/* End Operation */

/* Begin Operation: { 109 25 125 52 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 104 36 109 41 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 109 93 125 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Destroy Method");
/* IO - VPL Terminal : { 104 128 109 133 }*/
/* IO - VPL Terminal : { 104 165 109 170 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 155 21 163 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 101 187 117 245 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Record");
/* IO - VPL Terminal : { 96 204 101 209 }*/
/* IO - VPL Terminal : { 96 223 101 228 }*/
/* IO - VPL Root : { 117 214 122 219 }*/
/* End Operation */

/* Begin Operation: { 154 184 170 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Close");
/* IO - VPL Terminal : { 149 214 154 219 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 194 24 202 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,2,1,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,3,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Push_20_Lists_20_Data_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Push_20_Lists_20_Data_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 289 400 }{ 337 320 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 63 33 68 }*/
/* IO - VPL Root : { 28 154 33 159 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 27 68 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 47 63 52 68 }*/
/* IO - VPL Root : { 68 55 73 60 }*/
/* IO - VPL Root : { 68 71 73 76 }*/
/* End Operation */

/* Begin Operation: { 53 122 69 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 48 154 53 159 }*/
/* IO - VPL Root : { 69 146 74 151 }*/
/* IO - VPL Root : { 69 162 74 167 }*/
/* End Operation */

/* Begin Operation: { 100 156 116 244 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 95 199 100 204 }*/
/* IO - VPL Root : { 116 199 121 204 }*/
/* End Operation */

/* Begin Operation: { 124 113 139 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 139 116 144 121 }*/
/* End Operation */

/* Begin Operation: { 187 103 203 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"make-list");
/* IO - VPL Terminal : { 182 126 187 131 }*/
/* IO - VPL Terminal : { 182 151 187 156 }*/
/* IO - VPL Terminal : { 182 176 187 181 }*/
/* IO - VPL Root : { 203 151 208 156 }*/
/* End Operation */

/* Begin Operation: { 150 152 166 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 145 199 150 204 }*/
/* IO - VPL Root : { 166 199 171 204 }*/
/* End Operation */

/* Begin Operation: { 240 37 256 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set The Names Of The Cases");
/* IO - VPL Terminal : { 235 71 240 76 }*/
/* IO - VPL Terminal : { 235 105 240 117 }*/
/* IO - VPL Terminal : { 235 147 240 159 }*/
/* IO - VPL Terminal : { 235 199 240 204 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Cases: { 239 359 }{ 50 333 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 203 360 }{ 413 309 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 67 33 72 }*/
/* IO - VPL Root : { 28 100 33 105 }*/
/* IO - VPL Root : { 28 133 33 138 }*/
/* IO - VPL Root : { 28 166 33 171 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 84 138 100 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"to-string");
/* IO - VPL Terminal : { 79 185 84 190 }*/
/* IO - VPL Root : { 100 185 105 190 }*/
/* End Operation */

/* Begin Operation: { 47 86 62 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\" \"");
/* IO - VPL Root : { 62 94 67 99 }*/
/* End Operation */

/* Begin Operation: { 84 42 100 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 79 67 84 72 }*/
/* IO - VPL Terminal : { 79 94 84 99 }*/
/* IO - VPL Root : { 100 80 105 85 }*/
/* End Operation */

/* Begin Operation: { 125 88 141 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 120 113 125 118 }*/
/* IO - VPL Terminal : { 120 140 125 145 }*/
/* IO - VPL Root : { 141 126 146 131 }*/
/* End Operation */

/* Begin Operation: { 124 185 139 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\":\"");
/* IO - VPL Root : { 139 193 144 198 }*/
/* End Operation */

/* Begin Operation: { 157 101 173 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 152 126 157 131 }*/
/* IO - VPL Terminal : { 152 153 157 158 }*/
/* IO - VPL Root : { 173 139 178 144 }*/
/* End Operation */

/* Begin Operation: { 194 114 210 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 189 139 194 144 }*/
/* IO - VPL Terminal : { 189 166 194 171 }*/
/* IO - VPL Root : { 210 152 215 157 }*/
/* End Operation */

/* Begin Operation: { 241 72 257 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 236 100 241 105 }*/
/* IO - VPL Terminal : { 236 116 241 121 }*/
/* IO - VPL Root : { 257 108 262 113 }*/
/* End Operation */

/* Begin Operation: { 280 69 296 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 275 108 280 113 }*/
/* IO - VPL Root : { 296 100 301 105 }*/
/* IO - VPL Root : { 296 116 301 121 }*/
/* End Operation */

/* Begin Operation: { 315 108 331 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 310 136 315 141 }*/
/* IO - VPL Terminal : { 310 152 315 157 }*/
/* IO - VPL Root : { 331 144 336 149 }*/
/* End Operation */

/* Begin Operation: { 353 20 361 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,1,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,4,0,2,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,2,9,1,10);
	result = connect_root_to_terminal(ptrA,1,7,2,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 266 20 274 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,2,1,1,7);
	result = connect_root_to_terminal(ptrA,2,2,2,7);
	result = connect_root_to_terminal(ptrA,1,5,3,7);
	result = connect_root_to_terminal(ptrA,1,6,4,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Set_20_Name_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Set_20_Name_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 480 611 }{ 374 420 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 241 95 343 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"beautify name");
/* IO - VPL Terminal : { 72 273 77 278 }*/
/* IO - VPL Terminal : { 72 307 77 312 }*/
/* IO - VPL Root : { 96 273 101 278 }*/
/* IO - VPL Root : { 96 307 101 312 }*/
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

/* Start Operations: { 511 937 }{ 206 273 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 62 95 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Formalize Data Name");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 98 101 103 }*/
/* IO - VPL Root : { 96 162 101 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 68 137 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Update Record");
/* IO - VPL Terminal : { 114 100 119 105 }*/
/* IO - VPL Terminal : { 114 134 119 139 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 215 330 }{ 72 336 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 390 361 }{ 307 326 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 82 70 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Full Name");
/* IO - VPL Terminal : { 49 120 54 125 }*/
/* IO - VPL Root : { 70 120 75 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 168 110 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create Full Name");
/* IO - VPL Terminal : { 89 192 94 197 }*/
/* IO - VPL Terminal : { 89 242 94 247 }*/
/* IO - VPL Root : { 110 223 115 228 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 357 322 }{ 78 298 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 341 420 }{ 256 265 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 37 124 53 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"/");
/* IO - VPL Root : { 53 126 58 131 }*/
/* End Operation */

/* Begin Operation: { 82 100 98 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"in\"");
/* IO - VPL Terminal : { 77 112 82 117 }*/
/* IO - VPL Terminal : { 77 126 82 131 }*/
/* IO - VPL Root : { 98 119 103 124 }*/
/* End Operation */

/* Begin Operation: { 126 168 142 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 121 170 126 175 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 126 66 142 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"prefix");
/* IO - VPL Terminal : { 121 82 126 87 }*/
/* IO - VPL Terminal : { 121 100 126 105 }*/
/* IO - VPL Root : { 142 82 147 87 }*/
/* IO - VPL Root : { 142 100 147 105 }*/
/* End Operation */

/* Begin Operation: { 172 112 188 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 167 128 172 133 }*/
/* IO - VPL Terminal : { 167 146 172 151 }*/
/* IO - VPL Root : { 188 137 193 142 }*/
/* End Operation */

/* Begin Operation: { 218 29 226 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 213 123 218 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 341 420 }{ 111 259 } */
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

/* Begin Operation: { 133 197 150 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 127 209 132 214 }*/
/* IO - VPL Terminal : { 127 223 132 228 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 94 25 110 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 89 82 94 87 }*/
/* IO - VPL Root : { 110 82 115 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 132 40 148 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 127 82 132 87 }*/
/* IO - VPL Root : { 148 67 153 72 }*/
/* IO - VPL Root : { 148 96 153 101 }*/
/* End Operation */

/* Begin Operation: { 177 141 193 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"method");
/* IO - VPL Root : { 193 158 198 163 }*/
/* End Operation */

/* Begin Operation: { 177 90 193 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 193 101 198 106 }*/
/* End Operation */

/* Begin Operation: { 222 65 238 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Rename Element");
/* IO - VPL Terminal : { 217 82 222 87 }*/
/* IO - VPL Terminal : { 217 101 222 106 }*/
/* IO - VPL Terminal : { 217 120 222 125 }*/
/* IO - VPL Terminal : { 217 139 222 144 }*/
/* IO - VPL Terminal : { 217 158 222 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 273 26 281 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,1,3,8);
	result = connect_root_to_terminal(ptrA,1,2,4,8);
	result = connect_root_to_terminal(ptrA,1,6,5,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 390 361 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 72 95 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Record");
/* IO - VPL Terminal : { 72 128 77 133 }*/
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

/* Begin Operation: { 120 237 137 295 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Name");
/* IO - VPL Terminal : { 114 254 119 259 }*/
/* IO - VPL Terminal : { 114 273 119 278 }*/
/* IO - VPL Root : { 138 264 143 269 }*/
/* End Operation */

/* Begin Operation: { 162 203 179 265 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
/* IO - VPL Root : { 180 232 185 237 }*/
/* End Operation */

/* Begin Operation: { 204 62 221 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 136 203 141 }*/
/* IO - VPL Root : { 222 118 227 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 246 76 263 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Editor");
/* IO - VPL Terminal : { 240 118 245 123 }*/
/* IO - VPL Root : { 264 118 269 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 288 74 305 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Update Data");
/* IO - VPL Terminal : { 282 118 287 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 382 309 }{ 50 371 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 343 281 }{ 153 268 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 26 70 56 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 50 39 55 44 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 55 91 71 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Data");
/* IO - VPL Terminal : { 50 148 55 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_breakpoint_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 96 20 104 212 } */
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

/* Begin Operation: { 246 210 263 380 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Case Data/Update Names");
/* IO - VPL Terminal : { 240 264 245 269 }*/
/* IO - VPL Terminal : { 240 320 245 325 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 198 219 215 355 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"data driven method?");
/* IO - VPL Terminal : { 192 262 197 267 }*/
/* IO - VPL Terminal : { 192 307 197 312 }*/
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

/* Start Operations: { 106 244 }{ 290 325 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 181 50 186 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 165 95 201 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 72 181 77 186 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 78 68 95 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"empty?");
/* IO - VPL Terminal : { 72 98 77 103 }*/
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

/* Start Operations: { 60 60 }{ 210 268 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 48 95 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Inarity");
/* IO - VPL Terminal : { 72 77 77 82 }*/
/* IO - VPL Root : { 96 66 101 71 }*/
/* IO - VPL Root : { 96 86 101 91 }*/
/* End Operation */

/* Begin Operation: { 120 76 137 100 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 114 86 119 91 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 78 130 95 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Outarity");
/* IO - VPL Terminal : { 72 164 77 169 }*/
/* IO - VPL Root : { 96 152 101 157 }*/
/* IO - VPL Root : { 96 176 101 181 }*/
/* End Operation */

/* Begin Operation: { 120 166 137 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 114 176 119 181 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 120 43 137 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Is Class Method?");
/* IO - VPL Terminal : { 114 98 119 103 }*/
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

/* Start Operations: { 126 264 }{ 248 311 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 36 95 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Grandparent Helper");
/* IO - VPL Terminal : { 72 117 77 122 }*/
/* IO - VPL Root : { 96 117 101 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 38 137 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 114 75 119 80 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 120 149 137 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Section Data");
/* IO - VPL Terminal : { 114 210 119 215 }*/
/* IO - VPL Root : { 138 210 143 215 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 86 179 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 112 161 117 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 108 179 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 180 118 185 123 }*/
/* End Operation */

/* Begin Operation: { 162 148 179 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 180 158 185 163 }*/
/* End Operation */

/* Begin Operation: { 204 80 221 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Arity");
/* IO - VPL Terminal : { 198 98 203 103 }*/
/* IO - VPL Terminal : { 198 118 203 123 }*/
/* IO - VPL Terminal : { 198 138 203 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 204 179 221 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"/Update Record");
/* IO - VPL Terminal : { 198 232 203 237 }*/
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

/* Begin Operation: { 246 42 254 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 162 70 179 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Set Name");
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 128 161 133 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 330 49 338 241 } */
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
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,3,1,8);
	result = connect_root_to_terminal(ptrA,1,5,2,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,2,1,2,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,1,2,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [8 to 7] */
/* Synchro [9 to 8] */
/* Synchro [10 to 2] */
/* Synchro [10 to 9] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 480 611 }{ 164 264 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 44 95 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Duplicate Data Name Error");
/* IO - VPL Terminal : { 72 98 77 103 }*/
/* IO - VPL Terminal : { 72 162 77 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 128 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
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

/* Start Operations: { 480 611 }{ 194 264 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 88 33 93 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 55 80 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Duplicate method name!");
/* IO - VPL Root : { 80 117 85 122 }*/
/* End Operation */

/* Begin Operation: { 109 95 125 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"show");
/* IO - VPL Terminal : { 104 117 109 122 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 154 22 162 214 } */
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


Nat4 VPLU_Universal_20_Data_2F_Execute_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Execute_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 275 306 }{ 586 452 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 48 33 53 }*/
/* IO - VPL Root : { 28 86 33 91 }*/
/* IO - VPL Root : { 28 119 33 124 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
/* IO - VPL Root : { 28 186 33 191 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 318 76 419 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Breakpoint");
/* IO - VPL Terminal : { 55 364 60 369 }*/
/* IO - VPL Terminal : { 55 397 60 402 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 480 428 }{ 67 329 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 490 831 }{ 248 282 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 186 80 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 59 198 64 203 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 64 27 80 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 42 122 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Root : { 122 69 127 74 }*/
/* IO - VPL Root : { 122 98 127 103 }*/
/* End Operation */

/* Begin Operation: { 148 61 164 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Step Into");
/* IO - VPL Terminal : { 143 98 148 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 30 198 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 340 715 }{ 518 302 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 186 72 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 51 198 56 203 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 54 93 70 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
/* IO - VPL Root : { 70 118 75 123 }*/
/* End Operation */

/* Begin Operation: { 93 48 109 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 88 82 93 87 }*/
/* IO - VPL Terminal : { 88 118 93 123 }*/
/* IO - VPL Root : { 109 100 114 105 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 131 81 147 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 126 100 131 105 }*/
/* IO - VPL Root : { 147 93 152 98 }*/
/* IO - VPL Root : { 147 107 152 112 }*/
/* End Operation */

/* Begin Operation: { 173 148 189 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 189 186 194 191 }*/
/* End Operation */

/* Begin Operation: { 173 81 189 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 168 107 173 112 }*/
/* IO - VPL Root : { 189 107 194 112 }*/
/* End Operation */

/* Begin Operation: { 215 73 231 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 210 107 215 112 }*/
/* IO - VPL Terminal : { 210 143 215 148 }*/
/* IO - VPL Root : { 231 125 236 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 257 106 273 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 252 125 257 130 }*/
/* IO - VPL Root : { 273 118 278 123 }*/
/* IO - VPL Root : { 273 132 278 137 }*/
/* End Operation */

/* Begin Operation: { 300 106 316 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"unpack");
/* IO - VPL Terminal : { 295 132 300 137 }*/
/* IO - VPL Root : { 316 132 321 137 }*/
/* End Operation */

/* Begin Operation: { 344 106 360 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 339 132 344 137 }*/
/* IO - VPL Root : { 360 122 365 127 }*/
/* IO - VPL Root : { 360 140 365 145 }*/
/* End Operation */

/* Begin Operation: { 344 185 360 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 360 197 365 202 }*/
/* End Operation */

/* Begin Operation: { 388 104 405 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Breakpoint");
/* IO - VPL Terminal : { 382 140 387 145 }*/
/* IO - VPL Terminal : { 382 178 387 183 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 433 90 449 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Record");
/* IO - VPL Terminal : { 428 140 433 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 481 30 489 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,5,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,2,8,1,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,2,10,1,12);
	result = connect_root_to_terminal(ptrA,1,11,2,12);
	result = connect_root_to_terminal(ptrA,2,10,1,13);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [13 to 12] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 61 176 77 290 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Execution Thread");
/* IO - VPL Terminal : { 56 231 61 236 }*/
/* IO - VPL Root : { 77 231 82 236 }*/
/* End Operation */

/* Begin Operation: { 293 195 309 314 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 288 252 293 257 }*/
/* IO - VPL Root : { 309 252 314 257 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 63 10 79 90 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Full Name");
/* IO - VPL Terminal : { 58 48 63 53 }*/
/* IO - VPL Root : { 79 48 84 53 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 145 12 161 71 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Method");
/* IO - VPL Terminal : { 140 29 145 34 }*/
/* IO - VPL Terminal : { 140 48 145 53 }*/
/* IO - VPL Root : { 161 39 166 44 }*/
/* End Operation */

/* Begin Operation: { 187 40 203 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Input List");
/* IO - VPL Terminal : { 182 62 187 67 }*/
/* IO - VPL Terminal : { 182 86 187 91 }*/
/* IO - VPL Root : { 203 74 208 79 }*/
/* End Operation */

/* Begin Operation: { 237 77 253 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Outarity");
/* IO - VPL Terminal : { 232 97 237 102 }*/
/* IO - VPL Terminal : { 232 119 237 124 }*/
/* IO - VPL Root : { 253 108 258 113 }*/
/* End Operation */

/* Begin Operation: { 293 104 309 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Final Task");
/* IO - VPL Terminal : { 288 127 293 132 }*/
/* IO - VPL Terminal : { 288 152 293 157 }*/
/* IO - VPL Root : { 309 140 314 145 }*/
/* End Operation */

/* Begin Operation: { 336 113 352 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Project");
/* IO - VPL Terminal : { 331 131 336 136 }*/
/* IO - VPL Terminal : { 331 151 336 156 }*/
/* IO - VPL Root : { 352 142 357 147 }*/
/* End Operation */

/* Begin Operation: { 336 209 352 350 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Current Thread ID");
/* IO - VPL Root : { 352 277 357 282 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 378 115 394 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Main Thread");
/* IO - VPL Terminal : { 373 142 378 147 }*/
/* IO - VPL Terminal : { 373 171 378 176 }*/
/* IO - VPL Root : { 394 156 399 161 }*/
/* End Operation */

/* Begin Operation: { 404 190 420 288 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create Thread");
/* IO - VPL Terminal : { 399 232 404 237 }*/
/* IO - VPL Root : { 420 232 425 237 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 370 778 }{ 52 356 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 139 864 }{ 452 306 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 144 33 149 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 93 53 109 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"/Stack Execution");
/* IO - VPL Root : { 109 98 114 103 }*/
/* End Operation */

/* Begin Operation: { 63 66 79 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"ThreadEntryProcPtr");
/* IO - VPL Root : { 79 119 84 124 }*/
/* End Operation */

/* Begin Operation: { 130 92 146 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"callback");
/* IO - VPL Terminal : { 125 98 130 103 }*/
/* IO - VPL Terminal : { 125 119 130 124 }*/
/* IO - VPL Terminal : { 125 144 130 149 }*/
/* IO - VPL Root : { 146 122 151 127 }*/
/* End Operation */

/* Begin Operation: { 173 59 189 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"NewThreadEntryUPP");
/* IO - VPL Terminal : { 168 122 173 127 }*/
/* IO - VPL Root : { 189 100 194 105 }*/
/* IO - VPL Root : { 189 143 194 148 }*/
/* End Operation */

/* Begin Operation: { 219 38 235 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kCooperativeThread");
/* IO - VPL Root : { 235 90 240 95 }*/
/* End Operation */

/* Begin Operation: { 247 99 263 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 263 110 268 115 }*/
/* End Operation */

/* Begin Operation: { 247 144 263 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 263 146 268 151 }*/
/* End Operation */

/* Begin Operation: { 247 170 263 259 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extconstant(tempOperation,environment,"kCreateIfNeeded");
/* IO - VPL Root : { 263 212 268 217 }*/
/* End Operation */

/* Begin Operation: { 292 82 308 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,7,5,"NewThread");
/* IO - VPL Terminal : { 287 90 292 95 }*/
/* IO - VPL Terminal : { 287 100 292 105 }*/
/* IO - VPL Terminal : { 287 110 292 115 }*/
/* IO - VPL Terminal : { 287 120 292 125 }*/
/* IO - VPL Terminal : { 287 130 292 135 }*/
/* IO - VPL Terminal : { 287 140 292 145 }*/
/* IO - VPL Terminal : { 287 150 292 155 }*/
/* IO - VPL Root : { 308 93 313 98 }*/
/* IO - VPL Root : { 308 106 313 111 }*/
/* IO - VPL Root : { 308 119 313 124 }*/
/* IO - VPL Root : { 308 132 313 137 }*/
/* IO - VPL Root : { 308 145 313 150 }*/
/* End Operation */

/* Begin Operation: { 294 212 310 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 310 214 315 219 }*/
/* End Operation */

/* Begin Operation: { 294 182 310 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 310 184 315 189 }*/
/* End Operation */

/* Begin Operation: { 341 51 357 59 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 336 53 341 58 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 339 126 355 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"pointer-to-integer");
/* IO - VPL Terminal : { 334 154 339 159 }*/
/* IO - VPL Terminal : { 334 184 339 189 }*/
/* IO - VPL Terminal : { 334 214 339 219 }*/
/* IO - VPL Root : { 355 154 360 159 }*/
/* IO - VPL Root : { 355 184 360 189 }*/
/* IO - VPL Root : { 355 214 360 219 }*/
/* End Operation */

/* Begin Operation: { 406 41 414 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 401 135 406 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,5,1,9);
	result = connect_root_to_terminal(ptrA,1,4,2,9);
	result = connect_root_to_terminal(ptrA,1,6,3,9);
	result = connect_root_to_terminal(ptrA,1,7,4,9);
	result = connect_root_to_terminal(ptrA,1,8,5,9);
	result = connect_root_to_terminal(ptrA,1,6,6,9);
	result = connect_root_to_terminal(ptrA,1,9,1,12);
	result = connect_root_to_terminal(ptrA,5,9,1,13);
	result = connect_root_to_terminal(ptrA,1,11,2,13);
	result = connect_root_to_terminal(ptrA,1,10,3,13);
	result = connect_root_to_terminal(ptrA,3,13,1,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [13 to 12] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 449 139 465 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Thread");
/* IO - VPL Terminal : { 444 156 449 161 }*/
/* IO - VPL Terminal : { 444 175 449 180 }*/
/* IO - VPL Root : { 465 166 470 171 }*/
/* End Operation */

/* Begin Operation: { 501 198 517 306 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Termination");
/* IO - VPL Terminal : { 496 232 501 237 }*/
/* IO - VPL Terminal : { 496 268 501 273 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 384 105 }{ 75 317 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 147 488 }{ 329 380 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 166 33 171 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 81 66 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"/Stack Termination");
/* IO - VPL Root : { 66 132 71 137 }*/
/* End Operation */

/* Begin Operation: { 51 201 67 347 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"ThreadTerminationProcPtr");
/* IO - VPL Root : { 67 272 72 277 }*/
/* End Operation */

/* Begin Operation: { 96 146 112 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"callback");
/* IO - VPL Terminal : { 91 155 96 160 }*/
/* IO - VPL Terminal : { 91 176 96 181 }*/
/* IO - VPL Terminal : { 91 201 96 206 }*/
/* IO - VPL Root : { 112 176 117 181 }*/
/* End Operation */

/* Begin Operation: { 141 95 157 261 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"NewThreadTerminationUPP");
/* IO - VPL Terminal : { 136 176 141 181 }*/
/* IO - VPL Root : { 157 148 162 153 }*/
/* IO - VPL Root : { 157 203 162 208 }*/
/* End Operation */

/* Begin Operation: { 175 171 191 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 191 182 196 187 }*/
/* End Operation */

/* Begin Operation: { 220 82 236 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,3,"SetThreadTerminator");
/* IO - VPL Terminal : { 215 114 220 119 }*/
/* IO - VPL Terminal : { 215 148 220 153 }*/
/* IO - VPL Terminal : { 215 182 220 187 }*/
/* IO - VPL Root : { 236 114 241 119 }*/
/* IO - VPL Root : { 236 148 241 153 }*/
/* IO - VPL Root : { 236 182 241 187 }*/
/* End Operation */

/* Begin Operation: { 293 15 301 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 501 81 517 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Thread");
/* IO - VPL Terminal : { 496 131 501 136 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 540 24 548 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,5,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,0,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,3,0,2,7);
	result = connect_root_to_terminal(ptrA,1,7,1,8);
	result = connect_root_to_terminal(ptrA,4,0,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,3,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,11);
	result = connect_root_to_terminal(ptrA,1,10,2,11);
	result = connect_root_to_terminal(ptrA,1,2,1,12);
	result = connect_root_to_terminal(ptrA,1,11,1,13);
	result = connect_root_to_terminal(ptrA,1,12,2,13);
	result = connect_root_to_terminal(ptrA,1,12,1,14);
	result = connect_root_to_terminal(ptrA,1,13,2,14);
	result = connect_root_to_terminal(ptrA,1,13,1,15);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Buffer_20_Initialization_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Buffer_20_Initialization_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 62 691 }{ 308 305 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 61 33 66 }*/
/* IO - VPL Root : { 28 119 33 124 }*/
/* IO - VPL Root : { 28 181 33 186 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 45 219 61 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 61 221 66 226 }*/
/* End Operation */

/* Begin Operation: { 45 128 61 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"6");
/* IO - VPL Root : { 61 130 66 135 }*/
/* End Operation */

/* Begin Operation: { 90 110 106 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 85 119 90 124 }*/
/* IO - VPL Terminal : { 85 130 90 135 }*/
/* IO - VPL Root : { 106 125 111 130 }*/
/* End Operation */

/* Begin Operation: { 90 163 106 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-integer");
/* IO - VPL Terminal : { 85 181 90 186 }*/
/* IO - VPL Terminal : { 85 201 90 206 }*/
/* IO - VPL Terminal : { 85 221 90 226 }*/
/* IO - VPL Root : { 106 181 111 186 }*/
/* IO - VPL Root : { 106 201 111 206 }*/
/* IO - VPL Root : { 106 214 111 219 }*/
/* End Operation */

/* Begin Operation: { 138 163 154 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-integer");
/* IO - VPL Terminal : { 133 181 138 186 }*/
/* IO - VPL Terminal : { 133 201 138 206 }*/
/* IO - VPL Terminal : { 133 221 138 226 }*/
/* IO - VPL Root : { 154 181 159 186 }*/
/* IO - VPL Root : { 154 201 159 206 }*/
/* IO - VPL Root : { 154 213 159 218 }*/
/* End Operation */

/* Begin Operation: { 142 44 158 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Inarity");
/* IO - VPL Terminal : { 137 61 142 66 }*/
/* IO - VPL Terminal : { 137 80 142 85 }*/
/* IO - VPL Root : { 158 71 163 76 }*/
/* End Operation */

/* Begin Operation: { 193 98 209 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Outarity");
/* IO - VPL Terminal : { 188 118 193 123 }*/
/* IO - VPL Terminal : { 188 140 193 145 }*/
/* IO - VPL Root : { 209 129 214 134 }*/
/* End Operation */

/* Begin Operation: { 251 40 259 232 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,3,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,1,1,3,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,3,4,2,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,3,5,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Get_20_Value_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Get_20_Value_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 328 425 }{ 163 267 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 94 73 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 52 115 57 120 }*/
/* IO - VPL Root : { 73 107 78 112 }*/
/* IO - VPL Root : { 73 122 78 127 }*/
/* End Operation */

/* Begin Operation: { 102 20 110 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 97 115 102 120 }*/
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


Nat4 VPLU_Universal_20_Data_2F_C_20_Code_20_Value_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_C_20_Code_20_Value_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 150 260 }{ 194 274 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 43 93 59 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 38 115 43 120 }*/
/* IO - VPL Root : { 59 107 64 112 }*/
/* IO - VPL Root : { 59 123 64 128 }*/
/* End Operation */

/* Begin Operation: { 87 71 103 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Export Text");
/* IO - VPL Terminal : { 82 113 87 118 }*/
/* IO - VPL Root : { 103 113 108 118 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 277 438 }{ 50 362 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 254 368 }{ 263 353 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 153 79 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 59 166 64 171 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 94 37 109 279 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\tmethod_type_to(method,environment,\"\"\"");
/* IO - VPL Root : { 109 156 114 161 }*/
/* End Operation */

/* Begin Operation: { 135 118 150 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"\"\");\n\"");
/* IO - VPL Root : { 150 143 155 148 }*/
/* End Operation */

/* Begin Operation: { 169 77 185 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"\"join\"");
/* IO - VPL Terminal : { 164 90 169 95 }*/
/* IO - VPL Terminal : { 164 115 169 120 }*/
/* IO - VPL Terminal : { 164 143 169 148 }*/
/* IO - VPL Root : { 185 115 190 120 }*/
/* End Operation */

/* Begin Operation: { 213 20 221 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 208 115 213 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 308 413 }{ 193 290 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 67 39 82 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"\"/* NULL TEXT VALUE */\n\"");
/* IO - VPL Root : { 82 115 87 120 }*/
/* End Operation */

/* Begin Operation: { 113 20 121 212 } */
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

/* Begin Operation: { 137 18 145 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 132 113 137 118 }*/
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


Nat4 VPLU_Universal_20_Data_2F_Update_20_Record_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Update_20_Record_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 394 496 }{ 311 263 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 103 70 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 49 125 54 130 }*/
/* IO - VPL Root : { 70 117 75 122 }*/
/* IO - VPL Root : { 70 133 75 138 }*/
/* End Operation */

/* Begin Operation: { 95 75 111 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Record");
/* IO - VPL Terminal : { 90 102 95 107 }*/
/* IO - VPL Root : { 111 92 116 97 }*/
/* IO - VPL Root : { 111 111 116 116 }*/
/* End Operation */

/* Begin Operation: { 134 161 150 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 129 172 134 177 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 134 18 150 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 129 75 134 80 }*/
/* IO - VPL Root : { 150 75 155 80 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 174 33 190 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 169 75 174 80 }*/
/* IO - VPL Root : { 190 60 195 65 }*/
/* IO - VPL Root : { 190 89 195 94 }*/
/* End Operation */

/* Begin Operation: { 212 69 228 158 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Method");
/* IO - VPL Terminal : { 207 89 212 94 }*/
/* IO - VPL Terminal : { 207 111 212 116 }*/
/* IO - VPL Terminal : { 207 133 212 138 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 258 17 266 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,2,2,2,6);
	result = connect_root_to_terminal(ptrA,2,1,3,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Post_20_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Post_20_Open_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 461 919 }{ 221 332 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 75 33 80 }*/
/* IO - VPL Root : { 28 151 33 156 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 84 25 100 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Record");
/* IO - VPL Terminal : { 79 75 84 80 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 83 151 100 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"install tool");
/* IO - VPL Terminal : { 77 190 82 195 }*/
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

/* Start Operations: { 60 60 }{ 296 269 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 10 95 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 72 70 77 75 }*/
/* IO - VPL Root : { 96 70 101 75 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 101 137 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Tools");
/* IO - VPL Root : { 138 118 143 123 }*/
/* End Operation */

/* Begin Operation: { 162 24 179 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Find Project Info List");
/* IO - VPL Terminal : { 156 70 161 75 }*/
/* IO - VPL Terminal : { 156 118 161 123 }*/
/* IO - VPL Root : { 180 94 185 99 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 204 64 221 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Tools");
/* IO - VPL Terminal : { 198 96 203 101 }*/
/* IO - VPL Terminal : { 198 130 203 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 246 37 254 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 157 20 165 212 } */
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


Nat4 VPLU_Universal_20_Data_2F_Get_20_Method_20_Data_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Get_20_Method_20_Data_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 44 20 52 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 39 110 44 115 }*/
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


Nat4 VPLU_Universal_20_Data_2F_Get_20_All_20_Breakpoints_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Get_20_All_20_Breakpoints_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 281 312 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 16 80 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 75 64 80 }*/
/* IO - VPL Root : { 80 75 85 80 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 105 151 121 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 100 162 105 167 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 32 122 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 101 75 106 80 }*/
/* IO - VPL Root : { 122 60 127 65 }*/
/* IO - VPL Root : { 122 90 127 95 }*/
/* End Operation */

/* Begin Operation: { 148 48 164 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Breakpoints");
/* IO - VPL Terminal : { 143 90 148 95 }*/
/* IO - VPL Root : { 164 75 169 80 }*/
/* IO - VPL Root : { 164 104 169 109 }*/
/* End Operation */

/* Begin Operation: { 190 71 206 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find Breakpoint");
/* IO - VPL Terminal : { 185 104 190 109 }*/
/* IO - VPL Terminal : { 185 139 190 144 }*/
/* IO - VPL Root : { 206 122 211 127 }*/
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

/* Start Cases: { 459 1195 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 337 864 }{ 216 285 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 81 80 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Method Data");
/* IO - VPL Terminal : { 59 138 64 143 }*/
/* IO - VPL Root : { 80 138 85 143 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 130 122 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 101 138 106 143 }*/
/* IO - VPL Terminal : { 101 148 106 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 147 26 155 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 142 120 147 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 337 864 }{ 150 280 } */
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

/* Begin Operation: { 232 27 240 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 122 232 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
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

/* Begin Operation: { 68 109 84 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( )");
/* IO - VPL Root : { 84 115 89 120 }*/
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



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Have_20_Row_20_Values_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Have_20_Row_20_Values_3F__universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 94 60 110 89 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 110 72 115 77 }*/
/* End Operation */

/* Begin Operation: { 94 142 110 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 110 157 115 162 }*/
/* End Operation */

/* Begin Operation: { 139 21 147 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 134 72 139 77 }*/
/* IO - VPL Terminal : { 134 157 139 162 }*/
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


Nat4 VPLU_Universal_20_Data_2F_Get_20_Export_20_Name_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Get_20_Export_20_Name_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 446 835 }{ 270 260 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 62 77 78 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Full Name");
/* IO - VPL Terminal : { 57 115 62 120 }*/
/* IO - VPL Root : { 78 115 83 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 101 84 117 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Mangle Name");
/* IO - VPL Terminal : { 96 127 101 132 }*/
/* IO - VPL Root : { 117 127 122 132 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 133 75 149 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"vpx_method_");
/* IO - VPL Root : { 149 109 154 114 }*/
/* End Operation */

/* Begin Operation: { 178 93 194 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 173 109 178 114 }*/
/* IO - VPL Terminal : { 173 127 178 132 }*/
/* IO - VPL Root : { 194 118 199 123 }*/
/* End Operation */

/* Begin Operation: { 225 23 233 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 220 118 225 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Get_20_Universal_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Get_20_Universal_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 383 772 }{ 110 266 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 113 33 118 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 22 73 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 60 113 65 118 }*/
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


Nat4 VPLU_Universal_20_Data_2F_Set_20_Value_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Set_20_Value_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 408 427 }{ 312 284 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 26 80 93 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Constructor");
/* IO - VPL Terminal : { 59 57 64 62 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 23 122 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Destructor");
/* IO - VPL Terminal : { 101 52 106 57 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 64 203 80 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Editor");
/* IO - VPL Terminal : { 59 219 64 224 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 213 122 240 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Tool");
/* IO - VPL Terminal : { 101 224 106 229 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 148 36 164 67 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"MAIN");
/* IO - VPL Terminal : { 143 49 148 54 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 148 136 165 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 143 148 148 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 54 127 71 173 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"NULL\"");
/* IO - VPL Terminal : { 48 148 53 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 98 138 115 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"\"");
/* IO - VPL Terminal : { 92 148 97 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 152 213 169 243 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"INIT");
/* IO - VPL Terminal : { 146 226 151 231 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 190 34 206 138 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Container");
/* IO - VPL Terminal : { 185 84 190 89 }*/
/* IO - VPL Root : { 206 84 211 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 35 248 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Send Refresh");
/* IO - VPL Terminal : { 227 84 232 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 27 282 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,2,0,1,6);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,2,0,1,9);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 408 427 }{ 280 272 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 78 35 83 }*/
/* IO - VPL Root : { 30 144 35 149 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 57 80 103 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 59 78 64 83 }*/
/* IO - VPL Root : { 80 70 85 75 }*/
/* IO - VPL Root : { 80 85 85 90 }*/
/* End Operation */

/* Begin Operation: { 63 112 80 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"fix nulls");
/* IO - VPL Terminal : { 57 144 62 149 }*/
/* IO - VPL Root : { 81 144 86 149 }*/
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

/* Begin Operation: { 78 53 95 99 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"NULL\"");
/* IO - VPL Terminal : { 72 74 77 79 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 78 162 95 186 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"\"\"");
/* IO - VPL Terminal : { 72 172 77 177 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,3);
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

/* Begin Operation: { 106 167 122 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"equals");
/* IO - VPL Terminal : { 101 184 106 189 }*/
/* IO - VPL Terminal : { 101 203 106 208 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 49 122 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Update Value");
/* IO - VPL Terminal : { 101 70 106 75 }*/
/* IO - VPL Terminal : { 101 93 106 98 }*/
/* IO - VPL Terminal : { 101 116 106 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 511 423 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 414 764 }{ 312 267 } */
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

/* Begin Operation: { 64 47 80 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Set Correct Arity");
/* IO - VPL Terminal : { 59 68 64 73 }*/
/* IO - VPL Terminal : { 59 146 64 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 480 368 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 480 670 }{ 160 259 } */
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
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 59 148 64 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 23 114 215 } */
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

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 480 670 }{ 386 449 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 350 80 417 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Constructor");
/* IO - VPL Terminal : { 59 381 64 386 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 159 80 317 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Grandparent Helper");
/* IO - VPL Terminal : { 59 236 64 241 }*/
/* IO - VPL Root : { 80 236 85 241 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 214 122 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 101 236 106 241 }*/
/* IO - VPL Root : { 122 236 127 241 }*/
/* End Operation */

/* Begin Operation: { 148 209 164 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Class Data");
/* IO - VPL Terminal : { 143 236 148 241 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 148 90 164 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Container");
/* IO - VPL Terminal : { 143 140 148 145 }*/
/* IO - VPL Root : { 164 140 169 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 120 206 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 185 140 190 145 }*/
/* IO - VPL Root : { 206 132 211 137 }*/
/* IO - VPL Root : { 206 146 211 151 }*/
/* End Operation */

/* Begin Operation: { 232 96 248 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Reset Old Constructor");
/* IO - VPL Terminal : { 227 146 232 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 477 310 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 479 614 }{ 275 293 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 89 80 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 125 85 130 }*/
/* End Operation */

/* Begin Operation: { 106 103 122 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 101 125 106 130 }*/
/* IO - VPL Root : { 122 117 127 122 }*/
/* IO - VPL Root : { 122 133 127 138 }*/
/* End Operation */

/* Begin Operation: { 148 181 164 248 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Constructor");
/* IO - VPL Terminal : { 143 212 148 217 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 133 164 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 164 144 169 149 }*/
/* End Operation */

/* Begin Operation: { 190 92 206 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Value");
/* IO - VPL Terminal : { 185 117 190 122 }*/
/* IO - VPL Terminal : { 185 144 190 149 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 25 240 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 479 910 }{ 110 262 } */
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

/* Begin Operation: { 274 101 290 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 290 104 295 109 }*/
/* End Operation */

/* Begin Operation: { 316 66 332 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Arity");
/* IO - VPL Terminal : { 311 84 316 89 }*/
/* IO - VPL Terminal : { 311 104 316 109 }*/
/* IO - VPL Terminal : { 311 124 316 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 358 27 366 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [5 to 4] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 480 676 }{ 386 449 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 352 80 415 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Destructor");
/* IO - VPL Terminal : { 59 381 64 386 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 159 80 317 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Grandparent Helper");
/* IO - VPL Terminal : { 59 236 64 241 }*/
/* IO - VPL Root : { 80 236 85 241 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 214 122 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 101 236 106 241 }*/
/* IO - VPL Root : { 122 236 127 241 }*/
/* End Operation */

/* Begin Operation: { 148 209 164 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Class Data");
/* IO - VPL Terminal : { 143 236 148 241 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 148 90 164 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Container");
/* IO - VPL Terminal : { 143 140 148 145 }*/
/* IO - VPL Root : { 164 140 169 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 120 206 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 185 140 190 145 }*/
/* IO - VPL Root : { 206 132 211 137 }*/
/* IO - VPL Root : { 206 146 211 151 }*/
/* End Operation */

/* Begin Operation: { 232 79 248 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Reset Old Destructor");
/* IO - VPL Terminal : { 227 146 232 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 477 310 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 479 614 }{ 275 293 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 89 80 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 125 85 130 }*/
/* End Operation */

/* Begin Operation: { 106 103 122 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 101 125 106 130 }*/
/* IO - VPL Root : { 122 117 127 122 }*/
/* IO - VPL Root : { 122 133 127 138 }*/
/* End Operation */

/* Begin Operation: { 148 183 164 246 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Destructor");
/* IO - VPL Terminal : { 143 212 148 217 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 133 164 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 164 144 169 149 }*/
/* End Operation */

/* Begin Operation: { 190 92 206 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Value");
/* IO - VPL Terminal : { 185 117 190 122 }*/
/* IO - VPL Terminal : { 185 144 190 149 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 25 240 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 479 910 }{ 110 262 } */
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

/* Begin Operation: { 274 101 290 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 290 104 295 109 }*/
/* End Operation */

/* Begin Operation: { 274 128 290 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 290 131 295 136 }*/
/* End Operation */

/* Begin Operation: { 316 66 332 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Arity");
/* IO - VPL Terminal : { 311 84 316 89 }*/
/* IO - VPL Terminal : { 311 104 316 109 }*/
/* IO - VPL Terminal : { 311 124 316 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 358 27 366 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,10);
	result = connect_root_to_terminal(ptrA,1,8,2,10);
	result = connect_root_to_terminal(ptrA,1,9,3,10);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [5 to 4] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 480 670 }{ 386 449 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 365 80 402 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Editor");
/* IO - VPL Terminal : { 59 381 64 386 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 159 80 317 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Grandparent Helper");
/* IO - VPL Terminal : { 59 236 64 241 }*/
/* IO - VPL Root : { 80 236 85 241 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 214 122 262 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 101 236 106 241 }*/
/* IO - VPL Root : { 122 236 127 241 }*/
/* End Operation */

/* Begin Operation: { 148 209 164 268 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Class Data");
/* IO - VPL Terminal : { 143 236 148 241 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 148 90 164 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Container");
/* IO - VPL Terminal : { 143 140 148 145 }*/
/* IO - VPL Root : { 164 140 169 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 120 206 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 185 140 190 145 }*/
/* IO - VPL Root : { 206 132 211 137 }*/
/* IO - VPL Root : { 206 146 211 151 }*/
/* End Operation */

/* Begin Operation: { 232 92 248 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Reset Old Editor");
/* IO - VPL Terminal : { 227 146 232 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 477 310 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 479 614 }{ 275 293 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 130 50 135 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 36 170 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
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

/* Start Operations: { 479 614 }{ 275 293 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 89 80 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 125 85 130 }*/
/* End Operation */

/* Begin Operation: { 106 103 122 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 101 125 106 130 }*/
/* IO - VPL Root : { 122 117 127 122 }*/
/* IO - VPL Root : { 122 133 127 138 }*/
/* End Operation */

/* Begin Operation: { 148 196 164 233 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Editor");
/* IO - VPL Terminal : { 143 212 148 217 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 133 164 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 164 144 169 149 }*/
/* End Operation */

/* Begin Operation: { 190 92 206 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Value");
/* IO - VPL Terminal : { 185 117 190 122 }*/
/* IO - VPL Terminal : { 185 144 190 149 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 25 240 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 479 910 }{ 110 262 } */
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

/* Begin Operation: { 274 101 290 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 290 104 295 109 }*/
/* End Operation */

/* Begin Operation: { 316 66 332 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Arity");
/* IO - VPL Terminal : { 311 84 316 89 }*/
/* IO - VPL Terminal : { 311 104 316 109 }*/
/* IO - VPL Terminal : { 311 124 316 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 358 27 366 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,2,6,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [5 to 4] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 480 670 }{ 388 438 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 368 80 399 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"MAIN");
/* IO - VPL Terminal : { 59 381 64 386 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 160 80 318 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Grandparent Helper");
/* IO - VPL Terminal : { 59 237 64 242 }*/
/* IO - VPL Root : { 80 237 85 242 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 215 122 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 101 237 106 242 }*/
/* IO - VPL Root : { 122 237 127 242 }*/
/* End Operation */

/* Begin Operation: { 148 204 164 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Section Data");
/* IO - VPL Terminal : { 143 237 148 242 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 148 63 164 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 143 122 148 127 }*/
/* IO - VPL Root : { 164 122 169 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 59 206 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get All Universals");
/* IO - VPL Terminal : { 185 122 190 127 }*/
/* IO - VPL Root : { 206 122 211 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 71 248 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Reset Old MAIN");
/* IO - VPL Terminal : { 227 122 232 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 477 310 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 479 614 }{ 314 268 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 94 80 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 108 85 113 }*/
/* IO - VPL Root : { 80 124 85 129 }*/
/* End Operation */

/* Begin Operation: { 106 199 122 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"MAIN");
/* IO - VPL Terminal : { 101 212 106 217 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 120 123 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 124 135 129 140 }*/
/* End Operation */

/* Begin Operation: { 148 83 164 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Value");
/* IO - VPL Terminal : { 143 108 148 113 }*/
/* IO - VPL Terminal : { 143 135 148 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 58 206 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Container");
/* IO - VPL Terminal : { 185 108 190 113 }*/
/* IO - VPL Root : { 206 108 211 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 59 248 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Send Refresh");
/* IO - VPL Terminal : { 227 108 232 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 29 282 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 479 614 }{ 150 262 } */
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

/* Begin Operation: { 274 101 290 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 290 104 295 109 }*/
/* End Operation */

/* Begin Operation: { 316 66 332 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Arity");
/* IO - VPL Terminal : { 311 84 316 89 }*/
/* IO - VPL Terminal : { 311 104 316 109 }*/
/* IO - VPL Terminal : { 311 124 316 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 358 28 366 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [5 to 4] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 480 670 }{ 388 438 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 368 81 398 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"INIT");
/* IO - VPL Terminal : { 58 381 63 386 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 160 80 318 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Grandparent Helper");
/* IO - VPL Terminal : { 59 237 64 242 }*/
/* IO - VPL Root : { 80 237 85 242 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 215 122 263 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"type");
/* IO - VPL Terminal : { 101 237 106 242 }*/
/* IO - VPL Root : { 122 237 127 242 }*/
/* End Operation */

/* Begin Operation: { 148 204 164 275 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Section Data");
/* IO - VPL Terminal : { 143 237 148 242 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 148 63 164 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 143 122 148 127 }*/
/* IO - VPL Root : { 164 122 169 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 59 206 189 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get All Universals");
/* IO - VPL Terminal : { 185 122 190 127 }*/
/* IO - VPL Root : { 206 122 211 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 73 249 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Reset Old INIT");
/* IO - VPL Terminal : { 226 122 231 127 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 477 310 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 479 614 }{ 314 268 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 94 80 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 108 85 113 }*/
/* IO - VPL Root : { 80 124 85 129 }*/
/* End Operation */

/* Begin Operation: { 106 199 123 229 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"INIT");
/* IO - VPL Terminal : { 100 212 105 217 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 106 120 123 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 124 135 129 140 }*/
/* End Operation */

/* Begin Operation: { 148 83 164 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Value");
/* IO - VPL Terminal : { 143 108 148 113 }*/
/* IO - VPL Terminal : { 143 135 148 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 58 206 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Container");
/* IO - VPL Terminal : { 185 108 190 113 }*/
/* IO - VPL Root : { 206 108 211 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 59 248 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Send Refresh");
/* IO - VPL Terminal : { 227 108 232 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 29 282 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 479 614 }{ 150 262 } */
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

/* Begin Operation: { 274 94 291 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 292 104 297 109 }*/
/* End Operation */

/* Begin Operation: { 316 66 332 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Arity");
/* IO - VPL Terminal : { 311 84 316 89 }*/
/* IO - VPL Terminal : { 311 104 316 109 }*/
/* IO - VPL Terminal : { 311 124 316 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 358 28 366 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,8,3,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [5 to 4] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 480 670 }{ 189 264 } */
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
	tempOperation = operation_to_match(tempOperation,environment,"Tool");
/* IO - VPL Terminal : { 59 148 64 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 64 101 80 112 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 80 104 85 109 }*/
/* End Operation */

/* Begin Operation: { 106 66 122 148 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Arity");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 104 106 109 }*/
/* IO - VPL Terminal : { 101 124 106 129 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 27 156 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,2,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 110 55 126 101 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 105 68 110 73 }*/
/* IO - VPL Terminal : { 105 83 110 88 }*/
/* IO - VPL Root : { 126 76 131 81 }*/
/* End Operation */

/* Begin Operation: { 148 31 164 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Add Or Remove Tool Menu Item");
/* IO - VPL Terminal : { 143 76 148 81 }*/
/* IO - VPL Terminal : { 143 123 148 128 }*/
/* IO - VPL Terminal : { 143 170 148 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 329 559 }{ 58 330 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 83 370 }{ 266 334 } */
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

/* Begin Operation: { 64 196 80 224 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 59 203 64 208 }*/
/* IO - VPL Terminal : { 59 212 64 217 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 64 140 80 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Tool");
/* IO - VPL Terminal : { 59 150 64 155 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 115 31 131 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 131 82 136 87 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 161 78 177 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Tools");
/* IO - VPL Terminal : { 156 104 161 109 }*/
/* IO - VPL Terminal : { 156 150 161 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 211 23 219 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 83 370 }{ 235 389 } */
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

/* Begin Operation: { 64 86 80 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 145 64 150 }*/
/* IO - VPL Root : { 80 145 85 150 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 222 80 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Tools");
/* IO - VPL Root : { 80 235 85 240 }*/
/* End Operation */

/* Begin Operation: { 106 101 122 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Find Project Info List");
/* IO - VPL Terminal : { 101 145 106 150 }*/
/* IO - VPL Terminal : { 101 192 106 197 }*/
/* IO - VPL Root : { 122 169 127 174 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 164 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Remove Tools");
/* IO - VPL Terminal : { 143 54 148 59 }*/
/* IO - VPL Terminal : { 143 88 148 93 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 35 198 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 190 26 206 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Record");
/* IO - VPL Terminal : { 185 76 190 81 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 34 248 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Make Dirty");
/* IO - VPL Terminal : { 227 76 232 81 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 22 282 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,3,0,3,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 1] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 148 20 164 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Container");
/* IO - VPL Terminal : { 143 70 148 75 }*/
/* IO - VPL Root : { 164 70 169 75 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 21 206 123 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Send Refresh");
/* IO - VPL Terminal : { 185 70 190 75 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 34 240 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,2,1,3,4);
	result = connect_root_to_terminal(ptrA,1,1,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 408 427 }{ 150 262 } */
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


Nat4 VPLU_Universal_20_Data_2F_Set_20_Arity_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Set_20_Arity_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 416 677 }{ 318 279 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 69 49 74 }*/
/* IO - VPL Root : { 44 128 49 133 }*/
/* IO - VPL Root : { 44 187 49 192 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 52 95 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Inarity");
/* IO - VPL Terminal : { 72 70 77 75 }*/
/* IO - VPL Terminal : { 72 90 77 95 }*/
/* IO - VPL Root : { 96 81 101 86 }*/
/* End Operation */

/* Begin Operation: { 120 91 137 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Outarity");
/* IO - VPL Terminal : { 114 113 119 118 }*/
/* IO - VPL Terminal : { 114 137 119 142 }*/
/* IO - VPL Root : { 138 125 143 130 }*/
/* End Operation */

/* Begin Operation: { 162 36 178 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Update Case Input Bars");
/* IO - VPL Terminal : { 157 63 162 68 }*/
/* IO - VPL Terminal : { 157 151 162 156 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 182 253 }{ 50 339 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 376 295 }{ 282 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 168 35 173 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 103 79 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
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
/* End Operation */

/* Begin Operation: { 148 74 164 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 106 148 111 }*/
/* IO - VPL Root : { 164 98 169 103 }*/
/* IO - VPL Root : { 164 114 169 119 }*/
/* End Operation */

/* Begin Operation: { 190 77 206 195 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Input Bar");
/* IO - VPL Terminal : { 185 114 190 119 }*/
/* IO - VPL Terminal : { 185 168 190 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 397 310 }{ 50 320 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 311 594 }{ 445 266 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 65 35 70 }*/
/* IO - VPL Root : { 30 135 35 140 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 70 79 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 79 110 84 115 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 101 65 106 70 }*/
/* IO - VPL Terminal : { 101 110 106 115 }*/
/* IO - VPL Root : { 122 87 127 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 55 164 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 87 148 92 }*/
/* IO - VPL Root : { 164 79 169 84 }*/
/* IO - VPL Root : { 164 95 169 100 }*/
/* End Operation */

/* Begin Operation: { 190 51 206 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 185 95 190 100 }*/
/* IO - VPL Root : { 206 80 211 85 }*/
/* IO - VPL Root : { 206 111 211 116 }*/
/* End Operation */

/* Begin Operation: { 232 41 248 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 227 80 232 85 }*/
/* IO - VPL Root : { 248 72 253 77 }*/
/* IO - VPL Root : { 248 88 253 93 }*/
/* End Operation */

/* Begin Operation: { 274 58 290 122 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Outputs");
/* IO - VPL Terminal : { 269 88 274 93 }*/
/* IO - VPL Root : { 290 77 295 82 }*/
/* IO - VPL Root : { 290 98 295 103 }*/
/* End Operation */

/* Begin Operation: { 316 50 332 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Insert Or Remove");
/* IO - VPL Terminal : { 311 77 316 82 }*/
/* IO - VPL Terminal : { 311 106 316 111 }*/
/* IO - VPL Terminal : { 311 135 316 140 }*/
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

/* Start Cases: { 586 490 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 372 836 }{ 205 255 } */
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

/* Begin Operation: { 64 85 80 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
/* End Operation */

/* Begin Operation: { 106 146 122 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 101 154 106 159 }*/
/* IO - VPL Terminal : { 101 164 106 169 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 372 836 }{ 369 276 } */
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

/* Begin Operation: { 190 211 206 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 206 214 211 219 }*/
/* End Operation */

/* Begin Operation: { 64 85 80 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
/* End Operation */

/* Begin Operation: { 190 99 206 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 185 116 190 121 }*/
/* IO - VPL Root : { 206 116 211 121 }*/
/* End Operation */

/* Begin Operation: { 106 146 122 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"<");
/* IO - VPL Terminal : { 101 154 106 159 }*/
/* IO - VPL Terminal : { 101 164 106 169 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 154 164 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 143 164 148 169 }*/
/* IO - VPL Terminal : { 143 176 148 181 }*/
/* IO - VPL Root : { 164 170 169 175 }*/
/* End Operation */

/* Begin Operation: { 232 155 248 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"make-list");
/* IO - VPL Terminal : { 227 170 232 175 }*/
/* IO - VPL Terminal : { 227 191 232 196 }*/
/* IO - VPL Terminal : { 227 214 232 219 }*/
/* IO - VPL Root : { 248 191 253 196 }*/
/* End Operation */

/* Begin Operation: { 274 33 290 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Insert Root");
/* IO - VPL Terminal : { 269 68 274 73 }*/
/* IO - VPL Terminal : { 269 109 274 114 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 316 22 324 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,1,3,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 372 836 }{ 234 247 } */
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

/* Begin Operation: { 64 94 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"split-nth");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Terminal : { 59 140 64 145 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
/* IO - VPL Root : { 80 140 85 145 }*/
/* End Operation */

/* Begin Operation: { 106 109 122 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"reverse");
/* IO - VPL Terminal : { 101 140 106 145 }*/
/* IO - VPL Root : { 122 140 127 145 }*/
/* End Operation */

/* Begin Operation: { 148 79 164 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Remove Just Self");
/* IO - VPL Terminal : { 143 140 148 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 358 28 374 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Use Best Controls");
/* IO - VPL Terminal : { 353 88 358 93 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 400 23 408 215 } */
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
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,6,2,7);
	result = connect_root_to_terminal(ptrA,2,0,3,7);
	result = connect_root_to_terminal(ptrA,2,5,1,8);
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

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 204 85 220 241 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Update Case Output Bars");
/* IO - VPL Terminal : { 199 135 204 140 }*/
/* IO - VPL Terminal : { 199 187 204 192 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 182 253 }{ 50 339 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 376 295 }{ 282 287 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 168 35 173 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 103 79 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
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
/* End Operation */

/* Begin Operation: { 148 74 164 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 106 148 111 }*/
/* IO - VPL Root : { 164 98 169 103 }*/
/* IO - VPL Root : { 164 114 169 119 }*/
/* End Operation */

/* Begin Operation: { 190 102 206 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Get Output Bar");
/* IO - VPL Terminal : { 185 134 190 139 }*/
/* IO - VPL Terminal : { 185 168 190 173 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 397 310 }{ 50 320 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 311 594 }{ 443 271 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 65 35 70 }*/
/* IO - VPL Root : { 30 136 35 141 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 70 79 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 79 110 84 115 }*/
/* End Operation */

/* Begin Operation: { 106 22 122 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 101 65 106 70 }*/
/* IO - VPL Terminal : { 101 110 106 115 }*/
/* IO - VPL Root : { 122 87 127 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 55 164 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 87 148 92 }*/
/* IO - VPL Root : { 164 79 169 84 }*/
/* IO - VPL Root : { 164 95 169 100 }*/
/* End Operation */

/* Begin Operation: { 190 62 206 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-r");
/* IO - VPL Terminal : { 185 95 190 100 }*/
/* IO - VPL Root : { 206 83 211 88 }*/
/* IO - VPL Root : { 206 106 211 111 }*/
/* End Operation */

/* Begin Operation: { 232 41 248 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 227 80 232 85 }*/
/* IO - VPL Root : { 248 72 253 77 }*/
/* IO - VPL Root : { 248 88 253 93 }*/
/* End Operation */

/* Begin Operation: { 274 62 290 118 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Inputs");
/* IO - VPL Terminal : { 269 88 274 93 }*/
/* IO - VPL Root : { 290 78 295 83 }*/
/* IO - VPL Root : { 290 96 295 101 }*/
/* End Operation */

/* Begin Operation: { 316 51 332 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Insert Or Remove");
/* IO - VPL Terminal : { 311 78 316 83 }*/
/* IO - VPL Terminal : { 311 107 316 112 }*/
/* IO - VPL Terminal : { 311 136 316 141 }*/
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

/* Start Cases: { 586 490 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 372 836 }{ 205 255 } */
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

/* Begin Operation: { 64 85 80 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
/* End Operation */

/* Begin Operation: { 106 146 122 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 101 154 106 159 }*/
/* IO - VPL Terminal : { 101 164 106 169 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 372 836 }{ 369 276 } */
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

/* Begin Operation: { 190 211 206 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 206 214 211 219 }*/
/* End Operation */

/* Begin Operation: { 64 85 80 151 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"(length)");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
/* End Operation */

/* Begin Operation: { 190 99 206 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 185 116 190 121 }*/
/* IO - VPL Root : { 206 116 211 121 }*/
/* End Operation */

/* Begin Operation: { 106 146 122 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"<");
/* IO - VPL Terminal : { 101 154 106 159 }*/
/* IO - VPL Terminal : { 101 164 106 169 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 154 164 190 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"--");
/* IO - VPL Terminal : { 143 164 148 169 }*/
/* IO - VPL Terminal : { 143 176 148 181 }*/
/* IO - VPL Root : { 164 170 169 175 }*/
/* End Operation */

/* Begin Operation: { 232 155 248 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"make-list");
/* IO - VPL Terminal : { 227 170 232 175 }*/
/* IO - VPL Terminal : { 227 191 232 196 }*/
/* IO - VPL Terminal : { 227 214 232 219 }*/
/* IO - VPL Root : { 248 191 253 196 }*/
/* End Operation */

/* Begin Operation: { 274 32 290 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Insert Terminal");
/* IO - VPL Terminal : { 269 68 274 73 }*/
/* IO - VPL Terminal : { 269 106 274 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,2,iList);
/* End Operation */

/* Begin Operation: { 316 22 324 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
	result = connect_root_to_terminal(ptrA,3,0,1,5);
	result = connect_root_to_terminal(ptrA,1,2,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,3,2,6);
	result = connect_root_to_terminal(ptrA,1,1,3,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 371 1114 }{ 234 247 } */
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

/* Begin Operation: { 64 94 80 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"split-nth");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Terminal : { 59 140 64 145 }*/
/* IO - VPL Root : { 80 116 85 121 }*/
/* IO - VPL Root : { 80 140 85 145 }*/
/* End Operation */

/* Begin Operation: { 106 109 122 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"reverse");
/* IO - VPL Terminal : { 101 140 106 145 }*/
/* IO - VPL Root : { 122 140 127 145 }*/
/* End Operation */

/* Begin Operation: { 148 79 164 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Remove Just Self");
/* IO - VPL Terminal : { 143 140 148 145 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,3,0,2,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 358 28 374 154 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Use Best Controls");
/* IO - VPL Terminal : { 353 88 358 93 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 400 23 408 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,4,1,5);
	result = connect_root_to_terminal(ptrA,2,5,1,6);
	result = connect_root_to_terminal(ptrA,1,6,1,7);
	result = connect_root_to_terminal(ptrA,2,6,2,7);
	result = connect_root_to_terminal(ptrA,2,0,3,7);
	result = connect_root_to_terminal(ptrA,2,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,3,0,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Can_20_Fail_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Can_20_Fail_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 539 803 }{ 290 269 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 127 80 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
/* IO - VPL Root : { 80 152 85 157 }*/
/* End Operation */

/* Begin Operation: { 106 82 122 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 101 116 106 121 }*/
/* IO - VPL Terminal : { 101 152 106 157 }*/
/* IO - VPL Root : { 122 135 127 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 148 115 164 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"List");
/* IO - VPL Terminal : { 143 135 148 140 }*/
/* IO - VPL Root : { 164 127 169 132 }*/
/* IO - VPL Root : { 164 141 169 146 }*/
/* End Operation */

/* Begin Operation: { 190 107 206 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Can Fail?");
/* IO - VPL Terminal : { 185 141 190 146 }*/
/* IO - VPL Root : { 206 141 211 146 }*/
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

/* Start Cases: { 476 207 }{ 200 300 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 476 509 }{ 232 262 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 89 80 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Helper");
/* IO - VPL Terminal : { 59 116 64 121 }*/
/* IO - VPL Root : { 80 106 85 111 }*/
/* IO - VPL Root : { 80 125 85 130 }*/
/* End Operation */

/* Begin Operation: { 106 87 122 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Can Fail?");
/* IO - VPL Terminal : { 101 125 106 130 }*/
/* IO - VPL Root : { 122 125 127 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 113 164 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 143 125 148 130 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 190 22 198 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 185 125 190 130 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 476 772 }{ 150 255 } */
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 232 22 240 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 116 232 121 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 539 803 }{ 150 258 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 100 68 135 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"FALSE");
/* IO - VPL Root : { 68 115 73 120 }*/
/* End Operation */

/* Begin Operation: { 97 21 105 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 92 115 97 120 }*/
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


Nat4 VPLU_Universal_20_Data_2F_Set_20_CPX_20_Text_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Set_20_CPX_20_Text_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 166 326 }{ 409 282 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 77 76 93 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Update Record");
/* IO - VPL Terminal : { 72 101 77 106 }*/
/* IO - VPL Terminal : { 72 142 77 147 }*/
/* IO - VPL Root : { 93 142 98 147 }*/
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

/* Start Cases: { 215 330 }{ 72 336 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 390 361 }{ 307 326 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 25 110 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 89 82 94 87 }*/
/* IO - VPL Root : { 110 82 115 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 132 40 148 128 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Environment");
/* IO - VPL Terminal : { 127 82 132 87 }*/
/* IO - VPL Root : { 148 67 153 72 }*/
/* IO - VPL Root : { 148 96 153 101 }*/
/* End Operation */

/* Begin Operation: { 54 82 70 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Full Name");
/* IO - VPL Terminal : { 49 120 54 125 }*/
/* IO - VPL Root : { 70 120 75 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 94 168 110 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Create Full Name");
/* IO - VPL Terminal : { 89 192 94 197 }*/
/* IO - VPL Terminal : { 89 242 94 247 }*/
/* IO - VPL Root : { 110 223 115 228 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 357 322 }{ 78 298 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 341 420 }{ 256 265 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 37 124 53 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"/");
/* IO - VPL Root : { 53 126 58 131 }*/
/* End Operation */

/* Begin Operation: { 82 100 98 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"in\"");
/* IO - VPL Terminal : { 77 112 82 117 }*/
/* IO - VPL Terminal : { 77 126 82 131 }*/
/* IO - VPL Root : { 98 119 103 124 }*/
/* End Operation */

/* Begin Operation: { 126 168 142 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 121 170 126 175 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 126 66 142 121 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,2,"prefix");
/* IO - VPL Terminal : { 121 82 126 87 }*/
/* IO - VPL Terminal : { 121 100 126 105 }*/
/* IO - VPL Root : { 142 82 147 87 }*/
/* IO - VPL Root : { 142 100 147 105 }*/
/* End Operation */

/* Begin Operation: { 172 112 188 166 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"\"join\"");
/* IO - VPL Terminal : { 167 128 172 133 }*/
/* IO - VPL Terminal : { 167 146 172 151 }*/
/* IO - VPL Root : { 188 137 193 142 }*/
/* End Operation */

/* Begin Operation: { 218 29 226 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 213 123 218 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,0,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 292 383 }{ 111 259 } */
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

/* Begin Operation: { 177 141 193 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"method");
/* IO - VPL Root : { 193 158 198 163 }*/
/* End Operation */

/* Begin Operation: { 177 90 193 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 193 101 198 106 }*/
/* End Operation */

/* Begin Operation: { 222 65 238 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Rename Element");
/* IO - VPL Terminal : { 217 82 222 87 }*/
/* IO - VPL Terminal : { 217 101 222 106 }*/
/* IO - VPL Terminal : { 217 120 222 125 }*/
/* IO - VPL Terminal : { 217 139 222 144 }*/
/* IO - VPL Terminal : { 217 158 222 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 273 26 281 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 268 146 273 151 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,2,2,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,3,3,7);
	result = connect_root_to_terminal(ptrA,1,4,4,7);
	result = connect_root_to_terminal(ptrA,1,5,5,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 432 571 }{ 193 263 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 98 42 115 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Unique Name For String");
/* IO - VPL Terminal : { 92 120 97 125 }*/
/* IO - VPL Root : { 116 120 121 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 26 156 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 143 120 148 125 }*/
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 141 70 157 180 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Set Name");
/* IO - VPL Terminal : { 136 105 141 110 }*/
/* IO - VPL Terminal : { 136 142 141 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_super_to(tempOperation,environment,kTRUE);
/* End Operation */

/* Begin Operation: { 142 197 157 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
/* IO - VPL Root : { 157 223 162 228 }*/
/* End Operation */

/* Begin Operation: { 183 72 199 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 178 115 183 120 }*/
/* IO - VPL Terminal : { 178 160 183 165 }*/
/* IO - VPL Root : { 199 137 204 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 220 84 236 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Editor");
/* IO - VPL Terminal : { 215 137 220 142 }*/
/* IO - VPL Root : { 236 137 241 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 257 77 273 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Update Data");
/* IO - VPL Terminal : { 252 137 257 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 382 309 }{ 50 371 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 343 281 }{ 153 268 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 55 26 70 56 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 50 39 55 44 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 55 91 71 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Update Data");
/* IO - VPL Terminal : { 50 148 55 153 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 20 104 212 } */
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

/* Begin Operation: { 296 47 312 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Case Data/Update Names");
/* IO - VPL Terminal : { 291 115 296 120 }*/
/* IO - VPL Terminal : { 291 158 296 163 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 329 82 345 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Refresh Data");
/* IO - VPL Terminal : { 324 137 329 142 }*/
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 408 321 }{ 50 320 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 357 338 }{ 165 281 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 18 71 48 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 51 31 56 36 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 56 90 72 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh Data");
/* IO - VPL Terminal : { 51 150 56 155 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 103 20 111 212 } */
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

/* Begin Operation: { 371 20 379 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,1,1,2,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,4,2,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [2 to 1] */
/* Synchro [3 to 2] */
/* Synchro [7 to 6] */
/* Synchro [8 to 7] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 404 334 }{ 194 264 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 88 33 93 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 55 80 183 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Duplicate method name!");
/* IO - VPL Root : { 80 117 85 122 }*/
/* End Operation */

/* Begin Operation: { 109 95 125 143 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"show");
/* IO - VPL Terminal : { 104 117 109 122 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 154 22 162 214 } */
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


Nat4 VPLU_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 477 748 }{ 471 287 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 50 33 55 }*/
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 176 75 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 75 178 80 183 }*/
/* End Operation */

/* Begin Operation: { 103 132 119 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-text");
/* IO - VPL Terminal : { 98 146 103 151 }*/
/* IO - VPL Terminal : { 98 162 103 167 }*/
/* IO - VPL Terminal : { 98 178 103 183 }*/
/* IO - VPL Root : { 119 139 124 144 }*/
/* IO - VPL Root : { 119 159 124 164 }*/
/* IO - VPL Root : { 119 178 124 183 }*/
/* End Operation */

/* Begin Operation: { 147 169 163 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"nind");
/* IO - VPL Terminal : { 142 178 147 183 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 182 177 198 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"2");
/* IO - VPL Root : { 198 179 203 184 }*/
/* End Operation */

/* Begin Operation: { 227 121 243 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-integer");
/* IO - VPL Terminal : { 222 139 227 144 }*/
/* IO - VPL Terminal : { 222 159 227 164 }*/
/* IO - VPL Terminal : { 222 179 227 184 }*/
/* IO - VPL Root : { 243 139 248 144 }*/
/* IO - VPL Root : { 243 159 248 164 }*/
/* IO - VPL Root : { 243 179 248 184 }*/
/* End Operation */

/* Begin Operation: { 279 79 295 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"/Set CPX Text");
/* IO - VPL Root : { 295 117 300 122 }*/
/* End Operation */

/* Begin Operation: { 324 84 340 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,1,"pack");
/* IO - VPL Terminal : { 319 93 324 98 }*/
/* IO - VPL Terminal : { 319 104 324 109 }*/
/* IO - VPL Terminal : { 319 117 324 122 }*/
/* IO - VPL Root : { 340 104 345 109 }*/
/* End Operation */

/* Begin Operation: { 361 62 377 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-r");
/* IO - VPL Terminal : { 356 82 361 87 }*/
/* IO - VPL Terminal : { 356 104 361 109 }*/
/* IO - VPL Root : { 377 93 382 98 }*/
/* End Operation */

/* Begin Operation: { 423 19 431 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 418 50 423 55 }*/
/* IO - VPL Terminal : { 418 93 423 98 }*/
/* IO - VPL Terminal : { 418 159 423 164 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,3,2,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,2,2,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,3,5,2,7);
	result = connect_root_to_terminal(ptrA,1,6,3,7);
	result = connect_root_to_terminal(ptrA,2,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,0,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,2,5,3,9);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 206 791 }{ 548 348 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 57 33 62 }*/
/* IO - VPL Root : { 28 91 33 96 }*/
/* IO - VPL Root : { 28 130 33 135 }*/
/* IO - VPL Root : { 28 171 33 176 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 144 67 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 67 146 72 151 }*/
/* End Operation */

/* Begin Operation: { 96 100 112 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-text");
/* IO - VPL Terminal : { 91 114 96 119 }*/
/* IO - VPL Terminal : { 91 130 96 135 }*/
/* IO - VPL Terminal : { 91 146 96 151 }*/
/* IO - VPL Root : { 112 107 117 112 }*/
/* IO - VPL Root : { 112 130 117 135 }*/
/* IO - VPL Root : { 112 146 117 151 }*/
/* End Operation */

/* Begin Operation: { 136 136 152 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"case");
/* IO - VPL Terminal : { 131 146 136 151 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 133 45 149 110 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"attach-l");
/* IO - VPL Terminal : { 128 57 133 62 }*/
/* IO - VPL Terminal : { 128 91 133 96 }*/
/* IO - VPL Root : { 149 92 154 97 }*/
/* End Operation */

/* Begin Operation: { 317 14 333 88 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Case Data");
/* IO - VPL Terminal : { 312 49 317 54 }*/
/* IO - VPL Root : { 333 49 338 54 }*/
/* End Operation */

/* Begin Operation: { 258 181 274 279 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"Item Data");
/* IO - VPL Terminal : { 253 229 258 234 }*/
/* IO - VPL Root : { 274 229 279 234 }*/
/* End Operation */

/* Begin Operation: { 212 78 228 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Case Data");
/* IO - VPL Root : { 228 103 233 108 }*/
/* End Operation */

/* Begin Operation: { 257 33 273 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get List Datum");
/* IO - VPL Terminal : { 252 57 257 62 }*/
/* IO - VPL Terminal : { 252 103 257 108 }*/
/* IO - VPL Root : { 273 85 278 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 313 197 329 279 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 308 229 313 234 }*/
/* IO - VPL Terminal : { 308 245 313 250 }*/
/* IO - VPL Root : { 329 237 334 242 }*/
/* End Operation */

/* Begin Operation: { 368 196 384 322 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Install Helper");
/* IO - VPL Terminal : { 363 237 368 242 }*/
/* IO - VPL Terminal : { 363 280 368 285 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 370 18 386 98 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Owner");
/* IO - VPL Terminal : { 365 49 370 54 }*/
/* IO - VPL Terminal : { 365 65 370 70 }*/
/* IO - VPL Root : { 386 57 391 62 }*/
/* End Operation */

/* Begin Operation: { 410 24 426 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Initialize Item Data");
/* IO - VPL Terminal : { 405 57 410 62 }*/
/* IO - VPL Terminal : { 405 115 410 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);

	{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;
	V_Operation localOperation = tempOperation;

/* Start Cases: { 371 900 }{ 76 321 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 195 373 }{ 315 281 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 70 33 75 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 93 26 109 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"List Data");
/* IO - VPL Terminal : { 88 72 93 77 }*/
/* IO - VPL Root : { 109 72 114 77 }*/
/* End Operation */

/* Begin Operation: { 129 50 144 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Operation Data");
/* IO - VPL Root : { 144 88 149 93 }*/
/* End Operation */

/* Begin Operation: { 166 25 182 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Helper Name");
/* IO - VPL Terminal : { 161 72 166 77 }*/
/* IO - VPL Terminal : { 161 88 166 93 }*/
/* IO - VPL Root : { 182 80 187 85 }*/
/* End Operation */

/* Begin Operation: { 203 46 219 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"pack");
/* IO - VPL Terminal : { 198 80 203 85 }*/
/* IO - VPL Root : { 219 80 224 85 }*/
/* End Operation */

/* Begin Operation: { 239 115 255 187 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Lists");
/* IO - VPL Terminal : { 234 142 239 147 }*/
/* IO - VPL Terminal : { 234 158 239 163 }*/
/* IO - VPL Root : { 255 150 260 155 }*/
/* End Operation */

/* Begin Operation: { 271 20 279 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 448 11 464 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Add To List Data");
/* IO - VPL Terminal : { 443 57 448 62 }*/
/* IO - VPL Terminal : { 443 85 448 90 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 494 22 502 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 489 57 494 62 }*/
/* IO - VPL Terminal : { 489 92 494 97 }*/
/* IO - VPL Terminal : { 489 130 494 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,3,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,1,7,2,8);
	result = connect_root_to_terminal(ptrA,1,6,1,9);
	result = connect_root_to_terminal(ptrA,1,8,2,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,1,5,2,10);
	result = connect_root_to_terminal(ptrA,1,5,1,11);
	result = connect_root_to_terminal(ptrA,1,9,2,11);
	result = connect_root_to_terminal(ptrA,1,11,1,12);
	result = connect_root_to_terminal(ptrA,1,9,2,12);
	result = connect_root_to_terminal(ptrA,1,11,1,13);
	result = connect_root_to_terminal(ptrA,1,8,2,13);
	result = connect_root_to_terminal(ptrA,1,11,1,14);
	result = connect_root_to_terminal(ptrA,1,4,2,14);
	result = connect_root_to_terminal(ptrA,2,2,3,14);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* Synchro [11 to 10] */
/* Synchro [13 to 12] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 505 715 }{ 256 265 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 50 33 55 }*/
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 176 75 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"8");
/* IO - VPL Root : { 75 178 80 183 }*/
/* End Operation */

/* Begin Operation: { 103 132 119 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-text");
/* IO - VPL Terminal : { 98 146 103 151 }*/
/* IO - VPL Terminal : { 98 162 103 167 }*/
/* IO - VPL Terminal : { 98 178 103 183 }*/
/* IO - VPL Root : { 119 139 124 144 }*/
/* IO - VPL Root : { 119 162 124 167 }*/
/* IO - VPL Root : { 119 178 124 183 }*/
/* End Operation */

/* Begin Operation: { 147 156 163 205 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"end meth");
/* IO - VPL Terminal : { 142 178 147 183 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 145 51 161 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"detach-l");
/* IO - VPL Terminal : { 140 82 145 87 }*/
/* IO - VPL Root : { 161 68 166 73 }*/
/* IO - VPL Root : { 161 93 166 98 }*/
/* End Operation */

/* Begin Operation: { 206 22 214 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 201 68 206 73 }*/
/* IO - VPL Terminal : { 201 93 206 98 }*/
/* IO - VPL Terminal : { 201 162 206 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,3,2,1,3);
	result = connect_root_to_terminal(ptrA,2,0,1,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,2,2,3,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 255 742 }{ 357 272 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 50 33 55 }*/
/* IO - VPL Root : { 28 82 33 87 }*/
/* IO - VPL Root : { 28 114 33 119 }*/
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 176 75 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"4");
/* IO - VPL Root : { 75 178 80 183 }*/
/* End Operation */

/* Begin Operation: { 103 132 119 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-text");
/* IO - VPL Terminal : { 98 146 103 151 }*/
/* IO - VPL Terminal : { 98 162 103 167 }*/
/* IO - VPL Terminal : { 98 178 103 183 }*/
/* IO - VPL Root : { 119 139 124 144 }*/
/* IO - VPL Root : { 119 159 124 164 }*/
/* IO - VPL Root : { 119 178 124 183 }*/
/* End Operation */

/* Begin Operation: { 147 165 163 196 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"comm");
/* IO - VPL Terminal : { 142 178 147 183 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 191 177 207 185 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"1");
/* IO - VPL Root : { 207 179 212 184 }*/
/* End Operation */

/* Begin Operation: { 146 122 162 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"6");
/* IO - VPL Root : { 162 124 167 129 }*/
/* End Operation */

/* Begin Operation: { 191 104 207 139 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"++");
/* IO - VPL Terminal : { 186 113 191 118 }*/
/* IO - VPL Terminal : { 186 124 191 129 }*/
/* IO - VPL Root : { 207 119 212 124 }*/
/* End Operation */

/* Begin Operation: { 236 111 252 231 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Find String Length");
/* IO - VPL Terminal : { 231 139 236 144 }*/
/* IO - VPL Terminal : { 231 159 236 164 }*/
/* IO - VPL Terminal : { 231 179 236 184 }*/
/* IO - VPL Root : { 252 159 257 164 }*/
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

/* Start Cases: { 597 893 }{ 67 333 }*/
/* Begin Case */
	ptrA = case_insert(0,(V_Method)localOperation,environment);
	ptrA = case_open(ptrA,localOperation,environment);

/* Start Operations: { 506 933 }{ 220 283 } */
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

/* Begin Operation: { 77 76 93 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,3,3,"get-integer");
/* IO - VPL Terminal : { 72 94 77 99 }*/
/* IO - VPL Terminal : { 72 114 77 119 }*/
/* IO - VPL Terminal : { 72 134 77 139 }*/
/* IO - VPL Root : { 93 94 98 99 }*/
/* IO - VPL Root : { 93 114 98 119 }*/
/* IO - VPL Root : { 93 134 98 139 }*/
/* End Operation */

/* Begin Operation: { 117 132 133 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 112 134 117 139 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 164 20 172 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 159 114 164 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,2,1);
	result = connect_root_to_terminal(ptrA,3,0,3,1);
	result = connect_root_to_terminal(ptrA,3,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 289 19 297 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 284 50 289 55 }*/
/* IO - VPL Terminal : { 284 82 289 87 }*/
/* IO - VPL Terminal : { 284 159 289 164 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,4,0,1,2);
	result = connect_root_to_terminal(ptrA,3,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,3,2);
	result = connect_root_to_terminal(ptrA,3,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
	result = connect_root_to_terminal(ptrA,1,2,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
	result = connect_root_to_terminal(ptrA,1,7,2,7);
	result = connect_root_to_terminal(ptrA,1,4,3,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,2,0,2,8);
	result = connect_root_to_terminal(ptrA,1,7,3,8);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 521 632 }{ 256 260 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 57 33 62 }*/
/* IO - VPL Root : { 28 91 33 96 }*/
/* IO - VPL Root : { 28 130 33 135 }*/
/* IO - VPL Root : { 28 171 33 176 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 115 122 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"+1");
/* IO - VPL Terminal : { 101 130 106 135 }*/
/* IO - VPL Root : { 122 130 127 135 }*/
/* End Operation */

/* Begin Operation: { 69 126 85 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"external-size");
/* IO - VPL Terminal : { 64 171 69 176 }*/
/* IO - VPL Root : { 85 171 90 176 }*/
/* End Operation */

/* Begin Operation: { 151 121 167 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,">=");
/* IO - VPL Terminal : { 146 130 151 135 }*/
/* IO - VPL Terminal : { 146 141 151 146 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFinish,kSuccess);
/* End Operation */

/* Begin Operation: { 200 22 208 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 195 57 200 62 }*/
/* IO - VPL Terminal : { 195 91 200 96 }*/
/* IO - VPL Terminal : { 195 130 200 135 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,3,0,1,1);
	result = connect_root_to_terminal(ptrA,4,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,2,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,1,3,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_Universal_20_Data_2F_Remove_20_Self_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_Universal_20_Data_2F_Remove_20_Self_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 173 355 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 115 35 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 22 80 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"remove tool menu item");
/* IO - VPL Terminal : { 59 89 64 94 }*/
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

/* Start Operations: { 60 60 }{ 306 355 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 116 35 121 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 158 80 206 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Text");
/* IO - VPL Terminal : { 59 180 64 185 }*/
/* IO - VPL Root : { 80 172 85 177 }*/
/* IO - VPL Root : { 80 188 85 193 }*/
/* End Operation */

/* Begin Operation: { 106 177 122 204 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"Tool");
/* IO - VPL Terminal : { 101 188 106 193 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 64 22 80 142 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Project Data");
/* IO - VPL Terminal : { 59 81 64 86 }*/
/* IO - VPL Root : { 80 81 85 86 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 115 122 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"Tools");
/* IO - VPL Root : { 122 128 127 133 }*/
/* End Operation */

/* Begin Operation: { 148 37 164 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Find Project Info List");
/* IO - VPL Terminal : { 143 81 148 86 }*/
/* IO - VPL Terminal : { 143 128 148 133 }*/
/* IO - VPL Root : { 164 105 169 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 190 73 206 177 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Remove Tools");
/* IO - VPL Terminal : { 185 105 190 110 }*/
/* IO - VPL Terminal : { 185 139 190 144 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,4,2,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,0,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 64 195 80 299 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"//Remove Self");
/* IO - VPL Terminal : { 59 245 64 250 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,2);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


/* Stop Universals */






Nat4	loadClasses_MyUniversalData(V_Environment environment);
Nat4	loadClasses_MyUniversalData(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Universal Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Universal_20_Data_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyUniversalData(V_Environment environment);
Nat4	loadUniversals_MyUniversalData(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Universal Data/C Code Export Cases",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_universal_load(result,environment);

	result = method_new("Universal Data/C Code Footer",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_C_20_Code_20_Footer_universal_load(result,environment);

	result = method_new("Universal Data/C Code Header",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_C_20_Code_20_Header_universal_load(result,environment);

	result = method_new("Universal Data/Create Roots",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Create_20_Roots_universal_load(result,environment);

	result = method_new("Universal Data/Create Terminals",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Create_20_Terminals_universal_load(result,environment);

	result = method_new("Universal Data/Export Text",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Export_20_Text_universal_load(result,environment);

	result = method_new("Universal Data/Full Name",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Full_20_Name_universal_load(result,environment);

	result = method_new("Universal Data/Get Inarity",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Get_20_Inarity_universal_load(result,environment);

	result = method_new("Universal Data/Get Outarity",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Get_20_Outarity_universal_load(result,environment);

	result = method_new("Universal Data/Get Project Data",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Get_20_Project_20_Data_universal_load(result,environment);

	result = method_new("Universal Data/Initialize Item Data",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Initialize_20_Item_20_Data_universal_load(result,environment);

	result = method_new("Universal Data/Install Names",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Install_20_Names_universal_load(result,environment);

	result = method_new("Universal Data/Open",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Open_universal_load(result,environment);

	result = method_new("Universal Data/Close",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Close_universal_load(result,environment);

	result = method_new("Universal Data/Push Lists Data",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Push_20_Lists_20_Data_universal_load(result,environment);

	result = method_new("Universal Data/Set Name",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Set_20_Name_universal_load(result,environment);

	result = method_new("Universal Data/Execute",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Execute_universal_load(result,environment);

	result = method_new("Universal Data/Buffer Initialization",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Buffer_20_Initialization_universal_load(result,environment);

	result = method_new("Universal Data/Get Value",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Get_20_Value_universal_load(result,environment);

	result = method_new("Universal Data/C Code Value",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_C_20_Code_20_Value_universal_load(result,environment);

	result = method_new("Universal Data/Update Record",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Update_20_Record_universal_load(result,environment);

	result = method_new("Universal Data/Post Open",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Post_20_Open_universal_load(result,environment);

	result = method_new("Universal Data/Get Method Data",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Get_20_Method_20_Data_universal_load(result,environment);

	result = method_new("Universal Data/Get All Breakpoints",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Get_20_All_20_Breakpoints_universal_load(result,environment);

	result = method_new("Universal Data/Have Row Values?",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Have_20_Row_20_Values_3F__universal_load(result,environment);

	result = method_new("Universal Data/Get Export Name",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Get_20_Export_20_Name_universal_load(result,environment);

	result = method_new("Universal Data/Get Universal",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Get_20_Universal_universal_load(result,environment);

	result = method_new("Universal Data/Set Value",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Set_20_Value_universal_load(result,environment);

	result = method_new("Universal Data/Set Arity",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Set_20_Arity_universal_load(result,environment);

	result = method_new("Universal Data/Can Fail?",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Can_20_Fail_3F__universal_load(result,environment);

	result = method_new("Universal Data/Set CPX Text",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Set_20_CPX_20_Text_universal_load(result,environment);

	result = method_new("Universal Data/Parse CPX Buffer",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_universal_load(result,environment);

	result = method_new("Universal Data/Remove Self",environment);
	if(result == NULL) return kERROR;
	VPLU_Universal_20_Data_2F_Remove_20_Self_universal_load(result,environment);

	return kNOERROR;

}



Nat4	loadPersistents_MyUniversalData(V_Environment environment);
Nat4	loadPersistents_MyUniversalData(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_MyUniversalData(V_Environment environment);
Nat4	load_MyUniversalData(V_Environment environment)
{

	loadClasses_MyUniversalData(environment);
	loadUniversals_MyUniversalData(environment);
	loadPersistents_MyUniversalData(environment);
	return kNOERROR;

}

