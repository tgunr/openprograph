/*
 *  MacOSX AMLib.c
 *  MartenLibrary
 *
 *  Created by Jack Small on 4/28/07.
 *  Copyright 2007 __MyCompanyName__. All rights reserved.
 *
 */

vpl_StringPtr	CFStringGetUTF8String( CFStringRef inCFString )
{	
	CFIndex				bufferSize = 0;
	Boolean				goodCoerce = false;
	vpl_StringPtr		utf8String = NULL;
	
	if( inCFString == NULL ) return utf8String;
	
	bufferSize = CFStringGetMaximumSizeForEncoding( CFStringGetLength( inCFString ), kCFStringEncodingUTF8 ) + 1;
	utf8String = (vpl_StringPtr)X_malloc( bufferSize );
	utf8String[ bufferSize-1 ] = vpl_StringTerminator;
	
	goodCoerce = CFStringGetCString( inCFString, (char*)utf8String, bufferSize, kCFStringEncodingUTF8 );
	if( !goodCoerce ) {
		X_free( utf8String );
		utf8String = NULL;
	}
				
	return utf8String;
}

CFStringRef CFStringCreateFromUTF8String( vpl_StringPtr inString )
{	
	if( inString == NULL ) return (CFStringRef)NULL;

	return CFStringCreateWithCString( kCFAllocatorDefault, inString, kCFStringEncodingUTF8 );
}

Nat4	CFNumberGetNat4( CFNumberRef inCFNumber )
{
	Boolean				goodCoerce = false;
	Nat4				workInteger = 0;
	
	if( inCFNumber != NULL ) goodCoerce = CFNumberGetValue( inCFNumber, kCFNumberLongType, &workInteger );
	if( !goodCoerce ) workInteger = 0;

	return workInteger;
}

vpl_StringPtr		AMLib_GetDictionaryKeyString( vpl_AMLib inAMLib, CFStringRef inKeyName )
{
	vpl_StringPtr	theString = NULL;
	CFStringRef		workCFString = NULL;
	
	workCFString = (CFStringRef)CFBundleGetValueForInfoDictionaryKey( inAMLib->theAML_CFBundle, inKeyName );
	if( workCFString == NULL ) return NULL;
	
	theString = CFStringGetUTF8String( workCFString );
	CFRelease( workCFString );
	
	return theString;
}

CFArrayRef CFURLGetDirectoryItems( CFURLRef	inURL )
{
	CFDictionaryRef		thePropsDict = NULL;
	CFMutableArrayRef	thePropsArray = CFArrayCreateMutable( kCFAllocatorDefault, 1, &kCFTypeArrayCallBacks );
	CFArrayRef			theItems = NULL;
	
	if( thePropsArray == NULL ) return theItems;
	CFArrayAppendValue( thePropsArray, kCFURLFileDirectoryContents );

	CFURLCreateDataAndPropertiesFromResource( kCFAllocatorDefault, inURL, NULL, &thePropsDict, thePropsArray, NULL );
	if( thePropsDict == NULL)  goto EXIT;
	
	theItems = CFDictionaryGetValue( thePropsDict, kCFURLFileDirectoryContents );
	if( theItems != NULL ) CFRetain( theItems );
	
EXIT:
	if( thePropsArray != NULL ) CFRelease( thePropsArray );
	if( thePropsDict != NULL ) CFRelease( thePropsDict );
	
	return theItems;
}

void	AMLib_OpenPrivateFrameworks( vpl_AMLib inAMLib )
{
	CFArrayRef		theItemArray = NULL;
	CFURLRef		workItem;
	CFBundleRef		workBundle = NULL;
	Nat4			workIndex = 0;

	workItem = CFBundleCopyPrivateFrameworksURL( inAMLib->theAML_CFBundle );
	if( workItem == NULL ) return;
	
	theItemArray = CFURLGetDirectoryItems( workItem );
	if( theItemArray == NULL ) goto EXIT;
	CFRelease( workItem );
	workItem = NULL;
	
	for( workIndex = 0; workIndex < CFArrayGetCount( theItemArray ); workIndex++ )
	{
		workItem = CFArrayGetValueAtIndex( theItemArray, workIndex );
		if( workItem == NULL ) continue;
		
		workBundle = CFBundleCreate( kCFAllocatorDefault, workItem );
		if( workBundle == NULL ) continue;

		CFBundleLoadExecutable( workBundle );
		
			{	// Load Marten Framework?
				Nat4							workResult = kERROR;
				CFStringRef						workCFString = NULL;
				load_Marten_FrameworkInitProc	workFunc = NULL;
				
				workCFString = (CFStringRef)CFBundleGetValueForInfoDictionaryKey( workBundle, kAML_MartenLoadFunction );
				if( workCFString != NULL ) workFunc = CFBundleGetFunctionPointerForName( workBundle, workCFString );
				if( workFunc != NULL ) workResult = workFunc( inAMLib->environment );
				
				printf("MartenLoadFunction returned: %d\n", workResult );
			}
		
		CFShow( workBundle );
		workItem = NULL;
	}

EXIT:
	if( workItem != NULL ) CFRelease( workItem );	
	if( theItemArray != NULL ) CFRelease( theItemArray );	
}

