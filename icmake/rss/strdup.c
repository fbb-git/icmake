/*
    {\em rss_strdup()} behaves like {\em strdup()}, except that when memory is
    exhausted (therefore, when the string cannot be duplicated) function
    {\em error()} is called to terminate the program.

    The string to duplicate, {\em s}, may be {\em NULL}. In this case a
    duplicate of a zero-length string is returned.
*/

#include "rss.ih"

char *rss_strdup(char const *str)
{
    register char *ret;

    if (!(ret = strdup(str ? str : "")))
        rss_fatal(0, 0, "out of memory");

    return ret;
}
