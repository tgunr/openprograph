/*
	
	VPL_Primitives.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif	

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct 
{
 UInt32			button;
 CFStringRef	string;
 WindowRef		window;
} VPLUIModalWindowInfo;

V_List		VPLUISelectList = NULL;	

#define		VPLUIModalWindowNibName			CFSTR("VPXUI")
#define		VPLUIModalWindowShowName		CFSTR("Show")
#define		VPLUIModalWindowAskName			CFSTR("Ask")
#define		VPLUIModalWindowAnswerName		CFSTR("Answer")
#define		VPLUIModalWindowAnswerVName		CFSTR("Answer-V")
#define		VPLUIModalWindowPromptText		(ControlID){ 'VPXu', 1 }
#define		VPLUIModalWindowAskText			(ControlID){ 'VPXu', 3 }
#define		VPLUIModalWindowOKButton		(ControlID){ 'VPXu', 10 }
#define		VPLUIModalWindowCancelButton	(ControlID){ 'VPXu', 11 }
#define		VPLUIModalWindowOtherButton		(ControlID){ 'VPXu', 12 }
#define		VPLUIModalWindowOtherCommandID	'VuOT'
#define		VPLUIModalWindowAskCommandID	'VaOK'
#define		VPLUIModalWindowEncoding		kCFStringEncodingUTF8
#define		VPLUIModalWindowTransition		kWindowShowTransitionAction
//#define		VPLUIModalWindowTransition		(WindowTransitionEffect)4

#define		VPLUIModalWindowSelectName			CFSTR("Select")
#define		VPLUIModalWindowSelectList			(ControlID){ 'VPXu', 22 }
#define		VPLUIModalWindowSelectListColumn	'SELC'
#define		VPLUIModalWindowSelectCommandID		'VsOK'

#define		VPLUIBundleIDFramework			CFSTR("com.andescotia.frameworks.martenui.aqua")
#define		VPLUIBundleIDBundle				CFSTR("com.andescotia.bundles.martenui.aqua")


OSStatus VPLUIModalWindowRun( WindowRef inWindow );
OSStatus VPLUIModalWindowRun( WindowRef inWindow )
{
	OSStatus	result = paramErr;
	
	if( inWindow == NULL ) return result;
	
//	result = SetWindowActivationScope(ourWindow, kWindowActivationScopeAll);
//	printf("SetWindowActivationScope error: %d\n", result);
//	result = SetWindowModality(ourWindow, kWindowModalityAppModal, NULL);
//	printf("SetWindowModality error: %d\n", result);

	if( TransitionWindow(inWindow, VPLUIModalWindowTransition, kWindowShowTransitionAction, NULL) != noErr ) ShowWindow(inWindow);

	result = RunAppModalLoopForWindow(inWindow);	
	
	if( TransitionWindow(inWindow, VPLUIModalWindowTransition, kWindowHideTransitionAction, NULL) != noErr ) HideWindow(inWindow);

	DisposeWindow( inWindow );	
	
	return result;
}

static OSStatus VPLUIModalWindowAskKeyEventHandler( EventHandlerCallRef theCallRef, EventRef eventRef, void *userData );
static OSStatus VPLUIModalWindowAskKeyEventHandler( EventHandlerCallRef theCallRef, EventRef eventRef, void *userData )
{
	#pragma unused( theCallRef ) 
	
    OSErr					result = eventNotHandledErr;
    OSErr					handlerResult = eventNotHandledErr;
    VPLUIModalWindowInfo*	theInfo = (VPLUIModalWindowInfo*)userData; 
    WindowRef				theWindow = theInfo->window;
	ControlRef				askControl;
    
    char					keyTestChar;
    UInt32					keyTestModifiers;
    char					keyInsertReturnChar = kReturnCharCode;
    CFStringRef				keyInsertReturnCFString = CFSTR("\n");
    UInt32					keyInsertReturnModifiers = optionKey;

	if( GetEventClass(eventRef) == kEventClassKeyboard )
	{
			switch( GetEventKind(eventRef) )
			{
				case kEventRawKeyDown:
				case kEventRawKeyRepeat:
					result = GetControlByID( theWindow, &VPLUIModalWindowAskText, &askControl );
					if( (result == noErr) && askControl ) 
					{
						result = GetEventParameter( eventRef, kEventParamKeyMacCharCodes, typeChar, NULL, sizeof( char ), NULL, &keyTestChar );
						if( (result == noErr) && (keyTestChar == keyInsertReturnChar) ) 
						{
							result = GetEventParameter( eventRef, kEventParamKeyModifiers, typeUInt32, NULL, sizeof( UInt32 ), NULL, &keyTestModifiers );
							if( (result == noErr) && (keyTestModifiers == keyInsertReturnModifiers) )
							{
								// kControlEditTextInsertCFStringRefTag = 'incf', data is a CFStringRef; get or set the control's text as a CFStringRef. Caller should release CFString if getting.
								SetControlData(askControl, kControlLabelPart, 'incf', sizeof(CFStringRef), &keyInsertReturnCFString );

								handlerResult = noErr;
								break;
							}
						}
					}
				default:
					break;
			}
	}	

	if( handlerResult == eventNotHandledErr ) handlerResult = CallNextEventHandler( theCallRef, eventRef );
	
	return result;
}

static OSStatus VPLUIModalWindowEventHandler( EventHandlerCallRef theCallRef, EventRef eventRef, void *userData );
static OSStatus VPLUIModalWindowEventHandler( EventHandlerCallRef theCallRef, EventRef eventRef, void *userData )
{
	#pragma unused( theCallRef, userData ) 
	
    OSErr					result = eventNotHandledErr;
    HICommand   			cmd;
    VPLUIModalWindowInfo*	theInfo = (VPLUIModalWindowInfo*)userData; 
    WindowRef				theWindow = theInfo->window;
	ControlRef				askControl;
    ControlRef				dbControl;
	CFStringRef				askString = NULL;
	CFStringRef				selectString = NULL;
	Handle					dbSelectionHandle;
	DataBrowserItemID*		dbSelectionIDs;

	V_String				string = NULL;
	
	DataBrowserItemID		index = 0;
	Nat4					count = 0;
    
	switch ( GetEventClass(eventRef) )
	{

		case kEventClassCommand:
			result = GetEventParameter( eventRef, kEventParamDirectObject, typeHICommand, NULL, sizeof( cmd ), NULL, &cmd );
			switch ( cmd.commandID )
			{
				case kHICommandOK: 
				case kHICommandCancel:
				case VPLUIModalWindowOtherCommandID:
					QuitAppModalLoopForWindow( theWindow );
					theInfo->button = cmd.commandID;
					theInfo->string = NULL;
					result = noErr;
					break;
				case VPLUIModalWindowAskCommandID:
					QuitAppModalLoopForWindow( theWindow );
					theInfo->button = kHICommandOK;
					result = GetControlByID( theWindow, &VPLUIModalWindowAskText, &askControl );
					result = GetControlData( askControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(CFStringRef), &askString, NULL);
					if( askString ) theInfo->string = askString;
						else theInfo->string = NULL;
					result = noErr;
					break;
				case VPLUIModalWindowSelectCommandID:
					QuitAppModalLoopForWindow( theWindow );
					theInfo->button = kHICommandOK;
					result = GetControlByID( theWindow, &VPLUIModalWindowSelectList, &dbControl );
					dbSelectionHandle = NewHandle(0);
					result = GetDataBrowserItems( dbControl, kDataBrowserNoItem, true, kDataBrowserItemIsSelected, dbSelectionHandle );

					count = GetHandleSize(dbSelectionHandle)/sizeof(DataBrowserItemID);
					if( count > 0 ) {
						dbSelectionIDs = (DataBrowserItemID *)*dbSelectionHandle;
						index = dbSelectionIDs[0] - 1;
						string = (V_String)(VPLUISelectList->objectList[dbSelectionIDs[0] - 1]);
			        	selectString = CFStringCreateWithCString( NULL, string->string, VPLUIModalWindowEncoding );
					}

					DisposeHandle( dbSelectionHandle );
					
					if( selectString ) theInfo->string = selectString;
						else theInfo->string = NULL;
					result = noErr;
					break;
				default:
					if( IsWindowHilited( theWindow ) == false ) SelectWindow( theWindow );
					break;
			}
		
		default:
			break;
			
	} // end switch	

	return result;
}

OSStatus CreateRelativeNibRef( CFStringRef theNibName, IBNibRef *theNibRef );
OSStatus CreateRelativeNibRef( CFStringRef theNibName, IBNibRef *theNibRef )
{
#pragma unused(theNibName)

	OSStatus	err = CreateNibReference( VPLUIModalWindowNibName, theNibRef );
	if( err != noErr ) {
		CFBundleRef				nibBundle = CFBundleGetBundleWithIdentifier( VPLUIBundleIDFramework );
		if( nibBundle == NULL )	nibBundle = CFBundleGetBundleWithIdentifier( VPLUIBundleIDBundle );
		if( nibBundle != NULL )	err = CreateNibReferenceWithCFBundle( nibBundle, VPLUIModalWindowNibName, theNibRef );
	}

	return err;
}


Int4 VPLP_answer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );/* answer */
Int4 VPLP_answer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* answer */
{

	Nat4		length = 0;
	V_Object	string = NULL;	
	V_Object	string1 = NULL;	
	V_Object	string2 = NULL;	
	V_Object	string3 = NULL;	
	Int1		*tempString = "";

	OSStatus	err = noErr;
    IBNibRef	ourNIB = NULL;
    WindowRef	ourWindow = NULL;

	CFStringRef	displayString = NULL;
	CFStringRef	button1String = NULL;
	CFStringRef	button2String = NULL;
	CFStringRef	button3String = NULL;
	
	ControlRef	textControl = NULL;
	ControlRef	buttonControl = NULL;

	VPLUIModalWindowInfo	theInfo;
	EventHandlerRef			theHandler = NULL;
	EventHandlerUPP			theHandlerUPP;
	EventTypeSpec			carbonEvents[] = { { kEventClassCommand, kEventCommandProcess } };
										 

	Int1		*primName = "answer";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	string = VPLPrimGetInputObject(0,primitive,environment);
	length = ((V_String) string)->length;
	tempString = ((V_String) string)->string;

	displayString = CFStringCreateWithCString( NULL, tempString, VPLUIModalWindowEncoding );
	if(displayString == NULL) displayString = CFStringCreateWithCString( NULL, tempString, kCFStringEncodingMacRoman );
	
	string1 = VPLPrimGetInputObject(1,primitive,environment);
	if( string1 == NULL || string1->type != kString){
	
		if( string1 ) tempString = object_to_string( string1, environment );
		if(tempString) {
			length = strlen( tempString );
		} else {
			record_error("answer: Input 2 type not string",NULL,kWRONGINPUTTYPE,environment);
			return kWRONGINPUTTYPE;
		}
	} else {
		length = ((V_String) string1)->length;
		tempString = ((V_String) string1)->string;
	}

	button1String = CFStringCreateWithCString( NULL, tempString, VPLUIModalWindowEncoding );

	if(primInArity > 2 ) {
		string2 = VPLPrimGetInputObject(2,primitive,environment);
		if( string2 == NULL || string2->type != kString){
		
			if( string2 ) tempString = object_to_string( string2, environment );
			if(tempString) {
				length = strlen( tempString );
			} else {
				record_error("answer: Input 3 type not string",NULL,kWRONGINPUTTYPE,environment);
				return kWRONGINPUTTYPE;
			}
		} else {
			length = ((V_String) string2)->length;
			tempString = ((V_String) string2)->string;
		}
		button2String = CFStringCreateWithCString( NULL, tempString, VPLUIModalWindowEncoding );
	}

	if(primInArity > 3 ) {
		string3 = VPLPrimGetInputObject(3,primitive,environment);
		if( string3 == NULL || string3->type != kString){
		
			if( string3 ) tempString = object_to_string( string3, environment );
			if(tempString) {
				length = strlen( tempString );
			} else {
				record_error("answer: Input 4 type not string",NULL,kWRONGINPUTTYPE,environment);
				return kWRONGINPUTTYPE;
			}
		} else {
			length = ((V_String) string3)->length;
			tempString = ((V_String) string3)->string;
		}
		button3String = CFStringCreateWithCString( NULL, tempString, VPLUIModalWindowEncoding );
	}


//	err = CreateNibReference( VPLUIModalWindowNibName, &ourNIB );
	err = CreateRelativeNibRef( VPLUIModalWindowNibName, &ourNIB );
	
	if (err == noErr) err = CreateWindowFromNib( ourNIB, VPLUIModalWindowAnswerName, &ourWindow );

	if( ourNIB ) DisposeNibReference( ourNIB );
	
	if (err == noErr ) {
		if(displayString){
			GetControlByID( ourWindow, &VPLUIModalWindowPromptText, &textControl );	
			SetControlData(textControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(displayString), &displayString);
			CFRelease( displayString );
		}
		if(button1String){
			GetControlByID( ourWindow, &VPLUIModalWindowOKButton, &buttonControl );	
			SetControlTitleWithCFString(buttonControl, button1String);
			CFRelease( button1String );
		}
		if( button2String ) {
			GetControlByID( ourWindow, &VPLUIModalWindowCancelButton, &buttonControl );	
			SetControlTitleWithCFString(buttonControl, button2String);
			SetControlVisibility( buttonControl, true, false );
			CFRelease( button2String );
		}
		if( button3String ) {
			GetControlByID( ourWindow, &VPLUIModalWindowOtherButton, &buttonControl );	
			SetControlTitleWithCFString(buttonControl, button3String);
			SetControlVisibility( buttonControl, true, false );
			CFRelease( button3String );
		}
	}
	
	theHandlerUPP = NewEventHandlerUPP((EventHandlerProcPtr) VPLUIModalWindowEventHandler);

	theInfo.window = ourWindow;
	theInfo.button = kHICommandOK;
	theInfo.string = NULL;

	if (err == noErr) err = InstallEventHandler(GetWindowEventTarget(ourWindow), theHandlerUPP, GetEventTypeCount(carbonEvents), carbonEvents, &theInfo, &theHandler );
	if (err == noErr) err = VPLUIModalWindowRun(ourWindow);

	DisposeEventHandlerUPP( theHandlerUPP );

	if( theInfo.button == kHICommandOK ) string = string1;
	if( theInfo.button == kHICommandCancel ) string = string2;
	if( theInfo.button == VPLUIModalWindowOtherCommandID ) string = string3;
	
	increment_count( string );

	VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) string);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_answer_2D_v( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* answer-v */
Int4 VPLP_answer_2D_v( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* answer-v */
{

	Nat4		length = 0;
	V_Object	string = NULL;	
	V_Object	string1 = NULL;	
	V_Object	string2 = NULL;	
	V_Object	string3 = NULL;	
	Int1		*tempString = "";

	OSStatus	err = noErr;
    IBNibRef	ourNIB = NULL;
    WindowRef	ourWindow = NULL;

	CFStringRef	displayString = NULL;
	CFStringRef	button1String = NULL;
	CFStringRef	button2String = NULL;
	CFStringRef	button3String = NULL;
	
	ControlRef	textControl = NULL;
	ControlRef	buttonControl = NULL;

	VPLUIModalWindowInfo	theInfo;
	EventHandlerRef			theHandler = NULL;
	EventHandlerUPP			theHandlerUPP;
	EventTypeSpec			carbonEvents[] = { { kEventClassCommand, kEventCommandProcess } };
										 

	Int1		*primName = "answer-v";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	string = VPLPrimGetInputObject(0,primitive,environment);
	length = ((V_String) string)->length;
	tempString = ((V_String) string)->string;

	displayString = CFStringCreateWithCString( NULL, tempString, VPLUIModalWindowEncoding );
	if(displayString == NULL) displayString = CFStringCreateWithCString( NULL, tempString, kCFStringEncodingMacRoman );
	
	string1 = VPLPrimGetInputObject(1,primitive,environment);
	if( string1 == NULL || string1->type != kString){
	
		if( string1 ) tempString = object_to_string( string1, environment );
		if(tempString) {
			length = strlen( tempString );
		} else {
			record_error("answer-v: Input 2 type not string",NULL,kWRONGINPUTTYPE,environment);
			return kWRONGINPUTTYPE;
		}
	} else {
		length = ((V_String) string1)->length;
		tempString = ((V_String) string1)->string;
	}

	button1String = CFStringCreateWithCString( NULL, tempString, VPLUIModalWindowEncoding );

	if(primInArity > 2 ) {
		string2 = VPLPrimGetInputObject(2,primitive,environment);
		if( string2 == NULL || string2->type != kString){
		
			if( string2 ) tempString = object_to_string( string2, environment );
			if(tempString) {
				length = strlen( tempString );
			} else {
				record_error("answer-v: Input 3 type not string",NULL,kWRONGINPUTTYPE,environment);
				return kWRONGINPUTTYPE;
			}
		} else {
			length = ((V_String) string2)->length;
			tempString = ((V_String) string2)->string;
		}
		button2String = CFStringCreateWithCString( NULL, tempString, VPLUIModalWindowEncoding );
	}

	if(primInArity > 3 ) {
		string3 = VPLPrimGetInputObject(3,primitive,environment);
		if( string3 == NULL || string3->type != kString){
		
			if( string3 ) tempString = object_to_string( string3, environment );
			if(tempString) {
				length = strlen( tempString );
			} else {
				record_error("answer-v: Input 4 type not string",NULL,kWRONGINPUTTYPE,environment);
				return kWRONGINPUTTYPE;
			}
		} else {
			length = ((V_String) string3)->length;
			tempString = ((V_String) string3)->string;
		}
		button3String = CFStringCreateWithCString( NULL, tempString, VPLUIModalWindowEncoding );
	}


//	err = CreateNibReference( VPLUIModalWindowNibName, &ourNIB );
	err = CreateRelativeNibRef( VPLUIModalWindowNibName, &ourNIB );
	
	if (err == noErr) err = CreateWindowFromNib( ourNIB, VPLUIModalWindowAnswerVName, &ourWindow );

	if( ourNIB ) DisposeNibReference( ourNIB );
	
	if (err == noErr ) {
		if(displayString) {
			GetControlByID( ourWindow, &VPLUIModalWindowPromptText, &textControl );	
			SetControlData(textControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(displayString), &displayString);
			CFRelease( displayString );
		}
		if( button1String ) {
			GetControlByID( ourWindow, &VPLUIModalWindowOKButton, &buttonControl );	
			SetControlTitleWithCFString(buttonControl, button1String);
			CFRelease( button1String );
		}
		if( button2String ) {
			GetControlByID( ourWindow, &VPLUIModalWindowCancelButton, &buttonControl );	
			SetControlTitleWithCFString(buttonControl, button2String);
			SetControlVisibility( buttonControl, true, false );
			CFRelease( button2String );
		}
		if( button3String ) {
			GetControlByID( ourWindow, &VPLUIModalWindowOtherButton, &buttonControl );	
			SetControlTitleWithCFString(buttonControl, button3String);
			SetControlVisibility( buttonControl, true, false );
			CFRelease( button3String );
		}
	}
	
	theHandlerUPP = NewEventHandlerUPP((EventHandlerProcPtr) VPLUIModalWindowEventHandler);

	theInfo.window = ourWindow;
	theInfo.button = kHICommandOK;
	theInfo.string = NULL;

	if (err == noErr) err = InstallEventHandler(GetWindowEventTarget(ourWindow), theHandlerUPP, GetEventTypeCount(carbonEvents), carbonEvents, &theInfo, &theHandler );
	if (err == noErr) err = VPLUIModalWindowRun(ourWindow);

	DisposeEventHandlerUPP( theHandlerUPP );

	if( theInfo.button == kHICommandOK ) string = string1;
	if( theInfo.button == kHICommandCancel ) string = string2;
	if( theInfo.button == VPLUIModalWindowOtherCommandID ) string = string3;
	
	increment_count( string );

	VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) string);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_ask_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* ask */
Int4 VPLP_ask_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* ask */
{

	Nat4		length = 0;
	V_Object	string = NULL;	
	Int1		*tempString = "";
	Int1		*tempCString = "";

	OSStatus	err = noErr;
    IBNibRef	ourNIB = NULL;
    WindowRef	ourWindow = NULL;

	CFStringRef	displayString = NULL;
	CFStringRef	defaultString = NULL;
	Boolean		goodResult = false;
	ControlRef	textControl = NULL;
	ControlRef	askControl = NULL;

	VPLUIModalWindowInfo	theInfo;
	EventHandlerRef			theHandler = NULL;
	EventHandlerRef			theKeyHandler = NULL;
	EventHandlerUPP			theHandlerUPP = NULL;
	EventHandlerUPP			theKeyHandlerUPP = NULL;
	EventTypeSpec			carbonEvents[] = {	{ kEventClassCommand, kEventCommandProcess } };
	
	EventTypeSpec			askControlCarbonEvents[] = {	
												{ kEventClassKeyboard, kEventRawKeyDown },
												{ kEventClassKeyboard, kEventRawKeyRepeat },
												{ kEventClassKeyboard, kEventRawKeyUp },
												{ kEventClassKeyboard, kEventRawKeyModifiersChanged } };
										 

	Int1		*primName = "ask-value";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	switch(primInArity) {
		case 1:
			result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
			if( result != kNOERROR ) return result;
		
		default:
			break;
	}

#endif

	if(primInArity >= 1 ) {
		string = VPLPrimGetInputObject(0,primitive,environment);
		displayString = CFStringCreateWithCString( NULL, ((V_String) string)->string, VPLUIModalWindowEncoding );
		if(displayString == NULL) displayString = CFStringCreateWithCString( NULL, tempCString, kCFStringEncodingMacRoman );
	}

	if(primInArity >= 2 ) {
		string = VPLPrimGetInputObject(1,primitive,environment);
		if( string == NULL || string->type != kString){
		
			if( string ) tempString = object_to_string( string, environment );
			if(tempString) {
				length = strlen( tempString );
			} else {
				record_error("ask-value: Input 1 type not string in module - ",NULL,kWRONGINPUTTYPE,environment);
				return kWRONGINPUTTYPE;
			}
		} else {
			length = ((V_String) string)->length;
			tempString = ((V_String) string)->string;
		}

		defaultString = CFStringCreateWithCString( NULL, tempString, VPLUIModalWindowEncoding );
	}
	
//	err = CreateNibReference( VPLUIModalWindowNibName, &ourNIB );
	err = CreateRelativeNibRef( VPLUIModalWindowNibName, &ourNIB );
	
	if (err == noErr) err = CreateWindowFromNib( ourNIB, VPLUIModalWindowAskName, &ourWindow );

	if( ourNIB ) DisposeNibReference( ourNIB );
	
	if (err == noErr ) SetAutomaticControlDragTrackingEnabledForWindow( ourWindow, true );
	
	if( (err == noErr) && displayString ) {
		GetControlByID( ourWindow, &VPLUIModalWindowPromptText, &textControl );	
		if (textControl) SetControlData(textControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(CFStringRef), &displayString);
		}
	
	theKeyHandlerUPP = NewEventHandlerUPP((EventHandlerProcPtr) VPLUIModalWindowAskKeyEventHandler);

	if (err == noErr) {
		GetControlByID( ourWindow, &VPLUIModalWindowAskText, &askControl );	
		if( (askControl) && defaultString ) SetControlData(askControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(CFStringRef), &defaultString);
		if (askControl) SetControlDragTrackingEnabled( askControl, true );
		if (askControl) SetKeyboardFocus( ourWindow, askControl, kControlFocusNextPart);          
		if (askControl) InstallEventHandler(GetControlEventTarget(askControl), theKeyHandlerUPP, GetEventTypeCount(askControlCarbonEvents), askControlCarbonEvents, &theInfo, &theKeyHandler );
		}

	theHandlerUPP = NewEventHandlerUPP((EventHandlerProcPtr) VPLUIModalWindowEventHandler);

	theInfo.window = ourWindow;
	theInfo.button = kHICommandCancel;
	theInfo.string = NULL;

	if (err == noErr) err = InstallEventHandler(GetWindowEventTarget(ourWindow), theHandlerUPP, GetEventTypeCount(carbonEvents), carbonEvents, &theInfo, &theHandler );
	if (err == noErr) err = VPLUIModalWindowRun(ourWindow);

	if( theInfo.string ) {
//		CFShow( theInfo.string );
		length = CFStringGetMaximumSizeForEncoding( CFStringGetLength(theInfo.string), VPLUIModalWindowEncoding ) + 1;
		tempCString = (Int1*)X_malloc( length );
		goodResult = CFStringGetCString( theInfo.string, tempCString, length , VPLUIModalWindowEncoding );
			if( !goodResult ) {
				X_free(tempCString );
				VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
				goto EXIT;
			}
		string = string_to_object( tempCString, environment );
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) string);
		X_free(tempCString );
	}
	else VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);

