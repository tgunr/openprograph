/*
	
	MacOSX OpenGL.c
	Copyright 2007 Andescotia LLC, All Rights Reserved.
	
*/
#include "MacOSX OpenGL.h"

//Nat4	load_MacOSX_OpenGL_Constants(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_OpenGL_Structures(V_Environment environment,char *bundleID);
Nat4	load_MacOSX_OpenGL_Procedures(V_Environment environment,char *bundleID);

#pragma export on

Nat4	load_OpenGL(V_Environment environment)
{
	char	*bundleID = "com.andescotia.frameworks.marten.opengl";
	Nat4	result = 0;

//	result = load_MacOSX_OpenGL_Constants(environment,bundleID);
	result = load_MacOSX_OpenGL_Structures(environment,bundleID);
	result = load_MacOSX_OpenGL_Procedures(environment,bundleID);

	return 0;
}

#pragma export off
