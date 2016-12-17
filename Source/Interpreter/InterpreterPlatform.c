/*
 *  InterpreterPlatform.c
 *  MartenInterpreterApp
 *
 *  Created by Jack Small on 7/1/09.
 *  Copyright 2009 Andescotia LLC. All rights reserved.
 *
 */

#include "interpreterPlatform.h"

static Bool			gDrawCommandBadge = kFALSE;

void	platformEnableCommandBadge( Bool drawBadge, V_Environment environment )
{
	gDrawCommandBadge = drawBadge;
	return;
}





#pragma mark ------- Platform: Darwin -------

#if __VPL_PLATFORM_DARWIN__

#pragma mark ------- MAC OS X Specific -------

#if MACOSX
Int1 dockDrawCommands[] = {
kCommandNoop,
kCommandExecute,
kCommandEnvironmentPostLoad,
kCommandEnvironmentStep,
kCommandStackAdvance,
kCommandFrameStepOut,
};

const Int1 dockDrawCommandCount = 5;

Int1			gLastDrawCommand = kvpl_CommandNone;
Boolean			gLoadDrawCommand = TRUE;
//Boolean			gStopDrawCommand = FALSE;
const float		k90DegreesRad = 1.0; // 90 * (M_PI/180);

#pragma mark ------- UI Enhancements -------

Bool	platformIsCommandBadgeEnabled( V_Environment environment )
	{	return gDrawCommandBadge;	}

void	platformDrawCommandBadge( Int1 CommandState, Int1 theCommand, V_Environment environment )
{
	CGContextRef	docktileContext;
	float			badgeX		= 10.0;
	float			badgeY		= 10.0;
	float			badgeWidth	= 40.0;
	float			badgeHeight	= 40.0;
	CGRect			badgeFrame = CGRectMake( badgeX, badgeY, badgeWidth, badgeHeight );
	CGRect			badgeFrameInset = CGRectInset(badgeFrame, (badgeWidth/10), (badgeHeight/10));
	
	Int1			checkIndex = 0;
	Boolean			checkNow = FALSE;
	Boolean			drawStop = TRUE;
	
	if( gLastDrawCommand == CommandState ) return;
	for( checkIndex = 0; checkIndex < dockDrawCommandCount; checkIndex++ )
		if( dockDrawCommands[checkIndex] == theCommand ) {
			checkNow = TRUE;
			break;
		}
	
	if( !checkNow ) return;
	gLastDrawCommand = CommandState;
	
	if( gLoadDrawCommand )
		if( theCommand == kCommandEnvironmentPostLoad ) gLoadDrawCommand = FALSE;
	
	if( environment->stack )
		drawStop = ( environment->stack->currentFrame == NULL );
	
	RestoreApplicationDockTileImage();
	docktileContext = BeginCGContextForApplicationDockTile();
	
	switch(CommandState) 
	{
		case kvpl_CommandReading:
			if( gLoadDrawCommand )	{
				CGContextSetRGBFillColor( docktileContext, 0.1, 0.1, 0.78, 0.8 );	// Blue
				CGContextAddRect( docktileContext, badgeFrameInset );
			} else if( drawStop )	{
				CGContextSetRGBFillColor( docktileContext, 0.78, 0.1, 0.1, 0.8 );	// Red
				CGContextMoveToPoint( docktileContext, badgeX+(badgeWidth/2), badgeY );
				CGContextAddLineToPoint( docktileContext, badgeX, badgeY+(badgeHeight/2) );
				CGContextAddLineToPoint( docktileContext, badgeX+(badgeWidth/2), badgeY+badgeHeight );
				CGContextAddLineToPoint( docktileContext, badgeX+badgeWidth, badgeY+(badgeHeight/2) );
				CGContextClosePath( docktileContext );
			} else 					{
				CGContextSetRGBFillColor( docktileContext, 1.0, 1.0, 0.0, 0.8 );	// Yellow
				CGContextAddEllipseInRect( docktileContext, badgeFrame );
			};
			break;
			
		default:
			CGContextSetRGBFillColor( docktileContext, 0.1, 0.78, 0.1, 0.8 );								// Green
			CGContextMoveToPoint( docktileContext, badgeX, badgeY );
			CGContextAddLineToPoint( docktileContext, badgeX, badgeY+badgeHeight );
			CGContextAddLineToPoint( docktileContext, badgeX+badgeWidth, badgeY+(badgeHeight/2) );
			CGContextClosePath( docktileContext );
			break;
	}
	CGContextSetRGBStrokeColor( docktileContext, 0.0, 0.0, 0.0, 1.0 );
	CGContextDrawPath( docktileContext, kCGPathFillStroke );
	
	CGContextFlush( docktileContext );
	EndCGContextForApplicationDockTile( docktileContext );
	
	return;
}	

