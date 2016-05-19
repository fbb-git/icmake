#define msgx

#include "parser.ih"

void p_endif()
{
    state_pop(scanner_lineNr() - 1);

    msg("active: %u", state_active());
}
