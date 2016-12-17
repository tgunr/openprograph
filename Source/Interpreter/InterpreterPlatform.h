/*
 *  InterpreterPlatform.h
 *  MartenInterpreterApp
 *
 *  Created by Jack Small on 7/1/09.
 *  Copyright 2009 Andescotia LLC. All rights reserved.
 *
 */

#include "InterpreterRoutines.h"

Bool	platformIsIDELaunch( Bool isIDELaunch, V_Environment environment );
void	platformLaunchComplete( V_Environment environment );
char*	platformPathToRunObject( V_Environment environment );
void	platformBringToFront( V_Environment environment );

#if __VPL_EDITOR_IS_THREADED__
void	platformYieldToThread( enum whichThread theThread, V_Environment environment );
void	platformYieldToEditor( V_Environment environment );
#endif // __VPL_EDITOR_IS_THREADED__

void	platformEnvironmentResourcesChanged( V_Environment environment );
Bool	platformLoadLibraryAtPath( vpl_StringPtr loadFuncName, vpl_StringPtr libraryPath, V_Environment environment );
Bool	platformLoadLibraryName( Bool isCLILaunch, vpl_StringPtr libName, V_Environment environment );

Bool	platformIsCommandBadgeEnabled( V_Environment environment );
void	platformEnableCommandBadge( Bool drawBadge, V_Environment environment );
void	platformDrawCommandBadge( Int1 CommandState, Int1 theCommand, V_Environment environment );



