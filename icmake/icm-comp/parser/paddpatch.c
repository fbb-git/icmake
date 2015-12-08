#include "parser.ih"

void p_addPatch(unsigned *list, unsigned len, register unsigned value)
{
    register unsigned idx;

    for (idx = 0; idx < len; idx++)
        list[idx] += value;
}
