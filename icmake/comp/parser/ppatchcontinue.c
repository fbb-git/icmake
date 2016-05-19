#include "parser.ih"

void p_patchContinue(SemVal *e)
{
    e->continuelist = rss_realloc(e->continuelist,   /* expand the continuelist */
                            (e->continuelen + 1) * sizeof(unsigned));

                                            /* room for the jump-backpatch */
    e->code = rss_realloc(e->code, e->codelen += sizeof(int16_t));
                                            /* store jumpstart location */

    e->continuelist[e->continuelen++] = e->codelen;   
}
