/* A VPL Section File */
/*

VPLWindowItems.rnt.c
Copyright: 2002 Scott B. Anderson

*/




	Nat4 tempAttribute_VPLWindow_20_Item_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLWindow_20_Item_2F_Selected[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLWindow_20_Item_2F_Highlight[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLWindow_20_Item_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};


Nat4 VPLC_VPLWindow_20_Item_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLWindow_20_Item_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 341 343 }{ 197 353 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Item Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_VPLWindow_20_Item_2F_Frame,environment);
	tempAttribute = attribute_add("Selected",tempClass,tempAttribute_VPLWindow_20_Item_2F_Selected,environment);
	tempAttribute = attribute_add("Highlight",tempClass,tempAttribute_VPLWindow_20_Item_2F_Highlight,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_VPLWindow_20_Item_2F_Visible_3F_,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 111 471 }{ 675 335 } */
Nat4 VPLU_VPLWindow_20_Item_2F_Old_20_Redraw_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Old_20_Redraw_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 220 294 }{ 399 419 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 87 33 92 }*/
/* IO - VPL Root : { 28 161 33 166 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 130 68 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 47 173 52 178 }*/
/* IO - VPL Root : { 68 173 73 178 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 93 256 109 283 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 88 267 93 272 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 93 111 109 237 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Window Record");
/* IO - VPL Terminal : { 88 173 93 178 }*/
/* IO - VPL Root : { 109 165 114 170 }*/
/* IO - VPL Root : { 109 181 114 186 }*/
/* End Operation */

/* Begin Operation: { 146 346 161 373 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 141 357 146 362 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 146 254 162 317 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"GetPort");
/* IO - VPL Terminal : { 141 283 146 288 }*/
/* IO - VPL Root : { 162 283 167 288 }*/
/* End Operation */

/* Begin Operation: { 145 117 161 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Port");
/* IO - VPL Terminal : { 140 165 145 170 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 181 34 197 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Up Drawing");
/* IO - VPL Terminal : { 176 87 181 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 217 62 233 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 212 87 217 92 }*/
/* IO - VPL Root : { 233 78 238 83 }*/
/* IO - VPL Root : { 233 96 238 101 }*/
/* End Operation */

/* Begin Operation: { 255 41 271 153 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-Rect");
/* IO - VPL Terminal : { 250 96 255 101 }*/
/* IO - VPL Root : { 271 96 276 101 }*/
/* End Operation */

/* Begin Operation: { 295 61 311 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"EraseRect");
/* IO - VPL Terminal : { 290 96 295 101 }*/
/* End Operation */

/* Begin Operation: { 332 24 348 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"InvalWindowRect");
/* IO - VPL Terminal : { 327 59 332 64 }*/
/* IO - VPL Terminal : { 327 96 332 101 }*/
/* IO - VPL Root : { 348 59 353 64 }*/
/* IO - VPL Root : { 348 96 353 101 }*/
/* End Operation */

/* Begin Operation: { 326 254 342 317 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,1,"SetPort");
/* IO - VPL Terminal : { 321 283 326 288 }*/
/* IO - VPL Root : { 342 283 347 288 }*/
/* End Operation */

/* Begin Operation: { 367 21 375 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,1,0,1,8);
	result = connect_root_to_terminal(ptrA,2,8,1,9);
	result = connect_root_to_terminal(ptrA,1,9,1,10);
	result = connect_root_to_terminal(ptrA,2,3,1,11);
	result = connect_root_to_terminal(ptrA,1,9,2,11);
	result = connect_root_to_terminal(ptrA,1,5,1,12);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [3 to 2] */
/* Synchro [5 to 4] */
/* Synchro [6 to 5] */
/* Synchro [7 to 6] */
/* Synchro [8 to 7] */
/* Synchro [11 to 10] */
/* Synchro [12 to 11] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Activate_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Activate_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 702 594 }{ 150 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 63 33 68 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 92 72 109 146 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Redraw");
/* IO - VPL Terminal : { 86 94 91 99 }*/
/* IO - VPL Terminal : { 86 118 91 123 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 124 26 132 218 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Adjust_20_Origin_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Adjust_20_Origin_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 323 342 }{ 111 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 20 59 212 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Clean_20_Up_20_Context_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Clean_20_Up_20_Context_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 335 349 }{ 196 308 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 99 20 107 212 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Close_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Close_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 392 333 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 118 65 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 65 129 70 134 }*/
/* End Operation */

/* Begin Operation: { 94 83 110 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 89 115 94 120 }*/
/* IO - VPL Terminal : { 89 131 94 136 }*/
/* IO - VPL Root : { 110 123 115 128 }*/
/* End Operation */

