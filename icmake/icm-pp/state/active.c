#include "state.ih"

int state_active()
{
    return st_stack[st_size - 1];
}
