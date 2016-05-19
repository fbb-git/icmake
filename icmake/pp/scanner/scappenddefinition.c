#include "scanner.ih"

void sc_appendDefinition(int cutoff)
{
    if (cutoff)
        yytext[yyleng - 2] = 0;

    char *lhs = rss_trimLeft(yytext);
    char *rhs = rss_trimRight(lhs);
    free(lhs);

    if (!strlen(rhs))           /* nothing to append */
    {
        free(rhs);
        return;
    }
    
    if (sc_definition == 0)         /* nothing there yet */
    {
        sc_definition = rhs;
        return;
    }

    sc_definition = strcat(
                        strcat(sc_definition, " "), /* add separating blank */
                        rhs                         /* and trimmed yytext */
                );
    free(rhs);
}
