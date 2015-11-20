/*
*/

#include "builtin.ih"

void b_subString()
{
    char const *str = string_charp(stack_top());

    size_t str_len = strlen(str);

    int firstIdx = int_value(stack_top() - 1);
    int nChars = int_value(stack_top() - 2);

    if (firstIdx < 0)
        firstIdx = 0;

    if ((size_t)firstIdx < str_len && nChars > 0)
    {
        stringcons_charPtr(eb_releaseReg(), str + firstIdx);  /* intial copy */
        string_reduce(&gb_reg, nChars);               /* reduce the strlen if 
                                                       necessary */
    }    
}




