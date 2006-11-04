/*
                                C A T C O D E . C
*/

#include "iccomp.h"

static void patchadd ARG((register size_t,
                                   size_t **, size_t *,
                                   size_t *, size_t));

static void patchadd(value, dest, dlen, source, slen)
    register size_t
        value;
    size_t
        *source,
        **dest,
        slen,
        *dlen;
{
    register size_t
        index;

    if (!*dlen)
        *dest = NULL;                       /* no memory for dest as yet */

    for (index = 0; index < slen; index++)  /* all elements of source list: */
        source[index] += value;             /* icrement addresses of targets */

                                            /* expand the dest area */
    *dest = xrealloc(*dest, (*dlen + slen) * sizeof(int));

                                            /* append source list */
    memcpy(*dest + *dlen, source, slen * sizeof(int));
    *dlen += slen;                          /* increment # element */
}

ESTRUC_ *catcode(lval, rval)
    ESTRUC_
        *lval,
        *rval;
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
