/*
	
	VPL_MacVPL.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif	



#include "CarbonMacVPL.h"

extern Nat4	load_VPX_PrimitivesFiles(V_Environment environment,char *bundleID);
extern Nat4	load_VPX_PrimitivesGraphics(V_Environment environment,char *bundleID);
extern Nat4	load_VPX_PrimitivesUI(V_Environment environment,char *bundleID);

#pragma export on

Nat4	load_Carbon(V_Environment environment)
{
	char	*bundleID = "com.andescotia.frameworks.martenui.aqua";
	Nat4	result = 0;

	result = load_VPX_PrimitivesFiles(environment,bundleID);
	result = load_VPX_PrimitivesGraphics(environment,bundleID);
	result = load_VPX_PrimitivesUI(environment,bundleID);

	return 0;
}

#pragma export reset