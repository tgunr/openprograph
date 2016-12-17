/*
	
	MacOSX_AB_Structures.c
	Copyright 2005 Andescotia LLC, All Rights Reserved.
	
*/

#ifdef __MWERKS__
#include "VPL_Compiler.h"
#endif	

/*	VPL_ExtStructure _OpaqueABPicker_S = {"OpaqueABPicker",NULL};

	VPL_ExtField _ABActionCallbacks_5 = { "selected",16,4,kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _ABActionCallbacks_4 = { "enabled",12,4,kPointerType,"unsigned char",1,1,"T*",&_ABActionCallbacks_5};
	VPL_ExtField _ABActionCallbacks_3 = { "title",8,4,kPointerType,"__CFString",2,0,"T*",&_ABActionCallbacks_4};
	VPL_ExtField _ABActionCallbacks_2 = { "property",4,4,kPointerType,"__CFString",2,0,"T*",&_ABActionCallbacks_3};
	VPL_ExtField _ABActionCallbacks_1 = { "version",0,4,kIntType,"__CFString",2,0,"long int",&_ABActionCallbacks_2};
	VPL_ExtStructure _ABActionCallbacks_S = {"ABActionCallbacks",&_ABActionCallbacks_1};


	VPL_ExtField _ABActionCallbacks_5 = { "selected",offsetof(ABActionCallbacks,selected),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _ABActionCallbacks_4 = { "enabled",offsetof(ABActionCallbacks,enabled),sizeof(void *),kPointerType,"void",1,1,"T*",&_ABActionCallbacks_5};
	VPL_ExtField _ABActionCallbacks_3 = { "title",offsetof(ABActionCallbacks,title),sizeof(void *),kPointerType,"void",2,0,"T*",&_ABActionCallbacks_4};
	VPL_ExtField _ABActionCallbacks_2 = { "property",offsetof(ABActionCallbacks,property),sizeof(void *),kPointerType,"void",2,0,"T*",&_ABActionCallbacks_3};
	VPL_ExtField _ABActionCallbacks_1 = { "version",offsetof(ABActionCallbacks,version),sizeof(long int),kIntType,"NULL",2,0,"long int",&_ABActionCallbacks_2};
	VPL_ExtStructure _ABActionCallbacks_S = {"ABActionCallbacks",&_ABActionCallbacks_1,sizeof(ABActionCallbacks)};

	VPL_ExtStructure ___ABMultiValue_S = {"__ABMultiValue",NULL};

	VPL_ExtStructure ___ABAddressBookRef_S = {"__ABAddressBookRef",NULL};

	VPL_ExtStructure ___ABSearchElementRef_S = {"__ABSearchElementRef",NULL};

	VPL_ExtStructure ___ABGroup_S = {"__ABGroup",NULL};

	VPL_ExtStructure ___ABPerson_S = {"__ABPerson",NULL};
*/

	VPL_ExtStructure _OpaqueABPicker_S = {"OpaqueABPicker",NULL,0};

	VPL_ExtField _ABActionCallbacks_5 = { "selected",offsetof(ABActionCallbacks,selected),sizeof(void *),kPointerType,"void",1,0,"T*",NULL};
	VPL_ExtField _ABActionCallbacks_4 = { "enabled",offsetof(ABActionCallbacks,enabled),sizeof(void *),kPointerType,"void",1,1,"T*",&_ABActionCallbacks_5};
	VPL_ExtField _ABActionCallbacks_3 = { "title",offsetof(ABActionCallbacks,title),sizeof(void *),kPointerType,"void",2,0,"T*",&_ABActionCallbacks_4};
	VPL_ExtField _ABActionCallbacks_2 = { "property",offsetof(ABActionCallbacks,property),sizeof(void *),kPointerType,"void",2,0,"T*",&_ABActionCallbacks_3};
	VPL_ExtField _ABActionCallbacks_1 = { "version",offsetof(ABActionCallbacks,version),sizeof(long int),kIntType,"NULL",2,0,"long int",&_ABActionCallbacks_2};
	VPL_ExtStructure _ABActionCallbacks_S = {"ABActionCallbacks",&_ABActionCallbacks_1,sizeof(ABActionCallbacks)};

	VPL_ExtStructure ___ABMultiValue_S = {"__ABMultiValue",NULL,0};

	VPL_ExtStructure ___ABAddressBookRef_S = {"__ABAddressBookRef",NULL,0};

	VPL_ExtStructure ___ABSearchElementRef_S = {"__ABSearchElementRef",NULL,0};

	VPL_ExtStructure ___ABGroup_S = {"__ABGroup",NULL,0};

	VPL_ExtStructure ___ABPerson_S = {"__ABPerson",NULL,0};


VPL_DictionaryNode VPX_MacOSAddressBook_Structures[] =	{
	{"OpaqueABPicker",&_OpaqueABPicker_S},
	{"ABActionCallbacks",&_ABActionCallbacks_S},
	{"__ABMultiValue",&___ABMultiValue_S},
	{"__ABAddressBookRef",&___ABAddressBookRef_S},
	{"__ABSearchElementRef",&___ABSearchElementRef_S},
	{"__ABGroup",&___ABGroup_S},
	{"__ABPerson",&___ABPerson_S},
};

Nat4	VPX_MacOSAddressBook_Structures_Number = 7;

#pragma export on

Nat4	load_MacOSAddressBook_Structures(V_Environment environment,char *bundleID);
Nat4	load_MacOSAddressBook_Structures(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_MacOSAddressBook_Structures_Number,VPX_MacOSAddressBook_Structures);
		
		return result;
}

#pragma export off
