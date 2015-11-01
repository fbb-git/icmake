#include "parser.ih"

void patchup_false(ESTRUC_ *e, int pos)
{
    patchup(e->code, e->codelen, e->falselist, e->falselen, pos);
    e->falselen = 0;
}