/* Begin Operation: { 125 17 133 209 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Draw_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Draw_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 380 349 }{ 151 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 63 33 68 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 20 74 212 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Enter_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Enter_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 362 355 }{ 101 273 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Exit_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Exit_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 351 346 }{ 96 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
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


Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Application_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Application_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 377 608 }{ 185 318 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 117 35 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 66 80 172 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 80 117 85 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
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



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Size_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Size_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 335 351 }{ 251 277 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 384 325 }{ 176 312 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 75 68 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 47 115 52 120 }*/
/* IO - VPL Root : { 68 107 73 112 }*/
/* IO - VPL Root : { 68 123 73 128 }*/
/* End Operation */

/* Begin Operation: { 91 205 106 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 86 218 91 223 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 90 67 106 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 85 123 90 128 }*/
/* IO - VPL Root : { 106 123 111 128 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
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

/* Start Operations: { 288 332 }{ 149 267 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 102 66 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 66 115 71 120 }*/
/* End Operation */

/* Begin Operation: { 94 20 102 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 89 115 94 120 }*/
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


Nat4 VPLU_VPLWindow_20_Item_2F_Hilite_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Hilite_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 399 330 }{ 150 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 63 33 68 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 49 68 65 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Highlight");
/* IO - VPL Terminal : { 44 90 49 95 }*/
/* IO - VPL Terminal : { 44 114 49 119 }*/
/* IO - VPL Root : { 65 102 70 107 }*/
/* End Operation */

/* Begin Operation: { 80 20 88 212 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Idle_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Idle_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 349 354 }{ 111 288 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 88 33 93 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 20 59 212 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Key_20_Down_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Key_20_Down_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 252 335 }{ 158 281 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 62 70 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Process Key");
/* IO - VPL Terminal : { 49 101 54 106 }*/
/* IO - VPL Terminal : { 49 142 54 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 252 335 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 88 33 93 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 48 68 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 47 88 52 93 }*/
/* IO - VPL Root : { 68 80 73 85 }*/
/* IO - VPL Root : { 68 96 73 101 }*/
/* End Operation */

/* Begin Operation: { 94 6 111 42 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 88 22 93 27 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 93 74 109 178 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Key Down");
/* IO - VPL Terminal : { 88 107 93 112 }*/
/* IO - VPL Terminal : { 88 142 93 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 138 20 146 212 } */
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
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Mouse_20_Down_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Mouse_20_Down_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 649 403 }{ 150 294 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 88 33 93 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 58 69 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Process Click");
/* IO - VPL Terminal : { 48 99 53 104 }*/
/* IO - VPL Terminal : { 48 142 53 147 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 87 20 95 212 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Open_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 375 334 }{ 138 272 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 83 67 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 46 115 51 120 }*/
/* IO - VPL Terminal : { 46 131 51 136 }*/
/* IO - VPL Root : { 67 123 72 128 }*/
/* End Operation */

/* Begin Operation: { 87 17 95 209 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Prepare_20_Context_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Prepare_20_Context_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 307 337 }{ 192 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 65 102 80 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 80 115 85 120 }*/
/* End Operation */

/* Begin Operation: { 102 20 110 212 } */
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



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Process_20_Click_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Process_20_Click_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 342 335 }{ 148 295 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 20 67 212 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Process_20_Key_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Process_20_Key_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 342 335 }{ 148 295 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 59 20 67 212 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Frame_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Frame_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 323 342 }{ 149 276 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 50 36 66 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 45 66 50 71 }*/
/* IO - VPL Terminal : { 45 82 50 87 }*/
/* IO - VPL Root : { 66 74 71 79 }*/
/* End Operation */

/* Begin Operation: { 90 20 98 212 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Location_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Location_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 323 342 }{ 306 362 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 207 70 305 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Size");
/* IO - VPL Terminal : { 49 255 54 260 }*/
/* IO - VPL Root : { 70 255 75 260 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 134 102 150 184 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 129 142 134 147 }*/
/* IO - VPL Root : { 150 126 155 131 }*/
/* IO - VPL Root : { 150 159 155 164 }*/
/* End Operation */

/* Begin Operation: { 95 191 111 289 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Add Point");
/* IO - VPL Terminal : { 90 222 95 227 }*/
/* IO - VPL Terminal : { 90 255 95 260 }*/
/* IO - VPL Root : { 111 239 116 244 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 133 199 149 281 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 128 239 133 244 }*/
/* IO - VPL Root : { 149 223 154 228 }*/
/* IO - VPL Root : { 149 256 154 261 }*/
/* End Operation */

