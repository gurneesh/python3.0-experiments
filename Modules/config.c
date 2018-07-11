/* Generated automatically from ./Modules/config.c.in by makesetup. */
/* -*- C -*- ***********************************************
Copyright (c) 2000, BeOpen.com.
Copyright (c) 1995-2000, Corporation for National Research Initiatives.
Copyright (c) 1990-1995, Stichting Mathematisch Centrum.
All rights reserved.

See the file "Misc/COPYRIGHT" for information on usage and
redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
******************************************************************/

/* Module configuration */

/* !!! !!! !!! This file is edited by the makesetup script !!! !!! !!! */

/* This file contains the table of built-in modules.
   See init_builtin() in import.c. */

#include "Python.h"

#ifdef __cplusplus
extern "C" {
#endif


extern PyObject* PyInit__thread(void);
extern PyObject* PyInit_signal(void);
extern PyObject* PyInit_posix(void);
extern PyObject* PyInit_errno(void);
extern PyObject* PyInit_pwd(void);
extern PyObject* PyInit__sre(void);
extern PyObject* PyInit__codecs(void);
extern PyObject* PyInit__fileio(void);
extern PyObject* PyInit__weakref(void);
extern PyObject* PyInit__bytesio(void);
extern PyObject* PyInit__stringio(void);
extern PyObject* PyInit_zipimport(void);
extern PyObject* PyInit__symtable(void);
extern PyObject* PyInit_xxsubtype(void);

/* -- ADDMODULE MARKER 1 -- */

extern PyObject* PyMarshal_Init(void);
extern PyObject* PyInit_imp(void);
extern PyObject* PyInit_gc(void);
extern PyObject* PyInit__ast(void);
extern PyObject* _PyWarnings_Init(void);

struct _inittab _PyImport_Inittab[] = {

	{"_thread", PyInit__thread},
	{"signal", PyInit_signal},
	{"posix", PyInit_posix},
	{"errno", PyInit_errno},
	{"pwd", PyInit_pwd},
	{"_sre", PyInit__sre},
	{"_codecs", PyInit__codecs},
	{"_fileio", PyInit__fileio},
	{"_weakref", PyInit__weakref},
	{"_bytesio", PyInit__bytesio},
	{"_stringio", PyInit__stringio},
	{"zipimport", PyInit_zipimport},
	{"_symtable", PyInit__symtable},
	{"xxsubtype", PyInit_xxsubtype},

/* -- ADDMODULE MARKER 2 -- */

	/* This module lives in marshal.c */
	{"marshal", PyMarshal_Init},

	/* This lives in import.c */
	{"imp", PyInit_imp},

	/* This lives in Python/Python-ast.c */
	{"_ast", PyInit__ast},

	/* These entries are here for sys.builtin_module_names */
	{"__main__", NULL},
	{"builtins", NULL},
	{"sys", NULL},

	/* This lives in gcmodule.c */
	{"gc", PyInit_gc},

	/* This lives in _warnings.c */
	{"_warnings", _PyWarnings_Init},

	/* Sentinel */
	{0, 0}
};


#ifdef __cplusplus
}
#endif