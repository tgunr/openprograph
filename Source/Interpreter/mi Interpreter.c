/* A VPL Project File */
/*

mi Interpreter.c
Copyright: 2004 Scott B. Anderson

*/

#include "InterpreterRoutines.h"
#include "InterpreterPlatform.h"
#include "InterpreterOpen.c"

void print_usage( char* cli_name );
void print_usage( char* cli_name )
{
	printf( "\n" );
	printf( "**** Marten Command Line Interpreter\n" );
	printf( "**** (C) 2008 Andescotia, LLC.\n" );
	printf( "\n" );
	printf( "Usage: %s [-help] [-x] <path-to-vpz> [parameters to pass]\n", cli_name );
	printf( "\n" );
	printf( "This utility runs a Marten Interpreter script, which is\n" );
	printf( "typically designated with a .vpz file extension.\n" );
	printf( "\n" );
	printf( "You can also create executable versions of a script by passing\n" );
	printf( "the -x token.  \n" );

	return;
}

void run_banger( char* cli_name, int argCount, char* args[] );
void run_banger( char* cli_name, int argCount, char* args[] )
{
	const char*					bangExecutableSuffix = "-al";
	char*						bangerPath;
	int							index;
	
	bangerPath = (char*) malloc( 4192 );
	if( bangerPath == NULL ) return;

	sprintf( bangerPath, "%s%s", cli_name, bangExecutableSuffix );
	
	for( index=0; index<argCount; index++ )
		sprintf( bangerPath, "%s '%s'",bangerPath, args[index] );
	
//	printf( "Running tool:\n\t%s\n", bangerPath );
	system( bangerPath );
	
	return;
}

int main(int argc, char *argv[])
{
	Bool						isIDELaunch = FALSE;
	
	Bool						isCLILaunch = FALSE;
	char*						iCLIPath = NULL;
	Int1						paramSkipCount = 1;
	
	const char*					helpToken = "-help";
	const char*					bangToken = "-x";
	const char*					ideToken = "--ide";
	char*						ideType = NULL;
	
	const char*					stdioToken = "--stdio";
	char*						stdioPath;
	
	if( argc == 1 ) {
		print_usage( argv[0] );
		return kNOERROR;
	}
	
	if( argc >= 2 ) {
		if( (strcmp(argv[1], helpToken)) == 0 ) {
			print_usage( argv[0] );
			return kNOERROR;
		}
		if( (strcmp(argv[1], bangToken)) == 0 ) {
			run_banger( argv[0],argc-2, &argv[2] );
			return kNOERROR;
		}
		if( (strcmp(argv[1], ideToken)) == 0 )
		{
			isIDELaunch = TRUE;
			ideType = argv[2];
			paramSkipCount += 2;
			if( argc >= 4 ) {
				isCLILaunch = TRUE;
				iCLIPath = strdup(argv[3]);
			}
		}
		if( (strcmp(argv[1], stdioToken)) == 0 )
		{
			isCLILaunch = TRUE;
			iCLIPath = strdup(argv[3]);
			stdioPath = argv[2];
			freopen( stdioPath, "w", stdout );
			if( freopen( stdioPath, "a+", stdin ) == NULL ) fprintf( stderr, "Couldn't reopen stdin.\n" );
			paramSkipCount += 2;
		} else {
			isCLILaunch = TRUE;
			iCLIPath = strdup(argv[1]);
		}
	} else {
		print_usage( argv[0] );
		return kNOERROR;
	}

	return interpreterMain( isIDELaunch, ideType, isCLILaunch, iCLIPath, argc-paramSkipCount, &argv[paramSkipCount] );	
}