vpl_AMLib	AMLib_Open( vpl_StringPtr inOwnerID, CFURLRef amlibCFURL, V_Environment environment )
{
	vpl_AMLib		workLib = NULL;
	CFBundleRef		amlibBundle = NULL;
	
	amlibBundle = CFBundleCreate( kCFAllocatorDefault, amlibCFURL );
	if( amlibCFURL == NULL ) goto FINISH;
	
	workLib = VPXMALLOC( sizeof(VPL_AMLib), VPL_AMLib );
	if( workLib == NULL ) goto FINISH;
	
	workLib->theAML_CFBundle = amlibBundle;
	workLib->environment = environment;
	workLib->ownerID = new_string( inOwnerID, environment );
	workLib->name = AMLib_GetDictionaryKeyString( workLib, kAML_InfoKeyItemName );
	workLib->identifier = AMLib_GetDictionaryKeyString( workLib, kAML_InfoKeyBundleID );
	workLib->sourceLibID = AMLib_GetDictionaryKeyString( workLib, kAML_InfoKeySourceID );
	workLib->description = AMLib_GetDictionaryKeyString( workLib, kAML_InfoKeyDescription );

	AMLib_OpenPrivateFrameworks( workLib );

	CFShow( workLib->theAML_CFBundle );

FINISH:
	return workLib;
}


CFDataRef	AMLib_GetDefinitionFileData( vpl_AMLib inAMLib, vpl_StringPtr inFileName )
{

	CFDataRef		theFileData = NULL;
	CFURLRef		theBundleURL = NULL;
	CFURLRef		theFileURL = NULL;
	Boolean			goodLoad = FALSE;
	
	vpl_StringPtr	theDefinitionPath = kAML_DefinitionsDirectory;
	vpl_StringPtr	theFilePath = (vpl_StringPtr)new_cat_string( theDefinitionPath, inFileName );
	CFStringRef		theFilePathCFString = CFStringCreateFromUTF8String( theFilePath );
	
	if( theFilePath == NULL ) return NULL;	
	
	theBundleURL = CFBundleCopyBundleURL( inAMLib->theAML_CFBundle );
	if( theBundleURL == NULL ) return NULL;
	
	theFileURL = CFURLCreateCopyAppendingPathComponent( kCFAllocatorDefault, theBundleURL, theFilePathCFString, FALSE );
	if( theFileURL == NULL ) goto FINISH;

	goodLoad = CFURLCreateDataAndPropertiesFromResource( kCFAllocatorDefault, theFileURL, &theFileData, NULL, NULL, NULL );
	if( !goodLoad ) theFileData = NULL;
	
//	CFShow( theFileData );
	
FINISH:
	
	if( theFilePath ) X_free( theFilePath );
	if( theBundleURL ) CFRelease( theBundleURL );
	if( theFilePathCFString ) CFRelease( theFilePathCFString );

	return theFileData;
}