/* Begin Operation: { 177 133 193 203 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"pack");
/* IO - VPL Terminal : { 172 145 177 150 }*/
/* IO - VPL Terminal : { 172 161 177 166 }*/
/* IO - VPL Terminal : { 172 177 177 182 }*/
/* IO - VPL Terminal : { 172 193 177 198 }*/
/* IO - VPL Root : { 193 167 198 172 }*/
/* End Operation */

/* Begin Operation: { 212 36 228 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 207 66 212 71 }*/
/* IO - VPL Terminal : { 207 82 212 87 }*/
/* IO - VPL Root : { 228 74 233 79 }*/
/* End Operation */

/* Begin Operation: { 252 20 260 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,2,1,5);
	result = connect_root_to_terminal(ptrA,2,2,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,2,4,4,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Selected_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Selected_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 323 342 }{ 238 304 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 66 33 71 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 61 21 77 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Selected");
/* IO - VPL Terminal : { 56 66 61 71 }*/
/* IO - VPL Root : { 77 58 82 63 }*/
/* IO - VPL Root : { 77 74 82 79 }*/
/* End Operation */

/* Begin Operation: { 102 151 117 181 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 97 164 102 169 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 101 21 117 113 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Selected");
/* IO - VPL Terminal : { 96 58 101 63 }*/
/* IO - VPL Terminal : { 96 74 101 79 }*/
/* IO - VPL Root : { 117 66 122 71 }*/
/* End Operation */

/* Begin Operation: { 155 127 171 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"redraw?");
/* IO - VPL Terminal : { 150 129 155 134 }*/
/* IO - VPL Terminal : { 150 149 155 154 }*/
/* IO - VPL Terminal : { 150 173 155 178 }*/
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

/* Begin Operation: { 64 146 80 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 59 154 64 159 }*/
/* IO - VPL Terminal : { 59 164 64 169 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 64 46 80 116 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Redraw");
/* IO - VPL Terminal : { 59 68 64 73 }*/
/* IO - VPL Terminal : { 59 94 64 99 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 22 114 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
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

/* Stop Cases */

}
/* End Operation */

/* Begin Operation: { 196 21 204 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,1,2,4);
	result = connect_root_to_terminal(ptrA,2,0,3,4);
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
/* IO - VPL Root : { 28 88 33 93 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
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


Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 381 348 }{ 197 307 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 129 33 134 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 53 89 69 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 48 129 53 134 }*/
/* IO - VPL Root : { 69 121 74 126 }*/
/* IO - VPL Root : { 69 137 74 142 }*/
/* End Operation */

/* Begin Operation: { 99 23 114 50 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 94 34 99 39 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 98 102 114 238 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Up Drawing");
/* IO - VPL Terminal : { 93 169 98 174 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 20 145 212 } */
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
/* Synchro [3 to 2] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 423 342 }{ 109 301 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Value_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Value_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 438 333 }{ 113 292 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 20 64 212 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Target_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Target_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 64 35 80 117 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Target");
/* IO - VPL Root : { 80 74 85 79 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 66 122 96 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 101 74 106 79 }*/
/* IO - VPL Terminal : { 101 84 106 89 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
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

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 514 603 }{ 214 273 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 60 31 76 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 55 87 60 92 }*/
/* IO - VPL Root : { 76 87 81 92 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 149 51 165 127 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 144 87 149 92 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 109 61 125 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Target");
/* IO - VPL Terminal : { 104 87 109 92 }*/
/* IO - VPL Terminal : { 104 115 109 120 }*/
/* IO - VPL Terminal : { 104 143 109 148 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 185 20 193 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
	result = connect_root_to_terminal(ptrA,2,0,3,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Was_20_Hit_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Was_20_Hit_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 369 300 }{ 199 288 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
/* IO - VPL Root : { 28 142 33 147 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 135 70 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 49 173 54 178 }*/
/* IO - VPL Root : { 70 165 75 170 }*/
/* IO - VPL Root : { 70 181 75 186 }*/
/* End Operation */

/* Begin Operation: { 96 105 112 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Point In Rect");
/* IO - VPL Terminal : { 91 142 96 147 }*/
/* IO - VPL Terminal : { 91 181 96 186 }*/
/* IO - VPL Root : { 112 162 117 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 20 145 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 132 115 137 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,2,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Redraw_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Redraw_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 452 428 }{ 272 353 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 89 35 94 }*/
/* IO - VPL Root : { 30 163 35 168 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 46 80 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 59 89 64 94 }*/
/* IO - VPL Root : { 80 89 85 94 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 26 122 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 37 106 42 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 64 152 80 294 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Frame In Window");
/* IO - VPL Terminal : { 59 218 64 223 }*/
/* IO - VPL Root : { 80 219 85 224 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 236 122 253 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"-2");
/* IO - VPL Root : { 122 242 127 247 }*/
/* End Operation */

