#include "parser.ih"

SemVal *p_subtract(SemVal *lval, SemVal *rval)
{
    register ExprType type;

    if (p_testBinOp(op_sub, lval, rval))
        return p_nullFrame(lval, rval);     /* test for correct types */

    p_bool2int(lval);                       /* convert pending booleans */
    p_bool2int(rval);

    if (p_conflict(lval, rval, op_sub))     /* test type p_conflict */
        return p_nullFrame(lval, rval);     /* test for correct types */

    type = lval->type;                      /* remember the type */

    if ((lval->type & rval->type & (size_t)~e_typeMask) == e_const)
        lval->evalue -= rval->evalue;
    else
    {
        p_binOp(lval, rval, op_sub);
        set_type(lval, type & (e_typeMask | e_stack));
    }

    return lval;                            /* return new expression */
}
