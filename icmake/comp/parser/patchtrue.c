#include "parser.ih"

void patchtrue(SemVal *e)
{                                           /* expand the truelist */
    e->truelist = rss_realloc(e->truelist, (e->truelen + 1) * sizeof(size_t));

                                            /* room for the jump-backpatch */
    e->code = rss_realloc(e->code, e->codelen += sizeof(int16_t));
    e->truelist[e->truelen++] = e->codelen;   /* store jumpstart location */
}
