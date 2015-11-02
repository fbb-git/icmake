#include "parser.ih"

ESTRUC_ *if_stmnt(ESTRUC_ *cond, ESTRUC_ *trueStmnt, ESTRUC_ *falseStmnt)
{
    register size_t len;
    unsigned *list;

    gp_nestLevel--;                     /* reduce nesting level */

    etob(cond);                         /* make links for cond */

    if (test_type(cond, e_const))       /* consts: either always/never */
    {
        discard(cond);
        if (cond->evalue)               /* trueStmnt always executed */
        {
            discard(falseStmnt);
            return  trueStmnt;
        }
                                        /* falsestmnt always executed */
        discard(trueStmnt);
        return falseStmnt;
    }

    patchup_true(cond, 1);              /* patch to EOC */

    if (!falseStmnt->type)              /* no falsestmnt */
    {
        catcode(cond, trueStmnt);       /* cond = cond ~ trueStmnt */
        return cond;
    }

    gencode(trueStmnt, op_jmp, j_falselist);

    list = trueStmnt->falselist;        /* save the falselist */
    len  = trueStmnt->falselen;

    addpatch(list, len, cond->codelen); /* increase the patch targets */

    trueStmnt->falselen = 0;

    catcode(cond, trueStmnt);           /* cond = cond ~ trueStmnt */
    patchup_false(cond, 1);             /* patch to EOC */

    cond->falselen = len;               /* restore the falselist */
    cond->falselist = list;

    catcode(cond, falseStmnt);          /* if .. else cat. */

    return cond;                        /* if .. else return */
}

