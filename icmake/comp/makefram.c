/*
                                M A K E F R A M . C
*/

#include "iccomp.h"

void make_frame()
{
    register size_t
        fun_idx,
        idx;
    ESTRUC_
        e;

    if (!(fun_idx = funtab.n_defined))
        return;

    fun_idx--;

                                            /* set offset of 1st byte */
    funtab.symbol[fun_idx].var.vu.i->count =
                                        (size_t)ftell(s_bin);

                                            /* room for type-bytes */
    funtab.symbol[fun_idx].var.vu.i->ls.list.element =
                        xrealloc(NULL, n_params * sizeof(char));
                                            /* store # of params */
    funtab.symbol[fun_idx].var.vu.i->ls.list.size = n_params;
                                            /* assign parameter types to str */
    for (idx = 0; idx < n_params; idx++)
        ((char *)funtab.symbol[fun_idx].var.vu.i->ls.list.element)[idx] =
                     (char)(local.symbol[idx].var.type & ALLTYPES);

    if (local.n_defined - n_params)         /* any local variables ? */
    {
        e = *stackframe(0);                 /* initialize empty frame */
        gencode(&e, op_frame);              /* generate frame instruction */
        outbin(e.code, e.codelen);          /* write to s_bin */
        free(e.code);
    }
}
