#include "parser.ih"

void p_clearOperands(SemVal **lval, SemVal *rval)
{
    p_discard(rval);
    p_discard(*lval);
    *lval = p_stackFrame(e_null);
}
