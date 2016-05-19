#include "symtab.ih"

FunInfoTab gs_functions;       /* symbol table for functions */

VarTab *gs_compareTable;       /* set by st_findVar for st_compareVars */

VarRef gs_vars;

