#include "parser.ih"

SemVal *p_while(SemVal *e, SemVal *s, int pureWhile)
{
    register size_t len;
    unsigned *list;

    gp_nestLevel--;                            /* reduce nesting level */
    gp_breakOK--;                             /* reduce break ok */

    p_expr2bool(e);                                /* make links for E */

    if (test_type(e, e_const))              /* constant: never xeq */
    {
        if (e->evalue)
            e->evalue = 0;                  /* no value = no code for p_catCode */
                                            /* MAYBE CODELEN = 0 ?? */
        else
        {
            p_clearOperands(e, s);
            return (e);
        }
    }

    p_patchupTrue(e, 1);                     /* patch to EOC */

    list = e->falselist;
    len  = e->falselen;

    e->falselen = 0;                        /* no more false links avail. */

    p_catCode(e, s);                          /* append s to e */

    if (pureWhile)                          /* not a while stmd that's part */
        p_patchupContinue(e, -e->codelen);   /* of a for stmnt               */

    p_generateCode(e, op_jmp, j_falselist);        /* jmp to begin of code */

    p_patchupFalse(e, 0);                    /* patch to BOC */

    e->falselist = list;
    e->falselen = len;

    p_patchupTrue(e, 1);                    /* p_patchup break targets to EOC */

    return e;
}





