/*
\funcref{discard}{VAR\_ discard (\params)}
    {
        {VAR\_} {v} {variable to discard}
    }
    {variable, possibly after discarding}
    {}
    {}
    {discard.c}
    {

        Function {\em discard()} may be called when a variable or
        intermediate result is no longer needed. The function checks if the
        type of the variable is {\em e\_list} or {\em e\_str}; if so, the
        associated memory possibly may be freed.

        Whether the associated memory actually may be freed depends on the
        {\em vu.i$\rightarrow$count} field of the variable; since several
        variables may point to the same occupied memory. If this count is 1,
        then memory actually may be freed.

        If the associated memory may not be freed due to multiple occupation,
        then the {\em vu.i$\rightarrow$count} field is simply decreased.

    }
*/

#include "icm-exec.h"

VAR_ discard (v)
VAR_ v;
{
    register unsigned
        i;

    if ( (v.type & (e_str | e_list)) && v.vu.i && v.vu.i->count)
    {
        v.vu.i->count --;
        if (! v.vu.i->count)
        {
            if (v.type & e_str)
                xrealloc (v.vu.i->ls.str, 0);
            else
            {
                for (i = 0; i < v.vu.i->ls.list.size; i++)
                    xrealloc (v.vu.i->ls.list.element [i], 0);
                xrealloc (v.vu.i->ls.list.element, 0);
            }
            v.vu.i = xrealloc (v.vu.i, 0);
        }
    }

    return (v);
}
