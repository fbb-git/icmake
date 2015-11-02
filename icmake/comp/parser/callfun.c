#include "parser.ih"

ESTRUC_ *callfun(int funIdx, ESTRUC_ *e)
{
    ESTRUC_ *a;
    register size_t idx;
    register size_t n_pars;
    size_t err;
    size_t old_sem;

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

    if (funIdx == -1)                   /* function name not found ? */
        return e;                       /* nothing to do here        */


                                            /* then check correct # of args */
    n_pars = g_funtab.symbol[funIdx].var.vu.i->ls.list.size;
    if ((size_t)e->type != n_pars)
    {
        err = 1;
        semantic("Function '%s()' requires %u arguments",
                    g_funtab.symbol[funIdx].name, n_pars);
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
                       g_funtab.symbol[funIdx].var.vu.i->ls.list.element)[idx]
                    & a->type & ALLTYPES
                )
            )
            {
                old_sem = g_sem_err;
                err = 1;
                semantic("Incorrect type of argument %u of function '%s()'",
                    idx + 1, g_funtab.symbol[funIdx].name);
                g_sem_err = old_sem;
            }
        }
        g_sem_err |= err;
    }

    catargs(e);                             /* convert args to code */

                                            /* call function and clean stack */
    gencode(e, op_call, g_funtab.symbol[funIdx].var.vu.i->count);
    gencode(e, op_asp,  n_pars);
    set_type(e, g_funtab.symbol[funIdx].var.type);

    return e;                               /* return called function code */
}
