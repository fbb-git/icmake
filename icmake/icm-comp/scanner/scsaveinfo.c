#include "scanner.ih"

void sc_saveInfo()
{
    gs_savedLineNr = yylineno;
    free(gs_savedText);
    gs_savedText = rss_strdup(yytext);
}
