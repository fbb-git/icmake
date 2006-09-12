/*
\funcref{sortlist}{VAR\_ sortlist (\params)}
    {
        {VAR\_} {v} {variable holding list to sort}
    }
    {variable holding sorted list}
    {}
    {}
    {sortlist.c}
    {

        This function sorts the list of variable {\em v}. The same variable,
        after sorting, is returned.

    }
*/

#include "icm-exec.h"

static int compelement (void const *s1, void const *s2)
{
    return (strcmp (* (char **)s1, * (char **)s2));
}

VAR_ sortlist (v)
VAR_ v;
{
    qsort (v.vu.i->ls.list.element,
           v.vu.i->ls.list.size,
           sizeof (char *),
           compelement);
    return (v);
}
