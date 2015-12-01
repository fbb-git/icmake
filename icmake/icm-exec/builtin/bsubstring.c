/*
*/

#include "builtin.ih"

static char const *limits(char const *ptr, char const *begin, char const *end)
{
    if (ptr < begin)
        return begin;
    if (ptr > end)
        return end;
    return ptr;
}

void b_subString()
{
                                        /* begin/end limits of the str */
    char const *str = string_charp(stack_top());
    char const *beyond = str + strlen(str);

                                        /* requested begin/end ptrs of the 
                                            substring */
    char const *begin = str + int_value(stack_top() - 1);
    char const *end   = begin + int_value(stack_top() - 2);

                                        
    begin = limits(begin, str, beyond); /* set begin inside str */
    end = limits(end, str, beyond);     /* set end inside str */

    if (end < begin)                    /* end must at least be begin */
        end = begin;
                    
    stringcons_charPtr(eb_releaseReg(), begin);     /* intial copy */
    string_reduce(&gb_reg, end - begin);            /* reduce the strlen if 
                                                       necessary */
}




