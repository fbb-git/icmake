/*
\funcref{rss_strdup}{char $*$rss_strdup (\params)}
    {
        {char} {*s} {string to duplicate}
    }
    {pointer to duplicated string}
    {rss_error()}
    {rss_realloc()}
    {rss_strdup.c}
    {
        {\em rss_strdup()} behaves like {\em strdup()}, except that when memory is
        exhausted (therefore, when the string cannot be duplicated) function
        {\em error()} is called to terminate the program.

        The string to duplicate, {\em s}, may be {\em NULL}. In this case a
        duplicate of a zero-length string is returned.
    }
*/

#include "rss.ih"

char *rss_strdup (s)
char const *s;
{
    register char
        *ret;

    if (! s)
        s = "";

    if (! (ret = strdup (s)) )
        rss_error ("out of memory");

    return (ret);
}
