/*
                             A S S I G N M E . C
*/

#include "iccomp.h"

ESTRUC_ *assignment(lval, rval, opstr)      /* opstr is '=', or "/=", etc. */
    ESTRUC_
        *lval,
        *rval;
    char
        *opstr;
{
    ESTRUC_
        *tmp;
    unsigned
        type,
        value;

    if (!test_type(lval, e_var))
    {
        semantic(lvalue_needed, opstr);
        discard(rval);
        return (lval);
    }

    if (initialization)
    {
        semantic(init_expr_not_const);
        return nullframe(lval);
    }

    etoc(rval);                             /* convert rval to code */

                                            /* same types */
    if (lval->type & rval->type & (e_int | e_str | e_list))
    {
        type = lval->type;                  /* save type/index for return */
        value = lval->evalue;

        gencode(lval, op_copy_var, lval->evalue);
        tmp = catcode(rval, lval);          /* catenate assignment code */

        tmp->evalue = value;                /* set lvalue type and index */
        tmp->type = type;

        return tmp;
    }

    semantic(type_conflict, opstr);
    discard(rval);

    return lval;
}


