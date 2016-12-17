/*
	
	MacOSX_WebKit.c
	Copyright 2004 Scott B. Anderson, All Rights Reserved.
	
*/
#include <Carbon/Carbon.h>
#include <Cocoa/Cocoa.h>
#include <WebKit/WebKit.h>
#include <WebKit/HIWebView.h>
#include <WebKit/CarbonUtils.h>



//#import <Cocoa/Cocoa.h>
//#import <WebKit/WebKit.h>
//#import <WebKit/HIWebView.h>
//#import <WebKit/CarbonUtils.h>
//#import <WebKit/WebView.h>
//#import <WebKit/WebFrame.h>


#pragma mark --------------- Constants ---------------


#pragma mark --------------- Structures ---------------


#pragma mark --------------- Procedures ---------------

	VPL_Parameter _HIWebViewCreate_R = { kIntType,4,NULL,0,0,NULL};
	VPL_Parameter _HIWebViewCreate_1 = { kPointerType,0,"OpaqueControlRef",2,0,NULL};
	VPL_ExtProcedure _HIWebViewCreate_F = {"HIWebViewCreate",HIWebViewCreate,&_HIWebViewCreate_1,&_HIWebViewCreate_R};

	VPL_ExtProcedure _WebInitForCarbon_F = {"WebInitForCarbon",WebInitForCarbon,NULL,NULL};


#pragma mark --------------- Primitives ---------------

//-------------------------------------------------------------------------------------
//	LoadURL
//-------------------------------------------------------------------------------------
//	Tell the web view to load a request for a URL. 
//
//
static void
LoadURL( HIViewRef inView, CFURLRef inURL );
static void
LoadURL( HIViewRef inView, CFURLRef inURL )
{
	WebView*		nativeView;
    NSURLRequest*	request;
    WebFrame* 		mainFrame;

	nativeView = HIWebViewGetWebView( inView );
	request = [NSURLRequest requestWithURL:(NSURL*)inURL];
	mainFrame = [nativeView mainFrame];
	[mainFrame loadRequest:request];
}

//-------------------------------------------------------------------------------------
//	LoadHTMLString
//-------------------------------------------------------------------------------------
//	Tell the web view to load a request for a HTML string.
//
//
static void
LoadHTMLString( HIViewRef inView, CFStringRef inHTML, CFURLRef inURL );
static void
LoadHTMLString( HIViewRef inView, CFStringRef inHTML, CFURLRef inURL )
{
	WebView*		nativeView;
    WebFrame* 		mainFrame;

	nativeView = HIWebViewGetWebView( inView );
	mainFrame = [nativeView mainFrame];
	[mainFrame loadHTMLString:(NSString*)inHTML baseURL:(NSURL*)inURL];
}


