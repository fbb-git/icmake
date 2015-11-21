#include "rss.ih"

char *rss_trimLeft(char const *begin)
{
    while (isspace(*begin))
        ++begin;

    return rss_strdup(begin);      
}

