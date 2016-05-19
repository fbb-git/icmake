#define msgx

#include "state.ih"

void state_push(int active)
{
    st_available();     /* make room if necessary */

    State *sp = st_stack + st_size++;

    sp->active = (sp - 1)->active == 0 ? 
                        0
                    :
                        active;

    sp->elseCount = 0;

    msg("%s size = %u", filestack_tos()->filename, st_size);
}
