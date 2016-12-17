
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "VPL_PrimUtility.h"

extern V_Object X_get_frame_root_object( V_Frame block,Nat4 offset);
extern V_Object X_set_frame_root_object( V_Environment environment, V_Frame block,Nat4 offset,V_Object object);
extern Int4 vpx_spawn_stack(V_Environment environment,char *initial,V_List inputList, V_List outputList,Int4 *success);
extern void MacVPLCallbackHandler(void);

#pragma mark * VPL Utility Functions *


#pragma mark * General Object Functions *

V_Object		VPLObjectCreate( vpl_ObjectType aVType, V_Environment environment )
{
	V_Object newVObject = NULL;
	
	newVObject = allocate_object( aVType );
	if( newVObject != NULL ) addToHeap( newVObject, environment );
	
	return newVObject;
}

V_Object		VPLObjectCreateInstance( vpl_StringPtr theClassName, V_Environment environment )
{
	V_Class		tempClass = NULL;
	V_Instance	tempInstance = NULL;

	tempClass = get_class(environment->classTable, theClassName);
	if(tempClass != NULL)
		tempInstance = construct_instance(tempClass,environment); /* Create instance, add to heap */

	return (V_Object)tempInstance;
}

V_Object		VPLObjectCreateList( Nat4 initialLength, V_Environment environment )
{
	return (V_Object)create_list( initialLength, environment );
}

V_Object		VPLObjectCreateListCopy( V_Object originalList, Nat4 startItem, Nat4 endItem, V_Environment environment )
{
	return (V_Object)clone_list( startItem, endItem, (V_List)originalList, (endItem-startItem), environment );
}

V_Object		VPLObjectCreateListJoin( V_Object leftList, V_Object rightList, V_Environment environment )
{
	return (V_Object)join_list( environment, (V_List)leftList, (V_List)rightList );
}

V_Object		VPLObjectCreateListFromObjects( vpl_ListLength theArraySize, vpl_VObjectArray theObjectArray, V_Environment environment )
{
	Nat4	counter = 0;
	V_List	theList = create_list( theArraySize, environment );
	
	if( theObjectArray!= NULL )
		for(counter=0; counter<theArraySize; counter++) 
			put_nth( environment, theList, counter, theObjectArray[counter] );
	
	return (V_Object)theList;
}

V_Object		VPLObjectCreateFromString( vpl_StringPtr aString, V_Environment environment )
{
	return string_to_object( aString, environment );
}

vpl_StringPtr	VPLObjectToString( V_Object theVObject, V_Environment environment )
{
	return object_to_string( theVObject, environment );
}

vpl_Status		VPLObjectGetType( V_Object	theVObject )
{
	if( theVObject == NULL ) return kNull;
	
	return theVObject->type;
}

V_Object		VPLObjectRetain( V_Object theVObject, V_Environment environment )
{
	#pragma unused ( environment )
	
	increment_count( theVObject );
	
	return theVObject;
}

vpl_RetainCount VPLObjectGetRetainCount( V_Object theVObject )
{
	if( theVObject != NULL ) return theVObject->use;

	return 0;
}

void			VPLObjectRelease( V_Object theVObject, V_Environment environment )
{
	decrement_count(environment, theVObject );
}

vpl_StringPtr	VPLObjectTypeToTypeString( vpl_ObjectType aVType )
{
	vpl_StringPtr	tempCString = NULL;

	switch( aVType ){
	
		case kNull:
			tempCString = "null";
			break;
		
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
			tempCString = "instance";
			break;
		
		case kExternalBlock:
			tempCString = "external";
			break;
		
		default:
			tempCString = "unknown type";
			break;
		}
		
	return tempCString;
}


#pragma mark * Object Get Functions *

vpl_Boolean		VPLObjectGetValueBool( V_Object theVObject )
{
	vpl_Boolean	theValue = kFALSE;

	if( VPLObjectGetType(theVObject) == kBoolean ) theValue = ((V_Boolean) theVObject)->value; 

	return theValue;
}

vpl_Integer		VPLObjectGetValueInteger( V_Object theVObject )
{
	vpl_Integer	theValue = 0;

	if( VPLObjectGetType(theVObject) == kInteger ) theValue = ((V_Integer) theVObject)->value; 

	return theValue;
}
vpl_Real		VPLObjectGetValueReal( V_Object theVObject )
{
	vpl_Real	theValue = 0.0;

	if( VPLObjectGetType(theVObject) == kReal ) theValue = ((V_Real) theVObject)->value; 

	return theValue;
}

vpl_Integer		VPLObjectCoerceValueInteger( V_Object theVObject, vpl_Status* outStatus )
{
	vpl_Status	theStatus = kNOERROR;
	vpl_Integer	theValue = 0;
	
	if( VPLObjectGetType(theVObject) == kInteger ) theValue = ((V_Integer) theVObject)->value;
	else if( VPLObjectGetType(theVObject) == kReal ) theValue = (vpl_Integer)((V_Real) theVObject)->value;
	else if( VPLObjectGetType(theVObject) == kBoolean ) theValue = (vpl_Integer)((V_Boolean) theVObject)->value;
	else if( VPLObjectGetType(theVObject) == kExternalBlock ) theValue = (vpl_Integer)((V_ExternalBlock) theVObject)->blockPtr;
	else theStatus = kIncorrectType;

	if( outStatus ) *outStatus = theStatus;
	return theValue;
}

vpl_Real		VPLObjectCoerceValueReal( V_Object theVObject, vpl_Status* outStatus )
{
	vpl_Status	theStatus = kNOERROR;
	vpl_Real	theValue = 0.0;
	
	if( VPLObjectGetType(theVObject) == kInteger ) theValue = (vpl_Real)((V_Integer) theVObject)->value;
	else if( VPLObjectGetType(theVObject) == kReal ) theValue = ((V_Real) theVObject)->value;
	else if( VPLObjectGetType(theVObject) == kBoolean ) theValue = (vpl_Real)((V_Boolean) theVObject)->value;
	else theStatus = kIncorrectType;
	
	if( outStatus ) *outStatus = theStatus;
	return theValue;
}

vpl_StringPtr	VPLObjectGetValueString( V_Object theVObject )
{
	vpl_StringPtr	theValue = NULL;

	if( VPLObjectGetType(theVObject) == kString ) theValue = ((V_String) theVObject)->string; 

	return theValue;
}

