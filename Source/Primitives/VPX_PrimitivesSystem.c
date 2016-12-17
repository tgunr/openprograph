/*
	
	VPX_PrimitivesSystem.c
	Copyright 2003 Scott B. Anderson, All Rights Reserved.
	
*/
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>

typedef struct VPL_Heap
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	Nat4	listLength;
	Nat4	maxLength;
}	VPL_Heap;

void *get_node( V_Dictionary dictionary, Int1 *name );
#endif	


Int4 VPLP_instances( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_instances( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{

	Int1*				theBlockName = "VPL_Environment";
	Int1*				className = NULL;

	Int1				*primName = "instances";
	V_Object 			block = NULL;
	V_List	 			theList = NULL;
	V_Environment 		environPtr = environment;
	Int4				result = 0;
	V_Object 			tempObject = NULL;
	
	Nat4				counter = 0;
	
	Nat4				inarity = primInArity;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	switch(inarity){
	
		case 2:
			result = VPLPrimCheckInputObjectType( kExternalBlock,1,primName, primitive, environment );
			if( result != kNOERROR ) return result;

			result = VPLPrimGetInputObjectEBlockName( &theBlockName, 0, primName, primitive, environment );
			if( result != kNOERROR ) return result;

		case 1:
			result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kString, kInstance );
			if( result != kNOERROR ) return result;

		default:
			break;
	}
	
	switch(inarity){
	
		case 2:
			block = VPLPrimGetInputObject(1, primitive, environment );
			environPtr = *(V_Environment *) ((V_ExternalBlock)block)->blockPtr;
		case 1:
			result = VPLPrimGetInputObjectBaseClassName( &className, 0, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		default:
			break;
	}
	
	
	counter = 0;
	tempObject = environPtr->heap->previous;
	if(tempObject != NULL){
		while(tempObject->previous != NULL) {
			if(tempObject->type == kInstance && strcmp(((V_Instance)tempObject)->name,className) == 0){
					counter++;
			}
			tempObject = tempObject->previous;
		}
	}
	
	theList = create_list(counter,environment);
	
	counter = 1;
	tempObject = environPtr->heap->previous;
	if(tempObject != NULL){
		while(tempObject->previous != NULL) {
			if(tempObject->type == kInstance && strcmp(((V_Instance)tempObject)->name,className) == 0){
					put_nth(environment,theList,counter++,tempObject);
			}
			tempObject = tempObject->previous;
		}
	}
	
	result = VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) theList);

	*trigger = kSuccess;	
	return result;
}

