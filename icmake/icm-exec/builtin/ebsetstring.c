/*
\funcref{eb_setString}{char $*$eb_setString (\params)}
    {
        {char} {*s} {string to set}
    }
    {duplicate of last pushed string}
    {rss_realloc(), rss_strdup()}
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

#include "builtin.ih"

char *eb_setString (char *s)
{
    free(s);
    return s = rss_strdup(string_charp(stack_top()));
}

