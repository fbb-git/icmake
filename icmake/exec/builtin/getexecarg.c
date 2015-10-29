/*
\funcref{getexecarg}{char $*$getexecarg (\params)}
    {
        {int} {n} {{\em n}-th argument to retrieve}
        {int} {*increment} {address of counter increment}
    }
    {argument in string format}
    {xstrdup(), getarg(), xrealloc()}
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
        start = xstrdup(arghead);
        start = xstrcat(start, arg);
        free(arg);
    }
    else
        start = arg;

    if (strlen (argtail))
    {
        ret = xstrcat (start, argtail);
        free(start);
    }
    else
        ret = start;

    return (ret);
}
