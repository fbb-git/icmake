/*
\funcref{addtolist}{VAR\_ addtolist (\params)}
    {
        {VAR\_} {v} {variable holding list to add to}
        {char} {*s} {string to add to list}
    }
    {variable holding expanded list}
    {initvar(), xrealloc(), xstrdup()}
    {inlist(), copylist()}
    {addtolis.c}
    {
        This function adds string {\em s} to the list of variable {\em v}. The
        same variable is returned.

        Variable {\em v} is initialized (if necessary) to accomodate an
        intermediate memory allocation struct and the new element.
    }
*/

#include "icm-exec.h"

VAR_ addtolist (v, s)
VAR_ v;
char *s;
{
    register LIST_
        *list;

    v = initvar (v);

    if (! s || ! *s)
        return (v);

    list = &(v.vu.i->ls.list);
    list->element =
        xrealloc (list->element, (list->size + 1) * sizeof (char *));
    list->element[list->size] = xstrdup (s);
    list->size++;

    return (v);
}
