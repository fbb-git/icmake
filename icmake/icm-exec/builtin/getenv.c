/*
*/

#include "builtin.ih"

void builtin_getEnv()
{
    char *env = getenv(string_charp(stack_top()));

    gb_reg = *listcons();
    
    if (!env)
    {
        list_add_charPtr(&gb_reg, "0");
        list_add_charPtr(&gb_reg, "");
    }
    else    
    {        
        list_add_charPtr(&gb_reg, "1");
        list_add_charPtr(&gb_reg, env);
    }
}
