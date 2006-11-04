/*
                            A D D P A T C H . C
*/

#include "iccomp.h"

void addpatch (size_t *list, size_t len, register size_t value)
{
    register size_t
        index;

    for (index = 0; index < len; index++)
        list[index] += value;
}
