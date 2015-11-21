/*
    Function {\em rss_strcat()} reallocates the string {\em s1} and then
    concatenates {\em s2} to it. Therefore, the first argument of the
    function must point to allocated memory. The second argument may be any
    string, and can possibly be freed after the call.
*/

#include "rss.ih"

char *rss_strcat (char *s1, char const *s2)
{
    if (!s1 || !*s1)
        return rss_strdup(s2);
    if (!s2 || !*s2)
        return rss_strdup(s1);

    s1 = rss_realloc(s1, strlen(s1) + strlen(s2) + 1);
    strcat(s1, s2);
    return s1;
}