Int4 VPLP_methods( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* methods */
Int4 VPLP_methods( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* methods */
{
	Int1		*primName = "methods";
	Nat4		result = kNOERROR;
	
	V_Object	object = NULL;
	
	bool				findingUni = true;
	vpl_StringPtr		uniName = "";
	
	V_Dictionary		theDict = NULL;
	Nat4				theCount = 0;
	Nat4				counter = 0;
	Nat4				foundCount = 0;
	Nat4				listSlots = 0;
	bool				addString = false;
	vpl_StringPtr		aString = "";
	
	V_List				theList = NULL;
	V_String			theString = NULL;

	Nat4				inarity = primInArity;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	if( inarity == 1 ) {
		result = VPLPrimCheckInputObjectTypes( 0,primName, primitive, environment, 2, kString, kInstance );
		if( result != kNOERROR ) return result;
	}

#endif

	if( inarity == 1 ) {
		object = VPLPrimGetInputObject(0,primitive,environment);
		if( object->type == kString ) {
			findingUni = false;
			result = VPLPrimGetInputObjectString( &uniName, 0, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		} else if( object->type == kInstance ) {
			findingUni = false;
			uniName = ((V_Instance) object)->name;
			if( result != kNOERROR ) return result;
		}
	}

	theDict = environment->universalsTable;
	theCount = theDict->numberOfNodes;
	
	for( counter = 0; counter<theCount; counter++ ) {
		aString = (vpl_StringPtr)(theDict->nodes[counter])->name;
		
		if( findingUni && (strchr(aString, '/') == 0) ) foundCount++;
		else if( !findingUni && ( strncmp(aString, uniName, strlen(uniName)) == 0 ) ) foundCount++;
	}
	
	theList = create_list( foundCount, environment );
	
	for( counter = 0; counter<theCount; counter++ ) {
		aString = (vpl_StringPtr)(theDict->nodes[counter])->name;
		addString = false;

		if( findingUni && (strchr(aString, '/') == 0) ) addString = true;
		else if( !findingUni && ( strncmp(aString, uniName, strlen(uniName)) == 0 ) ) {
			addString = true;
			aString = (vpl_StringPtr)(strchr(aString, '/') + 1);	// Skip ClassName/
		}

		if( addString ) {
			listSlots++;
			theString = create_string( aString, environment );
			put_nth(environment, theList, listSlots, (V_Object) theString );
			decrement_count(environment,(V_Object) theString);
		}
	}
	
	result = VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) theList);
	*trigger = kSuccess;	

	return result;
}

Int4 VPLP_persistents( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* persistents */
Int4 VPLP_persistents( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* persistents */
{
	Int1*				primName = "persistents";
	Nat4				result = kNOERROR;
		
	V_Dictionary		theDict = NULL;
	Nat4				theCount = 0;
	Nat4				counter = 0;
	Nat4				foundCount = 0;
	Nat4				listSlots = 0;
	vpl_StringPtr		aString = "";
	
	V_List				theList = NULL;
	V_String			theString = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	theDict = environment->persistentsTable;
	theCount = theDict->numberOfNodes;
	
	for( counter = 0; counter<theCount; counter++ ) {
		if( strchr((theDict->nodes[counter])->name, '/') == 0 ) foundCount++;
	}
	
	theList = create_list( foundCount, environment );
	
	for( counter = 0; counter<theCount; counter++ ) {
		aString = (vpl_StringPtr)(theDict->nodes[counter])->name;

		if( strchr(aString, '/') == 0 ) {
			theString = create_string( aString, environment );
			put_nth(environment, theList, listSlots+1, (V_Object) theString );
			decrement_count(environment,(V_Object) theString);
			listSlots++;
		}
	}
	
	result = VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) theList);
	*trigger = kSuccess;	

	return result;
}

Int4 VPLP_classes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* classes */
Int4 VPLP_classes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* classes */
{
	Int1		*primName = "classes";
	Nat4		result = kNOERROR;
	
	V_Dictionary		theDict = NULL;
	Nat4				theCount = 0;
	Nat4				counter = 0;
	
	V_List				theList = NULL;
	V_String			theString = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	theDict = environment->classTable;
	theCount = theDict->numberOfNodes;
	
	theList = create_list( theCount, environment );
	
	for( counter = 0; counter<theCount; counter++ ) {
		theString = create_string( (theDict->nodes[counter])->name, environment );
		put_nth(environment, theList, counter+1, (V_Object) theString );
		decrement_count(environment,(V_Object) theString);
	}
	
	result = VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) theList);
	*trigger = kSuccess;	

	return result;
}

Int4 VPLP_attributes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* classes */
Int4 VPLP_attributes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* classes */
{
	V_Object		outputObject = NULL;

	Int1		*primName = "attributes";
	Nat4		result = kNOERROR;
	
	V_Dictionary		theDict = NULL;
	Nat4				theCount = 0;
	Nat4				counter = 0;
	
//	V_Object			block = NULL;
	V_List				theList = NULL;
	V_Class				tempClass = NULL;
	V_String			theString = NULL;
	Int1*				theName = NULL;
	Int1*				tempCString = NULL;
	Nat4				length = 0;

	Int1	*moduleName = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0,primName, primitive, environment, 2, kString, kInstance );
	if( result != kNOERROR ) return result;
	
