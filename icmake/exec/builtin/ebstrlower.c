#include "rss.ih"

char *eb_strLower (char *s)
{
    register char *cp;

    for (cp = s; *cp; ++cp)
        *cp = tolower(*cp);

    return s;
}
