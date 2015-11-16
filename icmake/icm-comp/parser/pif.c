#include "parser.ih"

SemVal *p_if(SemVal *cond, SemVal *trueStmnt, SemVal *falseStmnt)
{
    register size_t len;
    unsigned *list;

    gp_nestLevel--;                     /* reduce nesting level */

    p_expr2bool(cond);                         /* make links for cond */

    if (test_type(cond, e_const))       /* consts: either always/never */
    {
        p_discard(cond);
        if (cond->evalue)               /* trueStmnt always executed */
        {
            p_discard(falseStmnt);
            return  trueStmnt;
        }
                                        /* falsestmnt always executed */
        p_discard(trueStmnt);
        return falseStmnt;
    }

    p_patchupTrue(cond, 1);              /* true dest: the end of cond */

    if (!falseStmnt->type)              /* no falsestmnt */
    {
        p_catCode(cond, trueStmnt);       /* cond = cond ~ trueStmnt */
        return cond;
    }

    
    p_generateCode(trueStmnt, op_jmp, j_falselist);

    list = trueStmnt->falselist;        /* save the falselist */
    len  = trueStmnt->falselen;

    p_addPatch(list, len, cond->codelen); /* increase the patch targets */

    trueStmnt->falselen = 0;

    p_catCode(cond, trueStmnt);           /* cond = cond ~ trueStmnt */
    p_patchupFalse(cond, 1);             /* patch to EOC */

    cond->falselen = len;               /* restore the falselist */
    cond->falselist = list;

    p_catCode(cond, falseStmnt);          /* if .. else cat. */

    return cond;                        /* if .. else return */
}

