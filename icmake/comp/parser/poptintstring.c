#include "parser.ih"

SemVal *p_optIntString(ExprType type, SemVal *larg, SemVal *rarg)
{
    p_expr2stack(larg);                             /* argument to stack */

    if
    (
        test_type(larg, e_str)              /* left is string */
        &&
        !rarg->type                         /* right is zeroframe */
    )                                       /* -> P_CHECK implied */
    {
        rarg->type = e_int | e_const;       /* indicate constant */
        rarg->evalue = P_CHECK;             /* indicate P_CHECK  */
        p_expr2stack(rarg);                         /* right arg now code */
        p_catCode(larg, rarg);                /* catenate code */
    }
    else if
    (
        test_type(larg, e_int)              /* left is int: explicit check */
        &&
        test_type(rarg, e_str)              /* right must be string */
    )
    {
        p_expr2stack(rarg);                         /* right arg to code */
        p_catCode(rarg, larg);
        larg = rarg;
    }
    else
    {
        util_semantic(gp_typeConflict, gp_funstring[type]);
        p_discard (rarg);
        return (larg);
    }

    p_callRss(larg, type);                    /* call the function */
    return (larg);
}
