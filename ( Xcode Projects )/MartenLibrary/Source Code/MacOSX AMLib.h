/*
 *  MacOSX AMLib.h
 *  MartenLibrary
 *
 *  Created by Jack Small on 4/28/07.
 *  Copyright 2007 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef MACOSXAMLIB
#define MACOSXAMLIB

#include <CoreFoundation/CoreFoundation.h>

static CFStringRef		kAML_InfoKeyItemName			= CFSTR("MartenItemName");
static CFStringRef		kAML_InfoKeyBundleID			= CFSTR("CFBundleIdentifier");
static CFStringRef		kAML_InfoKeySourceID			= CFSTR("MartenLibrarySourceIdentifier");
static CFStringRef		kAML_InfoKeyDescription			= CFSTR("MartenItemDescription");
static CFStringRef		kAML_MartenLoadFunction			= CFSTR("MartenLoadFunction");

static vpl_StringPtr	kAML_DefinitionsDirectory		= "/Contents/Definitions/";
static vpl_StringPtr	kAML_DefineConstantsFile		= "Constants.plist";
static vpl_StringPtr	kAML_DefineStructuresFile		= "Structures.plist";
static vpl_StringPtr	kAML_DefineProceduresFile		= "Procedures.plist";
static vpl_StringPtr	kAML_DefinePrimitivesFile		= "Primitives.plist";
static CFStringRef		kAML_LibraryFileDirectory		= CFSTR("Marten Libraries");
static CFStringRef		kAML_LibraryFileExtension		= CFSTR("mxlib");

typedef struct 
{
	CFBundleRef				theAML_CFBundle;
	V_Environment			environment;
	vpl_StringPtr			ownerID;
	vpl_StringPtr			name;
	vpl_StringPtr			identifier;
	vpl_StringPtr			sourceLibID;
	vpl_StringPtr			description;
} VPL_AMLib, *vpl_AMLib;

typedef void*	(xform_ALib_ArrayDataProc)( vpl_AMLib theAMLib, vpl_StringPtr inName,  void* inRecordData );
typedef Nat4	(*load_Marten_FrameworkInitProc)( V_Environment environment );

vpl_AMLib			AMLib_Open( vpl_StringPtr inOwnerID, CFURLRef amlibCFURL, V_Environment environment );
vpl_StringPtr		AMLib_GetDictionaryKeyString( vpl_AMLib inAMLib, CFStringRef inKeyName );
CFDataRef			AMLib_GetDefinitionFileData( vpl_AMLib inAMLib, vpl_StringPtr inFileName );
Nat4				AMLib_CreateDictionaryFromArrayData( vpl_AMLib theAMLib, CFDataRef constsCFData, Nat4* constsCount, VPL_DictionaryNode** constsDict, xform_ALib_ArrayDataProc inXFormProc );
Nat4				AMLib_AddDictionaryForFile( vpl_AMLib theAMLib, V_Dictionary inEnvDict, vpl_StringPtr inFileName, xform_ALib_ArrayDataProc inXFormProc );
void*				AMLib_FindFunctionPtrForName ( vpl_AMLib theAMLib, vpl_StringPtr inName );


vpl_StringPtr		CFStringGetUTF8String( CFStringRef inCFString );
Nat4				CFNumberGetNat4( CFNumberRef inCFNumber );
CFStringRef			CFStringCreateFromUTF8String( vpl_StringPtr inString );
CFArrayRef			CFURLGetDirectoryItems( CFURLRef inURL );



#endif


