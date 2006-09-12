/*
\funcref{inlist}{int inlist (\params)}
    {
        {VAR\_} {v} {variable holding list}
        {char} {*s} {string to search for}
    }
    {0: string not in list, otherwise: string present in list}
    {}
    {copylist(), addtolist()}
    {inlist.c}
    {
        This function checks if a string {\em s} is present in the list
        contained in variable {\em v}.
    }
*/

#include "icm-exec.h"

int inlist (v, s)
VAR_ v;
char *s;
{
    register unsigned
        i;

    for (i = 0; i < v.vu.i->ls.list.size; i++)
        if (! strcmp (v.vu.i->ls.list.element [i], s))
            return (1);

    return (0);
}
