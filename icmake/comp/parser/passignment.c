#include "parser.ih"
                                            /* opstr is '=', or "/=", etc. */
SemVal *p_assignment(SemVal *lval, SemVal *rval, char *opstr)
{
    SemVal *tmp;
    unsigned type;
    unsigned value;

    if (!test_type(lval, e_var))
    {
        util_semantic(gp_lvalueNeeded, opstr);
        p_discard(rval);
        return lval;
    }

    p_trySIconvert(lval, rval);

    p_expr2stack(rval);                             /* convert rval to code */

                                            /* same types */
    if (lval->type & rval->type & (e_int | e_str | e_list))
    {
        type = lval->type;                  /* save type/idx for return */
        value = lval->evalue;

        p_generateCode(lval, op_copy_var, lval->evalue);
        tmp = p_catCode(rval, lval);          /* catenate p_assignment code */

        tmp->evalue = value;                /* set lvalue type and idx */
        tmp->type = type;

        return tmp;
    }

    util_semantic(gp_typeConflict, opstr);
    p_discard(rval);

    return lval;
}


