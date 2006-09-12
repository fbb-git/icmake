/*
\funcref{compare}{void compare (\params)}
    {
        {VAR\_} {lval} {left variable to compare}
        {VAR\_} {rval} {right variable to compare}
    }
    {}
    {}
    {}
    {compare.c}
    {

        This function compares two {\em VAR\_} type variables and pushes the
        result of the comparison. Comparisons between different types (e.g.,
        between a string and a list) should never occur, since the compiler
        either generates opcodes for type casting or issues an error.

        The comparison between non-list types is either an integer subtraction,
        or a {\em strcmp()}. The comparison between two lists is performed as
        follows:

        \begin{itemize}

            \item If the lists do not have the same size, then the list with
            the bigger size is larger.

            \item For all elements in the list, a string comparison is made.
            made. If this comparison indicates non-zero, the list with the
            alphabetically higher string is larger.

        \end{itemize}

        The return value of {\em compare()} is a {\em VAR\_} struct with type
        {\em e\_int}. The {\em vu.intval} field is the result of comparison,
        with the value $<0$ meaning that {\em rval} is larger; $>0$ meaning
        that {\em lval} is larger, or $0$ meaning that {\em lval == rval}.
}

*/

#include "icm-exec.h"

void compare (lval, rval)
VAR_ lval, rval;
{
    register unsigned
        i;
    register LIST_
        *llist,
        *rlist;
    VAR_
        ret;

    ret.type = e_int;

    if (lval.type & e_str)
        ret.vu.intval = strcmp (lval.vu.i->ls.str, rval.vu.i->ls.str);
    else if (lval.type & e_int)
        ret.vu.intval = lval.vu.intval - rval.vu.intval;
    else
    {
        ret.vu.intval = 0;                  /* assume equal */
        llist = &(lval.vu.i->ls.list);
        rlist = &(rval.vu.i->ls.list);
        if (llist->size != rlist->size)
            ret.vu.intval = llist->size - rlist->size;
        else
            for (i = 0; i < llist->size; i++)
                if ( (ret.vu.intval = strcmp (llist->element [i],
                          rlist->element [i]))
                   )
                    break;
    }

    push (ret);
}
