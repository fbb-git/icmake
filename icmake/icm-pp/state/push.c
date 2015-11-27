
/* #define msg
*/

#include "state.ih"

void state_push(int active)
{
    msg("push in: %u, next active = %u", state_active(), active);

    st_available();     /* make room if necessary */

    st_stack[st_size] = (st_stack[st_size - 1] == 0) ? 
                            0
                        :
                            active;
    ++st_size;

    msg("push out: %u", state_active());
}
