#define msgx
#include "scanner.ih"

char const *sc_scan(char const *fmt, char const *text)
{
    msg("saw %s", text);

    unsigned value = 0;
    sscanf(text, fmt, &value);

    value %= 0x100;
    gs_char[0] = value % 0x100;
    return gs_char;
}