EXIT:
	DisposeEventHandlerUPP( theHandlerUPP );
	DisposeEventHandlerUPP( theKeyHandlerUPP );

	if( displayString ) CFRelease( displayString );
	if( defaultString ) CFRelease( defaultString );
	if( theInfo.string ) CFRelease( theInfo.string );		

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_ask_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* ask */
Int4 VPLP_ask_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* ask */
{

	Nat4		length = 0;
	V_Object	string = NULL;	
	Int1		*tempString = "";
	Int1		*tempCString = "";

	OSStatus	err = noErr;
    IBNibRef	ourNIB = NULL;
    WindowRef	ourWindow = NULL;

	CFStringRef	displayString = NULL;
	CFStringRef	defaultString = NULL;
	Boolean		goodResult = false;
	ControlRef	textControl = NULL;
	ControlRef	askControl = NULL;

	VPLUIModalWindowInfo	theInfo;
	EventHandlerRef			theHandler = NULL;
	EventHandlerRef			theKeyHandler = NULL;
	EventHandlerUPP			theHandlerUPP = NULL;
	EventHandlerUPP			theKeyHandlerUPP = NULL;
	EventTypeSpec			carbonEvents[] = {	{ kEventClassCommand, kEventCommandProcess } };
	
	EventTypeSpec			askControlCarbonEvents[] = {	
												{ kEventClassKeyboard, kEventRawKeyDown },
												{ kEventClassKeyboard, kEventRawKeyRepeat },
												{ kEventClassKeyboard, kEventRawKeyUp },
												{ kEventClassKeyboard, kEventRawKeyModifiersChanged } };
										 

	Int1		*primName = "ask-text";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	switch(primInArity) {
		case 1:
			result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
			if( result != kNOERROR ) return result;
		
		default:
			break;
	}

#endif

	if(primInArity >= 1 ) {
		string = VPLPrimGetInputObject(0,primitive,environment);
		displayString = CFStringCreateWithCString( NULL, ((V_String) string)->string, VPLUIModalWindowEncoding );
		if(displayString == NULL) displayString = CFStringCreateWithCString( NULL, tempCString, kCFStringEncodingMacRoman );
	}

	if(primInArity >= 2 ) {
		string = VPLPrimGetInputObject(1,primitive,environment);
		if( string == NULL || string->type != kString){
		
			if( string ) tempString = object_to_string( string, environment );
			if(tempString) {
				length = strlen( tempString );
			} else {
				record_error("\"join\": Input 1 type not string in module - ",NULL,kWRONGINPUTTYPE,environment);
				return kWRONGINPUTTYPE;
			}
		} else {
			length = ((V_String) string)->length;
			tempString = ((V_String) string)->string;
		}

		defaultString = CFStringCreateWithCString( NULL, tempString, VPLUIModalWindowEncoding );
	}
	
//	err = CreateNibReference( VPLUIModalWindowNibName, &ourNIB );
	err = CreateRelativeNibRef( VPLUIModalWindowNibName, &ourNIB );
	
	if (err == noErr) err = CreateWindowFromNib( ourNIB, VPLUIModalWindowAskName, &ourWindow );

	if( ourNIB ) DisposeNibReference( ourNIB );
	
	if (err == noErr ) SetAutomaticControlDragTrackingEnabledForWindow( ourWindow, true );
	
	if( (err == noErr) && displayString ) {
		GetControlByID( ourWindow, &VPLUIModalWindowPromptText, &textControl );	
		if (textControl) SetControlData(textControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(CFStringRef), &displayString);
		}
	
	theKeyHandlerUPP = NewEventHandlerUPP((EventHandlerProcPtr) VPLUIModalWindowAskKeyEventHandler);

	if (err == noErr) {
		GetControlByID( ourWindow, &VPLUIModalWindowAskText, &askControl );	
		if( (askControl) && defaultString ) SetControlData(askControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(CFStringRef), &defaultString);
		if (askControl) SetControlDragTrackingEnabled( askControl, true );
		if (askControl) SetKeyboardFocus( ourWindow, askControl, kControlFocusNextPart);          
		if (askControl) InstallEventHandler(GetControlEventTarget(askControl), theKeyHandlerUPP, GetEventTypeCount(askControlCarbonEvents), askControlCarbonEvents, &theInfo, &theKeyHandler );
		}

	theHandlerUPP = NewEventHandlerUPP((EventHandlerProcPtr) VPLUIModalWindowEventHandler);

	theInfo.window = ourWindow;
	theInfo.button = kHICommandCancel;
	theInfo.string = NULL;

	if (err == noErr) err = InstallEventHandler(GetWindowEventTarget(ourWindow), theHandlerUPP, GetEventTypeCount(carbonEvents), carbonEvents, &theInfo, &theHandler );
	if (err == noErr) err = VPLUIModalWindowRun(ourWindow);

	if( theInfo.string ) {
//		CFShow( theInfo.string );
		length = CFStringGetMaximumSizeForEncoding( CFStringGetLength(theInfo.string), VPLUIModalWindowEncoding ) + 1;
		tempCString = (Int1*)X_malloc( length );
		goodResult = CFStringGetCString( theInfo.string, tempCString, length , VPLUIModalWindowEncoding );
			if( !goodResult ) {
				X_free(tempCString );
				VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
				goto EXIT;
			}
		string = (V_Object) create_string( tempCString, environment );
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) string);
		X_free(tempCString );
	}
	else VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);

