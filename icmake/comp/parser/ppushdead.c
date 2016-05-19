#include "parser.ih"

static unsigned size = 1;

void p_pushDead()                        /* dead_sp: lastused, dead[0] = 0 */
{
    if (++gp_dead_sp >= size)           /* too few elements ? then 5 more */
        gp_dead = rss_realloc(gp_dead, (size += 5) * sizeof(unsigned));

    gp_dead[gp_dead_sp] = gp_dead[gp_dead_sp - 1];  /* copy former element */
}
