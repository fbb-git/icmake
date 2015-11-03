#include "parser.ih"

void last_stmnt(SemVal *lval)
{
    patchup_false(lval, 1);

    outbin(lval->code, lval->codelen);
    discard(lval);
}
