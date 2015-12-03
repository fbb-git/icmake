#include "scanner.ih"

static char stdEscape[] = 
            {'n', 't', 'v', 'b', 'r', 'f', 'a', '\'', '"', '\\'};

static char escaped[] = 
            {'\n', '\t', '\v', '\b', '\r', '\f', '\a', '\'', '"', '\\'};

static char escaped[2];

char const *sc_stdEscape(size_t idx)
{
    char *cp = strchr(stdEscape, yytext[idx]);

    escaped[0] = cp == NULL ? yytext[idx] : escaped[cp - stdEscape];

    return escaped;
}
