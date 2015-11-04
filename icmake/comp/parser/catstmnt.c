#include "parser.ih"

SemVal *cat_stmnt(SemVal *lval, SemVal *rval)
{
    patchup_false(lval, 1);

    if (!gp_nestLevel)
    {
        outbin(lval->code, lval->codelen);
        discard(lval);
        return rval;
    }

    return catcode(lval, rval);
}
