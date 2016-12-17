/*
	
	MacOSX_Library_Structures.c
	Copyright 2007 Andescotia LLC, All Rights Reserved.
	
*/

#ifndef offsetof
#define offsetof(type, member)  __builtin_offsetof (type, member)
#endif

void* xform_ALib_Structures ( vpl_AMLib theAMLib, vpl_StringPtr inName,  void* inRecordData );
void* xform_ALib_Structures ( vpl_AMLib theAMLib, vpl_StringPtr inName,  void* inRecordData )
{
	#pragma unused (vpl_AMLib)

		VPL_ExtStructure*	workRecord = NULL;
		VPL_ExtField*		workFields = NULL;
		Boolean				goodCoerce = FALSE;
		
		CFArrayRef			workCFArray = (CFArrayRef)inRecordData;
		CFArrayRef			fieldCFArray = NULL;
		CFArrayRef			thisField = NULL;
		CFNumberRef			workCFNumber = NULL;
		Nat4				workIndex = 0;
		Nat4				fieldCount = 0;
		vpl_StringPtr		utf8String = NULL;
		
		Nat4				blockSizeA = 0;
		Nat4				blockSizeB = 0;

		if( workCFArray == NULL ) return workRecord;
//		CFShow( CFSTR("workCFArray:") ); CFShow( workCFArray );
		
//		workCFNumber = (CFNumberRef)CFArrayGetValueAtIndex( workCFArray, 0 );
//		if( workCFNumber == NULL ) return workRecord;
//		goodCoerce = CFNumberGetValue( workCFNumber, kCFNumberLongType, &blockSizeA );
//		if( !goodCoerce ) return workRecord;
		
		blockSizeA = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( workCFArray, 0 ) );
		blockSizeB = blockSizeA;
		
		fieldCFArray = (CFArrayRef)CFArrayGetValueAtIndex( workCFArray, 1 );
		if( fieldCFArray == NULL ) return workRecord;
//		CFShow( CFSTR("fieldCFArray:") ); CFShow( fieldCFArray );
		
		fieldCount = CFArrayGetCount( fieldCFArray );
		if( fieldCount ) {
			workFields = VPXMALLOC( fieldCount, VPL_ExtField );
			if(workFields == NULL ) return workRecord;
			
			for( workIndex = 0; workIndex < fieldCount; workIndex++ )
			{
				thisField = (CFArrayRef)CFArrayGetValueAtIndex( fieldCFArray, workIndex );
				if( thisField == NULL ) return workRecord;
//				CFShow( CFSTR("thisField:") ); CFShow( thisField );
				
				workFields[workIndex].name = CFStringGetUTF8String( (CFStringRef)CFArrayGetValueAtIndex( thisField, 0 ) );
				workFields[workIndex].offset = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisField, 1 ) );
				workFields[workIndex].size = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisField, 2 ) );
				workFields[workIndex].type = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisField, 3 ) );
				workFields[workIndex].pointerTypeName = CFStringGetUTF8String( (CFStringRef)CFArrayGetValueAtIndex( thisField, 4 ) );
				workFields[workIndex].indirection = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisField, 5 ) );
				workFields[workIndex].pointerTypeSize = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisField, 6 ) );
				workFields[workIndex].typeName = CFStringGetUTF8String( (CFStringRef)CFArrayGetValueAtIndex( thisField, 7 ) );
				if( workIndex+1 < fieldCount )
						workFields[workIndex].next = &workFields[workIndex+1];
				else	workFields[workIndex].next = NULL;
			}
		}
		
		workRecord = VPXMALLOC( 1, VPL_ExtStructure );
		if( workRecord == NULL ) return workRecord;
		
		workRecord->name = inName;
		workRecord->fields = workFields;
		workRecord->lccSize = blockSizeA;
		workRecord->sizeOfSize = blockSizeB;
		
		return workRecord;
}


#pragma export on

Nat4	load_AMartenLib_Structures(V_Environment environment, vpl_AMLib theAMLib );
Nat4	load_AMartenLib_Structures(V_Environment environment, vpl_AMLib theAMLib )
{
	return AMLib_AddDictionaryForFile( theAMLib, environment->externalStructsTable, kAML_DefineStructuresFile, xform_ALib_Structures );
}

#pragma export off
