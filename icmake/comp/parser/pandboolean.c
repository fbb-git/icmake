/*
                            A N D B O O L E . C
*/

#include "parser.ih"

SemVal *p_andBoolean(SemVal *lexp, SemVal *rexp)
{
    if (lexp->type & rexp->type & e_const)  /* two constants: compute result */
    {
        lexp->evalue =
            (test_type(lexp, e_str) || lexp->evalue)
            &&
            (test_type(rexp, e_str) || rexp->evalue);
        set_type(lexp, e_const | e_int);
    }
    else                                    /* at least one code-part */
    {
        p_forceExpr2Bool(lexp);
        p_forceExpr2Bool(rexp);

        p_patchupTrue(lexp, 1);
        lexp->truelen = 0;
        lexp = p_catCode(lexp, rexp);
        set_type(lexp, e_bool | e_stack);
    }

    return lexp;
}
