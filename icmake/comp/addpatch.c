/*
                            A D D P A T C H . C
*/

#include "iccomp.h"

void addpatch (unsigned *list, unsigned len, register unsigned value)
{
    register unsigned
        index;

    for (index = 0; index < len; index++)
        list[index] += value;
}