/* Begin Operation: { 106 108 122 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-Rect");
/* IO - VPL Terminal : { 101 163 106 168 }*/
/* IO - VPL Root : { 122 163 127 168 }*/
/* End Operation */

/* Begin Operation: { 148 195 164 269 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,3,1,"InsetRect");
/* IO - VPL Terminal : { 143 211 148 216 }*/
/* IO - VPL Terminal : { 143 229 148 234 }*/
/* IO - VPL Terminal : { 143 247 148 252 }*/
/* IO - VPL Root : { 164 230 169 235 }*/
/* End Operation */

/* Begin Operation: { 190 59 206 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Invalidate Rect");
/* IO - VPL Terminal : { 185 89 190 94 }*/
/* IO - VPL Terminal : { 185 136 190 141 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 23 240 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
	result = connect_root_to_terminal(ptrA,1,4,2,6);
	result = connect_root_to_terminal(ptrA,1,4,3,6);
	result = connect_root_to_terminal(ptrA,1,1,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Draw_20_CG_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Draw_20_CG_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 380 349 }{ 151 286 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 54 33 59 }*/
/* IO - VPL Root : { 28 110 33 115 }*/
/* IO - VPL Root : { 28 164 33 169 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 66 20 74 212 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG_universal_load(V_Method method,V_Environment environment)
{
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
/* IO - VPL Root : { 30 82 35 87 }*/
/* IO - VPL Root : { 30 157 35 162 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 54 80 114 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 59 82 64 87 }*/
/* IO - VPL Root : { 80 72 85 77 }*/
/* IO - VPL Root : { 80 92 85 97 }*/
/* End Operation */

/* Begin Operation: { 106 35 122 62 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 46 106 51 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 116 122 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Setup Drawing CG");
/* IO - VPL Terminal : { 101 156 106 161 }*/
/* IO - VPL Terminal : { 101 198 106 203 }*/
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
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,2,0,2,3);
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


Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Location_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Location_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 374 335 }{ 215 271 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 115 33 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 45 77 61 155 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 40 115 45 120 }*/
/* IO - VPL Root : { 61 107 66 112 }*/
/* IO - VPL Root : { 61 123 66 128 }*/
/* End Operation */

/* Begin Operation: { 80 83 96 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 75 123 80 128 }*/
/* IO - VPL Root : { 96 106 101 111 }*/
/* IO - VPL Root : { 96 137 101 142 }*/
/* End Operation */

/* Begin Operation: { 118 90 134 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"pack");
/* IO - VPL Terminal : { 113 106 118 111 }*/
/* IO - VPL Terminal : { 113 138 118 143 }*/
/* IO - VPL Root : { 134 124 139 129 }*/
/* End Operation */

/* Begin Operation: { 156 20 164 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 151 115 156 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,2,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Target_20_Self_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Target_20_Self_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 244 373 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 44 131 49 136 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 166 94 226 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 73 194 78 199 }*/
/* IO - VPL Root : { 94 184 99 189 }*/
/* IO - VPL Root : { 94 204 99 209 }*/
/* End Operation */

/* Begin Operation: { 120 272 137 308 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 114 288 119 293 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 78 36 94 150 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 73 92 78 97 }*/
/* IO - VPL Root : { 94 92 99 97 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 163 119 180 197 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 157 156 162 161 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 78 255 93 285 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 93 268 98 273 }*/
/* End Operation */

/* Begin Operation: { 120 146 136 256 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Target");
/* IO - VPL Terminal : { 115 172 120 177 }*/
/* IO - VPL Terminal : { 115 200 120 205 }*/
/* IO - VPL Terminal : { 115 228 120 233 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 36 136 130 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Refresh");
/* IO - VPL Terminal : { 115 82 120 87 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 197 36 205 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,6);
	result = connect_root_to_terminal(ptrA,2,1,2,6);
	result = connect_root_to_terminal(ptrA,1,5,3,6);
	result = connect_root_to_terminal(ptrA,1,3,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [7 to 6] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Size_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Size_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 314 809 }{ 308 380 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 76 80 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Location");
/* IO - VPL Terminal : { 59 121 64 126 }*/
/* IO - VPL Root : { 80 121 85 126 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 223 122 299 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Add Point");
/* IO - VPL Terminal : { 101 246 106 251 }*/
/* IO - VPL Terminal : { 101 271 106 276 }*/
/* IO - VPL Root : { 122 259 127 264 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 81 164 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 143 121 148 126 }*/
/* IO - VPL Root : { 164 105 169 110 }*/
/* IO - VPL Root : { 164 138 169 143 }*/
/* End Operation */

