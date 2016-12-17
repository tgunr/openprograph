/*
	
	VPL_PrimitivesUnixIO.c
	Copyright 2005 Andescotia LLC, All Rights Reserved.
	
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif	


#define MAX_GETS_SIZE 132

Int4 VPLP_gets( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_gets( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1			*resultsString = NULL;	
	Int1			*bufferString = NULL;	
	Int1			*primName = "gets";
	Int4			result = kNOERROR;
	int				bufferSize = MAX_GETS_SIZE;
	V_Object		inputObject = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	if( primInArity == 1 ) {
		result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
#endif

	if( primInArity == 1 ) {
		inputObject = VPLPrimGetInputObject(0,primitive,environment);
		bufferSize *= ((V_Integer) inputObject)->value;
		if( (bufferSize < 1) | (bufferSize > 2^15) ) bufferSize = MAX_GETS_SIZE;
	}											

	bufferString = VPXMALLOC(bufferSize,Int1);	

	if(bufferString != NULL) resultsString = fgets( bufferString, bufferSize, stdin );

	if(resultsString != NULL) VPLPrimSetOutputObjectStringCopy(environment,primInArity,0,primitive,bufferString);
	else VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);

	if(bufferString != NULL) X_free(bufferString);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_print( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_print( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*tempCString = NULL;

	Int1		*primName = "print";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment, primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment, primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;	
#endif

	result = VPLPrimGetInputObjectStringCoalesce( &tempCString, 0, primInArity, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( tempCString ) {
		printf( tempCString );
		X_free( tempCString );
	}
	
	*trigger = kSuccess;	
	return kNOERROR;

}

Int4 VPLP_print_2D_line( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* print-line */
Int4 VPLP_print_2D_line( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* print-line */
{

	Int1		*tempCString = NULL;

	Int1		*primName = "print-line";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckOutputArity(environment, primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;	
#endif

	if(primInArity != 0 ) {
		result = VPLPrimGetInputObjectStringCoalesce( &tempCString, 0, primInArity, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	if( tempCString ) {
		printf( "%s\n", tempCString );
		X_free( tempCString );
	} else printf( "\n" );

	*trigger = kSuccess;	
	return kNOERROR;
}


Int4 VPLP_fclose( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_fclose( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object file = NULL;
	FILE *filePtr = NULL;
	
	Int1		*primName = "fclose";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	file = VPLPrimGetInputObject(0,primitive,environment);
	if( strcmp(((V_ExternalBlock)file)->name,"FILE") != 0) {
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"ExternalBlock",					// Secondary String
			"FILE",					// Operation Name
			((V_ExternalBlock)file)->name);				// Module Name
		VPLPrimRecordObjectTypeError( kExternalBlock, kExternalBlock, 1, primName, primitive, environment );
		return kWRONGINPUTTYPE;
	}
	
	filePtr = (FILE *) ((V_ExternalBlock)file)->blockPtr;
	if(filePtr != NULL)
		result = fclose(filePtr);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_fgets( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_fgets( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object bufferSize = NULL;
	V_Object file = NULL;
	Nat4 size = 0;
	Int1 *tempString = NULL;
	Int1 *resultsString = NULL;
	FILE *filePtr = NULL;
	V_String	ptrA = NULL;
	
	Int1		*primName = "fgets";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kExternalBlock,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif

	bufferSize = VPLPrimGetInputObject(0,primitive,environment);
	
	file = VPLPrimGetInputObject(1,primitive,environment);
	if( strcmp(((V_ExternalBlock)file)->name,"FILE") != 0) {
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"ExternalBlock",					// Secondary String
			"FILE",					// Operation Name
			((V_ExternalBlock)file)->name);				// Module Name
		VPLPrimRecordObjectTypeError( kExternalBlock, kExternalBlock, 1, primName, primitive, environment );
		return kWRONGINPUTTYPE;
	}
	
	size = ((V_Integer) bufferSize)->value;
	tempString = VPXMALLOC(size,Int1);
	filePtr = (FILE *) ((V_ExternalBlock)file)->blockPtr;
	if(filePtr != NULL) {
		resultsString = fgets( tempString , size , filePtr );
		if(resultsString != NULL) {
			ptrA = create_string(resultsString,environment);
		}
	}
	X_free(tempString);
		
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrA);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_fopen( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_fopen( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object fileName = NULL;
	V_Object mode = NULL;
	FILE **filePtr = NULL;
	V_ExternalBlock	ptrA = NULL;
	
	Int1		*primName = "fopen";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kString,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif

	fileName = VPLPrimGetInputObject(0,primitive,environment);
	
	mode = VPLPrimGetInputObject(1,primitive,environment);
	
	filePtr = VPXMALLOC(1,FILE *); /* Create storage for the pointer */
	*filePtr = fopen( ((V_String) fileName)->string , ((V_String) mode)->string );

	ptrA = create_externalBlock("FILE",sizeof (FILE),environment);
	ptrA->blockPtr = (void *)filePtr;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrA);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_stdio_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_stdio_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_ExternalBlock	ptrO = NULL;

	Int1		*theString = NULL;
	Nat4*		theBlock = 0;
	FILE*		theFile;

	Int1		*primName = "stdio-pointer";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	result = VPLPrimGetInputObjectString(&theString,0,primName,primitive,environment);

	if( (strcmp( theString, "stderr" ) == 0 ) ) theFile = stderr; 
	else if( (strcmp( theString, "stdin" ) == 0 ) ) theFile = stdin; 
	else theFile = stdout; 

//	theBlock = (Nat4*)X_malloc(4);
//	*theBlock = (Nat4)theFile;

	ptrO = (V_ExternalBlock)create_externalBlock_level( "__sFILE", sizeof(FILE*), 1, theFile, TRUE, environment);
	if( ptrO != NULL ) VPLPrimSetOutputObject( environment, primInArity, 0, primitive, (V_Object)ptrO );
	else VPLPrimSetOutputObjectNULL( environment, primInArity, 0, primitive );

	*trigger = kSuccess;	
	return kNOERROR;
}

Nat4	loadConstants_VPX_PrimitivesUnixIO(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesUnixIO(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesUnixIO(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesUnixIO(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesUnixIO(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesUnixIO(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesUnixIO(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesUnixIO(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
        
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"gets",dictionary,0,1,VPLP_gets)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"print",dictionary,1,0,VPLP_print)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"print-line",dictionary,1,0,VPLP_print_2D_line)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"fclose",dictionary,1,0,VPLP_fclose)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"fgets",dictionary,2,1,VPLP_fgets)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"fopen",dictionary,2,1,VPLP_fopen)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"stdio-pointer",dictionary,1,1,VPLP_stdio_2D_pointer)) == NULL) return kERROR;

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesUnixIO(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesUnixIO(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesUnixIO(environment,bundleID);
		result = loadStructures_VPX_PrimitivesUnixIO(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesUnixIO(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesUnixIO(environment,bundleID);
		
		return result;
}