Nat4	platformCheckForUserCancel(void)
{
	return (Nat4)CheckEventQueueForUserCancel();
}

/*
 KeyMap		myKeyMap;
 short		byteIndex = 0;
 short		keyCode = 0;
 char		theByte;
 char		theBit;
 char		theAnd;
 char		*thePointer = NULL;
 short		theCommandKey = 55;
 short		thePeriodKey = 47;
 
 GetKeys(myKeyMap);
 if(myKeyMap[1] == 8421376) return kTRUE;
 byteIndex = theCommandKey >> 3;
 thePointer = (char *)&myKeyMap[0];
 theByte = *(char *)(thePointer + byteIndex);
 theBit = 1L<<(keyCode&7);
 theAnd = theByte & theBit;
 if(theAnd != 0){
 byteIndex = thePeriodKey >> 3;
 thePointer = (char *)&myKeyMap[0];
 theByte = *(char *)(thePointer + byteIndex);
 theBit = 1L<<(keyCode&7);
 theAnd = theByte & theBit;
 if(theAnd != 0){
 return kTRUE;
 }else
 return kFALSE;
 }else
 return kFALSE;
 */

#if __VPL_EDITOR_IS_THREADED__
void	platformYieldToThread( enum whichThread theThread, V_Environment environment )
{
	ThreadID	theThreadID = 0;
	OSErr		threadError = noErr;
	
	if(environment && environment->interpreterMode == kThread) {
		switch(theThread){
			case kEditor:
				GetCurrentThread(&theThreadID);
				environment->interpreterThreadID = theThreadID;
				threadError = YieldToThread(environment->editorThreadID);
				break;
				
			case kInterpreter:
				GetCurrentThread(&theThreadID);
				environment->editorThreadID = theThreadID;
				threadError = YieldToThread(environment->interpreterThreadID);
				break;
				
			case kAny:
				GetCurrentThread(&theThreadID);
				environment->interpreterThreadID = theThreadID;
				YieldToAnyThread();
				break;
				
			default:
				break;
		}
	}
}

void	platformYieldToEditor( V_Environment environment )
{	if(environment->interpreterMode == kThread) YieldToThread(environment->editorThreadID);	}

#endif // __VPL_EDITOR_IS_THREADED__

void	platformBringToFront( V_Environment environment )
{
	ProcessSerialNumber			process = { 0, kCurrentProcess };
	
	SetFrontProcess(&process);
}

void	platformLaunchComplete( V_Environment environment )
{
	EventRecord					dockEvent;
	
	EventAvail( everyEvent, &dockEvent );				// This will stop the icon bouncing in the dock
}

Bool	platformIsIDELaunch( Bool isIDELaunch, V_Environment environment )
{
	ProcessSerialNumber			thisProcess;
	ProcessSerialNumber			parentProcess;
	ProcessInfoRec				theProcessInfoRecord;
	Boolean						didMartenLaunch = kFALSE;
	
	GetCurrentProcess(&thisProcess);
	theProcessInfoRecord.processInfoLength = sizeof(ProcessInfoRec);
	theProcessInfoRecord.processName = NULL;
	theProcessInfoRecord.processAppSpec = NULL;
	GetProcessInformation(&thisProcess,&theProcessInfoRecord);
	
	parentProcess = theProcessInfoRecord.processLauncher;
	GetProcessInformation(&parentProcess,&theProcessInfoRecord);
	
	if(theProcessInfoRecord.processSignature == 'mVPL' || theProcessInfoRecord.processSignature == 'iVPL')
		didMartenLaunch = kTRUE;
	
	return didMartenLaunch;
}
#endif // MACOSX

#pragma mark ------- IPHONE OS X Specific -------

#if IPHONEOSX
Bool platformIsCommandBadgeEnabled( V_Environment environment )
{	return kFALSE;	}

void platformDrawCommandBadge( Int1 CommandState, Int1 theCommand, V_Environment environment )
{
	//
}

Nat4	platformCheckForUserCancel(void)
{
	return 0;
}