vpl_StringPtr	VPLObjectGetValueStringCopy( V_Object theVObject, V_Environment environment )
{
	vpl_StringPtr	theValue = NULL;

	if( VPLObjectGetType(theVObject) == kString ) theValue = new_string( ((V_String) theVObject)->string, environment ); 

	return theValue;
}

vpl_StringPtr	VPLObjectGetExternalBlockName( V_Object theVObject )
{
	vpl_StringPtr	theBlockName = NULL;

	if( VPLObjectGetType(theVObject) == kExternalBlock ) theBlockName = ((V_ExternalBlock) theVObject)->name; 

	return theBlockName;
}

vpl_BlockPtr	VPLObjectGetExternalBlockPtr( V_Object theVObject )
{
	vpl_BlockPtr	theBlockPtr = NULL;

	if( VPLObjectGetType(theVObject) == kExternalBlock ) theBlockPtr = ((V_ExternalBlock) theVObject)->blockPtr; 

	return theBlockPtr;
}

vpl_BlockLevel	VPLObjectGetExternalBlockLevel( V_Object theVObject )
{
	vpl_BlockLevel	theBlockLevel = kvpl_BlockLevelBlock;

	if( VPLObjectGetType(theVObject) == kExternalBlock ) theBlockLevel = ((V_ExternalBlock) theVObject)->levelOfIndirection; 

	return theBlockLevel;
}

vpl_BlockSize	VPLObjectGetExternalBlockSize( V_Object theVObject )
{
	if( VPLObjectGetType(theVObject) == kExternalBlock ) return ((V_ExternalBlock) theVObject)->size; 

	return 0;
}

vpl_StringPtr	VPLObjectGetInstanceType( V_Object theVObject )
{
	vpl_StringPtr	theInstanceName = NULL;

	if( VPLObjectGetType(theVObject) == kInstance ) theInstanceName = ((V_Instance) theVObject)->name; 

	return theInstanceName;
}


extern Int4 attribute_offset( V_Class tempClass , Int1 *tempOString );

vpl_Status		VPLObjectGetInstanceAttribute( V_Object* theValue, vpl_StringPtr theName, V_Object theVObject, V_Environment environment )
{
	vpl_Status		err = kERROR;
	Nat4			counter = -1;
	V_Class			tempClass = NULL;
	V_Instance		tempInstance = NULL;
	V_Dictionary	tempDictionary = NULL;

	if( VPLObjectGetType(theVObject) != kInstance ) goto EXIT;
	if( theName == NULL ) goto EXIT;

	tempInstance = (V_Instance) theVObject;
	tempClass = get_class(environment->classTable,tempInstance->name);
	if( tempClass == NULL ) goto EXIT;
	
	counter = attribute_offset(tempClass,theName);
	if( counter == -1 ) goto EXIT;

	tempDictionary = tempClass->attributes;
	if( tempDictionary != NULL && tempDictionary->numberOfNodes != tempInstance->listLength ) goto EXIT;

	*theValue = tempInstance->objectList[counter];
	increment_count( *theValue );

	err = kNOERROR;
	
EXIT:
	return err;
}

vpl_ListLength		VPLObjectGetListLength( V_Object theVObject )
{
	if( VPLObjectGetType(theVObject) == kList ) return ((V_List) theVObject)->listLength;
	
	return 0;
}

V_Object			VPLObjectGetListItem( V_Object theVObject, vpl_ListItemIndex theItemIndex )
{
	if( VPLObjectGetType(theVObject) == kList ) {
		V_List	theList = (V_List)theVObject;
	
		if( theItemIndex > theList->listLength) return NULL;
		if( theItemIndex < 1) return NULL;
		
		return theList->objectList[theItemIndex-1];
	} else 
		return NULL;
}

#pragma mark * Object Set Functions *

vpl_Status 		VPLObjectSetValueBool( V_Object theVObject, vpl_Boolean theValue )
{
	vpl_Status	err = kNOERROR;
	
	if( VPLObjectGetType(theVObject) == kBoolean ) 
		((V_Boolean) theVObject)->value = theValue;
	else err = kERROR;
	
	return err;
}

vpl_Status 		VPLObjectSetValueInteger( V_Object theVObject, vpl_Integer theValue )
{
	vpl_Status	err = kNOERROR;
	
	if( VPLObjectGetType(theVObject) == kInteger ) 
		((V_Integer) theVObject)->value = theValue;
	else err = kERROR;
	
	return err;
}

vpl_Status		VPLObjectSetValueReal( V_Object theVObject, vpl_Real theValue )
{
	vpl_Status	err = kNOERROR;
	
	if( VPLObjectGetType(theVObject) == kReal ) 
		((V_Real) theVObject)->value = theValue;
	else err = kERROR;
	
	return err;
}

vpl_Status		VPLObjectSetValueString( V_Object theVObject, vpl_StringPtr theValue )
{
	vpl_Status	err = kNOERROR;
	
	if( (theValue != NULL) && (VPLObjectGetType(theVObject) == kString) ) 
		((V_String) theVObject)->string = theValue;
	else err = kERROR;
	
	return err;
}

vpl_Status		VPLObjectSetValueStringCopy( V_Object theVObject, vpl_StringPtr theValue, V_Environment environment )
{
	vpl_Status	err = kNOERROR;
	
	if( (theValue != NULL) && (VPLObjectGetType(theVObject) == kString) ) 
		((V_String) theVObject)->string = new_string( theValue, environment );
	else err = kERROR;
	
	return err;
}

vpl_Status		VPLObjectSetExternalBlockName( V_Object theVObject, vpl_StringPtr theBlockName )
{
	vpl_Status	err = kNOERROR;
	
	if( (theBlockName != NULL) && (VPLObjectGetType(theVObject) == kExternalBlock) ) 
		((V_ExternalBlock) theVObject)->name = theBlockName;
	else err = kERROR;
	
	return err;
}

vpl_Status		VPLObjectSetExternalBlockNameCopy( V_Object theVObject, vpl_StringPtr theBlockName, V_Environment environment )
{
	vpl_Status	err = kNOERROR;
	
	if( (theBlockName != NULL) && (VPLObjectGetType(theVObject) == kExternalBlock) ) 
		((V_ExternalBlock) theVObject)->name = new_string(theBlockName, environment);
	else err = kERROR;
	
	return err;
}

