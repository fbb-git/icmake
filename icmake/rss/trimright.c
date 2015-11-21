#define msg
#include "rss.ih"

char *rss_trimRight(char const *begin)
{
    char const *end = begin + strlen(begin);

    char org = *begin;
    *(char *)begin = 'S';               /* sentinel when looking for no ' ' */
                                        
    while (isspace(*--end))             /* find the last non-ws char. pos */
        ;
    ++end;

    *(char *)begin = org;               /* restore the 1st char */

    if (begin == end && !isspace(org))  /* accept 1st char if not isspace */
        ++end;

    org = *end;
    *(char *)end = 0;                   /* terminate the reduced string */

    char *ret = rss_strdup(begin);      

    msg("trimmed: `%s'", ret);

    *(char *)end = org;                 /* restore the original contents */

    return ret;
}

