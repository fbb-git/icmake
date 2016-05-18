/*
*/

#include "builtin.ih"

void b_subString()
{
    char const *str = string_charp(stack_top());

    unsigned strLen = strlen(str);

    int firstIdx = int_value(stack_top() - 1);

    if (firstIdx < 0)               // use 0 for negative offsets
        firstIdx = 0;

    int nChars = int_value(stack_top() - 2);

    if (nChars < 0)                 // use 0 for negative # of chars
        nChars = 0;

    if (firstIdx >= strLen)                         // 1st idx points beyond
        stringcons_charPtr(eb_releaseReg(), "");    // string contents: return
                                                    // empty string
    else
    {
        stringcons_charPtr(eb_releaseReg(), str + firstIdx);  /* intbal copy */
        string_reduce(&gb_reg, nChars);               /* reduce the strlen if 
                                                       necessary */
    }    
}




