#define msgx

#include "parser.ih"

void p_undef()
{
    if (state_active() && !linear_undef(p_text))
        p_semantic("#undef %s: `%s' not defined", p_text, p_text);

    msg("active: %u", state_active());

}
