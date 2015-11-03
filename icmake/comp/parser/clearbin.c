#include "parser.ih"

void clearbin(SemVal *lval, SemVal *rval)
{
    discard(rval);
    discard(lval);
    memset(lval, 0, sizeof(SemVal));
    lval->type = e_int | e_const;
}
