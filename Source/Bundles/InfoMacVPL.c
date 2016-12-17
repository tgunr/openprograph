/*
	
	InfoMacVPL.c
	Copyright 2006 Scott B. Anderson, All Rights Reserved.
	
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

#include "InfoMacVPL.h"

extern Nat4	load_VPX_PrimitivesInfo(V_Environment environment,char *bundleID);

#pragma export on

Nat4	load_martenInfo(V_Environment environment)
{
	char	*bundleID = "com.andescotia.frameworks.marten.info";
	Nat4	result = 0;

	result = load_VPX_PrimitivesInfo(environment,bundleID);

	return 0;
}

#pragma export reset