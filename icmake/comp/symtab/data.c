#include "symtab.ih"

Symtab *gs_functions;    /* symbol table for functions   */

Symtab *gs_variables;   /* symbol table for variables */
Symtab *gs_top;         /* points to the topmost symtab */
size_t gs_nVartab = 1;
size_t gs_vartabCap = 4;

size_t *gs_nLocals;      /* number of local vars in nested levels */

