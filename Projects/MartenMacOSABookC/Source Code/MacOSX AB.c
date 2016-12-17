/*
	
	MacOSX AB.c
	Copyright 2006 Andescotia LLC, All Rights Reserved.
	
*/

#include "MacOSX AB.h"

Nat4	load_MacOSAddressBook_Constants(V_Environment environment,char *bundleID);
Nat4	load_MacOSAddressBook_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MacOSAddressBook_Structures(V_Environment environment,char *bundleID);

#pragma export on

Nat4	load_MacOSAddressBook(V_Environment environment)
{
	char	*bundleID = "com.andescotia.frameworks.macos.addressbook";
	Nat4	result = 0;

	result = load_MacOSAddressBook_Constants(environment,bundleID);
	result = load_MacOSAddressBook_Procedures(environment,bundleID);
	result = load_MacOSAddressBook_Structures(environment,bundleID);

	return 0;
}

#pragma export off
