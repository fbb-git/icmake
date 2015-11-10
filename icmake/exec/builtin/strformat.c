/*
  Function {\em fun\_builtin_strFormat()} returns a formatted string using "%n"
  placeholders  found in the first arg 
*/

#include "builtin.ih"

void builtin_strFormat(void)
{
    char *ptr = rss_strdup("");        // allocate empty string

    p_destWrite = eb_stringWrite;
    
    eb_formatter(&ptr, 1);

    reg = *stringConstructor_cP(ptr);
    free(ptr);
}












