/*
	
	VPL_Externals.h
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/

#include "VPL_Methods.h"

#ifndef VPLEXTERNALS
#define VPLEXTERNALS

typedef struct
{
	Int1		*name;
	V_Dictionary	fields;
	Nat4		size;
}	VPL_Structure, *V_Structure;

typedef struct
{
	Int1		*name;
	Nat4		offset;
	Nat4		size;
	Nat4		type;
	Int1		*structure;
}	VPL_Field, *V_Field;

typedef union {
	long inputInt;
	float inputFloat;
	double inputDouble;
	void* inputPointer;
} VPL_Input, *V_Input;

typedef struct {
	V_Input *inputs;
} VPL_InputList, *V_InputList;

typedef struct {
	Int1 *name;
	Nat4 size;
	Nat4 type;
} VPL_ExtType, *V_ExtType;

#ifdef __cplusplus
extern "C" {
#endif

V_ExtStructure create_extStructure(Int1 *name);
V_ExtStructure extStructure_new(Int1 *name,V_Dictionary dictionary);
Nat4 destroy_extStructureTable(V_Dictionary ptrC,V_Environment environment);
Nat4 destroy_extStructureList(V_Dictionary ptrC,V_Environment environment);
Nat4 destroy_extStructure(V_ExtStructure ptrC,V_Environment environment);
V_ExtStructure get_extStructure( V_Dictionary ptrT, Int1 *name );
V_ExtField get_extField( V_ExtStructure ptrT, Int1 *name );

V_ExtConstant create_extConstant(Int1 *name);
V_ExtConstant extConstant_new(Int1 *name,V_Dictionary dictionary,Nat4 enumConstant,Int1 *defineString);
Nat4 destroy_extConstantTable(V_Dictionary ptrC,V_Environment environment);
Nat4 destroy_extConstantList(V_Dictionary ptrC,V_Environment environment);
Nat4 destroy_extConstant(V_ExtConstant ptrC,V_Environment environment);

V_ExtProcedure create_extProcedure(Int1 *name);
V_ExtProcedure extProcedure_new(Int1 *name,V_Dictionary dictionary,void *functionPtr);
Nat4 destroy_extProcedureTable(V_Dictionary ptrC,V_Environment environment);
Nat4 destroy_extProcedureList(V_Dictionary ptrC,V_Environment environment);
Nat4 destroy_extProcedure(V_ExtProcedure ptrC,V_Environment environment);
V_ExtProcedure get_extProcedure( V_Dictionary ptrT, Int1 *name );
V_ExtProcedure extProcedure_add_parameter(V_ExtProcedure procedure,Nat4 type,Nat4 size,Int1 *name,Nat4 indirection,Nat4 constantFlag);
V_ExtProcedure extProcedure_add_return(V_ExtProcedure procedure,Nat4 type,Nat4 size,Int1 *name,Nat4 indirection);

V_ExtPrimitive create_extPrimitive(Int1 *name);
V_ExtPrimitive extPrimitive_new(Int1 *section,enum controlType defaultControl, Int1 *name,V_Dictionary dictionary,Nat4 inarity,Nat4 outarity,void *functionPtr);
Nat4 destroy_extPrimitiveTable(V_Dictionary ptrC,V_Environment environment);
Nat4 destroy_extPrimitiveList(V_Dictionary ptrC,V_Environment environment);
Nat4 destroy_extPrimitive(V_ExtPrimitive ptrC,V_Environment environment);
V_ExtPrimitive get_extPrimitive( V_Dictionary ptrT, Int1 *name );

V_ExtType create_extType(Int1 *name);
V_ExtType extType_new(Int1 *name,V_Dictionary dictionary,Nat4 size);
Nat4 destroy_extTypeTable(V_Dictionary ptrC,V_Environment environment);
Nat4 destroy_extTypeList(V_Dictionary ptrC,V_Environment environment);
Nat4 destroy_extType(V_ExtType ptrC,V_Environment environment);
V_ExtType get_extType( V_Dictionary ptrT, Int1 *name );

#ifdef __cplusplus
}
#endif

#endif
