/*
\fucref{fun\_element}{void fun\_element ()}
    {}
    {}
    {xstrdup(), newvar()}
    {}
    {funeleme.c}
    {

        This function is called when an {\em op\_element} opcode is enountered.
        The last pushed value is interpreted as a list, the one but last pushed
        value as an index.

        The return register {\em reg} is set to a string variable, holding a
        duplicate of the listelement {\em index}. If index is larger than the
        size of the element, {\em reg} holds a null-string.

    }
*/

#include "icm-exec.h"

void fun_element ()
{
    register unsigned
        index;
    register LIST_
        *list;

    reg = newvar (e_str);

    index = (unsigned) stack [sp].vu.intval;
    list  = &(stack [sp - 1].vu.i->ls.list);

    if (index < list->size )
        reg.vu.i->ls.str = xstrdup (list->element [index]);
    else
        reg.vu.i->ls.str = xstrdup (nullstring);
}
