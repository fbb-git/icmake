/*
*/

#include "builtin.ih"

void fun_getenv()
{
    char *env = getenv(stringStr(top()));

    reg = *listConstructor();
    
    if (!env)
    {
        listAdd_cP(&reg, "0");
        listAdd_cP(&reg, "");
    }
    else    
    {        
        listAdd_cP(&reg, "1");
        listAdd_cP(&reg, env);
    }
}
