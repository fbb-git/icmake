/*
\funcref{getexecarg}{char $*$getexecarg (\params)}
    {
        {int} {n} {{\em n}-th argument to retrieve}
        {int} {*increment} {address of counter increment}
    }
    {argument in string format}
    {rss_strdup(), getarg(), rss_realloc()}
    {}
    {getexeca.c}
    {

        This function performs a similar function as {\em getarg()} but
        prefixes the retrieved argument with the string {\em arghead} and
        postfixes the argument with the string {\em argtail}. {\bf Note that}
        the return value always points to allocated memory which should be
        freed when no longer required.

        See further {\em getarg()}.

    }
*/

#include "builtin.ih"

char *getexecarg (size_t n, int *flag)
{
    register char
        *arg,
        *start,
        *ret;

    arg = getarg (n, flag);

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
