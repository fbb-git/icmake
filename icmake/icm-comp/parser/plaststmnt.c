#include "parser.ih"

void p_lastStmnt(SemVal *lval)
{
    p_patchupFalse(lval, 1);

    util_out(gp_bin, lval->code, lval->codelen);
    p_discard(lval);
}