#if __VPL_EDITOR_IS_THREADED__
void	platformYieldToThread( enum whichThread theThread, V_Environment environment )
{
	//
}

void	platformYieldToEditor( V_Environment environment )
{
	//
}
#endif // __VPL_EDITOR_IS_THREADED__

void	platformBringToFront( V_Environment environment )
{
	//
}

void	platformLaunchComplete( V_Environment environment )
{
	//
}

Bool	platformIsIDELaunch( Bool isIDELaunch, V_Environment environment )
{
	return isIDELaunch;
}
#endif // IPHONEOSX

#pragma mark ------- Generic Darwin -------


// This function is internal to CoreFoundation framework and not defined in the standard headers.
// It is used when the bundle Resources folder has been modified.

extern void _CFBundleFlushCaches( void );

void	platformEnvironmentResourcesChanged( V_Environment environment )
{
	_CFBundleFlushCaches();		// Core Foundation internal function.
}

/*

Boolean	platformPathToLibrary( Bool isCLILaunch, vpl_StringPtr libName, vpl_StringPtr* outLoadFunction, vpl_StringPtr* outLibraryPath, V_Environment environment )
{
	Boolean			isGood = FALSE;
	CFBundleRef		mainBundle = CFBundleGetMainBundle();
	CFURLRef		theURLRef, theBaseURLRef;
	CFStringRef		bundleStringRef;

	theBaseURLRef = CFURLCreateWithString( NULL, CFSTR("/Library/Frameworks"), NULL );

	*outLoadFunction = new_cat_string( "load_", libName, environment );

	bundleStringRef = CFStringCreateWithCString( NULL, libName, kCFStringEncodingUTF8 );
//	CFShow(bundleStringRef);
	
	if( isCLILaunch == TRUE ) 
		theURLRef = CFURLCreateCopyAppendingPathComponent( NULL, theBaseURLRef, bundleStringRef, TRUE );
	else
		theURLRef = CFBundleCopyResourceURL(mainBundle,bundleStringRef,NULL,NULL);
	
	*outLibraryPath = (vpl_StringPtr) X_calloc( 1, 4096 );
	isGood = CFURLGetFileSystemRepresentation(theURLRef, TRUE, (UInt8*)*outLibraryPath, 4096);

	if( !isGood ) {
		X_free( *outLoadFunction );
		*outLoadFunction = NULL;

		X_free( *outLibraryPath );
		*outLibraryPath = NULL;
	}
	
	CFRelease( theURLRef );
	CFRelease( theBaseURLRef );
	CFRelease( bundleStringRef );
	
	return isGood;
}
*/

OSErr	CreateBundleFromFilePath( vpl_StringPtr thePath, CFBundleRef *theBundle )
{
	OSErr		theErr = 0;
	CFURLRef	theBundleURL;
	
	/* Turn the file path into a CFURL */
	theBundleURL = CFURLCreateFromFileSystemRepresentation( kCFAllocatorSystemDefault, (UInt8*)thePath, strlen(thePath), TRUE );
	
	if (theBundleURL != NULL)
	{
		/* Turn the CFURL into a bundle reference */
		*theBundle = CFBundleCreate( kCFAllocatorSystemDefault, theBundleURL );
		
		CFRelease( theBundleURL );
	}
	
	return theErr;
}

Bool	platformLoadLibraryAtPath( vpl_StringPtr loadFuncName, vpl_StringPtr libraryPath, V_Environment environment )
{
    // Typedef for the function pointer.
    typedef Nat4 (*LoadPrimitiveFunctionPtr)(V_Environment); 
	
    // Function pointer.
    LoadPrimitiveFunctionPtr	loadPrimitive = NULL;
	
    Bool						didLoad = kFALSE;
    long						result;	
    CFBundleRef					myBundle = NULL;    
	CFStringRef					tempCFString;
	
    result = CreateBundleFromFilePath( libraryPath, &myBundle );
	
	if( myBundle ) didLoad = CFBundleLoadExecutable( myBundle ) ? kTRUE : kFALSE;
    else printf("Could not create bundle from file path: %s\n", libraryPath);
	
    if( didLoad ) {
		tempCFString = CFBundleGetValueForInfoDictionaryKey( myBundle, CFSTR("MartenLoadFunction") );
        if( tempCFString == NULL ) tempCFString = CFStringCreateWithCString( NULL, loadFuncName, kCFStringEncodingUTF8 );
		
        if(tempCFString) loadPrimitive = (void*)CFBundleGetFunctionPointerForName(myBundle, tempCFString );
    	
        // If our function was found in the loaded code, call it.
        if (loadPrimitive) {
            result = loadPrimitive ( environment );
            sort_dictionaries(environment);
        } else {
			didLoad = kFALSE;
			printf("Interpreter could not get function pointer for symbol: %s\n", loadFuncName);
		}
        if(tempCFString) CFRelease(tempCFString);
    }
	else printf("Could not load executable from bundle\n");	
	
	return didLoad;
}

