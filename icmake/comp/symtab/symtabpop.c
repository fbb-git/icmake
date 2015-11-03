#include "symtab.ih"

void symtabPop()
{
    size_t *count = gs_nLocals + gs_nVartab - 1;

    if (gs_top->nSymbols > *count)
        *count = gs_top->nSymbols;      /* update this level's local count */

    free(gs_top->symbol);               /* free the Symtab's memory */
    
    --gs_top;                   /* reduce the pointer to the previous tab   */
    --gs_nLocals;               /* reduce the # of available tables         */
}
