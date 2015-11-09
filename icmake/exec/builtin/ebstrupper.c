#include "rss.ih"

char *eb_strUpper(char *s)
{
    register char *cp;

    for (cp = s; *cp; ++cp)
        *cp = toupper(*cp);

    return s;
}