Bool	platformLoadLibraryName( Bool isCLILaunch, vpl_StringPtr libName, V_Environment environment )
{
	vpl_StringPtr	theLoadFunction;
	vpl_StringPtr	theLibraryPath;
	
	Boolean			isGood = FALSE;
	CFBundleRef		mainBundle = CFBundleGetMainBundle();
	CFURLRef		theURLRef, theBaseURLRef;
	CFStringRef		bundleStringRef;
	
	theLoadFunction = new_cat_string( "load_", libName, environment );
	
	theBaseURLRef = CFURLCreateWithString( NULL, CFSTR("/Library/Frameworks"), NULL );
	bundleStringRef = CFStringCreateWithCString( NULL, libName, kCFStringEncodingUTF8 );
	
	if( isCLILaunch == TRUE ) 
		theURLRef = CFURLCreateCopyAppendingPathComponent( NULL, theBaseURLRef, bundleStringRef, TRUE );
	else
		theURLRef = CFBundleCopyResourceURL(mainBundle,bundleStringRef,NULL,NULL);
	
	theLibraryPath = (vpl_StringPtr) X_calloc( 1, 4096 );
	isGood = CFURLGetFileSystemRepresentation( theURLRef, TRUE, (UInt8*)theLibraryPath, 4096 );

	if( isGood )
		isGood = ( platformLoadLibraryAtPath( theLoadFunction, theLibraryPath, environment ) == kTRUE );

	if( theLoadFunction )	X_free( theLoadFunction );
	if( theLibraryPath )	X_free( theLibraryPath );
	CFRelease( theURLRef );
	CFRelease( theBaseURLRef );
	CFRelease( bundleStringRef );
	
	return isGood ? kTRUE : kFALSE;	
}

char*	platformPathToRunObject( V_Environment environment )
{
	char*	internalRunPath = NULL;
	CFBundleRef		mainBundle;
	CFURLRef		theURLRef;
	
	mainBundle = CFBundleGetMainBundle();
	theURLRef = CFBundleCopyResourceURL(mainBundle,CFSTR("Application.vpz"),NULL,NULL);
	
	if( theURLRef ) {
		internalRunPath = X_calloc( 1, 4096 );
		CFURLGetFileSystemRepresentation( theURLRef, TRUE, (UInt8*)internalRunPath, 4096 );
		CFRelease( theURLRef );
	}
	
	return internalRunPath;
}



#else

#pragma mark ------- Platform: Unknown -------
//	Generic Stubs

Bool platformIsCommandBadgeEnabled( V_Environment environment )
{	return kFALSE;	}

void platformDrawCommandBadge( Int1 CommandState, Int1 theCommand, V_Environment environment )
{
	//
}

Boolean	platformLoadLibrary( Bool isCLILaunch, vpl_StringPtr libName, V_Environment environment )
{
	printf( "Interpreter could not load library: %s\n", libName );
}

Nat4	platformCheckForUserCancel(void)
{
	return 0;
}

void	platformEnvironmentResourcesChanged( V_Environment environment )
{
	//
}

#if __VPL_EDITOR_IS_THREADED__
void	platformYieldToThread( enum whichThread theThread, V_Environment environment )
{
	//
}

void	platformYieldToEditor( V_Environment environment )
{
	//
}
#endif // __VPL_EDITOR_IS_THREADED__

void	platformBringToFront( V_Environment environment )
{
	//
}

char*	platformPathToRunObject( V_Environment environment )
{
	char*	internalRunPath = NULL;
	
	return internalRunPath;
}


void	platformLaunchComplete( V_Environment environment )
{
	//
}

Bool	platformIsIDELaunch( Bool isIDELaunch, V_Environment environment )
{
	return isIDELaunch;
}


#endif // __VPL_PLATFORM_DARWIN__



