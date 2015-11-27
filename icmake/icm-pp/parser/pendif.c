#define msgx

#include "parser.ih"

void p_endif()
{
    state_pop();

    msg("active: %u", state_active());
}
