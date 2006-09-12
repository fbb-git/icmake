/*
                                D I S C A R D . C
*/

#include "iccomp.h"

void discard(e)
    ESTRUC_
        *e;
{
    if (e->falselen)
        free(e->falselist);
    if (e->truelen)
        free(e->truelist);
    if (e->code)
        free(e->code);
}
