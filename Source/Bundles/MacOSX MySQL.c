/*
	
	MacOSX MySQL.c
	Copyright 2005 Andescotia LLC, All Rights Reserved.
	
*/

#include "MacOSX MySQL.h"

Nat4	load_MySQL_Constants(V_Environment environment,char *bundleID);
Nat4	load_MySQL_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MySQL_Structures(V_Environment environment,char *bundleID);

#pragma export on

Nat4	load_MySQL(V_Environment environment)
{
	char	*bundleID = "com.andescotia.frameworks.mysql";
	Nat4	result = 0;

	result = load_MySQL_Constants(environment,bundleID);
	result = load_MySQL_Procedures(environment,bundleID);
	result = load_MySQL_Structures(environment,bundleID);

	return 0;
}

#pragma export off
