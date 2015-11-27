#include "state.ih"

void state_negate()
{
    if (st_stack[st_size - 2] != 0)         /* previous state is active */
        st_stack[st_size - 1] = !st_stack[st_size - 1]; /* then negate */
}
