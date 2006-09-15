/*
*/

#include "icm-exec.h"

void fun_substr()
{
    char *str;
    int offset;
    size_t count;
    size_t str_len;

    reg = newvar(e_str);

    str = stack[sp].vu.i->ls.str;
    str_len = strlen(str);

    offset = stack[sp - 1].vu.intval;
    count =  stack[sp - 2].vu.intval;

    if (offset < 0)
        offset = 0;

    if (offset >= str_len)
        reg.vu.i->ls.str = xstrdup("");
    else
    {
        reg.vu.i->ls.str = xstrdup(str + offset);
        if (count < str_len - offset)
            reg.vu.i->ls.str[count] = 0;
    }    
}



