#include "VPL_Execution.h"

#ifndef VPLPRIMUTILITY
#define VPLPRIMUTILITY


/* This should have a type! */

enum {
	kNull = 0xFFFF
};


typedef		V_Object	*vpl_VObjectArray;
typedef		V_Object	*vpl_PrimitiveInputs;
//typedef		V_Frame	vpl_PrimitiveInputs;

#define		vpl_StringTerminator	'\0'
#define		vpl_EmptyString			""
#define		vpl_EmptyChar			'\0'
#define		vpl_CharSize			sizeof(vpl_Char)

enum {
	kvpl_BlockLevelBlock	= 0,
	kvpl_BlockLevelPointer	= 1,
	kvpl_BlockLevelHandle	= 2
};

typedef enum {
	kvpl_StackRuntime = 1,
	kvpl_StackInline
} vpl_StackModel;

typedef Nat4 vpl_StringEncoding;					// CFStringEncoding;
// kCFStringEncodingUTF8 = 0x08000100, /* kTextEncodingUnicodeDefault + kUnicodeUTF8Format */
#define vpl_Default_StringEncoding	0x08000100

#ifdef __cplusplus
extern "C" {
#endif

#pragma mark * General Object Functions */
V_Object		VPLObjectCreate( vpl_ObjectType aVType, V_Environment environment );
V_Object		VPLObjectCreateInstance( vpl_StringPtr theClassName, V_Environment environment );
V_Object		VPLObjectCreateList( Nat4 initialLength, V_Environment environment );
V_Object		VPLObjectCreateListCopy( V_Object originalList, Nat4 startItem, Nat4 endItem, V_Environment environment );
V_Object		VPLObjectCreateListJoin( V_Object leftList, V_Object rightList, V_Environment environment );
V_Object		VPLObjectCreateListFromObjects( vpl_ListLength theArraySize, vpl_VObjectArray theObjectArray, V_Environment environment );
V_Object		VPLObjectCreateFromString( vpl_StringPtr aString, V_Environment environment );
vpl_Status		VPLObjectGetType( V_Object	theVObject );
V_Object		VPLObjectRetain( V_Object theVObject, V_Environment environment );
vpl_RetainCount VPLObjectGetRetainCount( V_Object theVObject );
void			VPLObjectRelease( V_Object theVObject, V_Environment environment );
vpl_StringPtr	VPLObjectToString( V_Object theVObject, V_Environment environment );
vpl_StringPtr	VPLObjectTypeToTypeString( vpl_ObjectType aVType );

#pragma mark * Object Get Functions */
vpl_Boolean		VPLObjectGetValueBool( V_Object theVObject );
vpl_Integer		VPLObjectGetValueInteger( V_Object theVObject );
vpl_Real		VPLObjectGetValueReal( V_Object theVObject );
vpl_StringPtr	VPLObjectGetValueString( V_Object theVObject );
vpl_StringPtr	VPLObjectGetValueStringCopy( V_Object theVObject, V_Environment environment );
vpl_StringPtr	VPLObjectGetExternalBlockName( V_Object theVObject );
vpl_BlockPtr	VPLObjectGetExternalBlockPtr( V_Object theVObject );
vpl_BlockLevel	VPLObjectGetExternalBlockLevel( V_Object theVObject );
vpl_BlockSize	VPLObjectGetExternalBlockSize( V_Object theVObject );
vpl_StringPtr	VPLObjectGetInstanceType( V_Object theVObject );
vpl_Status		VPLObjectGetInstanceAttribute( V_Object* theValue, vpl_StringPtr theName, V_Object theVObject, V_Environment environment );
vpl_ListLength	VPLObjectGetListLength( V_Object theVObject );
V_Object		VPLObjectGetListItem( V_Object theVObject, vpl_ListItemIndex theItemIndex );


#pragma mark * Object Set Functions */
vpl_Status 		VPLObjectSetValueBool( V_Object theVObject, vpl_Boolean theValue );
vpl_Status 		VPLObjectSetValueInteger( V_Object theVObject, vpl_Integer theValue );
vpl_Status		VPLObjectSetValueReal( V_Object theVObject, vpl_Real theValue );
vpl_Status		VPLObjectSetValueString( V_Object theVObject, vpl_StringPtr theValue );
vpl_Status		VPLObjectSetValueStringCopy( V_Object theVObject, vpl_StringPtr theValue, V_Environment environment );
vpl_Status		VPLObjectSetExternalBlockName( V_Object theVObject, vpl_StringPtr theBlockName );
vpl_Status		VPLObjectSetExternalBlockNameCopy( V_Object theVObject, vpl_StringPtr theBlockName, V_Environment environment );
vpl_Status		VPLObjectSetExternalBlockPtr( V_Object theVObject, vpl_BlockPtr theBlockPtr );
vpl_Status		VPLObjectSetExternalBlockLevel( V_Object theVObject, vpl_BlockLevel theBlockLevel );
vpl_Status		VPLObjectSetInstanceAttribute( V_Object theValue, vpl_StringPtr theName, V_Object theVObject, V_Environment environment );
vpl_Status		VPLObjectSetListItem( V_Object theVObject, V_Object theValue, vpl_ListItemIndex theItemIndex, V_Environment environment );


#pragma mark * Record Error Functions */
vpl_Status 		VPLPrimRecordArityError( vpl_Arity wantArity, vpl_Status err, vpl_StringPtr fillString, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimRecordObjectTypeError( vpl_ObjectType gotType, vpl_ObjectType wantType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimRecordExternalTypeError( vpl_StringPtr gotType, vpl_StringPtr wantType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );


#pragma mark * Check Arity Functions */
vpl_Status		VPLPrimCheckInputArity(V_Environment environment, vpl_StringPtr primName, Nat4 primInArity, vpl_Arity wantArity );
vpl_Status		VPLPrimCheckInputArityMin(V_Environment environment, vpl_StringPtr primName, Nat4 primInArity, vpl_Arity wantArity );
vpl_Status		VPLPrimCheckInputArityMax(V_Environment environment, vpl_StringPtr primName, Nat4 primInArity, vpl_Arity wantArity );
vpl_Status		VPLPrimCheckOutputArity(V_Environment environment, vpl_StringPtr primName, Nat4 primOutArity, vpl_Arity wantArity );
vpl_Status		VPLPrimCheckOutputArityMin(V_Environment environment, vpl_StringPtr primName, Nat4 primOutArity, vpl_Arity wantArity );
vpl_Status		VPLPrimCheckOutputArityMax(V_Environment environment, vpl_StringPtr primName, Nat4 primOutArity, vpl_Arity wantArity );

#pragma mark * Check Input Functions */
vpl_Status		VPLPrimCheckInputObjectType(  vpl_ObjectType theVType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimCheckInputObjectTypes( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment, Nat4 numberOfTypes, ... );

#pragma mark * Input Get Functions */
V_Object		VPLPrimGetInputObject( vpl_Arity theNode, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectType( vpl_ObjectType theVType, vpl_Arity theNode, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectCheckType( V_Object* theObject, vpl_ObjectType theVType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );

vpl_Status		VPLPrimGetInputObjectNULL( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectNONE( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectUNDEFINED( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectBool( vpl_Boolean* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectInteger( vpl_Integer* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectReal( vpl_Real* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectRealCoerce( vpl_Real* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectString( vpl_StringPtr* theString, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectStringCopy( vpl_StringPtr* theString, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectStringCoerceCopy( vpl_StringPtr* theString, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectStringCoalesce( vpl_StringPtr* theString, vpl_Arity theStartNode, vpl_Arity theEndNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectEBlockPtr( vpl_BlockPtr* theValue, vpl_StringPtr blockName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectEBlockName( vpl_StringPtr* blockName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectEBlockPtrCoerce( vpl_BlockPtr* theValue, vpl_StringPtr blockName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectBaseClassName( vpl_StringPtr* theBaseName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectBaseClass( V_Class* theBaseClass, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );

#pragma mark * Output Set Functions *

vpl_Status		VPLPrimSetOutputObject( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, V_Object value );

vpl_Status		VPLPrimSetOutputObjectNULL( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive );
vpl_Status		VPLPrimSetOutputObjectNONE( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive );
vpl_Status		VPLPrimSetOutputObjectUNDEFINED( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive );
vpl_Status		VPLPrimSetOutputObjectBool( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_Boolean value );
vpl_Status		VPLPrimSetOutputObjectBoolOrFail( V_Environment environment , enum opTrigger *trigger , vpl_Arity inArity , vpl_Arity outarity , vpl_PrimitiveInputs primitive, vpl_Boolean value );
vpl_Status		VPLPrimSetOutputObjectInteger( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_Integer value );
vpl_Status		VPLPrimSetOutputObjectReal( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_Real value );
vpl_Status		VPLPrimSetOutputObjectString( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_StringPtr value );
vpl_Status		VPLPrimSetOutputObjectStringCopy( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_StringPtr value );
vpl_Status		VPLPrimSetOutputObjectEBlockPtr( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_BlockPtr blockPtr, vpl_StringPtr blockName, vpl_BlockSize blockSize, vpl_BlockLevel blockLevel );
vpl_Status		VPLPrimSetOutputObjectFromInputObject( V_Environment environment, Nat4 primInArity, Nat4 outNode, vpl_PrimitiveInputs primitive, Nat4 inNode, V_Object* theVObject );

#pragma mark * Environment Functions *

/*
typedef struct {
	Nat4			stackTop;
	V_Environment	stackList[10];
	vpl_StringPtr	stackName[10];
} V_EnvironmentStack;

#define kvpl_EnvironmentMainName	"MAIN"


V_Environment	VPLEnvironmentObtain();							// returns current or call createEnvironment() * push.
V_Environment	VPLEnvironmentGetCurrent();						// returns stack top
V_Environment	VPLEnvironmentPush( V_Environment newTop );		// return old top for convenience
V_Environment	VPLEnvironmentPop( int *outStackSize );			// can return NULL!
vpl_Boolean		VPLEnvironmentIsLoaded();						// returns environment->postLoad
vpl_Status		VPLEnvironmentInit( vpl_StringPtr initMethod, vpl_StackModel stackType );	// inits environment
vpl_Status		VPLEnvironmentMain( vpl_StringPtr mainMethod, int argc, char* argv[] );


V_Environment	VPLEnvironmentGetMainEnvironment();														// returns MAIN or call createEnvironment() * push.
V_Environment	VPLEnvironmentFindEnvironmentName( vpl_StringPtr testName );								// returns stack of testName
void			VPLEnvironmentStackEnvironmentName( V_Environment theEnv, vpl_StringPtr newName );		// sets an environment on stack to name,
																										// theEnv=NULL will clear name from stack.
vpl_Boolean		VPLEnvironmentIsLoaded( V_Environment theEnv );											// returns environment->postLoad
vpl_Status		VPLEnvironmentInit( V_Environment theEnv, vpl_StackModel stackType, vpl_StringPtr initMethod );	// inits environment
vpl_Status		VPLEnvironmentMain( V_Environment theEnv, vpl_StringPtr mainMethod, int argc, char* argv[] );
*/

V_Environment	VPLEnvironmentCreate( vpl_StringPtr uniqueID, vpl_StackModel stackType, vpl_Boolean outputLog );
vpl_Status		VPLEnvironmentDispose( V_Environment theEnv, vpl_Boolean outputLog );
vpl_Status		VPLEnvironmentInit( V_Environment theEnv, vpl_StringPtr initMethod );
vpl_Status		VPLEnvironmentMain( V_Environment theEnv, vpl_StringPtr mainMethod, int argc, char* argv[] );

//vpl_BlockSize VPLEnvironmentLookupExternalBlockSize( vpl_StringPtr theBlockName, vpl_StringPtr* outBlockActualName, vpl_BlockLevel* outBlockLevel, V_Environment environment );
vpl_Status		VPLEnvironmentLookupExternalBlockSize( vpl_StringPtr theBlockName, vpl_StringPtr* outBlockActualName, vpl_BlockLevel* outBlockLevel, vpl_BlockSize* outBlockSize, vpl_BlockSize* outBlockCount, V_Environment environment );

V_CallbackCodeSegment	VPLEnvironmentCallbackCreate( V_Environment environment, vpl_StringPtr theMethodName, vpl_StringPtr theTypeName, V_Object theObject, V_Bool isListInputs );
V_Object				VPLEnvironmentCallbackDispose( V_Environment environment, V_CallbackCodeSegment structure );
V_CallbackCodeSegment	VPLEnvironmentCallbackRetain( V_CallbackCodeSegment theCallback );
void					VPLEnvironmentCallbackRelease( V_CallbackCodeSegment theCallback );

vpl_StringPtr	VPLStringCoerceEncoding( vpl_StringPtr inString, vpl_StringEncoding inEncoding, vpl_StringEncoding outEncoding, V_Environment environment );

#ifdef __cplusplus
}
#endif

#endif



