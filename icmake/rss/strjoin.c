/*
    this function returns a copy of s1 to which s2 is appended.
    Both s1 and s2 may be NULL, in which case an empty string is returned.
*/

#include "rss.ih"

char *rss_strjoin(char const *s1, char const *s2)
{
    return rss_strcat(rss_strdup(s1), s2);
}
    
