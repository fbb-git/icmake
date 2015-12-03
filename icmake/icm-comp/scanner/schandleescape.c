#include "scanner.ih"

void sc_handleEscape(int idx)
{
    if (!util_catEscape(yytext[idx]))
        sc_escapeWarning(yytext[idx]);
}
