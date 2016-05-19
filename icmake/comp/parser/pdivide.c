#include "parser.ih"

SemVal *p_divide(SemVal *lval, SemVal *rval)
{
    if (p_testBinOp(op_div, lval, rval))
        return p_nullFrame(lval, rval);     /* test for correct types */

    p_bool2int(lval);                       /* convert pending booleans */
    p_bool2int(rval);

    if (p_conflict(lval, rval, op_div))     /* test type p_conflict */
        return p_nullFrame(lval, rval);

    if (test_type(rval, e_const))
    {
        if (!rval->evalue)                  /* expression / 0: not allowed */
        {
            util_semantic("division by 0: undefined");
            return p_nullFrame(lval, rval);
        }

        if (test_type(lval, e_const))
        {
            lval->evalue /= rval->evalue;
            return lval;
        }
    }

    p_binOp(lval, rval, op_div);
    return lval;                            /* return new expression */
}



