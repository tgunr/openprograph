/*
	
	MacOSX_Library_Primitives.c
	Copyright 2007 Andescotia LLC, All Rights Reserved.
	
*/

Int1*	ExStringToCNameString (Int1* exString);		/* Converts an 8 bit (ASCII) string into an encoded c name string */
Int1*	ExStringToCNameString (Int1* exString)		/* Converts an 8 bit (ASCII) string into an encoded c name string */
{
	const	Nat4	firstChar = 6;

	Nat1	testChar = 0;
	Int1*	tempString = NULL;
	Int1*	inString = NULL;
	Nat4	theIndex = 0;
	Nat4	theLength = firstChar;
	Nat4	theSize = 0;

	Nat4	theOffset = 0;
	
	if (exString == NULL) return NULL;
	if (strlen(exString) == 0) return NULL;
	
	tempString = (Int1*)calloc(5, 1);
	inString = (Int1*)calloc(theLength, 1);
	sprintf( inString, "VPLP_" );

	for (theIndex = 0; theIndex < strlen(exString); theIndex++)
	{
		testChar = exString[theIndex];
		
		if( !isalnum(testChar) )					/* pack hexadecimal */
		{
			theOffset = theLength - 2;
			if( (theLength > firstChar) && (inString[theOffset] == '_') ) {
				theLength = theLength - 1;
				inString = (Int1*)realloc( inString, theLength*sizeof(Int1) );
				if( inString == NULL ) goto BAIL;
				inString[theLength - 1] = 0;
				
				sprintf( tempString, "%02X_", testChar );
			}
			else {
				sprintf( tempString, "_%02X_", testChar );
			}
		}
		else										/* regular char */
		{
			sprintf( tempString, "%c", testChar);
		}
	
		theLength = strlen( inString );
	
		theSize = strlen( tempString );
		theLength = theLength + theSize + 1;
		
		inString = (Int1*)realloc( inString, theLength*sizeof(Int1) );
		if( inString == NULL ) goto BAIL;
		inString = strcat( inString, tempString );	
	}

BAIL:	
	X_free(tempString );
	return inString;

} /* ExStringToCNameString */

void* xform_ALib_Primitives ( vpl_AMLib theAMLib, vpl_StringPtr inName,  void* inRecordData );
void* xform_ALib_Primitives ( vpl_AMLib theAMLib, vpl_StringPtr inName,  void* inRecordData )
{
	CFArrayRef		workCFArray = (CFArrayRef)inRecordData;
	vpl_StringPtr	lookupName = ExStringToCNameString( inName );
	
	if( workCFArray == NULL ) return (void*)NULL;
	if( lookupName == NULL ) return (void*)NULL;
	
	if( CFArrayGetCount( workCFArray ) == 4 )
		lookupName = CFStringGetUTF8String((CFStringRef)CFArrayGetValueAtIndex(workCFArray, 3));
	
	extPrimitive_new(
		theAMLib->ownerID,														// Documentation Bundle ID
		CFNumberGetNat4((CFNumberRef)CFArrayGetValueAtIndex(workCFArray, 2)),	// Default Control
		inName,																	// Primitive name
		theAMLib->environment->externalPrimitivesTable,							// Primitives Dictionary
		CFNumberGetNat4((CFNumberRef)CFArrayGetValueAtIndex(workCFArray, 0)),	// Input Arity
		CFNumberGetNat4((CFNumberRef)CFArrayGetValueAtIndex(workCFArray, 1)),	// Output Arity
		AMLib_FindFunctionPtrForName( theAMLib, lookupName )					// Primitive Function
	);
	
	return (void*)NULL;
}

#pragma export on

Nat4	load_AMartenLib_Primitives( V_Environment environment, vpl_AMLib theAMLib );
Nat4	load_AMartenLib_Primitives( V_Environment environment, vpl_AMLib theAMLib )
{
	return AMLib_AddDictionaryForFile( theAMLib, NULL, kAML_DefinePrimitivesFile, xform_ALib_Primitives );
}

#pragma export off


