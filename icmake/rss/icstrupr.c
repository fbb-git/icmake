#include "rss.ih"

char *ic_strupr(char *s)
{
    register char *cp;

    for (cp = s; *cp; ++cp)
        *cp = toupper(*cp);

    return s;
}
