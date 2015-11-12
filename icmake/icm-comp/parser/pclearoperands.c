#include "parser.ih"

void p_clearOperands(SemVal *lval, SemVal *rval)
{
    p_discard(rval);
    p_discard(lval);
    memset(lval, 0, sizeof(SemVal));
    lval->type = e_int | e_const;
}
