/*
#define msg
*/

#include "parser.ih"

SemVal *cat_stmnt(SemVal *lval, SemVal *rval)
{
    patchup_false(lval, 1);

    msg("gp_nestLevel = %d (0 calls util-out)", gp_nestLevel);

    if (gp_nestLevel == 0)
    {
        util_out(gp_bin, lval->code, lval->codelen);
        discard(lval);
        return rval;
    }

    return catcode(lval, rval);
}
