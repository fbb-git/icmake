#include "iccomp.h"

void patchup_continue(ESTRUC_ *e, int pos)
{
printf("PATCHUP CONTINUE BEGIN: len: %u\n", e->continuelen);

    patchup(e->code, e->codelen, e->continuelist, e->continuelen, pos);

printf("PATCHUP CONTINUE DONE\n");

    e->continuelen = 0;
}
