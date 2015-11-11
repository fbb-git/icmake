/*
#define msg
*/

#include "parser.ih"

SemVal *p_catStmnts(SemVal *lval, SemVal *rval)
{
    p_patchupFalse(lval, 1);

    msg("gp_nestLevel = %d (0 calls util-out)", gp_nestLevel);

    if (gp_nestLevel == 0)
    {
        util_out(gp_bin, lval->code, lval->codelen);
        p_discard(lval);
        return rval;
    }

    return p_catCode(lval, rval);
}
