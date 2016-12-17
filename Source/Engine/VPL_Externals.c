/*
	
	VPL_Externals.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#include <stdlib.h>
#include <string.h>

#include "VPL_Externals.h"

V_ExtStructure create_extStructure(Int1 *name)
{
	V_ExtStructure ptrA = VPXMALLOC(1,VPL_ExtStructure);
	if(ptrA == NULL) return NULL;
	ptrA->name = name;
	ptrA->fields = NULL;
	ptrA->size = 0;
	
	return ptrA;
}

V_ExtStructure extStructure_new(Int1 *name,V_Dictionary dictionary)
{
		
	V_ExtStructure tempStructure = create_extStructure(name);
	if(tempStructure == NULL) return NULL;
	tempStructure->fields = NULL;
	add_node(dictionary,tempStructure->name,tempStructure);
	
	return tempStructure;
}

Nat4 destroy_extStructureTable(V_Dictionary ptrC,V_Environment environment)
{
	if(ptrC == NULL) return kNOERROR;
	destroy_extStructureList(ptrC,environment);
	X_free(ptrC);
	return kNOERROR;
}

Nat4 destroy_extStructureList(V_Dictionary ptrC,V_Environment environment)
{
#pragma unused(environment)

	Nat4			counter = 0;

	if(ptrC == NULL) return kNOERROR;
	if(ptrC->numberOfNodes != 0){
		for(counter = 0; counter < ptrC->numberOfNodes; counter++)
		{
			if(ptrC->nodes[counter] != NULL) {
//				destroy_extStructure((V_ExtStructure)((ptrC->nodes[counter])->object),environment);
//				X_free(ptrC->nodes[counter]);
			}
		}
	}
	X_free(ptrC->nodes);
	ptrC->nodes = NULL;
	ptrC->numberOfNodes = 0;
	return kNOERROR;
}

Nat4 destroy_extStructure(V_ExtStructure ptrC,V_Environment environment)
{
#pragma unused(environment)

	if(ptrC == NULL) return kNOERROR;
//	destroy_fields(ptrC->fields,environment);
	ptrC->fields = NULL;
	X_free(ptrC);
	return kNOERROR;
}

/*
Nat4 destroy_fields(V_Dictionary ptrC,V_Environment environment)
{
	Nat4			counter = 0;

	if(ptrC == NULL) return kNOERROR;
	if(ptrC->numberOfNodes != 0){
		for(counter = 0; counter < ptrC->numberOfNodes; counter++)
		{
			if(ptrC->nodes[counter] != NULL) {
				destroy_field((V_Field)((ptrC->nodes[counter])->object),environment);
				X_free(ptrC->nodes[counter]);
			}
		}
	}
	X_free(ptrC->nodes);
	ptrC->nodes = NULL;
	ptrC->numberOfNodes = 0;
	X_free(ptrC);
	return kNOERROR;
}

Nat4 destroy_field(V_Field ptrC,V_Environment environment)
{
	if(ptrC == NULL) return kNOERROR;
	X_free(ptrC);
	return kNOERROR;
}
*/

V_ExtStructure get_extStructure( V_Dictionary ptrT, Int1 *name )
{
        return (V_ExtStructure) get_node(ptrT,name);
}

V_ExtField get_extField( V_ExtStructure ptrT, Int1 *name )
{
	V_ExtField tempField = ptrT->fields;
	while(tempField && strcmp(name,tempField->name) != 0){
		tempField = tempField->next;
	}
    return tempField;
}

/* ----------------------------External Constants ------------------------------ */

V_ExtConstant create_extConstant(Int1 *name)
{
	V_ExtConstant ptrA = (V_ExtConstant) X_malloc(sizeof (VPL_ExtConstant));
	if(ptrA == NULL) return NULL;
	ptrA->name = name;
	ptrA->enumInteger = 0;
	ptrA->defineString = NULL;
	
	return ptrA;
}

V_ExtConstant extConstant_new(Int1 *name,V_Dictionary dictionary,Nat4 enumConstant,Int1 *defineString)
{
		
	V_ExtConstant tempConstant = create_extConstant(name);
	if(tempConstant == NULL) return NULL;
	tempConstant->enumInteger = enumConstant;
	tempConstant->defineString = defineString;
	add_node(dictionary,tempConstant->name,tempConstant);
	
	return tempConstant;
}

Nat4 destroy_extConstantTable(V_Dictionary ptrC,V_Environment environment)
{
	if(ptrC == NULL) return kNOERROR;
	destroy_extConstantList(ptrC,environment);
	X_free(ptrC);
	return kNOERROR;
}

