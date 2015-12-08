#include "parser.ih"

static void patchadd(register unsigned value, unsigned **dest, 
                     unsigned *dlen, unsigned *source, unsigned slen)
{
    register unsigned idx;

    if (!*dlen)
        *dest = NULL;                       /* no memory for dest as yet */

    for (idx = 0; idx < slen; idx++)  /* all elements of source list: */
        source[idx] += value;             /* icrement addresses of targets */

                                            /* expand the dest area */
    *dest = rss_realloc(*dest, (*dlen + slen) * sizeof(unsigned));

                                            /* append source list */
    memcpy(*dest + *dlen, source, slen * sizeof(unsigned));
    *dlen += slen;                          /* increment # element */
}

SemVal *p_catCode(SemVal *lval, SemVal *rval)
{
    register unsigned l;
    register unsigned r;

    r = rval->codelen;                      /* sizeof rval code */
    l = lval->codelen;                      /* sizeof lval code */

    lval->code = rss_realloc(lval->code,       /* room for new code */
                          (l + r) * sizeof(int8_t));

                                            /* catenate the code */
    memcpy(lval->code + l, rval->code, r * sizeof(int8_t));
    lval->codelen += r;                     /* new size */

    patchadd(l, &lval->truelist, &lval->truelen,
                rval->truelist, rval->truelen);

    patchadd(l, &lval->falselist, &lval->falselen,
                rval->falselist, rval->falselen);

    patchadd(l, &lval->continuelist, &lval->continuelen,
                 rval->continuelist,  rval->continuelen);

    lval->type |= rval->type;               /* type of combined code */
                                            /* (is ok with same types) */

    p_discard(rval);                          /* free memory used by SemVal */

    return (lval);                          /* return new frame */
}




