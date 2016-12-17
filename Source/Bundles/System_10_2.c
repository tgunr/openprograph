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

#include "System_10_2.h"

extern Nat4 load_VPX_PrimitivesCString(V_Environment environment,char *bundleID);

extern Nat4 load_VPX_PrimitivesMacDrawing(V_Environment environment,char *bundleID);
extern Nat4 load_VPX_PrimitivesMacFiles(V_Environment environment,char *bundleID);
extern Nat4 load_VPX_PrimitivesMacFormats(V_Environment environment,char *bundleID);
extern Nat4 load_VPX_PrimitivesMacScrap(V_Environment environment,char *bundleID);
extern Nat4 load_VPX_PrimitivesMacTextEdit(V_Environment environment,char *bundleID);
extern Nat4 load_VPX_PrimitivesMacWindows(V_Environment environment,char *bundleID);

#pragma export on

Nat4	load_System(V_Environment environment)
{
	char			*bundleID = "com.andescotia.frameworks.marten.system";
	Nat4			result = 0;

	result = load_VPX_PrimitivesCString(environment,bundleID);

	result = load_VPX_PrimitivesMacDrawing(environment,bundleID);
	result = load_VPX_PrimitivesMacFiles(environment,bundleID);
	result = load_VPX_PrimitivesMacFormats(environment,bundleID);
	result = load_VPX_PrimitivesMacScrap(environment,bundleID);
	result = load_VPX_PrimitivesMacTextEdit(environment,bundleID);
	result = load_VPX_PrimitivesMacWindows(environment,bundleID);

	return 0;
}

#pragma export off
