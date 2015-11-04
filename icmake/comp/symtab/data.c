#include "symtab.ih"

FunInfo *gs_functions = NULL;   /* symbol table for functions */
size_t gs_nFunctions = 0;
size_t gs_funCapacity = initialCapacity;

VarInfo *gs_global = NULL;      /* symbol table for global variables */
size_t gs_nGlobals = 0;
size_t gs_globCapacity = initialCapacity;

VarInfo *gs_local = NULL;       /* symbol table for local variables  */
size_t gs_nLocals = 0;
size_t gs_locCapacity = initialCapacity;

VarInfoRef *gs_level = NULL;  /* pointers to VarInfo pointers per nesting
                             level. At each nesting level a new VarInfo
                             * array is used containing pointers to the
                             VarInfo records of variables that are
                             defined at that level.
                             At the end of a function gs_level is reset,
                             and gs_local contains the info of all
                             variables that are locally defined,
                             allowing the frame to be constructed
                         */
size_t gs_nestingLevel = 0;
size_t gs_levelCapacity = initialCapacity;

VarInfo **gs_top;        /* points to the topmost local level */




//
//
//Symtab *gs_functions;    /* symbol table for functions   */
//
//Symtab *gs_variables;   /* symbol table for variables */
//Symtab *gs_top;         /* points to the topmost symtab */
//size_t gs_nVartab = 1;
//size_t gs_vartabCap = 4;
//
//size_t *gs_nLocals;      /* number of local vars in nested levels */

