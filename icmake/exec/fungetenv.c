/*
*/

#include "icm-exec.h"
void fun_getenv()
{
    char *env = getenv(stack[sp].vu.i->ls.str);

    reg = newvar(e_list);
    
    if (!env)
    {
        reg = addtolist (reg, "0");
        reg = addtolist(reg, "");
    }
    else    
    {        
        reg = addtolist (reg, "1");
        reg = addtolist(reg, env);
    }

    return reg;
}
