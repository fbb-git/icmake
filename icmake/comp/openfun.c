/*
                                O P E N F U N . C
*/

#include "iccomp.h"

void open_fun()
{
    register unsigned
        index,
        last;

    entertab = &funtab;                     /* store a function */
    enter();                                /* enter its name */

                                            /* set proper function type */
    funtab.symbol[funtab.n_defined - 1].var.type |= e_reg;
    funtab.symbol[funtab.n_defined - 1].var.vu.i =
                          xrealloc(NULL, sizeof(INTER_));

    for                                     /* free former local names */
    (
        index = 0,
        last = local.n_defined;
            index < last;
                index++
    )
        free(local.symbol[index].name);

    local.n_defined = 0;                    /* no symbols defined as yet */
    entertab = &local;                      /* next table to enter: local */
    n_params = 0;                           /* no parameters as yet */
    dead_sp = 0;                            /* allow code generation */
    dead[0] = 0;
}