/* Begin Operation: { 148 219 164 301 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,2,"unpack");
/* IO - VPL Terminal : { 143 259 148 264 }*/
/* IO - VPL Root : { 164 243 169 248 }*/
/* IO - VPL Root : { 164 276 169 281 }*/
/* End Operation */

/* Begin Operation: { 190 153 206 223 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,4,1,"pack");
/* IO - VPL Terminal : { 185 165 190 170 }*/
/* IO - VPL Terminal : { 185 181 190 186 }*/
/* IO - VPL Terminal : { 185 197 190 202 }*/
/* IO - VPL Terminal : { 185 213 190 218 }*/
/* IO - VPL Root : { 206 187 211 192 }*/
/* End Operation */

/* Begin Operation: { 232 54 248 132 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 227 84 232 89 }*/
/* IO - VPL Terminal : { 227 100 232 105 }*/
/* IO - VPL Root : { 248 92 253 97 }*/
/* End Operation */

/* Begin Operation: { 274 27 282 219 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,2,0,2,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,1,5);
	result = connect_root_to_terminal(ptrA,2,3,2,5);
	result = connect_root_to_terminal(ptrA,1,4,3,5);
	result = connect_root_to_terminal(ptrA,2,4,4,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,5,2,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Resize_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Resize_universal_load(V_Method method,V_Environment environment)
{
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


Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Frame_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Frame_universal_load(V_Method method,V_Environment environment)
{
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
/* IO - VPL Root : { 30 117 35 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 91 80 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Frame");
/* IO - VPL Terminal : { 59 117 64 122 }*/
/* IO - VPL Root : { 80 107 85 112 }*/
/* IO - VPL Root : { 80 125 85 130 }*/
/* End Operation */

