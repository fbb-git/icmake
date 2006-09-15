/*
                            C A L L F U N . C
*/

#include "iccomp.h"

ESTRUC_ *callfun(x, e)
    unsigned
        x;
    ESTRUC_
        *e;
{
    ESTRUC_
        *a;
    register unsigned
        index,
        n_pars;
    unsigned
        err,
        old_sem;

    if (x != funtab.n_defined)              /* function name found ? */
    {                                       /* then check correct # of args */
        n_pars = funtab.symbol[x].var.vu.i->ls.list.size;
        if ((unsigned)e->type != n_pars)
        {
            err = 1;
            semantic("Function '%s()' requires %u arguments",
                        funtab.symbol[x].name, n_pars);
        }
        else
        {                                   /* and check argument types */
            for
            (
                err = 0,
                a = (ESTRUC_ *)e->code,
                index = 0;
                    index < n_pars;
                        index++,
                        a++
            )
            {
                if
                (
                    !
                    (
                        ((char *)
                           funtab.symbol[x].var.vu.i->ls.list.element)[index]
                        & a->type & ALLTYPES
                    )
                )
                {
                    old_sem = sem_err;
                    err = 1;
                    semantic("Incorrect type of argument %u of function '%s()'",
                        index + 1, funtab.symbol[x].name);
                    sem_err = old_sem;
                }
            }
            sem_err |= err;
        }
    }
    else
        n_pars = 0;                         /* prevent unitialized n_pars */

    catargs(e);                             /* convert args to code */

                                            /* call function and clean stack */
    gencode(e, op_call, funtab.symbol[x].var.vu.i->count);
    gencode(e, op_asp,  n_pars);
    set_type(e, funtab.symbol[x].var.type);

    return (e);                             /* return called function code */
}
