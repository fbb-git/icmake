#define msgx

#include "parser.ih"

void p_undef()
{
    if (state_active() && !linear_undef(p_text))
        fprintf(stderr, 
                "[%s, line %u] Warning: #undef %s: `%s' not defined\n", 
                    filestack_tos()->filename, scanner_lineNr() - 1, 
                    p_text, p_text);

    msg("active: %u", state_active());

}
