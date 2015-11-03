#include "symtab.ih"

size_t symtab_nGlobalVariables()
{
    return gs_variables->nSymbols;
}
