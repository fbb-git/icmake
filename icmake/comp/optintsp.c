/*
                             O P T I N T S P . C

*/

#include "iccomp.h"

ESTRUC_ *optint_special(type, larg, rarg)
    E_TYPE_
        type;
    ESTRUC_
        *larg,
        *rarg;
{
    ESTRUC_
        tmp;

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
