#include "state.ih"

void state_init()
{
    st_available();
    st_size = 1;
    st_stack[0].active = 1;          /* initialize to an active state */
}
