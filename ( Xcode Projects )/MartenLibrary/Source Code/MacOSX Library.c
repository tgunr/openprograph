/*
	
	MacOSX Library.c
	Copyright 2007 Andescotia LLC, All Rights Reserved.
	
*/

#include "MacOSX Library.h"

Nat4	load_AMartenLib_Constants(V_Environment environment,vpl_AMLib theAMLib);
Nat4	load_AMartenLib_Structures(V_Environment environment,vpl_AMLib theAMLib);
Nat4	load_AMartenLib_Procedures(V_Environment environment,vpl_AMLib theAMLib);
//Nat4	load_AMartenLib_Primitives(V_Environment environment,vpl_AMLib theAMLib);

#pragma export on

vpl_AMLib*		g_AMartenLib = NULL;

Nat4	load_AMartenLib(V_Environment environment)
{
	char*			bundleID = "com.andescotia.frameworks.library.abstract";
	Nat4			result = 0;
	Nat4			count = 0;
	CFArrayRef		thePlugIns = CFBundleCopyResourceURLsOfType( CFBundleGetMainBundle(), kAML_LibraryFileExtension, kAML_LibraryFileDirectory );
	CFURLRef		aPlugInURL = NULL;
	vpl_AMLib		aMartenLib = NULL;
	
	g_AMartenLib = VPXMALLOC( CFArrayGetCount( thePlugIns ), vpl_AMLib );
	if( g_AMartenLib == NULL ) return kERROR;
	
	for( count = 0; count < CFArrayGetCount( thePlugIns ); count++ )
	{
		aPlugInURL = CFArrayGetValueAtIndex( thePlugIns, count );
		if( aPlugInURL == NULL ) continue;
		
		g_AMartenLib[count] = AMLib_Open( bundleID, aPlugInURL, environment );
		result = load_AMartenLib_Constants( environment, g_AMartenLib[count] );
		result = load_AMartenLib_Structures( environment, g_AMartenLib[count] );
		result = load_AMartenLib_Procedures( environment, g_AMartenLib[count] );
		result = load_AMartenLib_Primitives( environment, g_AMartenLib[count] );
	}
	
	CFRelease( thePlugIns );

	return 0;
}

#pragma export off