Nat4 destroy_extConstantList(V_Dictionary ptrC,V_Environment environment)
{
#pragma unused(environment)

	Nat4			counter = 0;

	if(ptrC == NULL) return kNOERROR;
	if(ptrC->numberOfNodes != 0){
		for(counter = 0; counter < ptrC->numberOfNodes; counter++)
		{
			if(ptrC->nodes[counter] != NULL) {
//				destroy_extConstant((V_ExtConstant)((ptrC->nodes[counter])->object),environment);
//				X_free(ptrC->nodes[counter]);
			}
		}
	}
	X_free(ptrC->nodes);
	ptrC->nodes = NULL;
	ptrC->numberOfNodes = 0;
	return kNOERROR;
}

Nat4 destroy_extConstant(V_ExtConstant ptrC,V_Environment environment)
{
#pragma unused(environment)

	if(ptrC == NULL) return kNOERROR;
	X_free(ptrC);
	return kNOERROR;
}

V_ExtConstant get_extConstant( V_Dictionary ptrT, Int1 *name )
{
        return (V_ExtConstant) get_node(ptrT,name);
}

/* ----------------------------External Procedures ------------------------------ */

V_ExtProcedure create_extProcedure(Int1 *name)
{
	V_ExtProcedure ptrA = (V_ExtProcedure) X_malloc(sizeof (VPL_ExtProcedure));
	if(ptrA == NULL) return NULL;
	ptrA->name = name;
	ptrA->functionPtr = NULL;
	ptrA->parameters = NULL;
	ptrA->returnParameter = NULL;
	
	return ptrA;
}

V_ExtProcedure extProcedure_new(Int1 *name,V_Dictionary dictionary,void *functionPtr)
{
		
	V_ExtProcedure temp = create_extProcedure(name);
	if(temp == NULL) return NULL;
	temp->name = name;
	temp->functionPtr = functionPtr;
	add_node(dictionary,temp->name,temp);
	
	return temp;
}

Nat4 destroy_extProcedureTable(V_Dictionary ptrC,V_Environment environment)
{
	if(ptrC == NULL) return kNOERROR;
	destroy_extProcedureList(ptrC,environment);
	X_free(ptrC);
	return kNOERROR;
}

Nat4 destroy_extProcedureList(V_Dictionary ptrC,V_Environment environment)
{
#pragma unused(environment)

	Nat4			counter = 0;

	if(ptrC == NULL) return kNOERROR;
	if(ptrC->numberOfNodes != 0){
		for(counter = 0; counter < ptrC->numberOfNodes; counter++)
		{
			if(ptrC->nodes[counter] != NULL) {
//				destroy_extProcedure((V_ExtProcedure)((ptrC->nodes[counter])->object),environment);
//				X_free(ptrC->nodes[counter]);
			}
		}
	}
	X_free(ptrC->nodes);
	ptrC->nodes = NULL;
	ptrC->numberOfNodes = 0;
	return kNOERROR;
}

Nat4 destroy_extProcedure(V_ExtProcedure ptrC,V_Environment environment)
{
#pragma unused(environment)

	if(ptrC == NULL) return kNOERROR;
	X_free(ptrC);
	return kNOERROR;
}

V_ExtProcedure get_extProcedure( V_Dictionary ptrT, Int1 *name )
{
        return (V_ExtProcedure) get_node(ptrT,name);
}

V_ExtProcedure extProcedure_add_parameter(V_ExtProcedure procedure,Nat4 type,Nat4 size,Int1 *name,Nat4 indirection,Nat4 constantFlag)
{
	V_Parameter tempParameter = NULL;
	V_Parameter stubParameter = NULL;
		
	tempParameter = (V_Parameter) X_malloc(sizeof(VPL_Parameter));
	tempParameter->type = type;
	tempParameter->size = size;
	tempParameter->name = name;
	tempParameter->indirection = indirection;
	tempParameter->constantFlag = constantFlag;
	tempParameter->next = NULL;
	if(procedure->parameters == NULL) procedure->parameters = tempParameter;
	else{
		stubParameter = procedure->parameters;
		while(stubParameter->next != NULL){
			stubParameter = stubParameter->next;
		}
		stubParameter->next = tempParameter;
	}
	
	return procedure;
}

V_ExtProcedure extProcedure_add_return(V_ExtProcedure procedure,Nat4 type,Nat4 size,Int1 *name,Nat4 indirection)
{
	V_Parameter tempParameter = NULL;
		
	tempParameter = (V_Parameter) X_malloc(sizeof(VPL_Parameter));
	tempParameter->type = type;
	tempParameter->size = size;
	tempParameter->name = name;
	tempParameter->indirection = indirection;
	tempParameter->constantFlag = kFALSE;
	tempParameter->next = NULL;
	procedure->returnParameter = tempParameter;
	
	return procedure;
}

/* ----------------------------External Primitives ------------------------------ */

