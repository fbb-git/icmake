/*
  Function {\em fun\_builtin_strFormat()} returns a formatted string using "%n"
  placeholders  found in the first arg 
*/

#include "builtin.ih"

void b_strFormat(void)
{
    char *ptr = rss_strdup("");        // allocate empty string

    gb_pDestWrite = eb_stringWrite;
    
    eb_formatter(&ptr, 1);

    gb_reg = *stringcons_charPtr(ptr);
    free(ptr);
}












