#include "builtin.ih"

void fun_g_dext()
{
    reg = *stringConstructor_cP(rss_getDext(stringStr(top())));
}
