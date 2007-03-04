/*
                                O P E N F U N . C
*/

#include "iccomp.h"

void open_fun()
{
    register size_t
        idx,
        last;

    entertab = &funtab;                     /* store a function */
    enter();                                /* enter its name */

                                            /* set proper function type */
    funtab.symbol[funtab.n_defined - 1].var.type |= e_reg;
    funtab.symbol[funtab.n_defined - 1].var.vu.i =
                          xrealloc(NULL, sizeof(INTER_));

    for                                     /* free former local names */
    (
        idx = 0,
        last = local.n_defined;
            idx < last;
                idx++
    )
        free(local.symbol[idx].name);

    local.n_defined = 0;                    /* no symbols defined as yet */
    entertab = &local;                      /* next table to enter: local */
    n_params = 0;                           /* no parameters as yet */
    dead_sp = 0;                            /* allow code generation */
    dead[0] = 0;
}
