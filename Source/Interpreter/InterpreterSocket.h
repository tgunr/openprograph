
#ifndef INTERPRETERSOCKET
#define INTERPRETERSOCKET

#define kVPXIDEServerPort	2222

Int4	VPLOpenClientSocket( const char* serverName, unsigned short int serverPort, int* writeSocket, int* readSocket, V_Environment environment );
Int4	VPLOpenHostSocket( unsigned short int serverPort, int* writeSocket, int* readSocket, V_Environment environment );
Int4	VPLPipeRequest( const char* inCommand, const char* inCommandParams, char** outCommandResult, V_Environment environment );


#endif	//	INTERPRETERSOCKET

