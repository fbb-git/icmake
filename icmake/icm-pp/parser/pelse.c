#define msgx

#include "parser.ih"

void p_else()
{
    state_negate();

    msg("active: %u", state_active());
}
