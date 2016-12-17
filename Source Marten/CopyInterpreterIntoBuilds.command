#!/bin/bash

#
#	Copy Interpreter.app into Marten.app builds
#				      v. 1.0	
#
#				for Andescotia, LLC.
#
#	Jack Small						June 5, 2008
#

CMDPATH="`dirname "$0"`"
MARTENAPPNAME="Marten.app"
MARTENDEMOAPPNAME="Marten Demo.app"
MARTENINTERPNAME="Interpreter_d.app"
MARTENRES="$CMDPATH/$MARTENAPPNAME/Contents/Resources"
MARTENDEMORES="$CMDPATH/Marten Demo.app/Contents/Resources"
DIDANY=0

if [[ -e "$MARTENRES/$MARTENINTERPNAME" ]] ; then
	echo "Removing existing $MARTENINTERPNAME from $MARTENAPPNAME"
	rm -R "$CMDPATH/$MARTENAPPNAME/Contents/Resources/$MARTENINTERPNAME"
fi

if [[ -e "$MARTENDEMORES/$MARTENINTERPNAME" ]] ; then
	echo "Removing existing Interpreter_d.app from $MARTENDEMOAPPNAME"
	rm -R "$CMDPATH/$MARTENDEMOAPPNAME/Contents/Resources/$MARTENINTERPNAME"
fi

if [[ -e "$CMDPATH/$MARTENAPPNAME" ]] ; then
	echo "Moving $MARTENINTERPNAME into $MARTENAPPNAME"
	cp -R "$CMDPATH/../../( Xcode Projects )/( xcbuild )/Marten Release/$MARTENINTERPNAME" "$MARTENRES"
	DIDANY=1
fi

if [[ -e "$CMDPATH/$MARTENDEMOAPPNAME" ]] ; then
	echo "Moving $MARTENINTERPNAME into $MARTENDEMOAPPNAME"
	cp -R "$CMDPATH/../../( Xcode Projects )/( xcbuild )/Marten Release/$MARTENINTERPNAME" "$MARTENDEMORES"
	DIDANY=1
fi

if [[ $DIDANY == 0 ]] ; then
	echo
	echo "Marten Interpreter Copy Script"
	echo
	echo "This script will copy the $MARTENINTERPNAME into the /Contents/Resources/"
	echo "directory of $MARTENAPPNAME and/or $MARTENDEMOAPPNAME"
	echo
	echo "To use, place this into the Source Marten/( build ) folder"
	echo "and double-click."
	echo
fi
