/*
  Function {\em fun\_builtin_strFormat()} returns a formatted string using "%n"
  placeholders  found in the first arg 
*/

/* #define msg
*/

#include "builtin.ih"

void b_strFormat(void)
{
    char *ptr = rss_strdup("");        /* allocate empty string */

    gb_pDestWrite = eb_stringWrite;     /* write to a string */
    
    eb_formatter(&ptr, TO_STRING);

    stringcons_charPtr(eb_releaseReg(), ptr);

    free(ptr);
}












