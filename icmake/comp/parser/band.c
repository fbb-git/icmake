/*
                            B A N D . C
*/

#include "parser.ih"

SemVal *band(SemVal *lval, SemVal *rval)
{
    if (test_binop(op_band, lval, rval))
        return lval;                        /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_band))       /* test type conflict */
        return lval;

    if ((lval->type & rval->type & (size_t)~e_typeMask) == e_const)
        lval->evalue &= rval->evalue;
    else
        defcode(lval, rval, op_band);

    return lval;                            /* return new expression */
}
