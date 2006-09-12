/*
\funcref{setstring}{char $*$setstring (\params)}
    {
        {char} {*s} {string to set}
    }
    {duplicate of last pushed string}
    {xrealloc(), xstrdup()}
    {}
    {setstrin.c}
    {

        This function is called from {\em fun\_arg\_head()}, {\em
        fun\_cmd\_head()}, etc., to set the appropriate strings to a duplicate
        of the last pushed string.

        The argument {\em s} is freed if necessary. It should be the same
        pointer variable which is assigned the return value.

    }
*/

#include "icm-exec.h"

char *setstring (char *s)
{
    xrealloc (s, 0);
    s = xstrdup (stack [sp].vu.i->ls.str);

    return (s);
}
