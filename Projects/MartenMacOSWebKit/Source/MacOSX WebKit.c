/*
	
	MacOSX WebKit.c
	Copyright 2004 Scott B. Anderson, All Rights Reserved.
	
*/
#include "MacOSX WebKit.h"

Nat4	load_MacOSX_WebKit(V_Environment environment);

#pragma export on

void	init_MartenMacOSWebKit()
{
	//
}

Nat4	load_WebKit(V_Environment environment)
{
	Nat4			result = 0;

	result = load_MacOSX_WebKit(environment);

	return 0;
}

#pragma export off