Int4 VPLP_load_2D_url( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_load_2D_url( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		block = NULL;
	HIViewRef		theInView = NULL;
	CFURLRef		theInURL = NULL;

	Int1		*primName = "load-url";

	if(primInArity != 2) return record_error("load-url: Input arity not 2",primName,kWRONGINARITY,environment);
	if(primOutArity != 0) return record_error("load-url: Output arity is not 0",primName,kWRONGINARITY,environment);

	block = VPLPrimGetInputObject(0,primitive,environment);
	if( block == NULL ) return record_error("load-url: Input 1 type not externalBlock! - ",primName,kWRONGINPUTTYPE,environment);
	if( VPLObjectGetType(block) != kExternalBlock) return record_error("load-url: Input 1 type not externalBlock! - ",primName,kWRONGINPUTTYPE,environment);
	
	theInView = *(HIViewRef*) ((V_ExternalBlock) block)->blockPtr;

	block = VPLPrimGetInputObject(1,primitive,environment);
	if( block == NULL || VPLObjectGetType(block) != kExternalBlock) return record_error("load-url: Input 2 type not externalBlock! - ",primName,kWRONGINPUTTYPE,environment);
	
	theInURL = *(CFURLRef*) ((V_ExternalBlock) block)->blockPtr;
	
//	CFShow( CFSTR("load-url!") );
//	CFShow( (void*)theInURL );

	LoadURL( theInView, theInURL );
		
	*trigger = kSuccess;	
	return kNOERROR;
}


Int4 VPLP_load_2D_html( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_load_2D_html( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		block = NULL;
	HIViewRef		theInView = NULL;
	CFStringRef		theInHTML = NULL;
	CFURLRef		theInURL = NULL;

	Int1		*primName = "load-html";

	if(primInArity != 3) return record_error("load-html: Input arity not 3",primName,kWRONGINARITY,environment);
	if(primOutArity != 0) return record_error("load-html: Output arity is not 0",primName,kWRONGINARITY,environment);


	block = VPLPrimGetInputObject(0,primitive,environment);
	if( block == NULL || VPLObjectGetType(block) != kExternalBlock) return record_error("load-html: Input 1 type not externalBlock! - ",primName,kWRONGINPUTTYPE,environment);
//	if( strcmp(((V_ExternalBlock) block)->name,"TERec") != 0) return record_error("load-url: Input 1 external not type HIViewRef! - ",moduleName,kWRONGINPUTTYPE,environment);
	
	theInView = *(HIViewRef*) ((V_ExternalBlock) block)->blockPtr;

	block = VPLPrimGetInputObject(1,primitive,environment);
	if( block == NULL || VPLObjectGetType(block) != kExternalBlock) return record_error("load-html: Input 2 type not externalBlock! - ",primName,kWRONGINPUTTYPE,environment);
//	if( strcmp(((V_ExternalBlock) block)->name,"TERec") != 0) return record_error("load-url: Input 1 external not type CFStringRef! - ",moduleName,kWRONGINPUTTYPE,environment);
	
	theInHTML = *(CFStringRef*) ((V_ExternalBlock) block)->blockPtr;

	block = VPLPrimGetInputObject(2,primitive,environment);
	if( block == NULL ) theInURL = NULL;
	else if( VPLObjectGetType(block) != kExternalBlock) return record_error("load-html: Input 3 type not externalBlock! - ",primName,kWRONGINPUTTYPE,environment);
//	if( strcmp(((V_ExternalBlock) block)->name,"TERec") != 0) return record_error("load-url: Input 1 external not type CFURLRef! - ",moduleName,kWRONGINPUTTYPE,environment);
	
	if( block != NULL) theInURL = *(CFURLRef*) ((V_ExternalBlock) block)->blockPtr;
	
//	CFShow( CFSTR("load-url!") );
//  CFShow( (void*)theInHTML);
//	if( theInURL ) CFShow( (void*)theInURL );

	LoadHTMLString( theInView, theInHTML, theInURL );
		
	*trigger = kSuccess;	
	return kNOERROR;
}

// VPL_DictionaryNode VPX_WebKit_Constants[] =	{ 0 };

// VPL_DictionaryNode VPX_WebKit_Structures[] =	{ 0 };

VPL_DictionaryNode VPX_WebKit_Procedures[] =	{
	{"HIWebViewCreate",&_HIWebViewCreate_F},
	{"WebInitForCarbon",&_WebInitForCarbon_F},
};

Nat4	VPX_WebKit_Constants_Number = 0;
Nat4	VPX_WebKit_Structures_Number = 0;
Nat4	VPX_WebKit_Procedures_Number = 2;

Nat4	loadConstants_MacOSX_WebKit(V_Environment environment);
Nat4	loadConstants_MacOSX_WebKit(V_Environment environment)
{
//        V_ExtConstant	result = NULL;
//        V_Dictionary	dictionary = environment->externalConstantsTable;
		
		return kNOERROR;
}

Nat4	loadStructures_MacOSX_WebKit(V_Environment environment);
Nat4	loadStructures_MacOSX_WebKit(V_Environment environment)
{
//        V_Structure		result = NULL;
//        V_Dictionary	dictionary = environment->externalStructsTable;
		
		return kNOERROR;
}

Nat4	loadProcedures_MacOSX_WebKit(V_Environment environment);
Nat4	loadProcedures_MacOSX_WebKit(V_Environment environment)
{
		Nat4	result = 0;
        V_Dictionary	dictionary = environment->externalProceduresTable;
        
		result = add_nodes(dictionary,VPX_WebKit_Procedures_Number,VPX_WebKit_Procedures);
		
		return kNOERROR;
}

Nat4	loadPrimitives_MacOSX_WebKit(V_Environment environment);
Nat4	loadPrimitives_MacOSX_WebKit(V_Environment environment)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
        
        if((result = extPrimitive_new("WebKit",kContinueOnSuccess,"load-url",dictionary,2,0,VPLP_load_2D_url)) == NULL) return kERROR;
        if((result = extPrimitive_new("WebKit",kContinueOnSuccess,"load-html",dictionary,3,0,VPLP_load_2D_html)) == NULL) return kERROR;

        return kNOERROR;

}


Nat4	load_MacOSX_WebKit(V_Environment environment);
Nat4	load_MacOSX_WebKit(V_Environment environment)
{
		Nat4	result = 0;
		result = loadConstants_MacOSX_WebKit(environment);
		result = loadStructures_MacOSX_WebKit(environment);
		result = loadProcedures_MacOSX_WebKit(environment);
		result = loadPrimitives_MacOSX_WebKit(environment);
		
		return result;
}


