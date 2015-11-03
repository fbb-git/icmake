/*
                            B O R . C
*/

#include "parser.ih"

SemVal *bor(SemVal *lval, SemVal *rval)
{
    if (test_binop(op_bor, lval, rval))
        return lval;                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_bor))       /* test type conflict */
        return lval;

    if ((lval->type & rval->type & (size_t)~e_typeMask) == e_const)
        lval->evalue |= rval->evalue;
    else
        defcode(lval, rval, op_bor);

    return lval;                          /* return new expression */
}
