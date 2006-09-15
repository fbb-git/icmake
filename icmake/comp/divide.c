/*
                            D I V I D E . C
*/

#include "iccomp.h"

ESTRUC_ *divide (lval, rval)
    ESTRUC_
        *lval,
        *rval;
{
    if (test_binop(op_div, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_div))       /* test type conflict */
        return(lval);

    if (test_type(rval, e_const))
    {
        if (!rval->evalue)                  /* expression / 0: not allowed */
        {
            semantic("division by 0: undefined");
            clearbin(lval, rval);
            return (lval);
        }
        if (test_type(lval, e_const))
        {
            lval->evalue /= rval->evalue;
            return (lval);
        }
    }

    defcode(lval, rval, op_div);
    return (lval);                          /* return new expression */
}
