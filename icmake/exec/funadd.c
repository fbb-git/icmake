/*
\funcref{fun\_add}{void fun\_add ()}
    {}
    {}
    {pop(), xstrdup(), copylist(), addtolist(), discard()}
    {}
    {funadd.c}
    {

        Function {\em fun\_add()} processes opcode {\em op\_add}. Two variables
        are popped and added. Depending on their type, two integer values are
        added, two strings are concatenated, or two lists are merged.

        The result of the addition is stored in a temporary variable, which is
        then pushed.

        The two popped variables are discarded after use.

    }
*/

#include "icm-exec.h"

void fun_add ()
{
    VAR_
        tmp,
        lval,
        rval;
    register unsigned
        i;
    register LIST_
        *rlist;

    rval = pop ();
    lval = pop ();

    if (lval.type & e_str)
    {
        tmp = newvar (e_str);
        tmp.vu.i->ls.str =
            xstrcat (xstrdup (lval.vu.i->ls.str), rval.vu.i->ls.str);
    }
    else if (lval.type & e_int)
    {
        tmp.type = e_int;
        tmp.vu.intval = lval.vu.intval + rval.vu.intval;
    }
    else
    {
        tmp = copylist (lval);
        rlist = &(rval.vu.i->ls.list);
        for (i = 0; i < rlist->size; i++)
            if (! inlist (tmp, rlist->element [i]) )
                tmp = addtolist (tmp, rlist->element [i]);
    }

    push (tmp);
    discard (lval);
    discard (rval);
}
