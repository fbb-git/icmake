#include "parser.ih"

void p_patchupFalse(SemVal *e, int pos)
{
    p_patchup(e->code, e->codelen, e->falselist, e->falselen, pos);
    e->falselen = 0;
}
