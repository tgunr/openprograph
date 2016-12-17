/* A VPL Project File */
/*

Interpreter.h
Copyright: 2004 Scott B. Anderson

*/

#ifndef __VPLINTERPRETERH__
#define __VPLINTERPRETERH__

#include "InterpreterRoutines.h"

extern	Int1*	vpl_MAIN;
extern	Int1*	vpl_INIT;

Int4			list_data_close(V_Environment environment,V_Instance itemData);
Int4			item_data_close(V_Environment environment,V_Instance itemData);
Int4			helper_data_close(V_Environment environment,V_Instance itemData);
V_List			item_data_get_list_datum(V_Environment environment,V_Instance itemData,Nat4 offset);
V_Instance		item_data_get_helper(V_Environment environment,V_Instance itemData);
Int4			method_helper_open(V_Environment environment,V_Instance methodHelper,V_Method *method,V_Class theClass);
Int4			case_helper_open(V_Environment environment,V_Instance caseHelper,V_Method method,V_Case *theCase);
Int4			terminal_open(V_Environment environment,V_Instance terminal,V_Operation theOperation);
Int4			root_open(V_Environment environment,V_Instance root,V_Operation theOperation);
Int4			operation_helper_open(V_Environment environment,V_Instance operationHelper,V_Case theCase,V_Operation *theOperation);
Int4			case_item_open(V_Environment environment,V_Instance caseItem,V_Method method);
Int4			method_item_open(V_Environment environment,V_Instance methodItem,V_Class theClass);
Int4			persistent_helper_open(V_Environment environment,V_Instance persistentHelper,V_Class theClass);
Int4			persistent_item_open(V_Environment environment,V_Instance persistentItem,V_Class theClass);
Int4			attribute_helper_open(V_Environment environment,V_Instance attributeHelper,V_Class theClass);
Int4			attribute_item_open(V_Environment environment,V_Instance classItem,V_Class theClass);
Int4			class_helper_open(V_Environment environment,V_Instance classHelper,V_Class *theClass);
Int4			class_item_open(V_Environment environment,V_Instance classItem);
Int4			project_item_data_open(V_Environment environment,V_Instance project);


#endif	//	__VPLINTERPRETERH__

