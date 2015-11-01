#include "parser.ih"

void make_frame()
{
    register size_t fun_idx;
    register size_t idx;
    ESTRUC_ e;

    if (!(fun_idx = g_funtab.n_defined))
        return;

    --fun_idx;
                                            /* set offset of 1st byte */
    g_funtab.symbol[fun_idx].var.vu.i->count = (size_t)ftell(g_bin);

                                            /* room for type-bytes */
    g_funtab.symbol[fun_idx].var.vu.i->ls.list.element =
                            xrealloc(NULL, gp_nParams * sizeof(char));

                                            /* store # of params */
    g_funtab.symbol[fun_idx].var.vu.i->ls.list.size = gp_nParams;
                                            
    for (idx = 0; idx != gp_nParams; ++idx)   /* assign param. types to str */
        ((char *)g_funtab.symbol[fun_idx].var.vu.i->ls.list.element)[idx] =
                     (char)(gp_local.symbol[idx].var.type & ALLTYPES);

    if (gp_local.n_defined - gp_nParams)         /* any local variables ? */
    {
        e = *stackframe(0);                 /* initialize empty frame */
        gencode(&e, op_frame);              /* generate frame instruction */
        outbin(e.code, e.codelen);          /* write to g_bin */
        free(e.code);
    }
}
