/*
\funcref{rss_strcat}{char $*$rss_strcat (\params)}
    {
        {char} {*s1} {reallocatable string to cat to}
        {char} {*s2} {string to cat to {\em s1}}
    }
    {reallocated string {\em s1} with {\em s2} concatenated to it}
    {rss_realloc()}
    {rss_strdup()}
    {rss_strcat.c}
    {

        Function {\em rss_strcat()} reallocates the string {\em s1} and then
        concatenates {\em s2} to it. Therefore, the first argument of the
        function must point to allocated memory. The second argument may be any
        string, and can possibly be freed after the call.

    }
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
