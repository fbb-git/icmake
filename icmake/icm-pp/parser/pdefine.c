#define msgx

#include "parser.ih"

void p_define()
{
    char *ident = rss_strdup(scanner_text());

    char *definition = rss_strdup("");
    
    while (1)
    {
        int token = yylex();
        if (token == 0 || token == '\n')
            break;
        definition = rss_strcat(definition, scanner_text());
    }

    out_nl();

    if (!state_active())
    {
        free(definition);
        return;
    }

    char *trimLeft = rss_trimLeft(definition);
    definition = rss_trimRight(trimLeft);
    free(trimLeft);

    p_addDef(ident, definition);

    free(ident);
    free(definition);
}


