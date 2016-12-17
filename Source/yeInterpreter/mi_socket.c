#include "InterpreterRoutines.h"

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
//#include <netinet/in.h>
#include <netdb.h>

//int	open_client_socket( const char* serverName, unsigned short int serverPort, int* outSocket );
int	open_host_socket( unsigned short int serverPort, int* writeSocket, int* readSocket, V_Environment environment );
Int4	VPLPipeRequest( const char* inCommand, const char* inCommandParams, char** outCommandResult, V_Environment environment );

int	open_client_socket( const char* serverName, unsigned short int serverPort, int* outSocket )
{
	int					err = 1;
	int					sock;
	struct sockaddr_in	serverAddr;
	struct hostent*		hostinfo;

	fprintf( stderr, "Create Client Socket\n" );
	// Create the socket
	sock = socket( PF_INET, SOCK_STREAM, 0 );
	if (sock < 0)
		return sock;
		
	//	init sockaddr
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons( serverPort );
	hostinfo = gethostbyname( serverName );
	if (hostinfo == NULL) 
		return 2;	
	serverAddr.sin_addr = *(struct in_addr *) hostinfo->h_addr;

	fprintf( stderr, "Ready to connect\n" );
	// Connect to the server.
	err = connect (sock, (struct sockaddr *) &serverAddr, sizeof (serverAddr));
	if( err != 0 )
		return err;
		
	if( outSocket != NULL )
		*outSocket = sock;
	
	return err;
	//close (sock);
}

int	open_host_socket( unsigned short int serverPort, int* writeSocket, int* readSocket, V_Environment environment )
{
	int					err = 1;
	int					sock;
	struct sockaddr_in	name;
	
	struct sockaddr_in	clientname;
	socklen_t			size;
	
	char*				clientHost = "";
	unsigned short int	clientPort = 0;
	
	char*				report[256];
	
	//	Create the socket
	sock = socket( PF_INET, SOCK_STREAM, 0 );
	if (sock < 0)
		return sock;
	
	//	Give the socket a name
	name.sin_family = AF_INET;
	name.sin_port = htons (serverPort);
	name.sin_addr.s_addr = htonl (INADDR_ANY);

	err = bind( sock, (struct sockaddr *) &name, sizeof(name) );
	if( err < 0 )
		return err;
	
	err = listen( sock, 1 );
	if( err < 0 )
		return err;
	
	VPLLogError( "Server: waiting for client...", environment );

	//	Accept Sync connection: very bad
	size = sizeof( clientname );
	sock = accept( sock, (struct sockaddr *) &clientname, &size );
	if( sock < 0 )
		return sock;
	
	clientHost = strdup( (const char*)inet_ntoa(clientname.sin_addr) );
	clientPort = ntohs( clientname.sin_port );
	
	sprintf ( (char*)report, "Server: connected with interpreter at %s:%u", clientHost, clientPort );
	VPLLogError( report, environment );
	
	if( readSocket != NULL ) {
		*readSocket = sock;
	}
	
	if( writeSocket != NULL ) {
		*writeSocket = sock;
	}

	return 0;
}


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
