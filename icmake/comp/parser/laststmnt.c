#include "parser.ih"

void last_stmnt(SemVal *lval)
{
    patchup_false(lval, 1);

    util_out(gp_bin, lval->code, lval->codelen);
    discard(lval);
}
