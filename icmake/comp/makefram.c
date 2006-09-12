/*
                                M A K E F R A M . C
*/

#include "iccomp.h"

void make_frame()
{
    register unsigned
        fun_index,
        index;
    ESTRUC_
        e;

    if (!(fun_index = funtab.n_defined))
        return;

    fun_index--;

                                            /* set offset of 1st byte */
    funtab.symbol[fun_index].var.vu.i->count =
                                        (unsigned)ftell(s_bin);

                                            /* room for type-bytes */
    funtab.symbol[fun_index].var.vu.i->ls.list.element =
                        xrealloc(NULL, n_params * sizeof(char));
                                            /* store # of params */
    funtab.symbol[fun_index].var.vu.i->ls.list.size = n_params;
                                            /* assign parameter types to str */
    for (index = 0; index < n_params; index++)
        ((char *)funtab.symbol[fun_index].var.vu.i->ls.list.element)[index] =
                     (char)(local.symbol[index].var.type & ALLTYPES);

    if (local.n_defined - n_params)         /* any local variables ? */
    {
        e = stackframe(0);                  /* initialize empty frame */
        gencode(&e, op_frame);              /* generate frame instruction */
        outbin(e.code, e.codelen);          /* write to s_bin */
        free(e.code);
    }
}