#endif

	result = VPLPrimGetInputObjectBaseClassName( &theName, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	tempClass = get_class( environment->classTable, theName );
	if( tempClass == NULL ) return record_error("attributes: Class not found!",moduleName,kWRONGINPUTTYPE,environment);

	length = strlen(theName);
	theDict = tempClass->attributes;
	theCount = theDict->numberOfNodes;

	theList = create_list( theCount, environment );
	
	for( counter = 0; counter<theCount; counter++ ) {
		theString = create_string( theDict->nodes[counter]->name, environment );
		put_nth(environment, theList, counter+1, (V_Object) theString );
		decrement_count(environment,(V_Object) theString);
	}
	outputObject = (V_Object) theList;
	VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);
	
	theDict = environment->persistentsTable;
	theCount = 0;
	tempCString = (Int1 *)X_malloc((length+2)*sizeof(Int1));
	tempCString = strcpy(tempCString,theName);
	tempCString = strcat(tempCString,"/");
	for( counter = 0; counter<theDict->numberOfNodes; counter++ ) {
		if(strstr(theDict->nodes[counter]->name,tempCString) != NULL ) theCount++;
	}
	
	theList = create_list( theCount, environment );
	theCount = 0;
	
	for( counter = 0; counter<theDict->numberOfNodes; counter++ ) {
		if(strstr(theDict->nodes[counter]->name,tempCString) != NULL ) {
			theName = strstr(theDict->nodes[counter]->name,"/");
			theName++;
			theString = create_string( theName, environment );
			put_nth(environment, theList,++theCount, (V_Object) theString );
			decrement_count(environment,(V_Object) theString);
		}
	}
	outputObject = (V_Object) theList;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
	
	X_free(tempCString);
	*trigger = kSuccess;	

	return result;
}

Int4 VPLP_has_2D_class_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* has-class? */
Int4 VPLP_has_2D_class_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* has-class? */
{
	vpl_StringPtr	primName = "has-class\?";
	vpl_Status		result = kNOERROR;
	
	V_Dictionary	theDict = NULL;
	V_Object		theObject = NULL;
	vpl_StringPtr	theTestName = "";
	vpl_Boolean		isInDict = kFALSE;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

//	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
//	if( result != kNOERROR ) return result;

#endif

	result = VPLPrimGetInputObjectBaseClassName( &theTestName, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	theDict = environment->classTable;
	theObject = get_node( theDict, theTestName );
	
	if( theObject ) isInDict = kTRUE;
	
	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isInDict );

	return result;
}

Int4 VPLP_has_2D_procedure_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* has-procedure? */
Int4 VPLP_has_2D_procedure_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* has-procedure? */
{
	vpl_StringPtr	primName = "has-procedure\?";
	vpl_Status		result = kNOERROR;
	
	V_ExtProcedure	tempProcedure = NULL;
	vpl_StringPtr	theTestName = "";
	vpl_Boolean		isInDict = kFALSE;
	vpl_Boolean		isValidPtr = kFALSE;
	vpl_BlockPtr	newPtrCopy = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	result = VPLPrimGetInputObjectStringCoerceCopy( &theTestName, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	tempProcedure = get_extProcedure(environment->externalProceduresTable,theTestName);	
	if( tempProcedure ) {
		isInDict = kTRUE;
		if( tempProcedure->functionPtr != NULL ) isValidPtr = kTRUE;
	}
	
	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isInDict & isValidPtr );

	if( theTestName ) X_free( theTestName );
	
	return result;
}


Int4 VPLP_ancestors( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* ancestors */
Int4 VPLP_ancestors( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* ancestors */
{
	Int1		*primName = "ancestors";
	Nat4		result = kNOERROR;
	
	V_Class				theBaseClass = NULL;
	V_Class				theParentClass = NULL;
//	vpl_StringPtr		theBaseName = NULL;
	vpl_StringPtr		theParentName = NULL;
	
	Nat4				theCount = 0;
	Nat4				counter = 0;
	
	V_List				theList = NULL;
	V_String			theString = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0,primName, primitive, environment, 2, kString, kInstance );
	if( result != kNOERROR ) return result;

#endif

	result = VPLPrimGetInputObjectBaseClass( &theBaseClass, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	if( theBaseClass->numberOfSuperClasses > 0 ) theParentName = theBaseClass->superClassNames[0];
	
	while( theParentName != NULL )
	{
		theCount++;
		theParentClass = get_class( environment->classTable, theParentName );
		theParentName = NULL;
		if( theParentClass != NULL ) 
			if( theParentClass->numberOfSuperClasses > 0 ) theParentName = theParentClass->superClassNames[0];
	}
	
	theList = create_list( theCount, environment );
	
	theParentName = NULL;
	if( theBaseClass->numberOfSuperClasses > 0 ) theParentName = theBaseClass->superClassNames[0];
	
	for( counter = 0; counter<theCount && theParentName!=NULL; counter++ ) 
	{
		theString = create_string( theParentName, environment );
		put_nth(environment, theList, counter+1, (V_Object) theString );
		decrement_count(environment,(V_Object) theString);
		
		theParentClass = get_class( environment->classTable, theParentName );
		theParentName = NULL;
		if( theParentClass != NULL )
			if( theParentClass->numberOfSuperClasses > 0 ) theParentName = theParentClass->superClassNames[0];
	}
	
	result = VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) theList);
	*trigger = kSuccess;	

	return result;
}

