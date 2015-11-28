#define msgx

#include "parser.ih"

void p_addDef(char const *ident, char const *definition)
{
    msg("id: %s, def: %s", ident, definition);

    if (linear_search(ident) != NULL)
    {
        rss_error(filestack_tos()->filename, scanner_lineNr(), 
                  "%s multiply defined", ident);
        return;
    }

    linear_add(ident, definition);
}
