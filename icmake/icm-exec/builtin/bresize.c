/*
*/

#include "builtin.ih"

void b_resize()
{
    char const *str = string_charp(stack_top());

    size_t oldLen = strlen(str);
    size_t newLen = int_value(stack_top() - 1);

    if ((int)newLen < 0)
        newLen = 0;

    char *newstr = rss_realloc(NULL, newLen + 1);   /* room for new chars */
    memset(newstr, ' ', newLen);                    /* initially blanks */
    newstr[newLen] = 0;
                                                    /* cp requested # chars */
    memcpy(newstr, str, oldLen < newLen ? oldLen : newLen);

    stringcons_swallowCharPtr(eb_releaseReg(), newstr);
}




