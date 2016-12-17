/* A VPL Section File */
/*

Icons.rnt.c
Copyright: 2002 Scott B. Anderson

*/




	Nat4 tempAttribute_MacOS_20_Icon_20_Service_2F_Name[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X05000000, 0X49636F6E, 0X73000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Service_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Service_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Service_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Service_2F_Icons[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Reference_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0D000000, 0X556E7469, 0X746C6564, 0X2049636F,
0X6E000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Registrar_2F_Type[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X646F6375
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Registrar_2F_Creator[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X6D616373
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_Registrar_2F_Volume_20_Reference[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0XFFFF8000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Type[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Creator[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_File_20_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0B000000, 0X63757374, 0X6F6D2E69, 0X636E7300
	};


Nat4 VPLC_MacOS_20_Icon_20_Service_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_Icon_20_Service_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_MacOS_20_Icon_20_Service_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_MacOS_20_Icon_20_Service_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_MacOS_20_Icon_20_Service_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_MacOS_20_Icon_20_Service_2F_Active_3F_,environment);
	tempAttribute = attribute_add("Icons",tempClass,tempAttribute_MacOS_20_Icon_20_Service_2F_Icons,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Service Abstract");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_MacOS_20_Icon_20_Service_2F_Register_20_Icons_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Service_2F_Register_20_Icons_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 57 87 73 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Icons");
/* IO - VPL Terminal : { 52 109 57 114 }*/
/* IO - VPL Root : { 73 101 78 106 }*/
/* IO - VPL Root : { 73 117 78 122 }*/
/* End Operation */

/* Begin Operation: { 101 69 117 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Register Icon");
/* IO - VPL Terminal : { 96 117 101 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 138 20 146 212 } */
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



	return kNOERROR;
}


Nat4 VPLU_MacOS_20_Icon_20_Service_2F_Unregister_20_Icons_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Service_2F_Unregister_20_Icons_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 57 87 73 136 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Icons");
/* IO - VPL Terminal : { 52 109 57 114 }*/
/* IO - VPL Root : { 73 101 78 106 }*/
/* IO - VPL Root : { 73 117 78 122 }*/
/* End Operation */

/* Begin Operation: { 101 63 117 175 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Unregister Icon");
/* IO - VPL Terminal : { 96 117 101 122 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempOperation = operation_repeat_to(tempOperation,environment,kTRUE);
	tempOperation = operation_input_to(tempOperation,environment,1,iList);
/* End Operation */

/* Begin Operation: { 138 20 146 212 } */
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



	return kNOERROR;
}


Nat4 VPLU_MacOS_20_Icon_20_Service_2F_Close_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Service_2F_Close_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 63 56 79 174 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Unregister Icons");
/* IO - VPL Terminal : { 58 110 63 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 104 20 112 212 } */
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


Nat4 VPLU_MacOS_20_Icon_20_Service_2F_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Service_2F_Open_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 57 57 73 163 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Register Icons");
/* IO - VPL Terminal : { 52 108 57 113 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 102 18 110 210 } */
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


/* Stop Universals */



Nat4 VPLC_MacOS_20_Icon_20_Reference_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_Icon_20_Reference_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 73 530 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_MacOS_20_Icon_20_Reference_2F_Name,environment);
	tempAttribute = attribute_add("Icon Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Icon Registrar",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Register_20_Icon_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Register_20_Icon_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 51 63 67 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Icon Registrar");
/* IO - VPL Terminal : { 46 110 51 115 }*/
/* IO - VPL Root : { 67 94 72 99 }*/
/* IO - VPL Root : { 67 127 72 132 }*/
/* End Operation */

/* Begin Operation: { 95 13 111 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 90 47 95 52 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 95 122 111 222 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Register Icon");
/* IO - VPL Terminal : { 90 152 95 157 }*/
/* IO - VPL Terminal : { 90 190 95 195 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 147 18 155 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
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


Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 51 63 67 162 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Icon Registrar");
/* IO - VPL Terminal : { 46 110 51 115 }*/
/* IO - VPL Root : { 67 94 72 99 }*/
/* IO - VPL Root : { 67 127 72 132 }*/
/* End Operation */

/* Begin Operation: { 95 13 111 86 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 90 47 95 52 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 95 122 111 234 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Unregister Icon");
/* IO - VPL Terminal : { 90 157 95 162 }*/
/* IO - VPL Terminal : { 90 194 95 199 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 147 18 155 210 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,2,1,1,2);
	result = connect_root_to_terminal(ptrA,2,1,1,3);
	result = connect_root_to_terminal(ptrA,1,0,2,3);
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


Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Set_20_IconRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Set_20_IconRef_universal_load(V_Method method,V_Environment environment)
{
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
/* IO - VPL Root : { 28 146 33 151 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 52 63 68 164 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_set(tempOperation,environment,"Icon Reference");
/* IO - VPL Terminal : { 47 94 52 99 }*/
/* IO - VPL Terminal : { 47 127 52 132 }*/
/* IO - VPL Root : { 68 111 73 116 }*/
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


Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Get_20_IconRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Get_20_IconRef_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 63 62 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 112 33 117 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 54 64 70 165 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Icon Reference");
/* IO - VPL Terminal : { 49 112 54 117 }*/
/* IO - VPL Root : { 70 95 75 100 }*/
/* IO - VPL Root : { 70 128 75 133 }*/
/* End Operation */

/* Begin Operation: { 91 19 99 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 86 112 91 117 }*/
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


Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Release_20_IconRef_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Release_20_IconRef_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 59 69 75 159 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get IconRef");
/* IO - VPL Terminal : { 54 110 59 115 }*/
/* IO - VPL Root : { 75 110 80 115 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 96 30 112 57 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 91 41 96 46 }*/
	tempOperation = operation_action_to(tempOperation,environment,kTerminate,kSuccess);
/* End Operation */

/* Begin Operation: { 95 106 111 208 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,1,2,"ReleaseIconRef");
/* IO - VPL Terminal : { 90 155 95 160 }*/
/* IO - VPL Root : { 111 138 116 143 }*/
/* IO - VPL Root : { 111 172 116 177 }*/
/* End Operation */

/* Begin Operation: { 128 20 136 212 } */
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
/* Synchro [4 to 4] */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Open_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Open_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 54 47 70 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Register Icon");
/* IO - VPL Terminal : { 49 92 54 97 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 107 23 115 215 } */
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


Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Close_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Reference_2F_Close_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 64 82 80 194 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Unregister Icon");
/* IO - VPL Terminal : { 59 132 64 137 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 108 20 116 212 } */
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


/* Stop Universals */



Nat4 VPLC_MacOS_20_Icon_20_Registrar_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_Icon_20_Registrar_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Type",tempClass,tempAttribute_MacOS_20_Icon_20_Registrar_2F_Type,environment);
	tempAttribute = attribute_add("Creator",tempClass,tempAttribute_MacOS_20_Icon_20_Registrar_2F_Creator,environment);
	tempAttribute = attribute_add("Volume Reference",tempClass,tempAttribute_MacOS_20_Icon_20_Registrar_2F_Volume_20_Reference,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 289 504 }{ 200 300 } */
Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Register_20_Icon_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Register_20_Icon_universal_load(V_Method method,V_Environment environment)
{
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
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 57 72 73 176 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Reference");
/* IO - VPL Terminal : { 52 101 57 106 }*/
/* IO - VPL Terminal : { 52 138 57 143 }*/
/* IO - VPL Root : { 73 120 78 125 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 113 23 121 215 } */
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


Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 319 335 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 79 33 84 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 123 72 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Type");
/* IO - VPL Terminal : { 51 159 56 164 }*/
/* IO - VPL Root : { 72 160 77 165 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 56 14 72 106 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creator");
/* IO - VPL Terminal : { 51 59 56 64 }*/
/* IO - VPL Root : { 72 59 77 64 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 97 22 113 141 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,2,1,"UnregisterIconRef");
/* IO - VPL Terminal : { 92 59 97 64 }*/
/* IO - VPL Terminal : { 92 98 97 103 }*/
/* IO - VPL Root : { 113 79 118 84 }*/
/* End Operation */

/* Begin Operation: { 159 22 175 53 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 154 35 159 40 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 133 180 149 293 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release IconRef");
/* IO - VPL Terminal : { 128 235 133 240 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 174 175 190 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"NULL");
/* IO - VPL Root : { 190 186 195 191 }*/
/* End Operation */

/* Begin Operation: { 219 126 235 216 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set IconRef");
/* IO - VPL Terminal : { 214 152 219 157 }*/
/* IO - VPL Terminal : { 214 186 219 191 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 267 20 275 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,1,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,2,0,1,7);
	result = connect_root_to_terminal(ptrA,1,6,2,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* Synchro [5 to 4] */
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


Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Reference_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Reference_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 572 470 }{ 290 409 } */
/* Begin Operation: { 22 22 30 214 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 30 79 35 84 }*/
/* IO - VPL Root : { 30 156 35 161 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 64 41 80 129 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Domain");
/* IO - VPL Terminal : { 59 83 64 88 }*/
/* IO - VPL Root : { 80 83 85 88 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 53 122 145 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creator");
/* IO - VPL Terminal : { 101 98 106 103 }*/
/* IO - VPL Root : { 122 98 127 103 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 106 163 122 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Type");
/* IO - VPL Terminal : { 101 199 106 204 }*/
/* IO - VPL Root : { 122 200 127 205 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 148 70 164 149 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"GetIconRef");
/* IO - VPL Terminal : { 143 83 148 88 }*/
/* IO - VPL Terminal : { 143 98 148 103 }*/
/* IO - VPL Terminal : { 143 113 148 118 }*/
/* IO - VPL Terminal : { 143 128 148 133 }*/
/* IO - VPL Root : { 164 94 169 99 }*/
/* IO - VPL Root : { 164 120 169 125 }*/
/* End Operation */

/* Begin Operation: { 190 131 206 221 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set IconRef");
/* IO - VPL Terminal : { 185 156 190 161 }*/
/* IO - VPL Terminal : { 185 192 190 197 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 190 32 206 83 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_local(tempOperation,environment,"debug");
/* IO - VPL Terminal : { 185 41 190 46 }*/
/* IO - VPL Terminal : { 185 53 190 58 }*/
/* IO - VPL Terminal : { 185 64 190 69 }*/
/* IO - VPL Terminal : { 185 74 190 79 }*/
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

/* Begin Operation: { 47 111 63 170 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"GetIconRef");
/* IO - VPL Root : { 63 138 68 143 }*/
/* End Operation */

/* Begin Operation: { 92 91 108 191 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Debug OSError");
/* IO - VPL Terminal : { 87 122 92 127 }*/
/* IO - VPL Terminal : { 87 155 92 160 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 147 18 155 210 } */
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

/* Begin Operation: { 232 25 240 217 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 227 119 232 124 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,0,1,2);
	result = connect_root_to_terminal(ptrA,1,0,1,3);
	result = connect_root_to_terminal(ptrA,1,1,1,4);
	result = connect_root_to_terminal(ptrA,1,2,2,4);
	result = connect_root_to_terminal(ptrA,1,3,3,4);
	result = connect_root_to_terminal(ptrA,2,0,1,5);
	result = connect_root_to_terminal(ptrA,2,4,2,5);
	result = connect_root_to_terminal(ptrA,1,4,1,6);
	result = connect_root_to_terminal(ptrA,1,1,2,6);
	result = connect_root_to_terminal(ptrA,1,2,3,6);
	result = connect_root_to_terminal(ptrA,1,3,4,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
/* End Connect Operations */

/* Begin Connect Synchros */
/* End Connect Synchros */

/* End Case */



	return kNOERROR;
}


Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 51 81 67 144 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Creator");
/* IO - VPL Terminal : { 46 110 51 115 }*/
/* IO - VPL Root : { 67 100 72 105 }*/
/* IO - VPL Root : { 67 121 72 126 }*/
/* End Operation */

/* Begin Operation: { 91 62 107 89 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"NULL");
/* IO - VPL Terminal : { 86 73 91 78 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 91 171 107 179 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_match(tempOperation,environment,"0");
/* IO - VPL Terminal : { 86 173 91 178 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kSuccess);
/* End Operation */

/* Begin Operation: { 132 23 140 215 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 127 111 132 116 }*/
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
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 60 60 }{ 200 300 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 114 33 119 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 58 65 74 169 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"Get Application");
/* IO - VPL Root : { 74 115 79 120 }*/
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 100 182 116 255 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_primitive(tempOperation,environment,1,0,"instance?");
/* IO - VPL Terminal : { 95 216 100 221 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 100 69 116 171 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Signature");
/* IO - VPL Terminal : { 95 115 100 120 }*/
/* IO - VPL Root : { 116 115 121 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 140 21 148 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 135 115 140 120 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,1,1,2);
	result = connect_root_to_terminal(ptrA,1,1,1,3);
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

/* Begin Operation: { 45 112 61 120 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_constant(tempOperation,environment,"0");
/* IO - VPL Root : { 61 114 66 119 }*/
/* End Operation */

/* Begin Operation: { 90 20 98 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 85 114 90 119 }*/
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


Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Type_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Type_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 56 90 72 137 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Type");
/* IO - VPL Terminal : { 51 111 56 116 }*/
/* IO - VPL Root : { 72 103 77 108 }*/
/* IO - VPL Root : { 72 118 77 123 }*/
/* End Operation */

/* Begin Operation: { 96 19 104 211 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 91 111 96 116 }*/
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


Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Domain_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Domain_universal_load(V_Method method,V_Environment environment)
{
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

/* Begin Operation: { 59 51 75 168 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"Volume Reference");
/* IO - VPL Terminal : { 54 107 59 112 }*/
/* IO - VPL Root : { 75 88 80 93 }*/
/* IO - VPL Root : { 75 127 80 132 }*/
/* End Operation */

/* Begin Operation: { 107 21 115 213 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* IO - VPL Terminal : { 102 108 107 113 }*/
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


/* Stop Universals */



Nat4 VPLC_MacOS_20_Icon_20_icns_20_File_20_Registrar_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MacOS_20_Icon_20_icns_20_File_20_Registrar_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Type",tempClass,tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Type,environment);
	tempAttribute = attribute_add("Creator",tempClass,tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Creator,environment);
	tempAttribute = attribute_add("Volume Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("File Name",tempClass,tempAttribute_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_File_20_Name,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"MacOS Icon Registrar");
	return kNOERROR;
}

/* Start Universals: { 450 471 }{ 200 300 } */
Nat4 VPLU_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon_universal_load(V_Method method,V_Environment environment);
Nat4 VPLU_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon_universal_load(V_Method method,V_Environment environment)
{
	Int4 result = 0;
	V_Case ptrA = NULL;
	V_Operation tempOperation = NULL;
	V_Terminal tempTerminal = NULL;
	V_Root tempRoot = NULL;

/* NULL TEXT VALUE */

/* Begin Case */
	ptrA = case_insert(0,method,environment);

/* Start Operations: { 542 460 }{ 354 416 } */
/* Begin Operation: { 20 20 28 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_input_bar(tempOperation,environment);
/* IO - VPL Root : { 28 79 33 84 }*/
/* IO - VPL Root : { 28 152 33 157 }*/
	tempRoot = output_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 51 163 67 236 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_get(tempOperation,environment,"File Name");
/* IO - VPL Terminal : { 46 197 51 202 }*/
/* IO - VPL Root : { 67 185 72 190 }*/
/* IO - VPL Root : { 67 209 72 214 }*/
/* End Operation */

/* Begin Operation: { 52 89 68 147 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_instance(tempOperation,environment,"CF URL");
/* IO - VPL Terminal : { 47 116 52 121 }*/
/* IO - VPL Root : { 68 116 73 121 }*/
/* End Operation */

/* Begin Operation: { 98 78 114 239 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Capture Resources Name");
/* IO - VPL Terminal : { 93 129 98 134 }*/
/* IO - VPL Terminal : { 93 182 98 187 }*/
/* IO - VPL Root : { 114 156 119 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 139 118 155 199 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 134 156 139 161 }*/
/* IO - VPL Root : { 155 156 160 161 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 178 34 194 126 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Creator");
/* IO - VPL Terminal : { 173 79 178 84 }*/
/* IO - VPL Root : { 194 79 199 84 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 181 126 197 202 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get Type");
/* IO - VPL Terminal : { 176 162 181 167 }*/
/* IO - VPL Root : { 197 163 202 168 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 180 199 196 280 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Get FSRef");
/* IO - VPL Terminal : { 175 237 180 242 }*/
/* IO - VPL Root : { 196 237 201 242 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempRoot = output_insert(0,tempOperation,environment);
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 223 60 239 225 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,4,2,"RegisterIconRefFromFSRef");
/* IO - VPL Terminal : { 218 91 223 96 }*/
/* IO - VPL Terminal : { 218 124 223 129 }*/
/* IO - VPL Terminal : { 218 157 223 162 }*/
/* IO - VPL Terminal : { 218 190 223 195 }*/
/* IO - VPL Root : { 239 113 244 118 }*/
/* IO - VPL Root : { 239 168 244 173 }*/
/* End Operation */

/* Begin Operation: { 262 58 278 89 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extmatch(tempOperation,environment,"noErr");
/* IO - VPL Terminal : { 257 71 262 76 }*/
	tempOperation = operation_action_to(tempOperation,environment,kNextCase,kFailure);
/* End Operation */

/* Begin Operation: { 264 128 280 218 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Set IconRef");
/* IO - VPL Terminal : { 259 153 264 158 }*/
/* IO - VPL Terminal : { 259 190 264 195 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 137 246 154 322 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,"/Release");
/* IO - VPL Terminal : { 131 282 136 287 }*/
	tempTerminal = input_insert(0,tempOperation,environment);
/* End Operation */

/* Begin Operation: { 309 20 317 212 } */
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_output_bar(tempOperation,environment);
/* End Operation */

/* Stop Operations */

/* Begin Connect Operations */
	result = connect_root_to_terminal(ptrA,1,0,1,1);
	result = connect_root_to_terminal(ptrA,1,2,1,3);
	result = connect_root_to_terminal(ptrA,2,1,2,3);
	result = connect_root_to_terminal(ptrA,1,3,1,4);
	result = connect_root_to_terminal(ptrA,1,0,1,5);
	result = connect_root_to_terminal(ptrA,1,0,1,6);
	result = connect_root_to_terminal(ptrA,1,4,1,7);
	result = connect_root_to_terminal(ptrA,1,5,1,8);
	result = connect_root_to_terminal(ptrA,1,6,2,8);
	result = connect_root_to_terminal(ptrA,1,7,3,8);
	result = connect_root_to_terminal(ptrA,1,8,1,9);
	result = connect_root_to_terminal(ptrA,2,0,1,10);
	result = connect_root_to_terminal(ptrA,2,8,2,10);
	result = connect_root_to_terminal(ptrA,1,3,1,11);
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


/* Stop Universals */






Nat4	loadClasses_Icons(V_Environment environment);
Nat4	loadClasses_Icons(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("MacOS Icon Service",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_Icon_20_Service_class_load(result,environment);
	result = class_new("MacOS Icon Reference",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_Icon_20_Reference_class_load(result,environment);
	result = class_new("MacOS Icon Registrar",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_Icon_20_Registrar_class_load(result,environment);
	result = class_new("MacOS Icon icns File Registrar",environment);
	if(result == NULL) return kERROR;
	VPLC_MacOS_20_Icon_20_icns_20_File_20_Registrar_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Icons(V_Environment environment);
Nat4	loadUniversals_Icons(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("MacOS Icon Service/Register Icons",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Service_2F_Register_20_Icons_universal_load(result,environment);

	result = method_new("MacOS Icon Service/Unregister Icons",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Service_2F_Unregister_20_Icons_universal_load(result,environment);

	result = method_new("MacOS Icon Service/Close",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Service_2F_Close_universal_load(result,environment);

	result = method_new("MacOS Icon Service/Open",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Service_2F_Open_universal_load(result,environment);

	result = method_new("MacOS Icon Reference/Register Icon",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Reference_2F_Register_20_Icon_universal_load(result,environment);

	result = method_new("MacOS Icon Reference/Unregister Icon",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Reference_2F_Unregister_20_Icon_universal_load(result,environment);

	result = method_new("MacOS Icon Reference/Set IconRef",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Reference_2F_Set_20_IconRef_universal_load(result,environment);

	result = method_new("MacOS Icon Reference/Get IconRef",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Reference_2F_Get_20_IconRef_universal_load(result,environment);

	result = method_new("MacOS Icon Reference/Release IconRef",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Reference_2F_Release_20_IconRef_universal_load(result,environment);

	result = method_new("MacOS Icon Reference/Open",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Reference_2F_Open_universal_load(result,environment);

	result = method_new("MacOS Icon Reference/Close",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Reference_2F_Close_universal_load(result,environment);

	result = method_new("MacOS Icon Registrar/Register Icon",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Registrar_2F_Register_20_Icon_universal_load(result,environment);

	result = method_new("MacOS Icon Registrar/Unregister Icon",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Registrar_2F_Unregister_20_Icon_universal_load(result,environment);

	result = method_new("MacOS Icon Registrar/Get Reference",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Reference_universal_load(result,environment);

	result = method_new("MacOS Icon Registrar/Get Creator",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Creator_universal_load(result,environment);

	result = method_new("MacOS Icon Registrar/Get Type",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Type_universal_load(result,environment);

	result = method_new("MacOS Icon Registrar/Get Domain",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_Registrar_2F_Get_20_Domain_universal_load(result,environment);

	result = method_new("MacOS Icon icns File Registrar/Register Icon",environment);
	if(result == NULL) return kERROR;
	VPLU_MacOS_20_Icon_20_icns_20_File_20_Registrar_2F_Register_20_Icon_universal_load(result,environment);

	return kNOERROR;

}



Nat4	loadPersistents_Icons(V_Environment environment);
Nat4	loadPersistents_Icons(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Icons(V_Environment environment);
Nat4	load_Icons(V_Environment environment)
{

	loadClasses_Icons(environment);
	loadUniversals_Icons(environment);
	loadPersistents_Icons(environment);
	return kNOERROR;

}

