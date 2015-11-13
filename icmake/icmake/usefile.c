#define msg

#include "icmake.ih"

char *useFile(char const *argv2, char const *ext)
{
    return argv2 ? rss_strdup(argv2) : rss_changeExt(imFile, ext);
}

