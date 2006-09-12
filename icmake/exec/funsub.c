/*
\funcref{fun\_sub}{void fun\_sub ()}
    {}
    {}
    {pop(), copylist(), delfromlist(), discard()}
    {}
    {funsub.c}
    {

        Function {\em fun\_sub()} processes opcode {\em op\_sub}. Two variables
        are popped and subtracted. Depending on their type, two integer values
        are subtracted or a difference between two lists is computed.

        The result of the subtraction is stored in a temporary variable, which
        is then pushed.

        The two popped variables are discarded after use.
    }
*/

#include "icm-exec.h"

void fun_sub ()
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

    if (lval.type & e_int)
    {
        tmp.type = e_int;
        tmp.vu.intval = lval.vu.intval - rval.vu.intval;
    }
    else
    {
        tmp = copylist (lval);
        if ( (rlist = &(rval.vu.i->ls.list)) )
            for (i = 0; i < rlist->size; i++)
                tmp = delfromlist (tmp, rlist->element [i]);
    }

    push (tmp);
    discard (lval);
    discard (rval);
}
