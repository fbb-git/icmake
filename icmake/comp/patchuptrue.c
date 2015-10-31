#include "iccomp.h"

void patchup_true(ESTRUC_ *e, int pos)
{
    patchup(e->code, e->codelen, e->truelist, e->truelen, pos);
    e->truelen = 0;
}
