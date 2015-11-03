#include "symtab.ih"

size_t symtabSetLastFunction(size_t nParams)
{
    if (gs_functions->nSymbols == 0)
        return 0;

                                            /* addr. of last function info */
    Symbol *last = gs_functions[gs_functions->nSymbols - 1].symbol;

                                            /* set offset of 1st byte       */
    last->var.vu.i->count = (size_t)ftell(g_bin);

    last->var.vu.i->ls.list.element =       /* room for type-bytes */
                                xrealloc(NULL, nParams * sizeof(char));

    last->var.vu.i->ls.list.size = nParams; /* store # of params */

    st_setParamTypes(last, nParams);        /* assign param. types */

    return symtab_nLocalVariables();        /* return # of local variables */
}










