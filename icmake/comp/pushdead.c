/*
                                P U S H D E A D . C
*/

#include "iccomp.h"

static size_t
    size = 1;

void push_dead()                            /* dead_sp: lastused, dead[0] = 0 */
{
    if (++dead_sp >= size)                  /* too few elements ? then 5 more */
        dead = xrealloc(dead, (size += 5) * sizeof(unsigned));

    dead[dead_sp] = dead[dead_sp - 1];      /* copy former element */
}
