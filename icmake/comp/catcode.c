/*
                                C A T C O D E . C
*/

#include "iccomp.h"

static void patchadd(register size_t value, unsigned **dest, 
                     size_t *dlen, unsigned *source, size_t slen)
{
    register size_t
        idx;

    if (!*dlen)
        *dest = NULL;                       /* no memory for dest as yet */

    for (idx = 0; idx < slen; idx++)  /* all elements of source list: */
        source[idx] += value;             /* icrement addresses of targets */

                                            /* expand the dest area */
    *dest = xrealloc(*dest, (*dlen + slen) * sizeof(unsigned));

                                            /* append source list */
    memcpy(*dest + *dlen, source, slen * sizeof(unsigned));
    *dlen += slen;                          /* increment # element */
}

ESTRUC_ *catcode(ESTRUC_ *lval, ESTRUC_ *rval)
{
    register size_t
        l,
        r;

    r = rval->codelen;                      /* sizeof rval code */
    l = lval->codelen;                      /* sizeof lval code */

    lval->code = xrealloc(lval->code,       /* room for new code */
                          (l + r) * sizeof(INT8));

                                            /* catenate the code */
    memcpy(lval->code + l, rval->code, r * sizeof(INT8));
    lval->codelen += r;                     /* new size */

    patchadd(l, &lval->truelist, &lval->truelen,
                rval->truelist, rval->truelen);

    patchadd(l, &lval->falselist, &lval->falselen,
                rval->falselist, rval->falselen);

    lval->type |= rval->type;               /* type of combined code */
                                            /* (is ok with same types) */

    discard(rval);                          /* free memory used by ESTRUC_ */

    return (lval);                          /* return new frame */
}
