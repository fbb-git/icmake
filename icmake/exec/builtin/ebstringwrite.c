#include "builtin.ih"

void eb_stringWrite(void *dest, char const *begin, char const *end)
{
    char beyond = *end;             /* save the char at end         */
    *(char *)end = 0;               /* end the string to catenate   */

    *(char **)dest = rss_strcat(*(char **)dest, begin);

    *(char *)end = beyond;          /* restore the char at end      */
}