V_List create_list_of_children(V_Environment environment,vpl_StringPtr theBaseName);
V_List create_list_of_children(V_Environment environment,vpl_StringPtr theBaseName)
{
	V_List	theList = NULL;
	V_Dictionary		theDict = NULL;
	V_DictionaryNode	theNode = NULL;
	V_Class				theClass = NULL;
	V_String			theString = NULL;

	Nat4				theCount = 0;
	Nat4				counter = 0;
	Nat4				length = 0;

	theDict = environment->classTable;
/*
	length = environment->classTable->numberOfNodes;
	for(counter=0;counter<length;counter++)
	{
		theNode = theDict->nodes[counter];
		theClass = (V_Class) theNode->object;
		if( theClass->superClassNames != NULL && theClass->superClassNames[0] != NULL && strcmp(theClass->superClassNames[0],theBaseName) == 0 ) theCount++;
	}
	
	theList = create_list( theCount, environment );
	theCount = 0;
	
	for(counter=0;counter<length;counter++)
	{
		theNode = theDict->nodes[counter];
		theClass = (V_Class) theNode->object;
		if( theClass->superClassNames != NULL && theClass->superClassNames[0] != NULL && strcmp(theClass->superClassNames[0],theBaseName) == 0 ){
			theString = create_string( theClass->name, environment );
			put_nth(environment, theList, theCount+1, (V_Object)theString );
			decrement_count(environment,(V_Object) theString);
			theCount++;
		}
	}

*/

	theNode = find_node(theDict,theBaseName);
	if(theNode) {
		theClass = (V_Class) theNode->object;
		length = theClass->numberOfChildren;
		theList = create_list(length, environment );
		for(counter=0;counter<length;counter++)
		{
			theString = create_string( theClass->childrenNames[counter], environment );
			put_nth(environment, theList, counter+1, (V_Object)theString );
			decrement_count(environment,(V_Object) theString);
		}
	} else {
		theList = create_list(0, environment );
	}

	return theList;
}

V_List create_list_of_children_from_list(V_Environment environment,V_List inputList);
V_List create_list_of_children_from_list(V_Environment environment,V_List inputList)
{
	V_List		theList = NULL;
	V_List		tempList = NULL;
	V_List		newList = NULL;
	V_String	theString = NULL;

	Nat4		counter = 0;

	if(inputList->listLength == 0) return NULL;
	else if (inputList->listLength == 1){
		theString = (V_String) inputList->objectList[0];
		tempList = create_list_of_children(environment,theString->string);
	} else {
		theString = (V_String) inputList->objectList[0];
		tempList = create_list_of_children(environment,theString->string);
		for(counter=1;counter<inputList->listLength;counter++)
		{
			theString = (V_String) inputList->objectList[counter];
			theList = create_list_of_children(environment,theString->string);
			newList = join_list(environment,tempList,theList);
			decrement_count(environment,(V_Object)tempList);
			decrement_count(environment,(V_Object)theList);
			tempList = newList;
		}
	}
	
	return tempList;
}

Int4 VPLP_children( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* ancestors */
Int4 VPLP_children( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* ancestors */
{
	Int1		*primName = "children";
	Nat4		result = kNOERROR;
	
	vpl_StringPtr		theBaseName = NULL;
	
	V_List				theList = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0,primName, primitive, environment, 2, kString, kInstance );
	if( result != kNOERROR ) return result;

#endif

	result = VPLPrimGetInputObjectBaseClassName( &theBaseName, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	theList = create_list_of_children(environment,theBaseName);
	result = VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) theList);
	*trigger = kSuccess;	

	return result;
}

