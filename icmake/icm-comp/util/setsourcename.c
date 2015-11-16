#include "util.ih"

void util_setSourceName(char const *txt)
{
    free(gu_sourceName);
    gu_sourceName = rss_strdup(txt);
}
