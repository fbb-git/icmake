/*
\funcref{xstrdup}{char $*$xstrdup (\params)}
    {
        {char} {*s} {string to duplicate}
    }
    {pointer to duplicated string}
    {error()}
    {xrealloc()}
    {xstrdup.c}
    {
        {\em xstrdup()} behaves like {\em strdup()}, except that when memory is
        exhausted (therefore, when the string cannot be duplicated) function
        {\em error()} is called to terminate the program.

        The string to duplicate, {\em s}, may be {\em NULL}. In this case a
        duplicate of a zero-length string is returned.
    }
*/

#include "icrssdef.h"

char *xstrdup (s)
char const *s;
{
    register char
        *ret;

    if (! s)
        s = "";

    if (! (ret = strdup (s)) )
        error ("out of memory");

    return (ret);
}
