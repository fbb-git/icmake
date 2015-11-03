#include "parser.ih"

void patchup_true(SemVal *e, int pos)
{
    patchup(e->code, e->codelen, e->truelist, e->truelen, pos);
    e->truelen = 0;
}
