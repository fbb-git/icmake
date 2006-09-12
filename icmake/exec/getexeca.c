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

#include "icm-exec.h"

char *getexecarg (n, flag)
int n;
int *flag;
{
    register char
        *arg,
        *start,
        *ret;

    arg = getarg (n, flag);

    if (strlen (arghead))
    {
        start = xstrdup (arghead);
        start = xstrcat (start, arg);
        xrealloc (arg, 0);
    }
    else
        start = arg;

    if (strlen (argtail))
    {
        ret = xstrcat (start, argtail);
        xrealloc (start, 0);
    }
    else
        ret = start;

    return (ret);
}
