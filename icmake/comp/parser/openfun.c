#include "parser.ih"

void open_fun()
{
    register size_t
        idx,
        last;

    g_entertab = &g_funtab;                     /* store a function */
    enter();                                /* enter its name */

                                            /* set proper function type */
    g_funtab.symbol[g_funtab.n_defined - 1].var.type |= e_reg;
    g_funtab.symbol[g_funtab.n_defined - 1].var.vu.i =
                          xrealloc(NULL, sizeof(INTER_));

    for                                     /* free former local names */
    (
        idx = 0,
        last = gp_local.n_defined;
            idx < last;
                idx++
    )
        free(gp_local.symbol[idx].name);

    gp_local.n_defined = 0;                    /* no symbols defined as yet */
    g_entertab = &gp_local;                      /* next table to enter: local */
    gp_nParams = 0;                           /* no parameters as yet */
    g_dead_sp = 0;                            /* allow code generation */
    g_dead[0] = 0;
}