Int4 VPLP_descendants( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* ancestors */
Int4 VPLP_descendants( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* ancestors */
{
	Int1		*primName = "descendants";
	Nat4		result = kNOERROR;
	
	vpl_StringPtr		theBaseName = NULL;
	V_List				theList = NULL;
	V_List				theCompleteList = NULL;
	V_List				newList = NULL;
	V_List				theNewCompleteList = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0,primName, primitive, environment, 2, kString, kInstance );
	if( result != kNOERROR ) return result;

#endif

	result = VPLPrimGetInputObjectBaseClassName( &theBaseName, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	theList = create_list_of_children(environment,theBaseName);
	if(theList->listLength == 0) theCompleteList = create_list(0,environment);
	while(theList->listLength != 0){
		theNewCompleteList = join_list(environment,theCompleteList,theList);
		decrement_count(environment,(V_Object) theCompleteList);
		theCompleteList = theNewCompleteList;
		newList = create_list_of_children_from_list(environment,theList);
		decrement_count(environment,(V_Object) theList);
		theList = newList;
	}
	decrement_count(environment,(V_Object) theList);
	
	result = VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) theCompleteList);
	*trigger = kSuccess;	

	return result;
}

Int4 VPLP_sizeof( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_sizeof( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_StringPtr	primName = "sizeof";
	vpl_Status		result = kNOERROR;
	
	vpl_StringPtr	theTestName = "";
	Nat4			tempSize = 0;
	vpl_BlockSize	tempCount = 1;
	vpl_BlockLevel	tempLevel = 0;

#ifdef VPL_VERBOSE_ENGINE
	if((result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 )) != kNOERROR ) return result;

	if((result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 )) != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	if((result = VPLPrimGetInputObjectString(&theTestName,0,primName,primitive,environment)) != kNOERROR ) return result;

//	tempSize = VPLEnvironmentLookupExternalBlockSize( theTestName, NULL, &tempLevel, environment );
	result = VPLEnvironmentLookupExternalBlockSize( theTestName, NULL, &tempLevel, &tempSize, &tempCount, environment );
	if( tempLevel != kvpl_BlockLevelBlock ) tempSize = sizeof( vpl_BlockPtr );
		
	VPLPrimSetOutputObjectInteger(environment,primInArity,0,primitive,(tempSize*tempCount));

	*trigger = kSuccess;	

	return result;
}

Int4 VPLP_parent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_parent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "parent";
	Nat4		result = kNOERROR;
	
	V_Class		theBaseClass = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0,primName, primitive, environment, 2, kString, kInstance );
	if( result != kNOERROR ) return result;

#endif

	result = VPLPrimGetInputObjectBaseClass( &theBaseClass, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	if( theBaseClass->numberOfSuperClasses > 0 ) VPLPrimSetOutputObjectStringCopy( environment, primInArity, 0, primitive, theBaseClass->superClassNames[0] );
	else VPLPrimSetOutputObjectNULL( environment, primInArity, 0, primitive );

	*trigger = kSuccess;	
	return result;
}

Nat4	loadConstants_VPX_PrimitivesSystem(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesSystem(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesSystem(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesSystem(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesSystem(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesSystem(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesSystem(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesSystem(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
        
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"instances",dictionary,1,1,VPLP_instances)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"classes",dictionary,0,1,VPLP_classes)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"attributes",dictionary,1,2,VPLP_attributes)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"has-class?",dictionary,1,0,VPLP_has_2D_class_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"has-procedure?",dictionary,1,0,VPLP_has_2D_procedure_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"ancestors",dictionary,1,1,VPLP_ancestors)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"children",dictionary,1,1,VPLP_children)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"descendants",dictionary,1,1,VPLP_descendants)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"sizeof",dictionary,1,1,VPLP_sizeof)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"methods",dictionary,1,1,VPLP_methods)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"persistents",dictionary,0,1,VPLP_persistents)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"parent",dictionary,1,1,VPLP_parent)) == NULL) return kERROR;

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesSystem(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesSystem(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesSystem(environment,bundleID);
		result = loadStructures_VPX_PrimitivesSystem(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesSystem(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesSystem(environment,bundleID);
		
		return result;
}



