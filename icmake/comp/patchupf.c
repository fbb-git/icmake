/*
                              P A T C H U P F . C
*/

#include "iccomp.h"

void patchup_false(e, pos)
    ESTRUC_
        *e;
    int
        pos;
{
    patchup(e->code, e->codelen, e->falselist, e->falselen, pos);
    e->falselen = 0;
}
