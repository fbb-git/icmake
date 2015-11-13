#include "builtin.ih"

void builtin_changeBase()
{
    char *cp = rss_changeBase(stringStr(top()), stringStr(top() - 1));
    reg = *stringConstructor_cP(cp);
    free(cp);
}
