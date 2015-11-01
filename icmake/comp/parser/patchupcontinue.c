#include "parser.ih"

void patchup_continue(ESTRUC_ *e, int pos)
{
    patchup(e->code, e->codelen, e->continuelist, e->continuelen, pos);
    e->continuelen = 0;
}
