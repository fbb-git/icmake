#include "builtin.ih"

void builtin_changeExtension()
{
    char *cp = rss_changeExt(stringStr(top()), stringStr(top() - 1));
    reg = *stringConstructor_cP(cp);
    free(cp);
}
