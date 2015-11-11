/*
                            A D D I T I O N . C
*/

#include "parser.ih"

SemVal *addition (SemVal *lval, SemVal *rval)
{
    register ExprType type;

    if (test_binop(op_add, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_add))       /* test type conflict */
        return(lval);

    type = lval->type;                      /* keep type for later */

    if ((type & rval->type & (size_t)~e_typeMask) == e_const)
    {
        if (test_type(lval, e_int))
            lval->evalue += rval->evalue;
        else if (test_type(lval, e_str))
            catstrings(lval, rval);         /* create (cat) new string */
    }
    else 
    {
        defcode(lval, rval, op_add);
        set_type(lval, (type & e_typeMask) | e_stack);
    }

    return (lval);                          /* return new expression */
}
