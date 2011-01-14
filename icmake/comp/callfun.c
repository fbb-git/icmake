/*
                            C A L L F U N . C
*/

#include "iccomp.h"

ESTRUC_ *callfun(x, e)
    size_t
        x;
    ESTRUC_
        *e;
{
    ESTRUC_
        *a;
    register size_t
        idx,
        n_pars;
    size_t
        err,
        old_sem;

/*
    fprintf(stderr,
        "type: %d\n"
        "truelen: %d\n"
        "falselen: %d\n"
        "codelen: %d\n"
        "evalue: %d\n"
        "truelist: %p\n"
        "falselist: %p\n"
        "code: %p\n",
        e->type,
        e->truelen,
        e->falselen,
        e->codelen,
        e->evalue,
        e->truelist,
        e->falselist,
        e->code);
*/            

    if (x == funtab.n_defined)              /* function name not found ? */
        return e;                           /* nothing to do here        */


                                            /* then check correct # of args */
    n_pars = funtab.symbol[x].var.vu.i->ls.list.size;
    if ((size_t)e->type != n_pars)
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
            idx = 0;
                idx < n_pars;
                    idx++,
                    a++
        )
        {
            if
            (
                !
                (
                    ((char *)
                       funtab.symbol[x].var.vu.i->ls.list.element)[idx]
                    & a->type & ALLTYPES
                )
            )
            {
                old_sem = sem_err;
                err = 1;
                semantic("Incorrect type of argument %u of function '%s()'",
                    idx + 1, funtab.symbol[x].name);
                sem_err = old_sem;
            }
        }
        sem_err |= err;
    }

    catargs(e);                             /* convert args to code */

                                            /* call function and clean stack */
    gencode(e, op_call, funtab.symbol[x].var.vu.i->count);
    gencode(e, op_asp,  n_pars);
    set_type(e, funtab.symbol[x].var.type);

    return e;                               /* return called function code */
}
