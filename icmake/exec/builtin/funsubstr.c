/*
*/

#include "builtin.ih"

void fun_substr()
{
    char const *str = stringStr(top());
    size_t str_len = strlen(str);
    int offset = intValue(top() - 1);
    int count = intValue(top() - 2);

    if (offset < 0)
        offset = 0;

    if ((size_t)offset >= str_len || count <= 0)
        reg = *stringConstructor();
    else
    {
        reg = *stringConstructor_cP(str + offset);
        if (count < (int)(str_len - (size_t)offset))
            ((char *)stringStr(&reg))[count] = 0;
    }    
}



