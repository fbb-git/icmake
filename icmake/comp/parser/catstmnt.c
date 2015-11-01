/*
                         C A T S T M N T . C
*/

#include "parser.ih"

ESTRUC_ *cat_stmnt(ESTRUC_ *lval, ESTRUC_ *rval)
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
