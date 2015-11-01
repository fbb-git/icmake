#include "parser.ih"

static size_t size = 1;

void push_dead()                            /* dead_sp: lastused, dead[0] = 0 */
{
    if (++g_dead_sp >= size)                  /* too few elements ? then 5 more */
        g_dead = xrealloc(g_dead, (size += 5) * sizeof(unsigned));

    g_dead[g_dead_sp] = g_dead[g_dead_sp - 1];      /* copy former element */
}
