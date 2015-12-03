#include "scanner.ih"

static char escaped[2];

char const *sc_octal(size_t idx)
{
    util_scan(yytext + idx, "%o",     
}
