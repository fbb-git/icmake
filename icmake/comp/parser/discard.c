#include "parser.ih"

void discard(ESTRUC_ *e)
{
    if (e->falselen)
        free(e->falselist);
    if (e->truelen)
        free(e->truelist);
    if (e->code)
        free(e->code);
}
