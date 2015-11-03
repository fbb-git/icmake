#include "parser.ih"

SemVal *math_ass(SemVal *lval, SemVal *rval, 
                    SemVal *(*fun)(SemVal *, SemVal *),
                    char *opstr)
{
    register ExprType
        ltype;
    register size_t
        evalue;

    ltype = lval->type;
    evalue = lval->evalue;

    fun(lval, rval);                        /* perform operation */

    rval->type = ltype;                     /* restore ltype/value */
    rval->evalue = evalue;
    rval->codelen = 0;
    rval->code = NULL;

    return assignment(rval, lval, opstr); /* perform assignment */
}
