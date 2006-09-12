/*
\funcref{copylist}{VAR\_ copylist (\params)}
    {
        {VAR\_} {v} {variable holding list to copy}
    }
    {variable with copied list}
    {xrealloc(), xstrdup()}
    {inlist(), addtolist()}
    {copylist.c}
    {
        This function copies the list of the variable which is stated as a
        parameter. A variable holding the copied list is returned.

        The type of the returned variable is set to {\em e\_list}, while the
        {\em e\_temp} flag is also set.
    }
*/

#include "icm-exec.h"

VAR_ copylist (v)
VAR_ v;
{
    register unsigned
        i;
    VAR_
        ret;
    LIST_
        *vlist,
        *rlist;

    ret = newvar (e_list);

    rlist = &(ret.vu.i->ls.list);
    vlist = &(v.vu.i->ls.list);
    rlist->size = vlist->size;
    rlist->element = xrealloc (NULL, (vlist->size * sizeof (char *)));
    for (i = 0; i < vlist->size; i++)
        rlist->element [i] = xstrdup (vlist->element [i]);

    return (ret);
}
