#include "parser.ih"

void p_discard(SemVal *e)
{
    if (e->falselen)
        free(e->falselist);
    if (e->truelen)
        free(e->truelist);
    if (e->code)
        free(e->code);
}
