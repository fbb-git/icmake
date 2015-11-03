#include "parser.ih"

SemVal *optint_special(ExprType type, SemVal *larg, SemVal *rarg)
{
    SemVal tmp;

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
