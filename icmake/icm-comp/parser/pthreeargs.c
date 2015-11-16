#include "parser.ih"

SemVal *p_threeArgs(ExprType type, SemVal *larg, SemVal *marg, SemVal *rarg)
{
    register int ok;

    p_expr2stack(larg);                             /* arg to stack */
    p_expr2stack(marg);                             /* arg to stack */
    p_expr2stack(rarg);                             /* arg to stack */

    switch ((FunNr)type)
    {
        case f_substr:
            ok = test_type(larg, e_str) && 
                test_type(marg, e_int) && test_type(rarg, e_int);
        break;

        default:
            ok = 0;
    }

    if (ok)
    {
        p_catCode(rarg, marg);                /* make one code vector */
        p_catCode(rarg, larg);                /* make one code vector */
        p_callRss(rarg, type);
        return (rarg);
    }
    util_semantic(gp_typeConflict, gp_funstring[type]);
    return p_nullFrame(larg);
}
