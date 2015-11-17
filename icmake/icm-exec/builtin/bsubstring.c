/*
*/

#include "builtin.ih"

void b_subString()
{
    char const *str = string_charp(stack_top());
    size_t str_len = strlen(str);
    int offset = int_value(stack_top() - 1);
    int count = int_value(stack_top() - 2);

    if (offset < 0)
        offset = 0;

    if ((size_t)offset >= str_len || count <= 0)
        gb_reg = *stringcons();
    else
    {
        gb_reg = *stringcons_charPtr(str + offset);
        if (count < (int)(str_len - (size_t)offset))
            ((char *)string_charp(&gb_reg))[count] = 0;
    }    
}



