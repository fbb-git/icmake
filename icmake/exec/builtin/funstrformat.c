/*
  Function {\em fun\_strformat()} returns a formatted string using "%n"
  placeholders  found in the first arg 
*/

#include "builtin.ih"

void fun_strformat(void)
{
    char *ptr = xstrdup("");        // allocate empty string

    p_destWrite = stringWrite;
    
    formater(&ptr, 1);

    reg = *stringConstructor_cP(ptr);
    free(ptr);
}












