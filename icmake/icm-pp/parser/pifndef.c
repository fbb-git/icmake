#define msgx

#include "parser.ih"

void p_ifndef()
{
    state_push(linear_search(p_text) == NULL);

    msg("active: %u", state_active());
}
