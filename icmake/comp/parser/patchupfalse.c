#include "parser.ih"

void patchup_false(SemVal *e, int pos)
{
    patchup(e->code, e->codelen, e->falselist, e->falselen, pos);
    e->falselen = 0;
}
