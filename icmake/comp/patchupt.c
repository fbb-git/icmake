/*
                              P A T C H U P T . C
*/

#include "iccomp.h"

void patchup_true(e, pos)
    ESTRUC_
        *e;
    int
        pos;
{
    patchup(e->code, e->codelen, e->truelist, e->truelen, pos);
    e->truelen = 0;
}
