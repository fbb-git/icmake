#define msgx

#include "util.ih"

char const *util_unescape()
{
    msg("Got string `%s'", gu_lexstring);
    char *cp = rss_strUnescape(gu_lexstring);
    msg("Converted to -->%s<--", cp);

    return cp;
}
