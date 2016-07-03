/*
	
	MacOSX_Library_Constants.c
	Copyright 2007 Andescotia LLC, All Rights Reserved.
	
*/

//////////////////////////
//
// This callback decodes the constants in the transformed XML->CFTypes to VPL_ExtConstant records
//
//

void* xform_ALib_Constants ( vpl_AMLib theAMLib, vpl_StringPtr inName,  void* inRecordData );
void* xform_ALib_Constants ( vpl_AMLib theAMLib, vpl_StringPtr inName,  void* inRecordData )
{
	#pragma unused (vpl_AMLib)

		VPL_ExtConstant*	workRecord = NULL;
		Boolean				goodCoerce = FALSE;
		
		CFNumberRef			workCFNumber = NULL;
		Nat4				workInteger = 0;
		vpl_StringPtr		utf8String = NULL;

		
		workCFNumber = (CFNumberRef)inRecordData;
		if( workCFNumber == NULL ) return workRecord;
				
		if( CFGetTypeID( workCFNumber ) == CFNumberGetTypeID() ) {
			goodCoerce = CFNumberGetValue( workCFNumber, kCFNumberLongType, &workInteger );
			if( !goodCoerce ) workInteger = 0;
		} else if( CFGetTypeID( workCFNumber ) == CFStringGetTypeID() ) {
			utf8String = CFStringGetUTF8String( (CFStringRef)workCFNumber );
			goodCoerce = ( utf8String != NULL );
		} 
		
//		printf( "New const value: Int: %d, String: %s, isGood?: %s\n", workInteger, utf8String, (goodCoerce)?"Yes":"No" );

		if( !goodCoerce ) return workRecord;
				
		workRecord = VPXMALLOC( 1, VPL_ExtConstant );
		if( workRecord == NULL ) return workRecord;
		
		workRecord->name = inName;
		workRecord->enumInteger = (Int4)workInteger;
		workRecord->defineString = utf8String;
		
		return workRecord;
}

#pragma export on

Nat4	load_AMartenLib_Constants( V_Environment environment, vpl_AMLib theAMLib );
Nat4	load_AMartenLib_Constants( V_Environment environment, vpl_AMLib theAMLib )
{
	return AMLib_AddDictionaryForFile( theAMLib, environment->externalConstantsTable, kAML_DefineConstantsFile, xform_ALib_Constants );
}

#pragma export off