Nat4	AMLib_CreateDictionaryFromArrayData( vpl_AMLib theAMLib, CFDataRef constsCFData, Nat4* constsCount, VPL_DictionaryNode** constsDict, xform_ALib_ArrayDataProc inXFormProc )
{		
		Nat4				result = kERROR;
		Nat4				workIndex = 0;
		Nat4				workCount = 0;
		Boolean				goodCoerce = false;

		V_DictionaryNode	workNode = NULL;
		VPL_ExtConstant*	workRecord = NULL;
		CFArrayRef			workCFList = NULL;
		CFArrayRef			nodeList = NULL;
		
		CFStringRef			workCFString = NULL;
		CFNumberRef			workCFNumber = NULL;
		vpl_StringPtr		utf8String = NULL;
		Nat4				workInteger = 0;
		void*				workData = NULL;

		workCFList = CFPropertyListCreateFromXMLData( kCFAllocatorDefault, constsCFData, kCFPropertyListImmutable, NULL );
		if( workCFList == NULL ) return kERROR;
//		CFShow( workCFList );
		
		if( CFGetTypeID( workCFList ) != CFArrayGetTypeID() ) goto FINISH;
				
		workCount = CFArrayGetCount( workCFList );
		if( workCount == 0 ) {
			result = kNOERROR;
			goto FINISH;
		}
		
		workNode = VPXMALLOC( workCount, VPL_DictionaryNode );
		if( workNode == NULL ) goto FINISH;
		
		for( workIndex=0; workIndex<workCount; workIndex++ )
		{
			nodeList = (CFArrayRef)CFArrayGetValueAtIndex( workCFList, workIndex );
			if( nodeList == NULL ) goto BAILLOOP;

			workCFString = (CFStringRef)CFArrayGetValueAtIndex( nodeList, 0 );
			if( workCFString == NULL ) goto BAILLOOP;
			
			utf8String = CFStringGetUTF8String( workCFString );
			if( utf8String == NULL) goto BAILLOOP;

//			printf("Got a record (#%i) name: %s\n", workIndex, utf8String );

			workData = (void*)CFArrayGetValueAtIndex( nodeList, 1 );
			workRecord = inXFormProc( theAMLib, utf8String, workData );		// Call data transform
			workData = NULL;
			
//			if( workRecord == NULL ) goto BAILLOOP;			// Removed because all primitives return null!
			
			workNode[workIndex].name = utf8String;
			workNode[workIndex].object = workRecord;

			utf8String = NULL;					// Finished using string var for name
			result = kNOERROR;
			continue;

	BAILLOOP:
			result = kERROR;
			exit;
		}

FINISH:
		if( result == kNOERROR ) {
			*constsCount = workCount;
			*constsDict = workNode;
		}

		if( workCFList != NULL ) CFRelease( workCFList );

//		printf("The count: %d, the Err: %d\n", workCount, result );

		return result;
}


Nat4 AMLib_AddDictionaryForFile( vpl_AMLib theAMLib, V_Dictionary inEnvDict, vpl_StringPtr inFileName, xform_ALib_ArrayDataProc inXFormProc )
{
		Nat4				result = 0;
		CFDataRef			theFileData = NULL;
		Nat4				theConstantsNumber = 0;
		VPL_DictionaryNode*	theConstantsArray = NULL;

		theFileData = AMLib_GetDefinitionFileData( theAMLib, inFileName );
		if( theFileData == NULL ) return kNOERROR;

		result = AMLib_CreateDictionaryFromArrayData( theAMLib, theFileData, &theConstantsNumber, &theConstantsArray, inXFormProc );
		if( result != kNOERROR ) return result;

		CFRelease( theFileData );

		if( inEnvDict ) result = add_nodes( inEnvDict, theConstantsNumber, theConstantsArray );
		
		if( !inEnvDict ) X_free( theConstantsArray );
		
		return result;
}

void* AMLib_FindFunctionPtrForName ( vpl_AMLib theAMLib, vpl_StringPtr inName )
{
	CFStringRef			inNameCFString = NULL;
	CFStringRef			bundleIDCFString = NULL;
	void*				theFunction = NULL;
	
	bundleIDCFString = CFStringCreateFromUTF8String( theAMLib->sourceLibID );
	inNameCFString = CFStringCreateFromUTF8String( inName );

	if(( inNameCFString != NULL ) && ( bundleIDCFString != NULL ))
			theFunction = CFBundleGetFunctionPointerForName( CFBundleGetBundleWithIdentifier(bundleIDCFString), inNameCFString );

	if( inNameCFString != NULL ) CFRelease( inNameCFString );
	if( bundleIDCFString != NULL ) CFRelease( bundleIDCFString );

	printf( "FindFunctionPtr in %s for %s: %s\n", theAMLib->sourceLibID, inName, (theFunction!=NULL) ? "Yes" : "No" );

	return theFunction;
}











