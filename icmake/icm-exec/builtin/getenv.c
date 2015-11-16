/*
*/

#include "builtin.ih"

void builtin_getEnv()
{
    char *env = getenv(string_charp(stack_top()));

    reg = *listcons();
    
    if (!env)
    {
        list_add_charPtr(&reg, "0");
        list_add_charPtr(&reg, "");
    }
    else    
    {        
        list_add_charPtr(&reg, "1");
        list_add_charPtr(&reg, env);
    }
}