vpl_Status		VPLObjectSetExternalBlockPtr( V_Object theVObject, vpl_BlockPtr theBlockPtr )
{
	vpl_Status		err = kNOERROR;
	
	if( (theBlockPtr != NULL) && (VPLObjectGetType(theVObject) == kExternalBlock) ) 
		((V_ExternalBlock) theVObject)->blockPtr = theBlockPtr;
	else err = kERROR;
	
	return err;
}

vpl_Status		VPLObjectSetExternalBlockLevel( V_Object theVObject, vpl_BlockLevel theBlockLevel )
{
	vpl_Status		err = kNOERROR;
	
	if( VPLObjectGetType(theVObject) == kExternalBlock ) 
		((V_ExternalBlock) theVObject)->levelOfIndirection = theBlockLevel;
	else err = kERROR;
	
	return err;
}

vpl_Status		VPLObjectSetInstanceAttribute( V_Object theValue, vpl_StringPtr theName, V_Object theVObject, V_Environment environment )
{
	vpl_Status		err = kERROR;
	Nat4			counter = -1;
	V_Class			tempClass = NULL;
	V_Instance		tempInstance = NULL;
	V_Dictionary	tempDictionary = NULL;
	V_Object		previousObject = NULL;

	if( VPLObjectGetType(theVObject) != kInstance ) goto EXIT;
	if( theName == NULL ) goto EXIT;

	tempInstance = (V_Instance) theVObject;
	tempClass = get_class(environment->classTable,tempInstance->name);
	if( tempClass == NULL ) goto EXIT;
	
	counter = attribute_offset(tempClass,theName);
	if( counter == -1 ) goto EXIT;

	tempDictionary = tempClass->attributes;
	if( tempDictionary != NULL && tempDictionary->numberOfNodes != tempInstance->listLength ) goto EXIT;

	previousObject = tempInstance->objectList[counter];
	increment_count( theValue );
	decrement_count(environment, previousObject );
	tempInstance->objectList[counter] = theValue;

	err = kNOERROR;
	
EXIT:
	return err;
}

vpl_Status		VPLObjectSetListItem( V_Object theVObject, V_Object theValue, vpl_ListItemIndex theItemIndex, V_Environment environment )
{
	if( VPLObjectGetType(theVObject) == kList ) return put_nth( environment, (V_List)theVObject, theItemIndex, theValue );
	else return kERROR;
}



#pragma mark * Record Error Functions *

vpl_Status		VPLPrimRecordArityError( vpl_Arity wantArity, vpl_Status err, vpl_StringPtr fillString, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
#pragma unused(primitive)

	vpl_StringPtr	moduleName = NULL;
	vpl_StringPtr	tempString = vpl_EmptyString;
	vpl_StringLen	tempLength = strlen( primName ) + strlen( fillString ) + 11;  // 10 (no more than 9999999999 in arity please) + 1

	tempString = X_malloc( tempLength );
	if (tempString != NULL) {
		sprintf( tempString, "%s%s%d", primName, fillString, (int) wantArity );
		err = record_error( tempString, moduleName, err, environment );
		X_free(tempString );
	}
	return err;
}

vpl_Status		VPLPrimRecordObjectTypeError( vpl_ObjectType gotType, vpl_ObjectType wantType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
#pragma unused(primitive)

	vpl_Status		err = kWRONGINPUTTYPE;
	vpl_StringPtr	moduleName = NULL;
	vpl_StringPtr	tempString = vpl_EmptyString;

	tempString = X_malloc( strlen( primName ) + 255 );
	if (tempString != NULL) {
		sprintf( tempString, "%s: input %d type mismatch: requires %s got %s", primName, (int) theNode, VPLObjectTypeToTypeString(wantType), VPLObjectTypeToTypeString(gotType) );
		err = record_error( tempString, moduleName, kWRONGINPUTTYPE, environment );
		X_free(tempString );
	}
	
	return err;
}

vpl_Status		VPLPrimRecordExternalTypeError( vpl_StringPtr gotType, vpl_StringPtr wantType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
#pragma unused(primitive)

	vpl_Status		err = kWRONGINPUTTYPE;
	vpl_StringPtr	moduleName = NULL;
	vpl_StringPtr	tempString = NULL;

	tempString = X_malloc( strlen( primName ) + 255 );
	if (tempString != NULL) {
		sprintf( tempString, "%s: input %d external type mismatch: requires %s got %s", primName, (int) theNode, wantType, gotType );
		err = record_error( tempString, moduleName, kWRONGINPUTTYPE, environment );
		X_free(tempString );
	}
	
	return err;
}



/* Check Arity Functions */

