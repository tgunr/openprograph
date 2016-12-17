/*
	
	VPL_PrimitivesData.c
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


Int4 VPLP_copy( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_copy( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object	inputObject = NULL;	
	V_Object	block = NULL;

/* Variables to handle internal processing */
	
	V_Environment	theEnvironment = environment;

/* Variables to handle output processing */
	
	V_Object	object = NULL;	

	Int1	*primName = "copy";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	if(primInArity == 2){
		result = VPLPrimCheckInputObjectType( kExternalBlock,1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);

	if(primInArity == 2){
		block = VPLPrimGetInputObject(1,primitive,environment);
		if( strcmp(((V_ExternalBlock)block)->name,"VPL_Environment") != 0) return record_error("copy: Input 2 external not type VPL_Environment! - ",primName,kWRONGINPUTTYPE,environment);
	
		theEnvironment = *(V_Environment *) ((V_ExternalBlock)block)->blockPtr;
	}

	object = copy(theEnvironment,inputObject);
	
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) object);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_list_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_list_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		block = NULL;

/* Variables to handle inputs */
	
	V_List			inputList = NULL;

/* Variables to handle internal processing */
	
	V_Environment	theEnvironment = environment;

/* Variables to handle output processing */
	
	V_List			newList = NULL;

	Int1	*primName = "list-to-list";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if(primInArity == 2){
		result = VPLPrimCheckInputObjectType( kExternalBlock,1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	
	inputList = (V_List) block;

	if(primInArity == 2){
		block = VPLPrimGetInputObject(1,primitive,environment);
		if( strcmp(((V_ExternalBlock)block)->name,"VPL_Environment") != 0) return record_error("list-to-list: Input 2 external not type VPL_Environment! - ",primName,kWRONGINPUTTYPE,environment);
	
		theEnvironment = *(V_Environment *) ((V_ExternalBlock)block)->blockPtr;
	}

	newList = clone_list( 0, 0, inputList, inputList->listLength,theEnvironment);	/* Clone list from 1->N into 1->N */
	
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) newList);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_inst_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_inst_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		outputObject = NULL;


	V_Object	ptrA = NULL;
	V_List		newList = NULL;
	Int4		length = 0;

	Int1	*primName = "inst-to-list";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInstance,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	ptrA = VPLPrimGetInputObject(0,primitive,environment);
	
	length = ((V_List) ptrA)->listLength;
	newList = clone_list( 0, 0, (V_List) ptrA, length,environment);	/* Clone list from 1->N into 1->N */
	
	outputObject = (V_Object) create_string(((V_Instance)ptrA)->name,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	outputObject = (V_Object) newList;
	VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_list_2D_to_2D_inst( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_list_2D_to_2D_inst( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		outputObject = NULL;


	V_Object	ptrA = NULL;
	V_List		theList = NULL;
	Nat4		counter = 0;
	Int1		*className = NULL;
	V_Instance	theInstance = NULL;
	Nat4		length = 0;
	V_Class		theClass = NULL;

	Int1	*primName = "list-to-inst";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	ptrA = VPLPrimGetInputObject(0,primitive,environment);

	className = ((V_String)ptrA)->string;

	ptrA = VPLPrimGetInputObject(1,primitive,environment);

	theList = (V_List) ptrA;
	
	length = theList->listLength;

	theInstance = create_instance(className,length,environment);
	if(theInstance == NULL) {
		return record_error("list-to-inst: Create INSTANCE failure",primName,kERROR,environment);
	}

	for( counter = 0;counter<length;counter++){
		put_nth(environment,(V_List)theInstance,counter+1, *(theList->objectList+counter)); /* Insert and increment refcount */
	}

	theClass = get_class(environment->classTable,className);
	if(theClass) theInstance->instanceIndex = theClass->classIndex;

	outputObject = (V_Object) theInstance;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_shallow_2D_copy( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_shallow_2D_copy( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object	object = NULL;	

	Int1	*primName = "shallow-copy";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	object = shallow_copy(environment,object);
	
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) object);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_to_2D_external_2D_constant( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_to_2D_external_2D_constant( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object	block = NULL;
	Int1		*string = 0;
	V_ExtConstant	extConstant = NULL;
	V_Object		tempObject = NULL;

	Int1	*primName = "to-external-constant";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);

	string = ((V_String) block)->string;
	
	extConstant = get_extConstant(environment->externalConstantsTable,string);

	if(extConstant != NULL){
            if(extConstant->defineString != NULL){
                tempObject = string_to_object(extConstant->defineString,environment);
            } else {
                tempObject = (V_Object)int_to_integer(extConstant->enumInteger,environment);
            }
			VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) tempObject);
	}else{
				VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
	}

	
	*trigger = kSuccess;	
	return kNOERROR;
}

/******************************************************************************************************/

Nat4	loadConstants_VPX_PrimitivesData(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesData(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesData(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesData(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesData(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesData(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesData(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesData(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
        
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"copy",dictionary,1,1,VPLP_copy)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"list-to-list",dictionary,2,1,VPLP_list_2D_to_2D_list)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"inst-to-list",dictionary,1,2,VPLP_inst_2D_to_2D_list)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"list-to-inst",dictionary,2,1,VPLP_list_2D_to_2D_inst)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"shallow-copy",dictionary,1,1,VPLP_shallow_2D_copy)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"to-external-constant",dictionary,1,1,VPLP_to_2D_external_2D_constant)) == NULL) return kERROR;

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesData(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesData(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesData(environment,bundleID);
		result = loadStructures_VPX_PrimitivesData(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesData(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesData(environment,bundleID);
		
		return result;
}

