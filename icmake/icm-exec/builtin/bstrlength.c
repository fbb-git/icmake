/*
        Function {\em fun\_strlen()} returns the length of a string
*/

#include "builtin.ih"

void b_strLength()
{
    intcons_int(eb_releaseReg(), (int)strlen(string_charp(stack_top())));
}
