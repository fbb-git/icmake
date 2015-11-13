/*
        The last pushed string is taken as a file name. The pathname is
        converted to the one but last pushed string. A new {\em e\_str}
        variable is created holding the new string and is returned via {\em
        reg}.
*/

#include "builtin.ih"

void builtin_changePath()
{
    char *cp = rss_changePath(stringStr(top()), stringStr(top() - 1));
    reg = *stringConstructor_cP(cp);
    free(cp);
}
