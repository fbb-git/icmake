#include "parser.ih"

void pop_dead()                             /* dead_sp: lastused, dead[0] = 0 */
{
    if (gp_dead_sp)                            /* anything to pop ? */
        --gp_dead_sp;                          /* then reduce SP */
}
