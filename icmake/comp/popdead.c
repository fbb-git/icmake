/*
                                P O P D E A D . C
*/

#include "iccomp.h"

void pop_dead()                             /* dead_sp: lastused, dead[0] = 0 */
{
    if (dead_sp)                            /* anything to pop ? */
        --dead_sp;                          /* then reduce SP */
}
