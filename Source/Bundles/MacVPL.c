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


#include "MacVPL.h"

Nat4	load_VPX_PrimitivesBit(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesCallbacks(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesData(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesInterpreterControl(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesList(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesLogical(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesMath(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesMemory(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesString(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesSystem(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesType(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesUnixIO(V_Environment environment,char *bundleID);

#pragma export on

Nat4	load_Standard(V_Environment environment)
{
	char			*bundleID = "com.andescotia.frameworks.marten.standard";
	Nat4			result		= 0;

	result = load_VPX_PrimitivesBit(environment,bundleID);
	result = load_VPX_PrimitivesCallbacks(environment,bundleID);
	result = load_VPX_PrimitivesData(environment,bundleID);
	result = load_VPX_PrimitivesInterpreterControl(environment,bundleID);
	result = load_VPX_PrimitivesList(environment,bundleID);
	result = load_VPX_PrimitivesLogical(environment,bundleID);
	result = load_VPX_PrimitivesMath(environment,bundleID);
	result = load_VPX_PrimitivesMemory(environment,bundleID);
	result = load_VPX_PrimitivesString(environment,bundleID);
	result = load_VPX_PrimitivesSystem(environment,bundleID);
	result = load_VPX_PrimitivesType(environment,bundleID);
	result = load_VPX_PrimitivesUnixIO(environment,bundleID);

	return 0;
}

#pragma export off
