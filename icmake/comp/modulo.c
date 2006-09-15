/*
                            M O D U L O . C
*/

#include "iccomp.h"

ESTRUC_ *modulo (lval, rval)
    ESTRUC_
        *lval,
        *rval;
{
    if (test_binop(op_mod, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_mod))       /* test type conflict */
        return(lval);

    if (test_type(rval, e_const))
    {
        if (!rval->evalue)                   /* no "E / 0" */
        {
            semantic("modulo 0: undefined");
            clearbin(lval, rval);
            return (lval);
        }
        if (test_type(lval, e_const))
        {
            lval->evalue %= rval->evalue;
            return (lval);
        }
    }

    defcode(lval, rval, op_mod);
    return (lval);                          /* return new expression */
}
