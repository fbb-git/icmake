#include "symtab.ih"

size_t symtab_lastFunction() /* idx of last defined function       */
{
    return gs_functions.nFunctions - 1;
}
