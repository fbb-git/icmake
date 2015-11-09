#include "util.ih"

char const *util_unescape()
{
    return rss_strUnescape(gu_lexstring);
}
