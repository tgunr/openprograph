/*
	
	MacOSX D2XX.c
	Copyright 2007 PolyMicro Systems, All Rights Reserved.
	
*/

#include "MacOSX D2XX.h"

Nat4	load_D2XX_Constants(V_Environment environment,char *bundleID);
Nat4	load_D2XX_Procedures(V_Environment environment,char *bundleID);
Nat4	load_D2XX_Structures(V_Environment environment,char *bundleID);

#pragma export on

Nat4	load_D2XX(V_Environment environment)
{
	char	*bundleID = "com.polymicrosystems.frameworks.d2xx.generic";
	Nat4	result = 0;

	result = load_D2XX_Constants(environment,bundleID);
	result = load_D2XX_Procedures(environment,bundleID);
	result = load_D2XX_Structures(environment,bundleID);

	return 0;
}

#pragma export off