V_ExtPrimitive create_extPrimitive(Int1 *name)
{
	V_ExtPrimitive primitive = (V_ExtPrimitive) X_malloc(sizeof (VPL_ExtPrimitive));
	if(primitive == NULL) return NULL;
	primitive->section = NULL;
	primitive->name = name;
	primitive->inarity = 0;
	primitive->outarity = 0;
	primitive->defaultControl = kContinueOnSuccess;
	primitive->functionPtr = NULL;
	
	return primitive;
}

V_ExtPrimitive extPrimitive_new(Int1 *section,enum controlType defaultControl, Int1 *name,V_Dictionary dictionary,Nat4 inarity,Nat4 outarity,void *functionPtr)
{
		
	V_ExtPrimitive primitive = create_extPrimitive(name);
	if(primitive == NULL) return NULL;
	primitive->section = section;
	primitive->inarity = inarity;
	primitive->outarity = outarity;
	primitive->defaultControl = defaultControl;
	primitive->functionPtr = functionPtr;
	add_node(dictionary,primitive->name,primitive);
	
	return primitive;
}

Nat4 destroy_extPrimitiveTable(V_Dictionary ptrC,V_Environment environment)
{
	if(ptrC == NULL) return kNOERROR;
	destroy_extPrimitiveList(ptrC,environment);
	X_free(ptrC);
	return kNOERROR;
}

Nat4 destroy_extPrimitiveList(V_Dictionary ptrC,V_Environment environment)
{
	Nat4			counter = 0;

	if(ptrC == NULL) return kNOERROR;
	if(ptrC->numberOfNodes != 0){
		for(counter = 0; counter < ptrC->numberOfNodes; counter++)
		{
			if(ptrC->nodes[counter] != NULL) {
				destroy_extPrimitive((V_ExtPrimitive)((ptrC->nodes[counter])->object),environment);
				X_free(ptrC->nodes[counter]);
			}
		}
	}
	X_free(ptrC->nodes);
	ptrC->nodes = NULL;
	ptrC->numberOfNodes = 0;
	return kNOERROR;
}

Nat4 destroy_extPrimitive(V_ExtPrimitive ptrC,V_Environment environment)
{
#pragma unused(environment)

	if(ptrC == NULL) return kNOERROR;
	X_free(ptrC);
	return kNOERROR;
}

V_ExtPrimitive get_extPrimitive( V_Dictionary ptrT, Int1 *name )
{
        return (V_ExtPrimitive) get_node(ptrT,name);
}

/* ----------------------------External Types ------------------------------ */

V_ExtType create_extType(Int1 *name)
{
	V_ExtType ptrA = (V_ExtType) X_malloc(sizeof (VPL_ExtType));
	if(ptrA == NULL) return NULL;
	ptrA->name = name;
	ptrA->size = 0;
	ptrA->type = 0;
	
	return ptrA;
}

V_ExtType extType_new(Int1 *name,V_Dictionary dictionary,Nat4 size)
{
		
	V_ExtType temp = create_extType(name);
	if(temp == NULL) return NULL;
	temp->size = size;
	temp->type = 0;
	add_node(dictionary,temp->name,temp);
	
	return temp;
}

Nat4 destroy_extTypeTable(V_Dictionary ptrC,V_Environment environment)
{
	if(ptrC == NULL) return kNOERROR;
	destroy_extTypeList(ptrC,environment);
	X_free(ptrC);
	return kNOERROR;
}

Nat4 destroy_extTypeList(V_Dictionary ptrC,V_Environment environment)
{
#pragma unused(environment)

	Nat4			counter = 0;

	if(ptrC == NULL) return kNOERROR;
	if(ptrC->numberOfNodes != 0){
		for(counter = 0; counter < ptrC->numberOfNodes; counter++)
		{
			if(ptrC->nodes[counter] != NULL) {
//				destroy_extType((V_ExtType)((ptrC->nodes[counter])->object),environment);
//				X_free(ptrC->nodes[counter]);
			}
		}
	}
	X_free(ptrC->nodes);
	ptrC->nodes = NULL;
	ptrC->numberOfNodes = 0;
	return kNOERROR;
}

Nat4 destroy_extType(V_ExtType ptrC,V_Environment environment)
{
#pragma unused(environment)

	if(ptrC == NULL) return kNOERROR;
	X_free(ptrC);
	return kNOERROR;
}

V_ExtType get_extType( V_Dictionary ptrT, Int1 *name )
{
        return (V_ExtType) get_node(ptrT,name);
}

/* ----------------------------Dynamic Function Calls ------------------------------ */

long DummyCall(long intA, long intB, long intc, long intd, long inte, long intf, long intg, long inth);
long DummyCall(long intA, long intB, long intc, long intd, long inte, long intf, long intg, long inth){

	long result = 0;
	
	result = intA + intB + intc + intd + inte + intf + intg + inth;
	return result;
	
}




