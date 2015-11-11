#include "parser.ih"

SemVal *subtract(SemVal *lval, SemVal *rval)
{
    register ExprType type;

    if (test_binop(op_sub, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_sub))       /* test type conflict */
        return(lval);

    type = lval->type;                      /* remember the type */

    if ((lval->type & rval->type & (size_t)~e_typeMask) == e_const)
        lval->evalue -= rval->evalue;
    else
    {
        defcode(lval, rval, op_sub);
        set_type(lval, type & (e_typeMask | e_stack));
    }

    return (lval);                          /* return new expression */
}
