/*
                            A D D I T I O N . C
*/

#include "parser.ih"

SemVal *p_addition (SemVal *lval, SemVal *rval)
{
    register ExprType type;

    if (p_testBinOp(op_add, lval, rval))
        return (lval);                      /* test for correct types */

    p_bool2int(lval);                             /* convert pending booleans */
    p_bool2int(rval);

    if (p_conflict(lval, rval, op_add))       /* test type p_conflict */
        return(lval);

    type = lval->type;                      /* keep type for later */

    if ((type & rval->type & (size_t)~e_typeMask) == e_const)
    {
        if (test_type(lval, e_int))
            lval->evalue += rval->evalue;
        else if (test_type(lval, e_str))
            p_catStrings(lval, rval);         /* create (cat) new string */
    }
    else 
    {
        p_binOp(lval, rval, op_add);
        set_type(lval, (type & e_typeMask) | e_stack);
    }

    return (lval);                          /* return new expression */
}
