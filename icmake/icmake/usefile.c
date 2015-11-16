#define msg

#include "icmake.ih"

char *useFile(char const *firstChoice, char const *fallback, char const *ext)
{
    return firstChoice != NULL ?
                rss_strdup(firstChoice)
            :
                rss_changeExt(fallback, ext);
}

