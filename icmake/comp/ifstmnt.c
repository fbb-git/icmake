/*
                            I F S T M N T . C
*/

#include "iccomp.h"

ESTRUC_ *if_stmnt(e, s, s2)
    ESTRUC_
        *e,
        *s,
        *s2;
{
    register size_t
        len;
    unsigned
        *list;

    nestlevel--;                            /* reduce nesting level */

    etob(e);                                /* make links for E */

    if (test_type(e, e_const))              /* constant: either always/never */
    {
        discard(e);
        if (e->evalue)                      /* S always executed */
        {
            discard(s2);
            return (s);
        }
        else                                /* S2 always executed */
        {
            discard(s);
            return (s2);
        }
    }

    patchup_true(e, 1);                     /* patch to EOC */

    if (!s2->type)                          /* no S2 */
    {
        catcode(e, s);                      /* E = E ~ S */
        return (e);
    }

    gencode(s, op_jmp, j_falselist);

    list = s->falselist;                    /* save the falselist */
    len  = s->falselen;

    addpatch(list, len, e->codelen);       /* increase the patch targets */

    s->falselen = 0;

    catcode(e, s);                          /* E = E ~ S */
    patchup_false(e, 1);                   /* patch to EOC */

    e->falselen = len;                      /* restore the falselist */
    e->falselist = list;

    catcode(e, s2);                         /* if .. else cat. */

    return (e);                             /* if .. else return */
}