/* Begin Operation: { 106 25 114 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 101 121 106 126 }*/
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


Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 377 100 }{ 353 382 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 114 35 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 34 80 94 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Parent");
/* IO - VPL Terminal : { 59 62 64 67 }*/
/* IO - VPL Root : { 80 52 85 57 }*/
/* IO - VPL Root : { 80 72 85 77 }*/
/* End Operation */

/* Begin Operation: { 106 45 122 72 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 101 56 106 61 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 106 126 122 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Window");
/* IO - VPL Terminal : { 101 168 106 173 }*/
/* IO - VPL Root : { 122 170 127 175 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 152 164 182 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,0,"=");
/* IO - VPL Terminal : { 143 160 148 165 }*/
/* IO - VPL Terminal : { 143 170 148 175 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 148 24 164 124 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Window Origin");
/* IO - VPL Terminal : { 143 72 148 77 }*/
/* IO - VPL Root : { 164 55 169 60 }*/
/* IO - VPL Root : { 164 88 169 93 }*/
/* End Operation */

/* Begin Operation: { 64 144 80 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Location");
/* IO - VPL Terminal : { 59 194 64 199 }*/
/* IO - VPL Root : { 80 192 85 197 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 234 122 310 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Size");
/* IO - VPL Terminal : { 101 270 106 275 }*/
/* IO - VPL Root : { 122 270 127 275 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 144 206 220 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Add Point");
/* IO - VPL Terminal : { 185 167 190 172 }*/
/* IO - VPL Terminal : { 185 192 190 197 }*/
/* IO - VPL Root : { 206 180 211 185 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 232 222 248 298 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Add Point");
/* IO - VPL Terminal : { 227 245 232 250 }*/
/* IO - VPL Terminal : { 227 270 232 275 }*/
/* IO - VPL Root : { 248 258 253 263 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 274 164 290 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"(join)");
/* IO - VPL Terminal : { 269 180 274 185 }*/
/* IO - VPL Terminal : { 269 198 274 203 }*/
/* IO - VPL Root : { 290 189 295 194 }*/
/* End Operation */

/* Begin Operation: { 316 22 324 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 311 114 316 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,2,1,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
	result = connect_root_to_terminal(ptrA,2,1,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,0,1,7);
	result = connect_root_to_terminal(ptrA,2,5,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,1,7,2,9);
	result = connect_root_to_terminal(ptrA,1,8,1,10);
	result = connect_root_to_terminal(ptrA,1,9,2,10);
	result = connect_root_to_terminal(ptrA,1,10,1,11);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 377 100 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 73 71 89 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Frame");
/* IO - VPL Terminal : { 68 114 73 119 }*/
/* IO - VPL Root : { 89 114 94 119 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 23 128 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 115 117 120 122 }*/
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


Nat4 VPLU_VPLWindow_20_Item_2F_Reset_20_Cache_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Reset_20_Cache_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 64 24 72 216 } */
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


Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Selected_20_Colors_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Selected_20_Colors_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 410 665 }{ 364 262 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 117 35 122 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 61 80 161 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_persistent(tempOperation,environment,"Normal Colors");
/* IO - VPL Root : { 80 109 85 114 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 56 122 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-RGB");
/* IO - VPL Terminal : { 101 109 106 114 }*/
/* IO - VPL Root : { 122 109 127 114 }*/
/* End Operation */

/* Begin Operation: { 148 64 164 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"RGBForeColor");
/* IO - VPL Terminal : { 143 109 148 114 }*/
/* End Operation */

/* Begin Operation: { 190 45 205 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"( 65535 65535 65535 )");
/* IO - VPL Root : { 205 110 210 115 }*/
/* End Operation */

/* Begin Operation: { 232 57 248 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-RGB");
/* IO - VPL Terminal : { 227 110 232 115 }*/
/* IO - VPL Root : { 248 110 253 115 }*/
/* End Operation */

/* Begin Operation: { 274 64 290 160 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,0,"RGBBackColor");
/* IO - VPL Terminal : { 269 110 274 115 }*/
/* End Operation */

/* Begin Operation: { 316 22 324 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,5,1,6);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [4 to 3] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Draw_20_Event_20_CG_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Draw_20_Event_20_CG_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 151 301 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 60 35 65 }*/
/* IO - VPL Root : { 30 120 35 125 }*/
/* IO - VPL Root : { 30 181 35 186 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 33 80 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Needs Draw?");
/* IO - VPL Terminal : { 59 60 64 65 }*/
/* IO - VPL Terminal : { 59 105 64 110 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 64 166 80 242 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Draw CG");
/* IO - VPL Terminal : { 59 183 64 188 }*/
/* IO - VPL Terminal : { 59 204 64 209 }*/
/* IO - VPL Terminal : { 59 225 64 230 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
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
	result = connect_root_to_terminal(ptrA,3,0,3,2);
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
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Needs_20_Draw_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Needs_20_Draw_3F__universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 59 38 75 134 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Visible?");
/* IO - VPL Terminal : { 54 84 59 89 }*/
/* IO - VPL Root : { 75 84 80 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 69 122 104 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"FALSE");
/* IO - VPL Terminal : { 101 84 106 89 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kSuccess);
/* End Operation */

/* Begin Operation: { 148 22 156 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 637 910 }{ 281 314 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 180 80 207 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 59 191 64 196 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 64 14 80 156 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Frame In Window");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 84 85 89 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 41 122 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,1,"list-to-Rect");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Root : { 122 84 127 89 }*/
/* End Operation */

/* Begin Operation: { 148 100 164 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,2,"RectInRgn");
/* IO - VPL Terminal : { 143 123 148 128 }*/
/* IO - VPL Terminal : { 143 148 148 153 }*/
/* IO - VPL Root : { 164 123 169 128 }*/
/* IO - VPL Root : { 164 148 169 153 }*/
/* End Operation */

/* Begin Operation: { 190 111 206 140 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 185 123 190 128 }*/
	tempOperation = operation_action_to(tempOperation,environment,kFail,kFailure);
/* End Operation */

/* Begin Operation: { 231 22 239 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,2,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Visible_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Get_20_Visible_3F__universal_load(V_Method method,V_Environment environment)
{
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
	tempOperation = operation_to_get(tempOperation,environment,"Visible?");
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


Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Visible_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Set_20_Visible_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 271 303 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 84 35 89 }*/
/* IO - VPL Root : { 30 148 35 153 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 52 80 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Visible?");
/* IO - VPL Terminal : { 59 84 64 89 }*/
/* IO - VPL Root : { 80 72 85 77 }*/
/* IO - VPL Root : { 80 94 85 99 }*/
/* End Operation */

/* Begin Operation: { 106 49 122 125 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Visible?");
/* IO - VPL Terminal : { 101 72 106 77 }*/
/* IO - VPL Terminal : { 101 97 106 102 }*/
/* IO - VPL Root : { 122 85 127 90 }*/
/* End Operation */

/* Begin Operation: { 106 141 122 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,2,1,"=");
/* IO - VPL Terminal : { 101 149 106 154 }*/
/* IO - VPL Terminal : { 101 159 106 164 }*/
/* IO - VPL Root : { 122 155 127 160 }*/
/* End Operation */

/* Begin Operation: { 148 87 164 157 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"Redraw?");
/* IO - VPL Terminal : { 143 104 148 109 }*/
/* IO - VPL Terminal : { 143 133 148 138 }*/
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

/* Begin Operation: { 64 136 80 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 59 148 64 153 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kFailure);
/* End Operation */

/* Begin Operation: { 106 63 122 133 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Redraw");
/* IO - VPL Terminal : { 101 84 106 89 }*/
/* IO - VPL Terminal : { 101 106 106 111 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 23 156 215 } */
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

/* Begin Operation: { 190 22 198 214 } */
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
	result = connect_root_to_terminal(ptrA,1,2,1,4);
	result = connect_root_to_terminal(ptrA,1,3,2,4);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Find_20_CTM_20_Item_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Find_20_CTM_20_Item_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 259 284 } */
