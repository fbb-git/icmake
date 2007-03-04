/*
                            A D D I T I O N . C
*/

#include "iccomp.h"

ESTRUC_ *addition (ESTRUC_ *lval, ESTRUC_ *rval)
{
    register E_TYPE_ type;

    if (test_binop(op_add, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_add))       /* test type conflict */
        return(lval);

    type = lval->type;                      /* keep type for later */

    if ((type & rval->type & (size_t)~ALLTYPES) == e_const)
    {
        if (test_type(lval, e_int))
            lval->evalue += rval->evalue;
        else if (test_type(lval, e_str))
            catstrings(lval, rval);         /* create (cat) new string */
    }
    else 
    {
        defcode(lval, rval, op_add);
        set_type(lval, (type & ALLTYPES) | e_code);
    }

    return (lval);                          /* return new expression */
}
