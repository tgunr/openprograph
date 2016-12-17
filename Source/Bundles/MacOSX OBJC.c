/*
	
	MacOSX OBJC.c
	Copyright 2004 Scott B. Anderson, All Rights Reserved.
	
*/
#include <stdio.h>
#include "MacOSX OBJC.h"

Nat4	load_MacOSX_OBJC_Constants(V_Environment environment);
Nat4	load_MacOSX_OBJC_Structures(V_Environment environment);
Nat4	load_MacOSX_OBJC_Procedures(V_Environment environment);

Nat4	load_Cocoa_Constants(V_Environment environment);
Nat4	load_Cocoa_OBJC_Structures(V_Environment environment);
Nat4	load_Cocoa_OBJC_Procedures(V_Environment environment);

#pragma export on

Nat4	load_OBJC(V_Environment environment)
{		
	Nat4			result = 0;

	result = load_MacOSX_OBJC_Constants(environment);
	result = load_MacOSX_OBJC_Structures(environment);
	result = load_MacOSX_OBJC_Procedures(environment);

	result = load_Cocoa_Constants(environment);
	result = load_Cocoa_Structures(environment);
	result = load_Cocoa_Procedures(environment);
	
	//	printf("Cocoa loaded.  result=%u\n", (unsigned int) result );
	return 0;
}

#pragma export off
