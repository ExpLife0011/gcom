/*

Copyright (c) 1999, 2000 Samuel A. Falvo II

This software is provided 'as-is', without any implied or express warranty.
In no event shall the authors be held liable for damages arising from the
use this software.

Permission is granted for anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
   claim that you wrote the original software. If you use this software in a
   product, an acknowledgment in the product documentation would be
   appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be
   misrepresented as being the original software.

3. This notice may not be removed or altered from any source
   distribution.

*/

#ifndef GCOM_DLL_H
#define GCOM_DLL_H

/*
 * gcom/dll.h
 * GCOM Release 0.1
 */

#include <gcom/types.h>
#include <dlfcn.h>

/************************************************************************/
/* Dynamic Link Library Definitions					*/
/************************************************************************/

typedef uint32 HDLL;	

HRESULT	gCoLoadDLL( wchar *, HDLL * );
HRESULT gCoUnloadDLL( HDLL );
HRESULT gCoGCOMDLLInit( HDLL );
void	gCoGCOMDLLExpunge( HDLL );

HRESULT gCoGetDLLSymbol( HDLL, wchar *, void ** );
HRESULT gCoDLLGetClassObject( HDLL, REFCLSID, REFIID, void ** );
HRESULT gCoDLLCanUnloadNow( HDLL );

void CoFreeUnusedLibraries( void );

#endif
