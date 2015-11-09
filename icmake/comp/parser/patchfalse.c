#include "parser.ih"

void patchfalse(SemVal *e)
{
    e->falselist = rss_realloc(e->falselist,   /* expand the falselist */
                            (e->falselen + 1) * sizeof(size_t));

                                            /* room for the jump-backpatch */
    e->code = rss_realloc(e->code, e->codelen += sizeof(int16_t));
    e->falselist[e->falselen++] = e->codelen;   /* store jumpstart location */
}
