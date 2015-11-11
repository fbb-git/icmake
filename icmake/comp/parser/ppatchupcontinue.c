#include "parser.ih"

void p_patchupContinue(SemVal *e, int pos)
{
    p_patchup(e->code, e->codelen, e->continuelist, e->continuelen, pos);
    e->continuelen = 0;
}
