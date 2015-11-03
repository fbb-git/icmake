#include "symtab.ih"

Symbol const *symtabLastFunction() /* addr. of last defined function       */
{
    return gs_functions->nSymbols == 0 ? 
                NULL
            :
                &gs_functions->symbol[gs_functions->nSymbols - 1];
}
