#include "iccomp.h"

void patchcontinue(ESTRUC_ *e)
{
    e->continuelist = xrealloc(e->continuelist,   /* expand the continuelist */
                            (e->continuelen + 1) * sizeof(size_t));

                                            /* room for the jump-backpatch */
    e->code = xrealloc(e->code, e->codelen += sizeof(INT16));
                                            /* store jumpstart location */

    e->continuelist[e->continuelen++] = e->codelen;   

printf("patch continue: len = %u, address = 0x%x\n", e->continuelen,
e->codelen);

}
