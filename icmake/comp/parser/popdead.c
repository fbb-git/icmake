#include "parser.ih"

void pop_dead()                             /* dead_sp: lastused, dead[0] = 0 */
{
    if (g_dead_sp)                            /* anything to pop ? */
        --g_dead_sp;                          /* then reduce SP */
}
