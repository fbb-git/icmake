#include "parser.ih"

SemVal *p_optIntSpecial(ExprType type, SemVal *larg, SemVal *rarg)
{
    SemVal tmp;

    p_expr2stack(larg);                             /* arg to stack */

    if (!test_type(larg, e_int))            /* no first int arg */
    {                                       /* prefix the first argument */
        rarg = p_insertArg(larg, rarg);
                                            /* make 0-argument */
        tmp = *p_stackFrame(e_int | e_const);
        larg = &tmp;                        /* larg points to inserted arg */
    }

    return p_specials(type, p_insertArg(larg, rarg));
}
