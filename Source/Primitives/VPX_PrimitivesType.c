/*
	
	VPX_PrimitivesType.c
	Copyright 2003 Scott B. Anderson, All Rights Reserved.
	
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


Int4 VPLP_boolean_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_boolean_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "boolean?";
	Nat4		result = kNOERROR;

	V_Object	object = NULL;	
	Bool		isGood = kFALSE;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	if( object == NULL || object->type != kBoolean) isGood = kFALSE;
	else isGood = kTRUE;

	VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	return kNOERROR;
}

Int4 VPLP_instance_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_instance_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "instance?";
	Nat4		result = kNOERROR;

	V_Object	object = NULL;	
	Bool		isGood = kFALSE;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	if( object == NULL || object->type != kInstance) isGood = kFALSE;
	else isGood = kTRUE;

	VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	return kNOERROR;
}

Int4 VPLP_integer_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_integer_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "integer?";
	Nat4		result = kNOERROR;

	V_Object	object = NULL;	
	Bool		isGood = kFALSE;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	if( object == NULL || object->type != kInteger) isGood = kFALSE;
	else isGood = kTRUE;

	VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	return kNOERROR;
}

Int4 VPLP_list_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_list_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "list?";
	Nat4		result = kNOERROR;

	V_Object	object = NULL;	
	Bool		isGood = kFALSE;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	if( object == NULL || object->type != kList) isGood = kFALSE;
	else isGood = kTRUE;

	VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	return kNOERROR;
}

Int4 VPLP_real_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_real_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "real?";
	Nat4		result = kNOERROR;

	V_Object	object = NULL;	
	Bool		isGood = kFALSE;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	if( object == NULL || object->type != kReal) isGood = kFALSE;
	else isGood = kTRUE;

	VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	return kNOERROR;
}

Int4 VPLP_string_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_string_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "string?";
	Nat4		result = kNOERROR;

	V_Object	object = NULL;	
	Bool		isGood = kFALSE;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	if( object == NULL || object->type != kString) isGood = kFALSE;
	else isGood = kTRUE;

	VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	return kNOERROR;
}

Int4 VPLP_number_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* number? */
Int4 VPLP_number_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* number? */
{
	Int1		*primName = "number?";
	Nat4		result = kNOERROR;
	
	Bool		isGood = kFALSE;
	V_Object	object = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	if( object == NULL) isGood = kFALSE;
	else if( object->type == kInteger || object->type == kReal) isGood = kTRUE;
	else isGood = kFALSE;

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	
	return result;
}

Int4 VPLP_external_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* external? */
Int4 VPLP_external_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* external? */
{
	Int1		*primName = "external?";
	Nat4		result = kNOERROR;
	
	Bool		isGood = kFALSE;
	V_Object	object = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	if( object == NULL || object->type != kExternalBlock) isGood = kFALSE;
	else isGood = kTRUE;

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	
	return result;
}


Int4 VPLP_external_2D_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* external-type */
Int4 VPLP_external_2D_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* external-type */
{
	Int1		*primName = "external-type";
	Nat4		result = kNOERROR;
	
	Int1*		theBlockName = "";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	result = VPLPrimGetInputObjectEBlockName( &theBlockName, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimSetOutputObjectStringCopy(environment,primInArity,0,primitive, theBlockName);

	*trigger = kSuccess;	
	return result;
}

Int4 VPLP_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_String	ptrA = NULL;
	Int1		*tempCString = NULL;

	Int1		*primName = "type";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	if(object == NULL) tempCString = "null";
	else{
		switch(object->type){
		
			case kUndefined:
				tempCString = "undefined";
				break;
			
			case kNone:
				tempCString = "none";
				break;
			
			case kBoolean:
				tempCString = "boolean";
				break;
			
			case kInteger:
				tempCString = "integer";
				break;
			
			case kReal:
				tempCString = "real";
				break;
			
			case kString:
				tempCString = "string";
				break;
			
			case kList:
				tempCString = "list";
				break;
			
			case kInstance:
				tempCString = ((V_Instance) object)->name;
				break;
			
			case kExternalBlock:
				tempCString = "external";
				break;
			
			default:
				tempCString = "UNRECOGNIZED!";
				break;
		}
	}

	ptrA = create_string(tempCString,environment);

	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrA);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_external_2D_size( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_external_2D_size( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1*		primName = "external-size";
	Int4		result = kNOERROR;
	
	V_Object	theBlock = NULL;
	
	if((result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 )) != kNOERROR) return result;
	if((result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 )) != kNOERROR) return result;
	if((result = VPLPrimGetInputObjectCheckType(&theBlock,kExternalBlock,0,primName,primitive,environment)) != kNOERROR) return result;

	result = VPLPrimSetOutputObjectInteger(environment,primInArity,0,primitive, (vpl_Integer)VPLObjectGetExternalBlockSize( theBlock ) );
	
	*trigger = kSuccess;	
	return result;
}

Int4 VPLP_external_2D_level( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_external_2D_level( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1*		primName = "external-level";
	Int4		result = kNOERROR;
	
	V_Object	theBlock = NULL;
	
	if((result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 )) != kNOERROR) return result;
	if((result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 )) != kNOERROR) return result;
	if((result = VPLPrimGetInputObjectCheckType(&theBlock,kExternalBlock,0,primName,primitive,environment)) != kNOERROR) return result;

	result = VPLPrimSetOutputObjectInteger(environment,primInArity,0,primitive, (vpl_Integer)VPLObjectGetExternalBlockLevel( theBlock ) );
	
	*trigger = kSuccess;	
	return result;
}

Nat4	loadConstants_VPX_PrimitivesType(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesType(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesType(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesType(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesType(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesType(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesType(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesType(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
        
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"boolean?",dictionary,1,0,VPLP_boolean_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"instance?",dictionary,1,0,VPLP_instance_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"integer?",dictionary,1,0,VPLP_integer_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"list?",dictionary,1,0,VPLP_list_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"real?",dictionary,1,0,VPLP_real_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"string?",dictionary,1,0,VPLP_string_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"number?",dictionary,1,0,VPLP_number_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"external?",dictionary,1,0,VPLP_external_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"external-type",dictionary,1,1,VPLP_external_2D_type)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"external-size",dictionary,1,1,VPLP_external_2D_size)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"external-level",dictionary,1,1,VPLP_external_2D_level)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"type",dictionary,1,1,VPLP_type)) == NULL) return kERROR;

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesType(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesType(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesType(environment,bundleID);
		result = loadStructures_VPX_PrimitivesType(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesType(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesType(environment,bundleID);
		
		return result;
}



