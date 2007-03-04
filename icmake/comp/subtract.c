/*
                            S U B T R A C T . C
*/

#include "iccomp.h"

ESTRUC_ *subtract (lval, rval)
    ESTRUC_
        *lval,
        *rval;
{
    register E_TYPE_
        type;

    if (test_binop(op_sub, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_sub))       /* test type conflict */
        return(lval);

    type = lval->type;                      /* remember the type */

    if ((lval->type & rval->type & (size_t)~ALLTYPES) == e_const)
        lval->evalue -= rval->evalue;
    else
    {
        defcode(lval, rval, op_sub);
        set_type(lval, type & (ALLTYPES | e_code));
    }

    return (lval);                          /* return new expression */
}
