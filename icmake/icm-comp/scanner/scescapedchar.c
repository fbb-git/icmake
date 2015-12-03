#include "scanner.ih"

static char stdEscape[] = 
            {'n', 't', 'v', 'b', 'r', 'f', 'a', '\'', '"', '\\'};

static char escapedChar[] = 
            {'\n', '\t', '\v', '\b', '\r', '\f', '\a', '\'', '"', '\\'};

char const *sc_escapedChar(int ch)
{
    char *cp = strchr(stdEscape, ch);

    gs_char[0] = cp == NULL ? ch : escapedChar[cp - stdEscape];

    return gs_char;
}
