/*
	
	VPL_MacOSX.c
	Copyright 2003 Scott B. Anderson, All Rights Reserved.
	
*/

#include "MacOSX IOKit.h"

Nat4	load_MacOSX_IOKit_Constants(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_IOKit_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_IOKit_Structures(V_Environment environment,char *bundleID);

#pragma export on

Nat4	load_MacOSX_IOKit(V_Environment environment)
{
	char	*bundleID = "com.andescotia.frameworks.macos.iokit";
	Nat4	result = 0;

	result = load_MacOSX_IOKit_Constants(environment,bundleID);
	result = load_MacOSX_IOKit_Procedures(environment,bundleID);
	result = load_MacOSX_IOKit_Structures(environment,bundleID);

	return 0;
}

#pragma export off
