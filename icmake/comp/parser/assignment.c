#include "parser.ih"
                                            /* opstr is '=', or "/=", etc. */
SemVal *assignment(SemVal *lval, SemVal *rval, char *opstr)
{
    SemVal *tmp;
    size_t type;
    size_t value;

    if (!test_type(lval, e_var))
    {
        util_semantic(gp_lvalueNeeded, opstr);
        discard(rval);
        return lval;
    }

    eToStack(rval);                             /* convert rval to code */

                                            /* same types */
    if (lval->type & rval->type & (e_int | e_str | e_list))
    {
        type = lval->type;                  /* save type/idx for return */
        value = lval->evalue;

        gencode(lval, op_copy_var, lval->evalue);
        tmp = catcode(rval, lval);          /* catenate assignment code */

        tmp->evalue = value;                /* set lvalue type and idx */
        tmp->type = type;

        return tmp;
    }

    util_semantic(gp_typeConflict, opstr);
    discard(rval);

    return lval;
}


