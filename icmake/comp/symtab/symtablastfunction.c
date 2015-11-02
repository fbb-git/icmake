#include "symtab.ih"

Symbol const *symtabLastFunction() /* addr. of last defined function       */
{
    return &gs_functions->symbol[gs_functions->nSymbols - 1];
}
