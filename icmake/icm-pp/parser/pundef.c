#define msgx

#include "parser.ih"

void p_undef()
{
    if (state_active() && !linear_undef(p_text))
        rss_warning(filestack_tos()->filename, scanner_lineNr() - 1, 
                "#undef %s: `%s' not defined\n", 
                p_text, p_text);

    msg("active: %u", state_active());

}
