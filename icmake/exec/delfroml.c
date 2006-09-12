/*
\funcref{delfromlist}{VAR\_ delfromlist (\params)}
    {
        {VAR\_} {v} {variable holding list to scratch from}
        {char} {*s} {string to scratch from list}
    }
    {variable holding shrinked list}
    {initvar(), xrealloc(), xstrdup()}
    {inlist(), copylist()}
    {delfroml.c}
    {

        This function deletes string {\em s} to the list of variable {\em v}.
        The same variable is returned.

        Variable {\em v} is initialized (if necessary) to accomodate an
        intermediate memory allocation struct and the new element.
    }
*/

#include "icm-exec.h"

VAR_ delfromlist (v, s)
VAR_ v;
char *s;
{
    register unsigned
        i,
        j;
    register char
        *elem;
    register LIST_
        *list;

    if (! v.vu.i || ! (list = &(v.vu.i->ls.list)) )
        return (v);

    for (i = 0; i < list->size; i++)
    {
        elem = list->element [i];
        if (! strcmp (s, elem))
        {
            for (j = i + 1; j < list->size; j++)
                list->element [j - 1] = list->element [j];
            list->size--;
            xrealloc (elem, 0);
            i--;
        }
    }

    return (v);
}
