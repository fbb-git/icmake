#include "rss.ih"

char *es_strUpper(char *s)
{
    register char *cp;

    for (cp = s; *cp; ++cp)
        *cp = toupper(*cp);

    return s;
}
