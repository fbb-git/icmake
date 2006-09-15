/*
*/

#include "icm-exec.h"
void fun_getenv()
{
    char *env = getenv(stack[sp].vu.i->ls.str);

    reg = newvar(e_str);
    
    if (!env)
        reg.vu.i->ls.str = xstrdup("");
    else
        reg.vu.i->ls.str = xstrcat(xstrdup("="), env);
}
