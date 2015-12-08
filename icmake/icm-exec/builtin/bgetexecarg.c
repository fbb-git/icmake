/*
    This function performs a similar function as {\em eb_getArg()} but
    prefixes the retrieved argument with the string {\em gb_argHead} and
    postfixes the argument with the string {\em gb_argTail}. {\bf Note that}
    the return value always points to allocated memory which should be
    freed when no longer required.

    See further {\em eb_getArg()}.
*/

#include "builtin.ih"

char *eb_getExecArg (unsigned n, int *flag)
{
    register char
        *arg,
        *start,
        *ret;

    arg = eb_getArg(n, flag);

    if (strlen(gb_argHead))
    {
        start = rss_strjoin(gb_argHead, arg);
        free(arg);
    }
    else
        start = arg;

    if (strlen(gb_argTail))
    {
        ret = rss_strjoin(start, gb_argTail);
        free(start);
    }
    else
        ret = start;

    return ret;
}
