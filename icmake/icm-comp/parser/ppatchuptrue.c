#include "parser.ih"

void p_patchupTrue(SemVal *e, int pos)
{
    p_patchup(e->code, e->codelen, e->truelist, e->truelen, pos);
    e->truelen = 0;
}
