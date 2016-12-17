/*
	
	VPX_PrimitivesInfo.c
	Copyright 2006 Scott B. Anderson, All Rights Reserved.
	
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

//V_List		VPLUISelectList = NULL;	

#define		VPLUIModalWindowNibName			CFSTR("VPXInfo")
#define		VPLUIModalWindowInfoName		CFSTR("Info")
//#define		VPLUIModalWindowShowName		CFSTR("Show")
//#define		VPLUIModalWindowAskName			CFSTR("Ask")
//#define		VPLUIModalWindowAnswerName		CFSTR("Answer")
//#define		VPLUIModalWindowAnswerVName		CFSTR("Answer-V")
#define		VPLUIModalWindowPromptText		(ControlID){ 'VPXu', 1 }
#define		VPLUIModalWindowOKButton		(ControlID){ 'VPXu', 2 }
#define		VPLUIModalWindowLogoIcon		(ControlID){ 'VPXu', 3 }
#define		VPLUIModalWindowBannerText		(ControlID){ 'VPXu', 4 }
#define		VPLUIModalWindowVersionText		(ControlID){ 'VPXu', 5 }
#define		VPLUIModalWindowLinkText		(ControlID){ 'VPXu', 6 }
#define		VPLUIModalWindowPurchaseButton	(ControlID){ 'VPXu', 11 }
#define		VPLUIModalWindowAndescotiaLink	'VAlk'
#define		VPLUIModalWindowPurchaseLink	'VPlk'
#define		VPLUIModalWindowEncoding		kCFStringEncodingUTF8
#define		VPLUIModalWindowTransition		kWindowShowTransitionAction

#define		VPLUIModalWindowVersion			CFSTR("Version %@");
#define		VPLUIModalWindowVersionBuild	CFSTR("Version %@ (Build %@)");

//#define		VPLUIModalWindowOtherButton		(ControlID){ 'VPXu', 12 }
//#define		VPLUIModalWindowOtherCommandID	'VuOT'
//#define		VPLUIModalWindowAskCommandID	'VaOK'
//#define		VPLUIModalWindowTransition		(WindowTransitionEffect)4

//#define		VPLUIModalWindowSelectName			CFSTR("Select")
//#define		VPLUIModalWindowSelectList			(ControlID){ 'VPXu', 22 }
//#define		VPLUIModalWindowSelectListColumn	'SELC'
//#define		VPLUIModalWindowSelectCommandID		'VsOK'

#define		VPLUIBundleIDFramework			CFSTR("com.andescotia.frameworks.marten.info")
#define		VPLUIBundleIDBundle				CFSTR("com.andescotia.bundles.marten.info")

#define		VPLUIURLToAndescotiaHome		CFSTR("http://www.andescotia.com/")
#define		VPLUIURLToAndescotiaSale		CFSTR("https://andescotia.com/store/")

OSStatus VPLUIOpenURL( CFStringRef theURLText );
OSStatus VPLUIOpenURL( CFStringRef theURLText )
{
	OSStatus	result = paramErr;
	CFURLRef	theURL;
	
	if( theURLText == NULL ) theURLText = VPLUIURLToAndescotiaHome;
	theURL = CFURLCreateWithString( kCFAllocatorDefault, theURLText, NULL );
	if( theURL != NULL ) {
		result = LSOpenCFURLRef( theURL, NULL );	
		CFRelease( theURL );
	}
	return result;
}

OSStatus VPLUIModalWindowRun( WindowRef inWindow );
OSStatus VPLUIModalWindowRun( WindowRef inWindow )
{
	OSStatus	result = paramErr;
	
	if( inWindow == NULL ) return result;

	if( TransitionWindow(inWindow, VPLUIModalWindowTransition, kWindowShowTransitionAction, NULL) != noErr ) ShowWindow(inWindow);

	result = RunAppModalLoopForWindow(inWindow);	
	
	if( TransitionWindow(inWindow, VPLUIModalWindowTransition, kWindowHideTransitionAction, NULL) != noErr ) HideWindow(inWindow);

	DisposeWindow( inWindow );	
	
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
//	ControlRef				askControl;
//   ControlRef				dbControl;
//	CFStringRef				askString = NULL;
//	CFStringRef				selectString = NULL;
//	Handle					dbSelectionHandle;
//	DataBrowserItemID*		dbSelectionIDs;

//	V_String				string = NULL;
	
//	DataBrowserItemID		index = 0;
//	Nat4					count = 0;
    
	switch ( GetEventClass(eventRef) )
	{

		case kEventClassCommand:
			result = GetEventParameter( eventRef, kEventParamDirectObject, typeHICommand, NULL, sizeof( cmd ), NULL, &cmd );
			switch ( cmd.commandID )
			{
				case VPLUIModalWindowPurchaseLink:
					result = VPLUIOpenURL( VPLUIURLToAndescotiaSale );
				case kHICommandOK: 
				case kHICommandCancel:
					QuitAppModalLoopForWindow( theWindow );
					theInfo->button = cmd.commandID;
					theInfo->string = NULL;
					result = noErr;
					break;
				case VPLUIModalWindowAndescotiaLink:
					result = VPLUIOpenURL( NULL );
					break;
				default:
					if( IsWindowHilited( theWindow ) == false ) SelectWindow( theWindow );
					result = eventNotHandledErr;
					break;
			}
			break;
		
		case kEventClassControl:
			switch ( GetEventKind(eventRef) )
			{
				case kEventControlClick:
					result = VPLUIOpenURL( NULL );
					break;
				default:
					break;
			}
			break;

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

CFStringRef GetRelativeInfoDictionaryKey( CFStringRef theKeyName );
CFStringRef GetRelativeInfoDictionaryKey( CFStringRef theKeyName )
{
	CFBundleRef	thisBundle = NULL;
	CFStringRef	returnString = NULL;

	thisBundle = CFBundleGetMainBundle();		// First look in main bundle
	if( thisBundle != NULL )	returnString = CFBundleGetValueForInfoDictionaryKey( thisBundle, theKeyName );

	if( returnString == NULL ) {				// Second look in framework bundle
		thisBundle = CFBundleGetBundleWithIdentifier( VPLUIBundleIDFramework );
		if( thisBundle != NULL )	returnString = CFBundleGetValueForInfoDictionaryKey( thisBundle, theKeyName );
	}
	
	if( returnString != NULL ) CFRetain( returnString );
	
	return returnString;
}

Int4 VPLP_marten_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* marten-info */
Int4 VPLP_marten_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* marten-info */
{

	V_Object	string = NULL;	

	OSStatus	err = noErr;
    IBNibRef	ourNIB = NULL;
    WindowRef	ourWindow = NULL;
	CFBundleRef	thisBundle = NULL;

	CFURLRef	theIcnsURL = NULL;
	FSRef		theIcnsFile;
	Boolean		goodIconFile = false;

	CFStringRef	displayString = NULL;
	CFStringRef	versionString = NULL;
	CFStringRef	versString = NULL;
	CFStringRef	buildString = NULL;
	CFStringRef	bannerString = NULL;
	Bool		hasPurchase = false;
	ControlRef	textControl = NULL;

	VPLUIModalWindowInfo	theInfo;
	EventHandlerRef			theHandler = NULL;
	EventHandlerRef			theControlHandler = NULL;
	EventHandlerUPP			theHandlerUPP;
	EventHandlerUPP			theControlHandlerUPP;
	EventTypeSpec			carbonEvents[] = { { kEventClassCommand, kEventCommandProcess } };
	EventTypeSpec			controlEvents[] = { { kEventClassControl, kEventControlClick } };
										 
	Rect					bounds = { 20, 20, 148, 148 };
	IconRef					icon;
	ControlButtonContentInfo info;

	Int1		*primName = "marten-info";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
//	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
//	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

#endif

	if( primInArity > 0 ) {
		string = VPLPrimGetInputObject(0,primitive,environment);
		if( string->type == kString) bannerString = CFStringCreateWithCString( kCFAllocatorDefault, ((V_String) string)->string, VPLUIModalWindowEncoding );
	}
		
	if( primInArity > 1 ) {
		string = VPLPrimGetInputObject(1,primitive,environment);
		if( string->type == kString) displayString = CFStringCreateWithCString( kCFAllocatorDefault, ((V_String) string)->string, VPLUIModalWindowEncoding );
	}	
	if( displayString == NULL ) {
			versString =	GetRelativeInfoDictionaryKey( CFSTR("CFBundleVersion") );
			buildString =	GetRelativeInfoDictionaryKey( CFSTR("MartenInterpreterVersion") );
			if( buildString && versString )	displayString =	CFStringCreateWithFormat( kCFAllocatorDefault, NULL, CFSTR("Version %@  Build %@"), versString, buildString );
			else if( versString )			displayString =	CFStringCreateWithFormat( kCFAllocatorDefault, NULL, CFSTR("Version %@"), versString );
			else							displayString = CFSTR("");
	}
	
	if( primInArity > 2 ) {
		string = VPLPrimGetInputObject(2,primitive,environment);
		if( string->type == kString) versionString = CFStringCreateWithCString( kCFAllocatorDefault, ((V_String) string)->string, VPLUIModalWindowEncoding );
	} 
	if( versionString == NULL) versionString = GetRelativeInfoDictionaryKey( CFSTR("MartenInfoCopyright") );

	if( primInArity > 3 ) {
		VPLPrimGetInputObjectBool( &hasPurchase, 3, primName, primitive, environment );
	} else hasPurchase = false;
	
	err = CreateRelativeNibRef( VPLUIModalWindowNibName, &ourNIB );
	
	if (err == noErr) err = CreateWindowFromNib( ourNIB, VPLUIModalWindowInfoName, &ourWindow );

	if( ourNIB ) DisposeNibReference( ourNIB );
	
	if( ourWindow ) {
		GetControlByID( ourWindow, &VPLUIModalWindowBannerText, &textControl );			// Set Banner text
		if (bannerString && textControl) SetControlData(textControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(bannerString), &bannerString);

		textControl = NULL;
		GetControlByID( ourWindow, &VPLUIModalWindowPromptText, &textControl );			// Set Display text
		if (displayString && textControl) SetControlData(textControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(displayString), &displayString);

		textControl = NULL;
		GetControlByID( ourWindow, &VPLUIModalWindowVersionText, &textControl );		// Set Copyright text
		if (versionString && textControl) SetControlData(textControl, kControlLabelPart, kControlStaticTextCFStringTag, sizeof(versionString), &versionString);

		textControl = NULL;
		GetControlByID( ourWindow, &VPLUIModalWindowPurchaseButton, &textControl );		// Set Purchase button
		if (textControl) SetControlVisibility(textControl, hasPurchase, false);

		textControl = NULL;
//		err = GetIconRef( kOnSystemDisk, 'iVPL', 'mVPL', &icon );
//		printf( "IconErr: %d\n", err );
		
//		if( err != noErr ) {
			thisBundle = CFBundleGetBundleWithIdentifier( VPLUIBundleIDFramework );			// Create Icon control
			theIcnsURL = CFBundleCopyResourceURL( thisBundle, CFSTR("martenIcon"), CFSTR("icns"), NULL );
			goodIconFile = CFURLGetFSRef( theIcnsURL, &theIcnsFile );
			if( goodIconFile ) RegisterIconRefFromFSRef( 'iVPL', 'mVPL', &theIcnsFile, &icon );
//		}
		
		info.contentType = kControlContentIconRef;
		info.u.iconRef = icon;
		if( icon ) {
			err = CreateIconControl( ourWindow, &bounds, &info, true, &textControl );
			ReleaseIconRef( icon );
		}
		SetControlCommandID( textControl, VPLUIModalWindowAndescotiaLink );

		if( theIcnsURL ) CFRelease( theIcnsURL );

		textControl = NULL;
		GetControlByID( ourWindow, &VPLUIModalWindowLinkText, &textControl );			// Set URL font style
		ControlFontStyleRec	myFontStyleRec;
		myFontStyleRec.flags = kControlUseFaceMask | kControlUseForeColorMask | kControlUseJustMask;
		myFontStyleRec.style = underline;
		myFontStyleRec.just = teCenter;
		myFontStyleRec.foreColor = (RGBColor){0, 0, 65535};
		SetControlFontStyle( textControl, &myFontStyleRec );

		theControlHandlerUPP = NewEventHandlerUPP((EventHandlerProcPtr) VPLUIModalWindowEventHandler);
		InstallEventHandler(GetControlEventTarget(textControl), theControlHandlerUPP, GetEventTypeCount(controlEvents), controlEvents, &theInfo, &theControlHandler );

	}
	
	theHandlerUPP = NewEventHandlerUPP((EventHandlerProcPtr) VPLUIModalWindowEventHandler);

	theInfo.window = ourWindow;
	theInfo.button = kHICommandCancel;
	theInfo.string = NULL;

	if (err == noErr) err = InstallEventHandler(GetWindowEventTarget(ourWindow), theHandlerUPP, GetEventTypeCount(carbonEvents), carbonEvents, &theInfo, &theHandler );
	if (err == noErr) err = VPLUIModalWindowRun(ourWindow);

	DisposeEventHandlerUPP( theHandlerUPP );
	if(displayString) CFRelease( displayString );
	if(bannerString) CFRelease( bannerString );
	if(versionString) CFRelease( versionString );
	if(theControlHandlerUPP) DisposeEventHandlerUPP( theControlHandlerUPP );

	*trigger = kSuccess;	
	return kNOERROR;
}





Nat4	loadConstants_VPX_PrimitivesInfo(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesInfo(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesInfo(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesInfo(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesInfo(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesInfo(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesInfo(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesInfo(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
		
		if(dictionary){
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"marten-info",dictionary,1,0,VPLP_marten_2D_info)) == NULL) return kERROR;
		}
		
        return kNOERROR;

}

Nat4	load_VPX_PrimitivesInfo(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesInfo(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesInfo(environment,bundleID);
		result = loadStructures_VPX_PrimitivesInfo(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesInfo(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesInfo(environment,bundleID);
		
		return result;
}

