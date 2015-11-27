#include "parser.ih"

char *p_quotedName(char const *name)
{
    char *cp = rss_strdup(name);

    cp[strlen(cp) - 1] = 0;             /* remove the last character */

    return cp;
}
