#ifndef INTERPRETERPIPE
#define INTERPRETERPIPE

#ifndef MARTENHEADERS
#include <MartenEngine/MartenEngine.h>
#endif	//	MARTENHEADERS

Int4	VPLPipeRequest( const char* inCommand, const char* inCommandParams, char** outCommandResult, V_Environment environment );


#endif	//	INTERPRETERPIPE

