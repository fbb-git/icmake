#include "parser.ih"

SemVal *p_orBool(SemVal *lexp, SemVal *rexp)
{
    if (lexp->type & rexp->type & e_const)  /* two constants: compute result */
    {
        lexp->evalue =
            (test_type(lexp, e_str) || lexp->evalue)
            ||
            (test_type(rexp, e_str) || rexp->evalue);
        set_type(lexp, e_const | e_int);
    }
    else                                    /* at least one code-part */
    {
        p_forceExpr2Bool(lexp);                        /* boolean code */
        p_forceExpr2Bool(rexp);

        lexp->codelen -= p_rmJmpZero(lexp->codelen, lexp->falselist,
                                    lexp->falselen);
        p_patchupFalse(lexp, 1);
        lexp = p_catCode(lexp, rexp);
        set_type(lexp, e_bool | e_stack);
    }

    return (lexp);
}
