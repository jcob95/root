// @(#)root/pyroot:$Name:  $:$Id: TPython.h,v 1.3 2004/04/27 14:44:02 rdm Exp $
// Author: Wim Lavrijsen   April 2004

#ifndef ROOT_TPython
#define ROOT_TPython

// Bindings
#include "TPyReturn.h"

// ROOT
#ifndef ROOT_TObject
#include "TObject.h"
#endif


class TPython {

private:
   static bool Initialize();

public:
// execute a python statement (e.g. "import ROOT" )
   static void Exec( const char* cmd );

// evaluate a python expression (e.g. "1+1")
   static const TPyReturn& Eval( const char *expr );

// bind a ROOT object with, at the python side, the name "label"
   static bool Bind( TObject* obj, const char* label );

// enter an interactive python session (exit with ^D)
   static void Prompt();

   ClassDef(TPython,0)
};

#endif
