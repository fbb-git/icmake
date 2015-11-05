#include "symtab.ih"

size_t symtabLastFunction() /* idx of last defined function       */
{
    return gs_functions.nFunctions - 1;
}
