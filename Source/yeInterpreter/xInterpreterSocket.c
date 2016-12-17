
#include <stdio.h>
#include <stdlib.h>
//#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#include "/usr/include/dns_sd.h"

#include "InterpreterSocket.h"

extern void		VPLLogEngineError( Int1* outStr, Bool interpreterFlag, V_Environment environment );

void*	VPLAdvertiseHost( Int1* outErr, V_Environment environment );
void	VPLAdvertiseStop( void*	inServiceRef );
int		VPLAdvertiseGetScoket( void* inServiceRef );

void*	VPLAdvertiseHost( Int1* outErr, V_Environment environment )
{
	DNSServiceErrorType	ourZCServiceResult = 0;
	DNSServiceRef		ourZCService = NULL;
	const char*			ourZCServiceType = "_martenhi._tcp";
	TXTRecordRef*		ourZCServiceTXTRecordRef = NULL;
	char*				ourZCServiceArch = "Unknown";
	
#if defined(__VPL_PLATFORM_DARWIN__)
	const void*			ourZCServicePlatform = "Mac OS X";
#elif defined(__VPL_PLATFORM_HAIKU__)
	const void*			ourZCServicePlatform = "Haiku";
#endif
	
	char*				ourName;
	char				ourBox[255];
	char				ourZCServiceName[512];
	
	ourName = (char*)getlogin();
	gethostname(ourBox, 255);
	sprintf( ourZCServiceName, "%s@%s", ourName, ourBox );
	
#if defined(__VPL_PLATFORM_DARWIN__)
	if( VPLPipeRequest( "uname", "-p", &ourZCServiceArch, environment ) != 0 )
		ourZCServiceArch = "Unknown";
#elif defined(__VPL_PLATFORM_HAIKU__)
	ourZCServiceArch = "i386";
#endif
	
	TXTRecordCreate( ourZCServiceTXTRecordRef, 0, NULL );
	TXTRecordSetValue( ourZCServiceTXTRecordRef, "PLAT", strlen(ourZCServicePlatform), ourZCServicePlatform );
	TXTRecordSetValue( ourZCServiceTXTRecordRef, "ARCH", strlen(ourZCServiceArch), ourZCServiceArch );
	
	ourZCService = (DNSServiceRef)malloc(sizeof(DNSServiceRef));
	
	ourZCServiceResult = DNSServiceRegister( &ourZCService, 0, kDNSServiceInterfaceIndexAny, ourZCServiceName, ourZCServiceType, NULL, NULL, kVPXIDEServerPort, TXTRecordGetLength(ourZCServiceTXTRecordRef), TXTRecordGetBytesPtr(ourZCServiceTXTRecordRef), NULL, NULL );
	
	if( outErr != NULL )
		*outErr = ourZCServiceResult;
	
	if( ourZCServiceResult != 0 ) {
		free( ourZCService );
		ourZCService = NULL;
	}
	
	TXTRecordDeallocate( ourZCServiceTXTRecordRef );
	
	return (void*)ourZCService;
}

void	VPLAdvertiseStop( void*	inServiceRef )
{
	if( inServiceRef )
		DNSServiceRefDeallocate( (DNSServiceRef)inServiceRef );
}

int		VPLAdvertiseGetScoket( void* inServiceRef )
{
	int		outSocket = 0;
	
	if( inServiceRef )
		outSocket = DNSServiceRefSockFD( (DNSServiceRef)inServiceRef );
	
	return outSocket;
}


Int4	VPLOpenClientSocket( const char* serverName, unsigned short int serverPort, int* writeSocket, int* readSocket, V_Environment environment )
{
	Int4				err = 1;
	int					sock;
	struct sockaddr_in	serverAddr;
	struct hostent*		hostinfo;
	char*				report[1024];
	
	struct sockaddr_in	remoteAddr;
	socklen_t			remoteAddrSize = sizeof( remoteAddr );
	unsigned short int	remotePort = 0;
	
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

	// Connect to the server.
	err = connect( sock, (struct sockaddr *) &serverAddr, sizeof(serverAddr) );
	if( err != 0 )
		return err;
	
	err = getsockname( sock, (struct sockaddr *) &remoteAddr, &remoteAddrSize );
	if( err == 0 ) 
		remotePort = (unsigned short int)ntohs( remoteAddr.sin_port );

	sprintf( (char*)report, "Connected to Marten Interpreter at %s:%u", serverName, remotePort );
	VPLLogEngineError( (char*)report, TRUE, environment );

	if( writeSocket != NULL )
		*writeSocket = sock;
	
	if( readSocket != NULL )
		*readSocket = sock;
	
	return 0;
	//close (sock);
}


Int4	VPLOpenHostSocket( unsigned short int serverPort, int* writeSocket, int* readSocket, V_Environment environment )
{
	Int4				err = 1;
	int					sock;
	struct sockaddr_in	name;
	
	struct sockaddr_in	clientname;
	socklen_t			size;
	
	char*				clientHost = "";
	unsigned short int	clientPort = 0;
	
	char*				report[256];
	
	void*				ourService = NULL;
	
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
	
	ourService = VPLAdvertiseHost( NULL, environment );
	
	VPLLogError( "Waiting for Marten IDE...", environment );

	//	Accept Sync connection: very bad
	size = sizeof( clientname );
	sock = accept( sock, (struct sockaddr *) &clientname, &size );
	
	VPLAdvertiseStop( ourService );
	
	if( sock < 0 )
		return sock;
	
	clientHost = strdup( (const char*)inet_ntoa(clientname.sin_addr) );
	clientPort = ntohs( clientname.sin_port );
	
	sprintf ( (char*)report, "Connected to Marten IDE at %s:%u", clientHost, clientPort );
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


