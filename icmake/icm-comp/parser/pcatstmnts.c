
/* #define msg
*/

#include "parser.ih"

SemVal *p_catStmnts(SemVal *lval, SemVal *rval)
{
    msg("BEGIN");

return lval;

    p_patchupFalse(lval, 1);

    msg("lval length: %u, rval length: %u", lval->codelen, rval->codelen);

    if (gp_nestLevel == 0)
    {
        msg("discarding lval");

        util_out(gp_bin, lval->code, lval->codelen);
        p_discard(lval);
        return rval;
    }

    msg("cat code");
    return p_catCode(lval, rval);
}