EXIT:
	DisposeEventHandlerUPP( theHandlerUPP );
	DisposeEventHandlerUPP( theKeyHandlerUPP );

	if( displayString ) CFRelease( displayString );
	if( defaultString ) CFRelease( defaultString );
	if( theInfo.string ) CFRelease( theInfo.string );		

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_show( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* show */
Int4 VPLP_show( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* show */
{

	Int1		*tempCString = "";

	OSStatus	err = noErr;
    IBNibRef	ourNIB = NULL;
    WindowRef	ourWindow = NULL;

	CFStringRef	displayString = NULL;
	ControlRef	textControl = NULL;

	VPLUIModalWindowInfo	theInfo;
	EventHandlerRef			theHandler = NULL;
	EventHandlerUPP			theHandlerUPP;
	EventTypeSpec			carbonEvents[] = { { kEventClassCommand, kEventCommandProcess } };
										 

	Int1		*primName = "show";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

#endif

	result = VPLPrimGetInputObjectStringCoalesce( &tempCString, 0, primInArity, primName, primitive, environment);
	if( result != kNOERROR ) return result;

	displayString = CFStringCreateWithCString( NULL, tempCString, VPLUIModalWindowEncoding );
	if(displayString == NULL) displayString = CFStringCreateWithCString( NULL, tempCString, kCFStringEncodingMacRoman );
	
/*	err = CreateNibReference( VPLUIModalWindowNibName, &ourNIB );
	if( err != noErr ) {
		CFBundleRef				nibBundle = CFBundleGetBundleWithIdentifier( VPLUIBundleIDFramework );
		if( nibBundle == NULL )	nibBundle = CFBundleGetBundleWithIdentifier( VPLUIBundleIDBundle );
		if( nibBundle != NULL )	err = CreateNibReferenceWithCFBundle( nibBundle, VPLUIModalWindowNibName, &ourNIB );
	}
*/
	err = CreateRelativeNibRef( VPLUIModalWindowNibName, &ourNIB );
	
	if (err == noErr) err = CreateWindowFromNib( ourNIB, VPLUIModalWindowShowName, &ourWindow );

	if( ourNIB ) DisposeNibReference( ourNIB );
	
	if (err == noErr) err = GetControlByID( ourWindow, &VPLUIModalWindowPromptText, &textControl );	
	if (err == noErr && displayString) err = SetControlData(textControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(displayString), &displayString);

	theHandlerUPP = NewEventHandlerUPP((EventHandlerProcPtr) VPLUIModalWindowEventHandler);

	theInfo.window = ourWindow;
	theInfo.button = kHICommandCancel;
	theInfo.string = NULL;

	if (err == noErr) err = InstallEventHandler(GetWindowEventTarget(ourWindow), theHandlerUPP, GetEventTypeCount(carbonEvents), carbonEvents, &theInfo, &theHandler );
	if (err == noErr) err = VPLUIModalWindowRun(ourWindow);

	DisposeEventHandlerUPP( theHandlerUPP );
	if(displayString) CFRelease( displayString );
	X_free(tempCString );

	*trigger = kSuccess;	
	return kNOERROR;
}

/*  Begin Select Window */


OSStatus    VPLUIDBItemDataCallback (ControlRef browser, DataBrowserItemID itemID, DataBrowserPropertyID property, DataBrowserItemDataRef itemData, Boolean changeValue);
OSStatus    VPLUIDBItemDataCallback (ControlRef browser, 
                DataBrowserItemID itemID, 
                DataBrowserPropertyID property, 
                DataBrowserItemDataRef itemData, 
                Boolean changeValue)
{  
	#pragma unused ( browser )

    OSStatus		status = noErr;
	CFStringRef		itemString = NULL;
	V_String		string = NULL;

    if (!changeValue) switch (property)            
    {
        case VPLUIModalWindowSelectListColumn:
        	string = (V_String)((V_List)VPLUISelectList->objectList[itemID-1]);
        	itemString = CFStringCreateWithCString( NULL, string->string, VPLUIModalWindowEncoding );
        	if(itemString) {
            	status = SetDataBrowserItemDataText ( itemData, itemString );
            	CFRelease( itemString );
            }
            break;        

        default:
            status = errDataBrowserPropertyNotSupported;
            break;
    }
    else status = errDataBrowserPropertyNotSupported;

 return status;
}

void VPLUIDBItemNotificationCallback( ControlRef browser, DataBrowserItemID itemID, DataBrowserItemNotification message);
void VPLUIDBItemNotificationCallback( ControlRef browser, DataBrowserItemID itemID, DataBrowserItemNotification message)
{
	#pragma unused ( browser, itemID )

    switch (message)
    {
/*
        case kDataBrowserContainerOpened:               //1
        {           
            int i, myItemsPerContainer;

            myItemsPerContainer = myTunesDatabase[itemID].songsInAlbum;           //2
 
            DataBrowserItemID myItems [myItemsPerContainer];
            for ( i = 0; i < (myItemsPerContainer); i++)                //3
                        myItems[i] =  MyGetChild (itemID, i);
            AddDataBrowserItems (browser, itemID, myItemsPerContainer, 
                                myItems, kTitleColumn);          //4
            break;  
        }   
*/

		case kDataBrowserItemDoubleClicked:
		{
			HICommand   cmd;

			cmd.attributes = 0;
			cmd.commandID = VPLUIModalWindowSelectCommandID;
			ProcessHICommand( &cmd );
			break;
		}
    }
}



Int4 VPLP_select( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* select */
Int4 VPLP_select( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* select */
{

	Nat4		length = 0;
	V_Object	string = NULL;
	V_Object	list = NULL;
	Int1		*tempString = "";
	Int1		*tempCString = "";

	OSStatus	err = noErr;
    IBNibRef	ourNIB = NULL;
    WindowRef	ourWindow = NULL;

	CFStringRef	displayString = NULL;
	Boolean		goodResult = false;
	ControlRef	textControl = NULL;

	VPLUIModalWindowInfo	theInfo;
	EventHandlerRef			theHandler = NULL;
	EventHandlerUPP			theHandlerUPP;
	EventTypeSpec			carbonEvents[] = { { kEventClassCommand, kEventCommandProcess } };
										 
    SInt32					NumRows;
    ControlRef				dbControl;
    DataBrowserCallbacks	dbCallbacks;



	Int1		*primName = "select";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if(primInArity == 2 ) {
		result = VPLPrimCheckInputObjectType( kString,1,primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	list = VPLPrimGetInputObject(0,primitive,environment);
	VPLUISelectList = (V_List)list;

	if(primInArity == 2 ) {
		string = VPLPrimGetInputObject(1,primitive,environment);
		length = ((V_String) string)->length;
		tempString = ((V_String) string)->string;

		displayString = CFStringCreateWithCString( NULL, tempString, VPLUIModalWindowEncoding );
		if(displayString == NULL) displayString = CFStringCreateWithCString( NULL, tempCString, kCFStringEncodingMacRoman );
	}
	
//	err = CreateNibReference( VPLUIModalWindowNibName, &ourNIB );
	err = CreateRelativeNibRef( VPLUIModalWindowNibName, &ourNIB );
	
	if (err == noErr) err = CreateWindowFromNib( ourNIB, VPLUIModalWindowSelectName, &ourWindow );

	if( ourNIB ) DisposeNibReference( ourNIB );
	
	if( (err == noErr) && displayString ) {
		GetControlByID( ourWindow, &VPLUIModalWindowPromptText, &textControl );	
		if (textControl) SetControlData(textControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(CFStringRef), &displayString);
	}
	
	
	if (err == noErr) {
		GetControlByID( ourWindow, &VPLUIModalWindowSelectList, &dbControl );	
	
	    dbCallbacks.version = kDataBrowserLatestCallbacks;               
	    InitDataBrowserCallbacks (&dbCallbacks);         
	    dbCallbacks.u.v1.itemDataCallback = NewDataBrowserItemDataUPP((DataBrowserItemDataProcPtr)VPLUIDBItemDataCallback);
		dbCallbacks.u.v1.itemNotificationCallback = NewDataBrowserItemNotificationUPP((DataBrowserItemNotificationProcPtr)VPLUIDBItemNotificationCallback);
		SetDataBrowserCallbacks(dbControl, &dbCallbacks);                
	    SetAutomaticControlDragTrackingEnabledForWindow (ourWindow, true);          
	        
	    NumRows = VPLUISelectList->listLength;
	    
	    AddDataBrowserItems (dbControl, kDataBrowserNoItem, NumRows, NULL, kDataBrowserItemNoProperty );
	    
	    SetKeyboardFocus( ourWindow, dbControl, kControlFocusNextPart);      
	}
		
	theHandlerUPP = NewEventHandlerUPP((EventHandlerProcPtr) VPLUIModalWindowEventHandler);

	theInfo.window = ourWindow;
	theInfo.button = kHICommandCancel;
	theInfo.string = NULL;

	if (err == noErr) err = InstallEventHandler(GetWindowEventTarget(ourWindow), theHandlerUPP, GetEventTypeCount(carbonEvents), carbonEvents, &theInfo, &theHandler );
	if (err == noErr) err = VPLUIModalWindowRun(ourWindow);

	if( theInfo.string ) {
//		CFShow( theInfo.string );
		length = CFStringGetMaximumSizeForEncoding( CFStringGetLength(theInfo.string), VPLUIModalWindowEncoding ) + 1;
		tempCString = (Int1*)X_malloc( length );
		goodResult = CFStringGetCString( theInfo.string, tempCString, length , VPLUIModalWindowEncoding );
			if( !goodResult ) {
				X_free(tempCString );
				VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
				goto EXIT;
			}
		string = (V_Object) create_string( tempCString, environment );
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) string);
		X_free(tempCString );
	}
	else VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);

EXIT:
	DisposeEventHandlerUPP( theHandlerUPP );

	if( displayString ) CFRelease( displayString );
	if( theInfo.string ) CFRelease( theInfo.string );		

	VPLUISelectList = NULL;

	*trigger = kSuccess;	
	return kNOERROR;
}








Nat4	loadConstants_VPX_PrimitivesUI(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesUI(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesUI(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesUI(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesUI(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesUI(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Int4 VPLP_ask( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_ask( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_ask_2D_value(environment,trigger,primInArity,primOutArity,primitive);
}

Nat4	loadPrimitives_VPX_PrimitivesUI(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesUI(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
		
		if(dictionary){
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"show",dictionary,1,0,VPLP_show)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"ask-value",dictionary,0,1,VPLP_ask_2D_value)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"ask",dictionary,0,1,VPLP_ask_2D_value)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"ask-text",dictionary,0,1,VPLP_ask_2D_text)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"answer",dictionary,2,1,VPLP_answer)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"answer-v",dictionary,2,1,VPLP_answer_2D_v)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"select",dictionary,1,1,VPLP_select)) == NULL) return kERROR;
		}
		
        return kNOERROR;

}

Nat4	load_VPX_PrimitivesUI(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesUI(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesUI(environment,bundleID);
		result = loadStructures_VPX_PrimitivesUI(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesUI(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesUI(environment,bundleID);
		
		return result;
}