/* Begin Operation: { 36 36 44 228 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 45 87 50 92 }*/
/* IO - VPL Root : { 45 171 50 176 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 161 103 178 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Is CTM Item?");
/* IO - VPL Terminal : { 155 154 160 159 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 77 33 94 131 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Visible?");
/* IO - VPL Terminal : { 71 79 76 84 }*/
/* IO - VPL Root : { 95 79 100 84 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 122 50 139 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 116 66 121 71 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 75 159 92 235 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Was Hit");
/* IO - VPL Terminal : { 69 180 74 185 }*/
/* IO - VPL Terminal : { 69 208 74 213 }*/
/* IO - VPL Root : { 93 194 98 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 117 178 134 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"TRUE");
/* IO - VPL Terminal : { 111 194 116 199 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 200 35 208 227 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 194 127 199 132 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,0,1,4);
	result = connect_root_to_terminal(ptrA,2,0,2,4);
	result = connect_root_to_terminal(ptrA,1,4,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
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



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Is_20_CTM_20_Item_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Is_20_CTM_20_Item_3F__universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 45 127 50 132 }*/
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


Nat4 VPLU_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F__universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F__universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 160 307 }{ 210 311 } */
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

/* Begin Operation: { 78 119 95 209 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Frame");
/* IO - VPL Terminal : { 72 162 77 167 }*/
/* IO - VPL Root : { 96 162 101 167 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 100 137 198 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Point In Rect");
/* IO - VPL Terminal : { 114 130 119 135 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
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
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,0,1,2);
	result = connect_root_to_terminal(ptrA,1,1,2,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 160 307 }{ 210 343 } */
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

/* Begin Operation: { 120 116 137 152 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"TRUE");
/* IO - VPL Root : { 138 132 143 137 }*/
/* End Operation */

/* Begin Operation: { 162 38 170 230 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 156 132 161 137 }*/
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


Nat4 VPLU_VPLWindow_20_Item_2F_Change_20_Frame_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Change_20_Frame_universal_load(V_Method method,V_Environment environment)
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

/* Begin Operation: { 78 79 95 167 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Frame");
/* IO - VPL Terminal : { 72 106 77 111 }*/
/* IO - VPL Terminal : { 72 135 77 140 }*/
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



	return kNOERROR;
}


Nat4 VPLU_VPLWindow_20_Item_2F_Move_20_Item_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_VPLWindow_20_Item_2F_Move_20_Item_universal_load(V_Method method,V_Environment environment)
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
/* IO - VPL Root : { 45 98 50 103 }*/
/* IO - VPL Root : { 45 162 50 167 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 78 86 95 188 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Location");
/* IO - VPL Terminal : { 72 135 77 140 }*/
/* IO - VPL Root : { 96 135 101 140 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 120 110 137 192 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Add Point");
/* IO - VPL Terminal : { 114 135 119 140 }*/
/* IO - VPL Terminal : { 114 162 119 167 }*/
/* IO - VPL Root : { 138 149 143 154 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 162 66 179 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set Location");
/* IO - VPL Terminal : { 156 98 161 103 }*/
/* IO - VPL Terminal : { 156 132 161 137 }*/
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


/* Stop Universals */