vpl_Status		VPLPrimCheckInputArity(V_Environment environment, vpl_StringPtr primName, Nat4 primInArity, vpl_Arity wantArity )
{
	vpl_Status		err = kWRONGINARITY;
	vpl_StringPtr	fillString = ": Inarity not ";
	
	if( wantArity == primInArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primInArity);

		record_fault(environment,
			kIncorrectInarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Normal",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLPrimRecordArityError( wantArity, err, fillString, primName, NULL, environment );

	return err;
}

vpl_Status		VPLPrimCheckInputArityMin(V_Environment environment, vpl_StringPtr primName, Nat4 primInArity, vpl_Arity wantArity )
{
	vpl_Status		err = kWRONGINARITY;
	vpl_StringPtr	fillString = ": Inarity under ";
	
	if( wantArity <= primInArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primInArity);

		record_fault(environment,
			kIncorrectInarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Minimum",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLPrimRecordArityError( wantArity, err, fillString, primName, NULL, environment );

	return err;
}

vpl_Status		VPLPrimCheckInputArityMax(V_Environment environment, vpl_StringPtr primName, Nat4 primInArity, vpl_Arity wantArity )
{
	vpl_Status		err = kWRONGINARITY;
	vpl_StringPtr	fillString = ": Inarity over ";
	
	if( wantArity >= primInArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primInArity);

		record_fault(environment,
			kIncorrectInarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Maximum",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLPrimRecordArityError( wantArity, err, fillString, primName, NULL, environment );

	return err;
}

vpl_Status		VPLPrimCheckOutputArity(V_Environment environment, vpl_StringPtr primName, Nat4 primOutArity, vpl_Arity wantArity )
{
	vpl_Status		err = kWRONGOUTARITY;
	vpl_StringPtr	fillString = ": Outarity not ";
	
	if( wantArity == primOutArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primOutArity);

		record_fault(environment,
			kIncorrectOutarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Normal",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLPrimRecordArityError( wantArity, err, fillString, primName, NULL, environment );

	return err;
}

vpl_Status		VPLPrimCheckOutputArityMin(V_Environment environment, vpl_StringPtr primName, Nat4 primOutArity, vpl_Arity wantArity )
{
	vpl_Status		err = kWRONGOUTARITY;
	vpl_StringPtr	fillString = ": Outarity under ";
	
	if( wantArity <= primOutArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primOutArity);

		record_fault(environment,
			kIncorrectOutarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Minimum",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLPrimRecordArityError( wantArity, err, fillString, primName, NULL, environment );

	return err;
}

vpl_Status		VPLPrimCheckOutputArityMax(V_Environment environment, vpl_StringPtr primName, Nat4 primOutArity, vpl_Arity wantArity )
{
	vpl_Status		err = kWRONGOUTARITY;
	vpl_StringPtr	fillString = ": Outarity over ";
	
	if( wantArity >= primOutArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primOutArity);

		record_fault(environment,
			kIncorrectOutarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Maximum",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLPrimRecordArityError( wantArity, err, fillString, primName, NULL, environment );

	return err;
}

vpl_Status		VPLPrimCheckObjectType( V_Object theObject, vpl_ObjectType theVType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_ObjectType	theFoundType = 0;
		
	theFoundType = VPLObjectGetType(theObject);
	
	if(theFoundType == theVType) return kNOERROR;
	else
	{
		Int1	*terminalIndex =integer2string( theNode + 1 );
		Int1	*expectedType = VPLTypeToString(theVType);
		Int1	*foundType = VPLTypeToString(theFoundType);

		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			terminalIndex,			// Terminal Index = theNode + 1
			expectedType,			// Expected Type
			foundType);				// Found Type
		X_free(terminalIndex);
		return VPLPrimRecordObjectTypeError( theFoundType, theVType, theNode++, primName, primitive, environment );
	}

}

vpl_Status		VPLPrimCheckInputObjectType( vpl_ObjectType theVType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	V_Object		theObject = NULL;
	
	theObject = VPLPrimGetInputObject( theNode, primitive, environment );
	
	return VPLPrimCheckObjectType( theObject, theVType, theNode, primName, primitive, environment );
}

vpl_Status		VPLPrimCheckListObjectType(  vpl_ObjectType theVType, V_List theList, vpl_ListItemIndex theIndex, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	V_Object		theObject = NULL;
	
	theObject = VPLObjectGetListItem( (V_Object)theList, theIndex );
	
	return VPLPrimCheckObjectType( theObject, theVType, (vpl_Arity)theIndex, primName, primitive, environment );
}

vpl_Status		VPLPrimCheckObjectTypes( V_Object theObject, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment, Nat4 numberOfTypes, ... )
{
	vpl_ObjectType	theFoundType = 0;
	Nat4			counter = 0;
	Bool			isOK = FALSE;
	vpl_ObjectType	theVType = kObject;
	Int1			*expectedTypes = NULL;
	Int1			*tempString = NULL;
	
	va_list			argList;

	va_start(argList,numberOfTypes);

	theFoundType = VPLObjectGetType(theObject);
	
	expectedTypes = new_string("",environment);
	for(counter = 0; counter < numberOfTypes; counter++){
		theVType = va_arg(argList,vpl_ObjectType);
		if(theFoundType  == theVType) isOK =  TRUE;
		else {
			tempString = new_cat_string(expectedTypes,":",environment);
			X_free(expectedTypes);
			expectedTypes = new_cat_string(tempString,VPLTypeToString(theVType),environment);
			X_free(tempString);
		}
	}
	va_end(argList);

	if(isOK == TRUE) {
		X_free(expectedTypes);
		return kNOERROR;
	} else {
		Int1	*terminalIndex =integer2string( theNode + 1 );
		Int1	*foundType = VPLTypeToString(theFoundType);

		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			terminalIndex,			// Terminal Index = theNode + 1
			expectedTypes,			// Expected Type
			foundType);				// Found Type
		X_free(terminalIndex);
		X_free(expectedTypes);
		return VPLPrimRecordObjectTypeError( theFoundType, theVType, theNode++, primName, primitive, environment );
	}

}

vpl_Status		VPLPrimCheckInputObjectTypes( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment, Nat4 numberOfTypes, ... )
{
	vpl_ObjectType	theFoundType = 0;
	V_Object		theObject = NULL;	
	Nat4			counter = 0;
	Bool			isOK = FALSE;
	vpl_ObjectType	theVType = kObject;
	Int1			*expectedTypes = NULL;
	Int1			*tempString = NULL;
	
	va_list			argList;
	
	va_start(argList,numberOfTypes);
	
	theObject = VPLPrimGetInputObject( theNode, primitive, environment );
	
	theFoundType = VPLObjectGetType(theObject);
	
	expectedTypes = new_string("",environment);
	for(counter = 0; counter < numberOfTypes; counter++){
		theVType = va_arg(argList,vpl_ObjectType);
		if(theFoundType  == theVType) isOK =  TRUE;
		else {
			tempString = new_cat_string(expectedTypes,":",environment);
			X_free(expectedTypes);
			expectedTypes = new_cat_string(tempString,VPLTypeToString(theVType),environment);
			X_free(tempString);
		}
	}
	va_end(argList);
	
	if(isOK == TRUE) {
		X_free(expectedTypes);
		return kNOERROR;
	} else {
		Int1	*terminalIndex =integer2string( theNode + 1 );
		Int1	*foundType = VPLTypeToString(theFoundType);
		
		record_fault(environment,
					 kIncorrectType,			// Fault Code
					 primName,				// Primary String - usually primitive name
					 terminalIndex,			// Terminal Index = theNode + 1
					 expectedTypes,			// Expected Type
					 foundType);				// Found Type
		X_free(terminalIndex);
		X_free(expectedTypes);
		return VPLPrimRecordObjectTypeError( theFoundType, theVType, theNode++, primName, primitive, environment );
	}
	
}


#pragma mark * Input Get Functions *

V_Object		VPLPrimGetInputObject( vpl_Arity theNode, vpl_PrimitiveInputs primitive, V_Environment environment )
{
#pragma unused(environment)
	return primitive[theNode];
}

vpl_Status		VPLPrimGetInputObjectType( vpl_ObjectType theVType, vpl_Arity theNode, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theObject = NULL;
	
	theObject = VPLPrimGetInputObject( theNode, primitive, environment );
	
	if( VPLObjectGetType(theObject) != theVType ) {
//		record_fault(environment,kIncorrectType,"NULL","NULL","NULL","NULL");
		err = kWRONGINPUTTYPE;
	}

	return err;
}

vpl_Status		VPLPrimGetInputObjectCheckType( V_Object* theObject, vpl_ObjectType theVType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status			err = kNOERROR;
	vpl_ObjectType		theFoundType = 0;
	
	*theObject = VPLPrimGetInputObject( theNode, primitive, environment );
	
	if( (theVType == kNull) && (theObject == NULL) ) return err;
	
	if( VPLObjectGetType(*theObject) != theVType )
		{
			record_fault(environment,kIncorrectType,"NULL","NULL","NULL","NULL");
			if( theObject != NULL ) theFoundType = VPLObjectGetType(*theObject);

			err = VPLPrimRecordObjectTypeError( theFoundType, theVType, theNode++, primName, primitive, environment );

		}
	return err;
}

vpl_Status		VPLPrimGetInputObjectNULL( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;
	
	err = VPLPrimGetInputObjectCheckType( &theVObject, kNull, theNode, primName, primitive, environment );

	return err;
}

vpl_Status		VPLPrimGetInputObjectNONE( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;

	err = VPLPrimGetInputObjectCheckType( &theVObject, kNone, theNode, primName, primitive, environment );
	
	return err;
}

vpl_Status		VPLPrimGetInputObjectUNDEFINED( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;

	err = VPLPrimGetInputObjectCheckType( &theVObject, kUndefined, theNode, primName, primitive, environment );
	
	return err;
}

vpl_Status		VPLPrimGetInputObjectBool( vpl_Boolean* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;

	err = VPLPrimGetInputObjectCheckType( &theVObject, kBoolean, theNode, primName, primitive, environment );
	
	if( err == kNOERROR ) *theValue = ((V_Boolean) theVObject)->value;

	return err;
}

vpl_Status		VPLPrimGetInputObjectInteger( vpl_Integer* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;

	err = VPLPrimGetInputObjectCheckType( &theVObject, kInteger, theNode, primName, primitive, environment );
	
	if( err == kNOERROR ) *theValue = ((V_Integer) theVObject)->value;

	return err;
}

vpl_Status		VPLPrimGetInputObjectReal( vpl_Real* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;

	err = VPLPrimGetInputObjectCheckType( &theVObject, kReal, theNode, primName, primitive, environment );
	
	if( err == kNOERROR ) *theValue = ((V_Real) theVObject)->value;

	return err;
}

vpl_Status		VPLPrimGetInputObjectIntegerCoerce( vpl_Integer* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
#pragma unused(primName)
	
	vpl_Status		theStatus = kNOERROR;
	V_Object		theVObject = NULL;
	
	theVObject = VPLPrimGetInputObject(theNode,primitive,environment);
	*theValue = VPLObjectCoerceValueInteger( theVObject, &theStatus );
	
	if( theStatus != kNOERROR )
		theStatus = VPLPrimCheckInputObjectType( kInteger, theNode, primName, primitive, environment );
	
	return theStatus;
}

vpl_Status		VPLPrimGetInputObjectRealCoerce( vpl_Real* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
#pragma unused(primName)

	vpl_Status		theStatus = kNOERROR;
	V_Object		theVObject = NULL;

	theVObject = VPLPrimGetInputObject(theNode,primitive,environment);
	*theValue = VPLObjectCoerceValueReal( theVObject, &theStatus );
	
	if( theStatus != kNOERROR )
		theStatus = VPLPrimCheckInputObjectType( kReal, theNode, primName, primitive, environment );
	
	return theStatus;
}

vpl_Status		VPLPrimGetInputObjectString( vpl_StringPtr* theString, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;

	err = VPLPrimGetInputObjectCheckType( &theVObject, kString, theNode, primName, primitive, environment );
	
	if( err == kNOERROR ) *theString = ((V_String) theVObject)->string;
	else theString = NULL;
	
	return err;
}

vpl_Status		VPLPrimGetInputObjectStringCopy( vpl_StringPtr* theString, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;
	
	err = VPLPrimGetInputObjectCheckType( &theVObject, kString, theNode, primName, primitive, environment );
	
	if( err == kNOERROR ) *theString = new_string( ((V_String) theVObject)->string , environment );
	else theString = NULL;
	
	return err;
}

vpl_Status		VPLPrimGetInputObjectStringCoerceCopy( vpl_StringPtr* theString, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;
	
	vpl_StringPtr	tempString = NULL;

	theVObject = VPLPrimGetInputObject( theNode, primitive, environment );
	
	if( VPLObjectGetType(theVObject) != kString ) {
		tempString = VPLObjectToString( theVObject, environment );
		if( !tempString ) err = VPLPrimRecordObjectTypeError( VPLObjectGetType(theVObject), kString, theNode, primName, primitive, environment );
	}
	else tempString = ((V_String) theVObject)->string;
	
	if( err == kNOERROR ) *theString = new_string( tempString, environment );
	else theString = NULL;
	
	return err;
}

vpl_Status	VPLPrimGetInputObjectStringCoalesce( vpl_StringPtr* theString, vpl_Arity theStartNode, vpl_Arity theEndNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	Nat4		length = 0;
	Int4		counter = 0;
	Int4		nodeCount = theEndNode - theStartNode;
	Int1		*tempCString = NULL;
	Int1		*workString[32];							// 32 = Max # of nodes possible for a primitive?

	Int4		result = kNOERROR;

	for(counter = 0;counter<nodeCount;counter++){
		workString[counter] = NULL;
		result = VPLPrimGetInputObjectStringCoerceCopy( &workString[counter], (counter + theStartNode), primName, primitive, environment );
		if( result != kNOERROR ) return result;
		if( workString[counter] ) length += strlen( workString[counter] );
	}

	tempCString = VPXMALLOC( (length+1), Int1 );
	if( tempCString ) tempCString[0] = 0;

	for(counter = 0;counter<nodeCount;counter++){
		if( workString[counter] ) {
			if( tempCString ) tempCString = strcat( tempCString, workString[counter] );
			X_free( workString[counter] );
		}
	}
	
	if( tempCString ) *theString = tempCString;
	else *theString = NULL;
		
	return result;
}	

vpl_Status		VPLPrimGetInputObjectEBlockPtr( vpl_BlockPtr* theValue, vpl_StringPtr blockName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;
	vpl_StringPtr	gotTypeString = "NULL";

	err = VPLPrimGetInputObjectCheckType( &theVObject, kExternalBlock, theNode, primName, primitive, environment );
	if( err != kNOERROR ) goto EXIT;
	
	if( (theVObject == NULL) || ( (blockName != NULL) & ( strcmp(((V_ExternalBlock) theVObject)->name,blockName) != 0 ) ) )
		{
			if( theVObject != NULL ) gotTypeString = ((V_ExternalBlock) theVObject)->name;

			err = VPLPrimRecordExternalTypeError(  gotTypeString, blockName, theNode++, primName, primitive, environment );

		}
	
	if( err == kNOERROR ) *theValue = ((V_ExternalBlock) theVObject)->blockPtr;

EXIT:
	theVObject = NULL;
	return err;
}

vpl_Status		VPLPrimGetInputObjectEBlockName( vpl_StringPtr* blockName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;

	err = VPLPrimGetInputObjectCheckType( &theVObject, kExternalBlock, theNode, primName, primitive, environment );
	if( err != kNOERROR ) goto EXIT;
	
	*blockName = ((V_ExternalBlock) theVObject)->name;
	
EXIT:
	theVObject = NULL;
	return err;
}

vpl_Status		VPLPrimGetInputObjectEBlockPtrCoerce( vpl_BlockPtr* theValue, vpl_StringPtr blockName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;
	vpl_StringPtr	gotTypeString = "NULL";
	vpl_Integer		gotInteger = 0;

	*theValue = (vpl_BlockPtr)NULL;

	err = VPLPrimGetInputObjectType( kInteger, theNode, primitive, environment );
	if( err == kNOERROR ) 
		{
			VPLPrimGetInputObjectInteger( &gotInteger, theNode, primName, primitive, environment );
			*theValue = (vpl_BlockPtr)gotInteger;
			goto EXIT;
		}
	
	err = VPLPrimGetInputObjectCheckType( &theVObject, kExternalBlock, theNode, primName, primitive, environment );
	if( err != kNOERROR ) goto EXIT;
	
	if(blockName != NULL) {
		if( (theVObject == NULL) || (strcmp(((V_ExternalBlock) theVObject)->name,blockName) != 0 ) )
			{
				if( theVObject != NULL ) gotTypeString = ((V_ExternalBlock) theVObject)->name;

				err = VPLPrimRecordExternalTypeError(  gotTypeString, blockName, theNode++, primName, primitive, environment );

			}
	}
	
	if( err == kNOERROR )
		{	
			if(((V_ExternalBlock) theVObject)->levelOfIndirection == 0) *theValue = (vpl_BlockPtr) ((V_ExternalBlock) theVObject)->blockPtr;
			if(((V_ExternalBlock) theVObject)->levelOfIndirection == 1) *theValue = *(vpl_BlockPtr*) ((V_ExternalBlock) theVObject)->blockPtr;
			if(((V_ExternalBlock) theVObject)->levelOfIndirection == 2) *theValue = **(vpl_BlockPtr**) ((V_ExternalBlock) theVObject)->blockPtr;
		}

EXIT:
	theVObject = NULL;
	return err;
}

vpl_Status		VPLPrimGetInputObjectBaseClassName( vpl_StringPtr* theBaseName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectBaseClassName( vpl_StringPtr* theBaseName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status			err = kNOERROR;
	V_Object			theVObject = NULL;

#ifdef VPL_VERBOSE_ENGINE
	err = VPLPrimCheckInputObjectTypes( theNode ,primName, primitive, environment, 2, kString, kInstance );
	if( err != kNOERROR ) return err;
#endif

	theVObject = VPLPrimGetInputObject( theNode, primitive, environment );
	
	if( VPLObjectGetType(theVObject) == kInstance ) *theBaseName = VPLObjectGetInstanceType(theVObject);
	else *theBaseName = VPLObjectGetValueString(theVObject);
	
	return err;
}

vpl_Status		VPLPrimGetInputObjectBaseClass( V_Class* theBaseClass, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectBaseClass( V_Class* theBaseClass, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment )
{
	vpl_Status			err = kNOERROR;
	vpl_StringPtr		theBaseName = NULL;

	err = VPLPrimGetInputObjectBaseClassName( &theBaseName, theNode, primName, primitive, environment );
	if( err != kNOERROR ) return err;
	
	*theBaseClass = get_class( environment->classTable, theBaseName );
	if( !theBaseClass ) return VPLPrimRecordObjectTypeError( kString, kInstance, theNode+1, primName, primitive, environment );

	return err;
}

#pragma mark * Output Set Functions *

vpl_Status		VPLPrimSetOutputObject( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, V_Object value )
{
#pragma unused(environment)

	primitive[inArity+node] = value;

	return kNOERROR;
}

vpl_Status		VPLPrimSetOutputObjectNULL( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive )
{
	return VPLPrimSetOutputObject( environment, inArity, node, primitive , (V_Object)NULL );
}

vpl_Status		VPLPrimSetOutputObjectNONE( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive )
{
	return VPLPrimSetOutputObject( environment, inArity, node, primitive , (V_Object)create_none( environment ) );
}

vpl_Status		VPLPrimSetOutputObjectUNDEFINED( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive )
{
	return VPLPrimSetOutputObject( environment, inArity, node, primitive , (V_Object)create_undefined( environment ) );
}

vpl_Status		VPLPrimSetOutputObjectBool( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_Boolean value )
{
	return VPLPrimSetOutputObject( environment, inArity, node, primitive , (V_Object)bool_to_boolean( value, environment ) );
}

vpl_Status		VPLPrimSetOutputObjectBoolOrFail( V_Environment environment , enum opTrigger *trigger , vpl_Arity inArity , vpl_Arity outarity , vpl_PrimitiveInputs primitive, vpl_Boolean value )
{
	vpl_Status	result = kWRONGOUTARITY;
	V_Boolean	sendOut = NULL;

	if (outarity >= 1) {
		if(kTRUE == value) sendOut = create_boolean( "TRUE", environment );
		else sendOut = create_boolean( "FALSE", environment );

		result = VPLPrimSetOutputObject( environment, inArity, 0, primitive , (V_Object) sendOut );
		*trigger = kSuccess;
		} 
	if (outarity == 0) {
		if(kTRUE == value) *trigger = kSuccess;
		else *trigger = kFailure;
		result = kNOERROR;
		}

	return result;
}

vpl_Status		VPLPrimSetOutputObjectInteger( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_Integer value )
{
	return VPLPrimSetOutputObject( environment, inArity, node, primitive , (V_Object)int_to_integer( value, environment ) );
}

vpl_Status		VPLPrimSetOutputObjectReal( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_Real value )
{
	return VPLPrimSetOutputObject( environment, inArity, node, primitive , (V_Object)float_to_real( value, environment ) );
}

vpl_Status		VPLPrimSetOutputObjectString( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_StringPtr value )
{
	return VPLPrimSetOutputObject( environment, inArity, node, primitive , (V_Object)install_string( value, environment ) );
}

vpl_Status		VPLPrimSetOutputObjectStringCopy( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_StringPtr value )
{
	return VPLPrimSetOutputObject( environment, inArity, node, primitive , (V_Object)create_string( value, environment ) );
}

vpl_Status		VPLPrimSetOutputObjectEBlockPtr( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_BlockPtr blockPtr, vpl_StringPtr blockName, vpl_BlockSize blockSize, vpl_BlockLevel blockLevel )
{
	V_ExternalBlock	ptrO = NULL;

	ptrO = create_externalBlock_level( blockName, blockSize, blockLevel, blockPtr, FALSE, environment);
//	ptrO = create_externalBlock( blockName, blockSize, environment);
//	ptrO->blockPtr = blockPtr;
//	ptrO->levelOfIndirection = blockLevel;

	return VPLPrimSetOutputObject( environment, inArity, node, primitive , (V_Object)ptrO );
}

vpl_Status VPLPrimSetOutputObjectFromInputObject( V_Environment environment, Nat4 primInArity, Nat4 outNode, vpl_PrimitiveInputs primitive, Nat4 inNode, V_Object* theVObject )
{
	vpl_Status		result = kERROR;
	V_Object		outputBlock = NULL;

	outputBlock = VPLPrimGetInputObject( inNode, primitive, environment );
	if( outputBlock == NULL ) return result;
	
	increment_count(outputBlock);		
	result = VPLPrimSetOutputObject( environment, primInArity, outNode, primitive, outputBlock );

	if( theVObject != NULL ) *theVObject = outputBlock;

	return result;
}

#pragma mark -------------- Environment --------------

/*
V_Environment VPLEnvironmentFindEnvironmentName( vpl_StringPtr testName )
{
	if( gVPLEnvironmentStackInited == kFALSE || gVPLEnvironmentStack.stackTop == 0 )
		return NULL;
	
	int i = 0;
			
	for( i = 0; i < gVPLEnvironmentStack.stackTop; i++ )
		if( strcmp( gVPLEnvironmentStack.stackName[i], testName ) == 0 ) return gVPLEnvironmentStack.stackList[i];
	
	return (V_Environment) NULL;
}

void			VPLEnvironmentStackEnvironmentName( V_Environment theEnv, vpl_StringPtr newName )
{
	Nat4		topNum = gVPLEnvironmentStack.stackTop;
	
	if( gVPLEnvironmentStackInited == kFALSE ) {
		topNum = 0;
		gVPLEnvironmentStackInited = kTRUE;
	}
	
	if( theEnv != NULL ) {
		gVPLEnvironmentStack.stackList[topNum] = theEnv;
		gVPLEnvironmentStack.stackName[topNum] = strdup( newName );
		gVPLEnvironmentStack.stackTop = topNum + 1;
	} else {
		int i;
		
		for( i=0; i < gVPLEnvironmentStack.stackTop; i++ )
			if( strcmp( gVPLEnvironmentStack.stackName[i], newName ) ) {
				gVPLEnvironmentStack.stackList[i] = NULL;
				free( gVPLEnvironmentStack.stackName[i] );
				gVPLEnvironmentStack.stackName[i] = NULL;
				break;
			}
	}

}

V_Environment	VPLEnvironmentGetMainEnvironment()
{
	if( gVPLEnvironmentStackInited == kFALSE )
		VPLEnvironmentStackEnvironmentName( createEnvironment(), kvpl_EnvironmentMainName );
	
	return VPLEnvironmentFindEnvironmentName( kvpl_EnvironmentMainName );
}

vpl_Boolean VPLEnvironmentIsLoaded( V_Environment theEnv )
{
	if( theEnv == NULL ) theEnv = VPLEnvironmentGetMainEnvironment();
	if( theEnv == NULL ) return kFALSE;
	
	return theEnv->postLoad;
}
*/

vpl_Status VPLEnvironmentInit( V_Environment theEnv, vpl_StringPtr initMethod )
{
	Int4		result = kNOERROR;

//	if( theEnv == NULL ) theEnv = VPLEnvironmentGetMainEnvironment();
	if( theEnv == NULL ) return kERROR;

	if( theEnv->postLoad == kFALSE ) {
		result = post_load(theEnv);
		sort_dictionaries(theEnv);
	}
	
	if( result == kNOERROR ) {
		if( initMethod != NULL ) {
			V_List	inputList = create_list(0,theEnv);	
			V_List	outputList = create_list(0,theEnv);
			Int4	(*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);

		// Execute Stack 
			spawnPtr = theEnv->stackSpawner;
			result = spawnPtr(theEnv,initMethod,inputList,outputList,NULL);

			decrement_count(theEnv,(V_Object) inputList);
			decrement_count(theEnv,(V_Object) outputList);	
		}
	}
	
	return result;
}

vpl_Status VPLEnvironmentMain( V_Environment theEnv, vpl_StringPtr mainMethod, int argc, char* argv[] )
{
//	if( theEnv == NULL ) theEnv = VPLEnvironmentGetMainEnvironment();
	if( theEnv == NULL ) return kERROR;
	if( mainMethod == NULL ) return kNOERROR;	
	return execute_environment( theEnv, mainMethod, argc, argv );
}

V_Environment VPLEnvironmentCreate( vpl_StringPtr uniqueID, vpl_StackModel stackType, vpl_Boolean outputLog )
{
	#pragma unused(uniqueID)
	
	V_Environment environment = createEnvironment();
	
	if( environment->callbackHandler == NULL ) environment->callbackHandler = MacVPLCallbackHandler;
	if( environment->stackSpawner == NULL ) {
		switch (stackType) {
		case 1:			//kvpl_StackRuntime
			environment->stackSpawner = X_spawn_stack;
			break;
			
		case 2:			//kvpl_StackInline
			environment->stackSpawner = vpx_spawn_stack;
			break;
		
		default:
			return NULL;
		}
	}
	environment->compiled = kTRUE;
	environment->logging = outputLog;
	
//	VPLSetEnvironmentName( theEnv, uniqueID );

	return environment;
}

vpl_Status	VPLEnvironmentDispose( V_Environment theEnv, vpl_Boolean outputLog )
{
	return destroy_environment(theEnv,outputLog,kFALSE);
}

//vpl_BlockSize VPLEnvironmentLookupExternalBlockSize( vpl_StringPtr theBlockName, vpl_StringPtr* outBlockActualName, vpl_BlockLevel* outBlockLevel, V_Environment environment )
vpl_Status		VPLEnvironmentLookupExternalBlockSize( vpl_StringPtr theBlockName, vpl_StringPtr* outBlockActualName, vpl_BlockLevel* outBlockLevel, vpl_BlockSize* outBlockSize, vpl_BlockSize* outBlockCount, V_Environment environment )
{
	vpl_Status			result = kNOERROR;
	V_ExtStructure		tempStructure = NULL;
	vpl_BlockSize		tempSize = 0;
	vpl_BlockSize		tempCount = 1;
	vpl_BlockLevel		tempLevel = 0;
	Nat4				counter = 0;
	Nat4				numCounter = 0;
	vpl_StringPtr		numString = NULL;
	vpl_StringPtr		theTempName = NULL;

	if(theBlockName == NULL) {
		if(outBlockLevel != NULL) *outBlockLevel = 0;
		if(outBlockActualName != NULL) *outBlockActualName = NULL;
		if(outBlockSize != NULL) *outBlockSize = 0;
		if(outBlockCount != NULL) *outBlockCount = 0;
		return kERROR;
	}

	counter = strlen(theBlockName);                  // Counter will be greater than 0 since already tested for theBlockName == NULL
	numCounter = counter-1;

	theTempName = new_string(theBlockName,environment);
	if(theTempName == NULL) {
		if(outBlockLevel != NULL) *outBlockLevel = 0;
		if(outBlockActualName != NULL) *outBlockActualName = NULL;
		if(outBlockSize != NULL) *outBlockSize = 0;
		if(outBlockCount != NULL) *outBlockCount = 0;
		return kERROR;
	}

	if( theBlockName[numCounter] == ']' ) {
		while ( theBlockName[--numCounter] != '[' ) {};
		numString = theTempName + (numCounter+1);
		numString[(counter-1)-(numCounter+1)] = '\0';
//		printf("The string: %s and the number: %s\n", theBlockName, numString);
		tempCount = (vpl_BlockSize) atoi( numString );
//		printf("The block count: %d\n", tempCount);
		counter = numCounter;
	}
	while ( theBlockName[--counter] == '*' ) {};     // Put empty brackets so some compilers won't complain
	tempLevel = numCounter - counter;				// Counter will always be decremented at least once?
//		printf("The block level: %d\n", tempLevel);

	theTempName[counter+1] = '\0';					// we need the actual name to lookup in the environment table
	tempStructure = get_extStructure(environment->externalStructsTable, theTempName);
	if(tempStructure != NULL) tempSize = tempStructure->size;

	if( outBlockLevel != NULL ) *outBlockLevel = tempLevel;
	if( outBlockActualName != NULL ) *outBlockActualName = theTempName;
	else if( theTempName != NULL ) X_free(theTempName);
	if(outBlockSize != NULL) *outBlockSize = tempSize;
	if(outBlockCount != NULL) *outBlockCount = tempCount;

	return kNOERROR;
}

vpl_StringPtr VPLStringCoerceEncoding( vpl_StringPtr inString, vpl_StringLen inStringLength, vpl_StringEncoding inEncoding, vpl_StringEncoding outEncoding, V_Environment environment )
{
#ifdef CARBON
	CFIndex			bufferSize = 0;
	CFStringRef		convertString = NULL;
	Boolean			goodCoerce = false;
	vpl_StringPtr	wideString = NULL;
	vpl_StringPtr	outString = NULL;
#endif

//	if( inEncoding == outEncoding ) return new_string( inString, environment );

	if( inEncoding == outEncoding ) 
	{
		vpl_StringPtr	copyString = NULL;
		
		copyString = (vpl_StringPtr) malloc( inStringLength + 1 );
		if( copyString ) {
			copyString[inStringLength] = vpl_StringTerminator;
			memmove( copyString, inString, inStringLength );
		}
		return copyString;
	}
	
#ifdef CARBON
	convertString = CFStringCreateWithBytes( kCFAllocatorDefault, (UInt8*)inString, inStringLength, inEncoding, FALSE );
	if( convertString == NULL ) return (vpl_StringPtr)NULL;
		
	bufferSize = CFStringGetMaximumSizeForEncoding( CFStringGetLength( convertString ), outEncoding );
	wideString = (vpl_StringPtr)X_calloc( 1, bufferSize + 1 );
	wideString[ bufferSize ] = vpl_StringTerminator;
	
	goodCoerce = CFStringGetCString( convertString, (char*)wideString, bufferSize, outEncoding );
	if( !goodCoerce ) {
		X_free( wideString );
		outString = NULL;
	} else {
		X_realloc( wideString, 1, strlen(wideString) + 1 );
		outString = wideString;
	}
	
	CFRelease( convertString );
	return outString;
#else
	return new_string( inString, environment );
#endif
}






