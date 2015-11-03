#include "symtab.ih"

void symtabSetLastFunction(size_t nParams)
{
    if (gs_functions->nSymbols == 0)
        return;

                                            /* addr. of last function info */
    Symbol *last = &gs_functions[gs_functions->nSymbols - 1];

                                            /* set offset of 1st byte       */
    last->var.vu.i->count = (size_t)ftell(g_bin);

    last->var.vu.i->ls.list.element =       /* room for type-bytes */
                                xrealloc(NULL, nParams * sizeof(char));

    last->var.vu.i->ls.list.size = nParams; /* store # of params */

//                                            /* assign param. types to str */
//    register char *type = (char *)last->var.vu.i->ls.list.element;
//    for (size_t idx = 0; idx != nParams; ++idx)   
//        type[idx] =
//                     (char)(gp_local.symbol[idx].var.type & ALLTYPES);

//    ESTRUC_ e;


//    if (gp_local.n_defined - gp_nParams)         /* any local variables ? */
//    {
//        e = *stackframe(0);                 /* initialize empty frame */
//        gencode(&e, op_frame);              /* generate frame instruction */
//        outbin(e.code, e.codelen);          /* write to g_bin */
//        free(e.code);
//    }

}










