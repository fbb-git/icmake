#include "iccomp.h"

void patchfalse(ESTRUC_ *e)
{
    e->falselist = xrealloc(e->falselist,   /* expand the falselist */
                            (e->falselen + 1) * sizeof(size_t));

                                            /* room for the jump-backpatch */
    e->code = xrealloc(e->code, e->codelen += sizeof(INT16));
    e->falselist[e->falselen++] = e->codelen;   /* store jumpstart location */
}
