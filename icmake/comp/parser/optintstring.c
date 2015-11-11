#include "parser.ih"

SemVal *optint_string(ExprType type, SemVal *larg, SemVal *rarg)
{
    eToStack(larg);                             /* argument to stack */

    if
    (
        test_type(larg, e_str)              /* left is string */
        &&
        !rarg->type                         /* right is zeroframe */
    )                                       /* -> P_CHECK implied */
    {
        rarg->type = e_int | e_const;       /* indicate constant */
        rarg->evalue = P_CHECK;             /* indicate P_CHECK  */
        eToStack(rarg);                         /* right arg now code */
        catcode(larg, rarg);                /* catenate code */
    }
    else if
    (
        test_type(larg, e_int)              /* left is int: explicit check */
        &&
        test_type(rarg, e_str)              /* right must be string */
    )
    {
        eToStack(rarg);                         /* right arg to code */
        catcode(rarg, larg);
        larg = rarg;
    }
    else
    {
        util_semantic(gp_typeConflict, gp_funstring[type]);
        discard (rarg);
        return (larg);
    }

    callrss(larg, type);                    /* call the function */
    return (larg);
}
