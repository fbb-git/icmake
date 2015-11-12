#include "parser.ih"

void p_addPatch(unsigned *list, size_t len, register size_t value)
{
    register size_t idx;

    for (idx = 0; idx < len; idx++)
        list[idx] += value;
}
