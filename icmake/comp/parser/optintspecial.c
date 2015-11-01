#include "parser.ih"

ESTRUC_ *optint_special(E_TYPE_ type, ESTRUC_ *larg, ESTRUC_ *rarg)
{
    ESTRUC_ tmp;

    etoc(larg);                             /* arg to stack */

    if (!test_type(larg, e_int))            /* no first int arg */
    {                                       /* prefix the first argument */
        rarg = insertarg(larg, rarg);
                                            /* make 0-argument */
        tmp = *stackframe(e_int | e_const);
        larg = &tmp;                        /* larg points to inserted arg */
    }

    return specials(type, insertarg(larg, rarg));
}
