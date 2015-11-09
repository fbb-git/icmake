#include "util.ih"

void util_catString(char const *txt)
{
    gu_lexstring = rss_strcat(gu_lexstring, txt);
}
