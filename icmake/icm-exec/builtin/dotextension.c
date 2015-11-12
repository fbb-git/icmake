#include "builtin.ih"

void builtin_dotExtension()
{
    reg = *stringConstructor_cP(rss_getDext(stringStr(top())));
}
