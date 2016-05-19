#define msgx

#include "parser.ih"

void p_ifdef()
{
    state_push(linear_search(p_text) != NULL);

    msg("active %s: %u", p_text, state_active());
}
