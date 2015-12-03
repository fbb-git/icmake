/*

    returns the next char, which may be 0, or
        -1 if the conversion failed.

*/

#include "util.ih"

static char append[2];

int util_catEscape(int ch)
{
    int escaped = rss_escapeChar(ch);

    append[0] = escaped ? escaped : ch;
    gu_lexstring = rss_strcat(gu_lexstring, append);
    return escaped;
}
    
