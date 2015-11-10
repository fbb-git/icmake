/*
\funcref{eb_getExecArg}{char $*$eb_getExecArg (\params)}
    {
        {int} {n} {{\em n}-th argument to retrieve}
        {int} {*increment} {address of counter increment}
    }
    {argument in string format}
    {rss_strdup(), eb_getArg(), rss_realloc()}
    {}
    {getbuiltin_execa.c}
    {

        This function performs a similar function as {\em eb_getArg()} but
        prefixes the retrieved argument with the string {\em arghead} and
        postfixes the argument with the string {\em argtail}. {\bf Note that}
        the return value always points to allocated memory which should be
        freed when no longer required.

        See further {\em eb_getArg()}.

    }
*/

#include "builtin.ih"

char *eb_getExecArg (size_t n, int *flag)
{
    register char
        *arg,
        *start,
        *ret;

    arg = eb_getArg (n, flag);

    if (strlen (arghead))
    {
        start = rss_strdup(arghead);
        start = rss_strcat(start, arg);
        free(arg);
    }
    else
        start = arg;

    if (strlen (argtail))
    {
        ret = rss_strcat (start, argtail);
        free(start);
    }
    else
        ret = start;

    return (ret);
}
