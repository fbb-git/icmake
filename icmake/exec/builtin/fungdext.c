#include "builtin.ih"

void fun_g_dext()
{
    reg = *stringConstructor_cP(get_dext(stringStr(top())));
}
