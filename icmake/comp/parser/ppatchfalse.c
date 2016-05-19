#include "parser.ih"

void p_patchFalse(SemVal *e)
{
    e->falselist = rss_realloc(e->falselist,   /* expand the falselist */
                            (e->falselen + 1) * sizeof(unsigned));

                                            /* room for the jump-backpatch */
    e->code = rss_realloc(e->code, e->codelen += sizeof(int16_t));
    e->falselist[e->falselen++] = e->codelen;   /* store jumpstart location */
}
