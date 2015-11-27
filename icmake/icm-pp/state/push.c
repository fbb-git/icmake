#define msgx

#include "state.ih"

void state_push(int active)
{
    msg("push in: %u, next active = %u", state_active(), active);

    st_available();     /* make room if necessary */

    State *sp = st_stack + st_size++;

    sp->active = (sp - 1)->active == 0 ? 
                        0
                    :
                        active;

    sp->elseCount = 0;

    msg("push out: %u", state_active());
}
