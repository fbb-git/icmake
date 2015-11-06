#include "parser.ih"

static size_t size = 1;

void push_dead()                            /* dead_sp: lastused, dead[0] = 0 */
{
    if (++gp_dead_sp >= size)                  /* too few elements ? then 5 more */
        gp_dead = xrealloc(gp_dead, (size += 5) * sizeof(unsigned));

    gp_dead[gp_dead_sp] = gp_dead[gp_dead_sp - 1];      /* copy former element */
}