Nat4	loadClasses_VPLWindowItems(V_Environment environment);
Nat4	loadClasses_VPLWindowItems(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("VPLWindow Item",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLWindow_20_Item_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_VPLWindowItems(V_Environment environment);
Nat4	loadUniversals_VPLWindowItems(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("VPLWindow Item/Old Redraw",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Old_20_Redraw_universal_load(result,environment);

	result = method_new("VPLWindow Item/Activate",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Activate_universal_load(result,environment);

	result = method_new("VPLWindow Item/Adjust Origin",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Adjust_20_Origin_universal_load(result,environment);

	result = method_new("VPLWindow Item/Clean Up Context",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Clean_20_Up_20_Context_universal_load(result,environment);

	result = method_new("VPLWindow Item/Close",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Close_universal_load(result,environment);

	result = method_new("VPLWindow Item/Draw",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Draw_universal_load(result,environment);

	result = method_new("VPLWindow Item/Enter",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Enter_universal_load(result,environment);

	result = method_new("VPLWindow Item/Exit",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Exit_universal_load(result,environment);

	result = method_new("VPLWindow Item/Get Application",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Get_20_Application_universal_load(result,environment);

	result = method_new("VPLWindow Item/Get Size",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Get_20_Size_universal_load(result,environment);

	result = method_new("VPLWindow Item/Get Window",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Get_20_Window_universal_load(result,environment);

	result = method_new("VPLWindow Item/Hilite",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Hilite_universal_load(result,environment);

	result = method_new("VPLWindow Item/Idle",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Idle_universal_load(result,environment);

	result = method_new("VPLWindow Item/Key Down",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Key_20_Down_universal_load(result,environment);

	result = method_new("VPLWindow Item/Mouse Down",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Mouse_20_Down_universal_load(result,environment);

	result = method_new("VPLWindow Item/Open",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Open_universal_load(result,environment);

	result = method_new("VPLWindow Item/Prepare Context",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Prepare_20_Context_universal_load(result,environment);

	result = method_new("VPLWindow Item/Process Click",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Process_20_Click_universal_load(result,environment);

	result = method_new("VPLWindow Item/Process Key",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Process_20_Key_universal_load(result,environment);

	result = method_new("VPLWindow Item/Set Frame",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Set_20_Frame_universal_load(result,environment);

	result = method_new("VPLWindow Item/Set Location",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Set_20_Location_universal_load(result,environment);

	result = method_new("VPLWindow Item/Set Selected",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Set_20_Selected_universal_load(result,environment);

	result = method_new("VPLWindow Item/Set Up Drawing",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing_universal_load(result,environment);

	result = method_new("VPLWindow Item/Set Value",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Set_20_Value_universal_load(result,environment);

	result = method_new("VPLWindow Item/Target",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Target_universal_load(result,environment);

	result = method_new("VPLWindow Item/Was Hit",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Was_20_Hit_universal_load(result,environment);

	result = method_new("VPLWindow Item/Redraw",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Redraw_universal_load(result,environment);

	result = method_new("VPLWindow Item/Draw CG",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Draw_20_CG_universal_load(result,environment);

	result = method_new("VPLWindow Item/Setup Drawing CG",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG_universal_load(result,environment);

	result = method_new("VPLWindow Item/Get Location",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Get_20_Location_universal_load(result,environment);

	result = method_new("VPLWindow Item/Target Self",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Target_20_Self_universal_load(result,environment);

	result = method_new("VPLWindow Item/Set Size",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Set_20_Size_universal_load(result,environment);

	result = method_new("VPLWindow Item/Resize",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Resize_universal_load(result,environment);

	result = method_new("VPLWindow Item/Get Frame",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Get_20_Frame_universal_load(result,environment);

	result = method_new("VPLWindow Item/Get Frame In Window",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window_universal_load(result,environment);

	result = method_new("VPLWindow Item/Reset Cache",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Reset_20_Cache_universal_load(result,environment);

	result = method_new("VPLWindow Item/Set Selected Colors",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Set_20_Selected_20_Colors_universal_load(result,environment);

	result = method_new("VPLWindow Item/Draw Event CG",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Draw_20_Event_20_CG_universal_load(result,environment);

	result = method_new("VPLWindow Item/Needs Draw?",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Needs_20_Draw_3F__universal_load(result,environment);

	result = method_new("VPLWindow Item/Get Visible?",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Get_20_Visible_3F__universal_load(result,environment);

	result = method_new("VPLWindow Item/Set Visible?",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Set_20_Visible_3F__universal_load(result,environment);

	result = method_new("VPLWindow Item/Find CTM Item",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Find_20_CTM_20_Item_universal_load(result,environment);

	result = method_new("VPLWindow Item/Is CTM Item?",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Is_20_CTM_20_Item_3F__universal_load(result,environment);

	result = method_new("VPLWindow Item/Was Content Hit?",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F__universal_load(result,environment);

	result = method_new("VPLWindow Item/Change Frame",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Change_20_Frame_universal_load(result,environment);

	result = method_new("VPLWindow Item/Move Item",environment);
	if(result == NULL) return kERROR;
	VPLU_VPLWindow_20_Item_2F_Move_20_Item_universal_load(result,environment);

	return kNOERROR;

}



Nat4	loadPersistents_VPLWindowItems(V_Environment environment);
Nat4	loadPersistents_VPLWindowItems(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_VPLWindowItems(V_Environment environment);
Nat4	load_VPLWindowItems(V_Environment environment)
{

	loadClasses_VPLWindowItems(environment);
	loadUniversals_VPLWindowItems(environment);
	loadPersistents_VPLWindowItems(environment);
	return kNOERROR;

}

