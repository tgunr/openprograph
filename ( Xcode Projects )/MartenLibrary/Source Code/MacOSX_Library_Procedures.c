/*
	
	MacOSX_Library_Procedures.c
	Copyright 2007 Andescotia LLC, All Rights Reserved.
	
*/


void* xform_ALib_Procedures ( vpl_AMLib theAMLib, vpl_StringPtr inName,  void* inRecordData );
void* xform_ALib_Procedures ( vpl_AMLib theAMLib, vpl_StringPtr inName,  void* inRecordData )
{
	#pragma unused (vpl_AMLib)

		VPL_ExtProcedure*	workRecord = NULL;
		VPL_Parameter*		workParam = NULL;
		VPL_Parameter*		inputParams = NULL;
		VPL_Parameter*		outputParams = NULL;
		Boolean				goodCoerce = FALSE;
		
		CFArrayRef			workCFArray = (CFArrayRef)inRecordData;
		CFArrayRef			paramCFArray = NULL;
		CFArrayRef			thisParam = NULL;
		Nat4				workIndex = 0;
		Nat4				paramCount = 0;
		
		if( workCFArray == NULL ) return workRecord;
//		CFShow( CFSTR("workCFArray:") ); CFShow( workCFArray );
				
		paramCFArray = (CFArrayRef)CFArrayGetValueAtIndex( workCFArray, 0 );
		if( paramCFArray != NULL )
		{
//			CFShow( CFSTR("input paramCFArray:") ); CFShow( paramCFArray );
			
			paramCount = CFArrayGetCount( paramCFArray );
			if( paramCount ) {
				inputParams = VPXMALLOC( paramCount, VPL_Parameter );
				if(inputParams == NULL ) exit;
				
				for( workIndex = 0; workIndex < paramCount; workIndex++ )
				{
					thisParam = (CFArrayRef)CFArrayGetValueAtIndex( paramCFArray, workIndex );
					if( thisParam == NULL ) exit;
//					CFShow( CFSTR("thisParam:") ); CFShow( thisParam );
					
					inputParams[workIndex].type = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisParam, 0 ) );
					inputParams[workIndex].size = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisParam, 1 ) );
					inputParams[workIndex].name = CFStringGetUTF8String( (CFStringRef)CFArrayGetValueAtIndex( thisParam, 2) );
					inputParams[workIndex].indirection = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisParam, 3 ) );
					inputParams[workIndex].constantFlag = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisParam, 4 ) );
					if( workIndex+1 < paramCount )
							inputParams[workIndex].next = &inputParams[workIndex+1];
					else	inputParams[workIndex].next = NULL;
				}
			}
		}
		
		paramCFArray = (CFArrayRef)CFArrayGetValueAtIndex( workCFArray, 1 );
		if( paramCFArray != NULL )
		{
//			CFShow( CFSTR("output paramCFArray:") ); CFShow( paramCFArray );
			
			paramCount = CFArrayGetCount( paramCFArray );
			if( paramCount ) {
				outputParams = VPXMALLOC( paramCount, VPL_Parameter );
				if(outputParams == NULL ) exit;
				
				for( workIndex = 0; workIndex < paramCount; workIndex++ )
				{
					thisParam = (CFArrayRef)CFArrayGetValueAtIndex( paramCFArray, workIndex );
					if( thisParam == NULL ) exit;
//					CFShow( CFSTR("thisParam:") ); CFShow( thisParam );
					
					outputParams[workIndex].type = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisParam, 0 ) );
					outputParams[workIndex].size = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisParam, 1 ) );
					outputParams[workIndex].name = CFStringGetUTF8String( (CFStringRef)CFArrayGetValueAtIndex( thisParam, 2) );
					outputParams[workIndex].indirection = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisParam, 3 ) );
					outputParams[workIndex].constantFlag = CFNumberGetNat4( (CFNumberRef)CFArrayGetValueAtIndex( thisParam, 4 ) );
					if( workIndex+1 < paramCount )
							outputParams[workIndex].next = &outputParams[workIndex+1];
					else	outputParams[workIndex].next = NULL;
				}
			}
		}

		workRecord = VPXMALLOC( 1, VPL_ExtProcedure );
		if( workRecord == NULL ) return workRecord;
		
		workRecord->name = inName;
		workRecord->parameters = inputParams;
		workRecord->returnParameter = outputParams;
		workRecord->functionPtr = AMLib_FindFunctionPtrForName( theAMLib, inName );

		return workRecord;
}

#pragma export on

Nat4	load_AMartenLib_Procedures(V_Environment environment, vpl_AMLib theAMLib );
Nat4	load_AMartenLib_Procedures(V_Environment environment, vpl_AMLib theAMLib )
{
	return AMLib_AddDictionaryForFile( theAMLib, environment->externalProceduresTable, kAML_DefineProceduresFile, xform_ALib_Procedures );
}

#pragma export off
