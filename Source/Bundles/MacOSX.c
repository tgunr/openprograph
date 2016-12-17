/*
	
	VPL_MacOSX.c
	Copyright 2003 Scott B. Anderson, All Rights Reserved.
	
*/

#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif	

#include "MacOSX.h"

Nat4	load_MacOSX_Constants(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_Procedures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_Structures(V_Environment environment,char *bundleID);

#pragma export on

Nat4	load_MacOSX(V_Environment environment)
{
	char	*bundleID = "com.andescotia.frameworks.macos.carbon";
	Nat4	result = 0;

	result = load_MacOSX_Constants(environment,bundleID);
	result = load_MacOSX_Procedures(environment,bundleID);
	result = load_MacOSX_Structures(environment,bundleID);

	return 0;
}

#pragma export off
