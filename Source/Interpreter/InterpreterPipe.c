
#include "InterpreterSocket.h"

#include <stdio.h>
#include <stdlib.h>
//#include <sys/types.h>
//#include <sys/socket.h>
//#include <netinet/in.h>
//#include <netdb.h>
//#include "/usr/include/dns_sd.h"

extern void		VPLLogEngineError( Int1* outStr, Bool interpreterFlag, V_Environment environment );

Int4	VPLPipeRequest( const char* inCommand, const char* inCommandParams, char** outCommandResult, V_Environment environment )
{
	char*			doCommand = NULL;
	char*			utf8Result = NULL;
	const char*		commandFormat = "\"%s\" %s";
	Nat4			outResult = -2;
	FILE*			pipe;
	int				pipeSize = 8192;
	int				commandSize = strlen(inCommand) + strlen(inCommandParams) + strlen(commandFormat);
	Bool			haveText = kFALSE;
	
	doCommand = (char*)X_malloc( commandSize );
	if( doCommand == NULL ) goto BAIL;
	sprintf( doCommand, commandFormat, inCommand, inCommandParams );
	
	//	printf("PipeRequest command: %s", doCommand);
	
	utf8Result = (char*)X_calloc(1, pipeSize);
	if( utf8Result == NULL ) goto BAIL;
	
	pipe = popen( doCommand, "r" );
	if ( pipe ) {
		pipeSize = fread( utf8Result, 1, pipeSize, pipe );
		outResult = pclose( pipe );
	}

	if( *outCommandResult != NULL ) {
		if( pipeSize > 2 ) {
			utf8Result[pipeSize-1] = 0;
			*outCommandResult = (char*)X_realloc( utf8Result, 1, pipeSize );
			haveText = kTRUE;
		}
	}
	
BAIL:
	if( (haveText == kFALSE) && outCommandResult ) *outCommandResult = NULL;
	if( utf8Result && (haveText==kFALSE) ) X_free( utf8Result );
	if( doCommand ) X_free( doCommand );
	
	return outResult;
}


