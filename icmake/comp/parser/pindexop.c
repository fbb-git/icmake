#include "parser.ih"

SemVal *p_indexOp(SemVal *larg, SemVal *rarg)
{
    register int ok;
    ExprType type = f_element;
    SemVal *tmp;


    p_expr2stack(larg);                             /* arg to stack */
    p_expr2stack(rarg);                             /* arg to stack */

    /* This follows the code of `p_twoArgs.c' to compute a list/string    */
    /* element                                                          */

                                            /* first arg must be int */
    if (!test_type(larg, e_int))            /* first expression is no int */
    {
        tmp = larg;                         /* then swap    */
        larg = rarg;
        rarg = tmp;
    }

    if ( (ok = test_type(larg, e_int)) )    /* right arg must be int    */
    {                               /* second arg == list: ok */
        if (!(ok = test_type(rarg, e_list)))
        {                           /* second arg == string: ok */
            ok = test_type(rarg, e_str);
            type = f_str_el;        /* string element requested */
        }
    }

    if (ok)
    {
        p_catCode(rarg, larg);                /* make one code vector */
        p_callRss(rarg, type);
    }
    else
    {
        util_semantic(gp_typeConflict, gp_funstring[type]);
        p_discard(larg);
    }
    return (rarg);
}
