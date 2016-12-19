/*
	
	V_Structures.h
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#include "VPL_Environment.h"

#ifndef VPLSTRUCTURES
#define VPLSTRUCTURES

enum dataType {
	kObject,
	kUndefined,
	kNone,
	kBoolean,
	kInteger,
	kReal,
	kString,
	kList,
	kInstance,
	kExternalBlock
};

enum systemBits {
	kSystemUsed = 1,
	kSystemWatched = 2,
	kSystemIndirection = 4,		// was kSystemReservedA
	kSystemEscalated = 8,		// was kSystemReservedB
	kSystemReservedC = 16,
	kSystemReservedD = 32,
	kSystemReservedE = 64,
	kSystemReservedF = 128,
};

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
}	VPL_Undefined, *V_Undefined;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
}	VPL_None, *V_None;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	V_Bool	value;
}	VPL_Boolean, *V_Boolean;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	Int4	value;
}	VPL_Integer, *V_Integer;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	Real10	value;
}	VPL_Real, *V_Real;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	Int1	*string;
	Nat4	length;
}	VPL_String, *V_String;

typedef struct VPL_List
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	V_Object	*objectList;
	Nat4	listLength;
}	VPL_List;

typedef struct VPL_Instance
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	V_Object	*objectList;
	Nat4	listLength;
	Int1	*name;
}	VPL_Instance;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	Int1	*name;
	Nat4	size;
	void	*blockPtr;
	Nat4	levelOfIndirection;
}	VPL_ExternalBlock, *V_ExternalBlock;

#ifdef __cplusplus
extern "C" {
#endif

Int1 *left_justify( Int1 *string );

V_Bool object_identity( V_Object objectA , V_Object objectB );
V_Bool boolean_identity( V_Boolean objectA , V_Boolean objectB );
V_Bool integer_identity( V_Integer objectA , V_Integer objectB );
V_Bool real_identity( V_Real objectA , V_Real objectB );
V_Bool string_identity( V_String stringA , V_String stringB );
V_Bool list_identity( V_List listA , V_List listB );
V_Bool instance_identity( V_Instance instanceA , V_Instance instanceB );
V_Bool external_identity( V_ExternalBlock objectA , V_ExternalBlock objectB );

Int4 object_compare( V_Object objectA , V_Object objectB , Int1 *attribute, V_Environment environment);

Int1 *integer2string( Int4 integer );
Int1 *real2string( Real10 number );

#ifdef __cplusplus
}
#endif

#endif
