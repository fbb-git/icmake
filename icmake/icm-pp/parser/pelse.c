#define msgx

#include "parser.ih"

void p_else()
{
    state_negate(scanner_lineNr() - 1);

    msg("active: %u", state_active());
}
