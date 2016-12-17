/* A VPL Section File */
/*

TR Standard Prims.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_Test_20_Rig_20_Standard_20_Prims_2F_Name[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X18000000, 0X5374616E, 0X64617264, 0X20507269,
0X6D697469, 0X76657320, 0X54657374, 0000000000
	};
	Nat4 tempAttribute_Test_20_Rig_20_Standard_20_Prims_2F_Requires_20_Interaction_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Test_20_Rig_20_Standard_20_Prims_2F_Test_20_Groups[] = {
0000000000, 0X00000048, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X08000000, 0X5374616E,
0X64617264, 0000000000
	};
	Nat4 tempAttribute_Test_20_Simple_20_Add_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X12000000, 0X41646420, 0X5072696D, 0X69746976,
0X65205465, 0X73740000
	};
	Nat4 tempAttribute_Test_20_Simple_20_Add_2F_Requires_20_Interaction_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Test_20_Simple_20_Add_2F_Test_20_Groups[] = {
0000000000, 0X00000048, 0X00000020, 0X00000003, 0X00000014, 0X00000054, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000001, 0X00000040,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005C, 0X08000000, 0X5374616E,
0X64617264, 0000000000
	};


Nat4 VPLC_Test_20_Rig_20_Standard_20_Prims_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Test_20_Rig_20_Standard_20_Prims_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 288 93 }{ 190 387 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Test_20_Rig_20_Standard_20_Prims_2F_Name,environment);
	tempAttribute = attribute_add("Requires Interaction?",tempClass,tempAttribute_Test_20_Rig_20_Standard_20_Prims_2F_Requires_20_Interaction_3F_,environment);
	tempAttribute = attribute_add("Test Groups",tempClass,tempAttribute_Test_20_Rig_20_Standard_20_Prims_2F_Test_20_Groups,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Test Rig Abstract");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_Test_20_Simple_20_Add_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Test_20_Simple_20_Add_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 361 75 }{ 164 434 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Test_20_Simple_20_Add_2F_Name,environment);
	tempAttribute = attribute_add("Requires Interaction?",tempClass,tempAttribute_Test_20_Simple_20_Add_2F_Requires_20_Interaction_3F_,environment);
	tempAttribute = attribute_add("Test Groups",tempClass,tempAttribute_Test_20_Simple_20_Add_2F_Test_20_Groups,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Test Rig Standard Prims");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Test_20_Simple_20_Add_2F_Run_20_Test(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"2",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"3",TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(4)
}

/* Stop Universals */






Nat4	loadClasses_TR_20_Standard_20_Prims(V_Environment environment);
Nat4	loadClasses_TR_20_Standard_20_Prims(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Test Rig Standard Prims",environment);
	if(result == NULL) return kERROR;
	VPLC_Test_20_Rig_20_Standard_20_Prims_class_load(result,environment);
	result = class_new("Test Simple Add",environment);
	if(result == NULL) return kERROR;
	VPLC_Test_20_Simple_20_Add_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_TR_20_Standard_20_Prims(V_Environment environment);
Nat4	loadUniversals_TR_20_Standard_20_Prims(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Test Simple Add/Run Test",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Simple_20_Add_2F_Run_20_Test,NULL);

	return kNOERROR;

}


	Nat4 tempPersistent_Test_20_Rig_20_Standard_20_Prims_2F_Abstract_20_Rig_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempPersistent_Test_20_Simple_20_Add_2F_Abstract_20_Rig_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};

Nat4	loadPersistents_TR_20_Standard_20_Prims(V_Environment environment);
Nat4	loadPersistents_TR_20_Standard_20_Prims(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Test Rig Standard Prims/Abstract Rig?",tempPersistent_Test_20_Rig_20_Standard_20_Prims_2F_Abstract_20_Rig_3F_,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Test Simple Add/Abstract Rig?",tempPersistent_Test_20_Simple_20_Add_2F_Abstract_20_Rig_3F_,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_TR_20_Standard_20_Prims(V_Environment environment);
Nat4	load_TR_20_Standard_20_Prims(V_Environment environment)
{

	loadClasses_TR_20_Standard_20_Prims(environment);
	loadUniversals_TR_20_Standard_20_Prims(environment);
	loadPersistents_TR_20_Standard_20_Prims(environment);
	return kNOERROR;

}

