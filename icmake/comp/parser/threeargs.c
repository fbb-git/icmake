#include "parser.ih"

SemVal *threeargs(ExprType type, SemVal *larg, SemVal *marg, SemVal *rarg)
{
    register int ok;

    etoc(larg);                             /* arg to stack */
    etoc(marg);                             /* arg to stack */
    etoc(rarg);                             /* arg to stack */

    switch ((FUNNR_)type)
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
        catcode(rarg, marg);                /* make one code vector */
        catcode(rarg, larg);                /* make one code vector */
        callrss(rarg, type);
        return (rarg);
    }
    semantic(gp_typeConflict, gp_funstring[type]);
    return nullframe(larg);
}
