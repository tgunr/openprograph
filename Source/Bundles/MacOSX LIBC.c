/*
	
	MacOSX LIBC.c
	Copyright 2004 Scott B. Anderson, All Rights Reserved.
	
*/
#include "MacOSX LIBC.h"

Nat4	load_MacOSX_LIBC_Constants(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_LIBC_Structures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_LIBC_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_LIBC_Primitives(V_Environment environment,char *bundleID);

#pragma export on

Nat4	load_LibC(V_Environment environment)
{
	char	*bundleID = "com.andescotia.frameworks.marten.libc";
	Nat4	result = 0;

	result = load_MacOSX_LIBC_Constants(environment,bundleID);
	result = load_MacOSX_LIBC_Structures(environment,bundleID);
	result = load_MacOSX_LIBC_Procedures(environment,bundleID);
	result = load_MacOSX_LIBC_Primitives(environment,bundleID);

	return 0;
}

#pragma export off
