/*
\fucref{getarg}{char $*$getarg (\params)}
    {
        {int} {n} {{\em n}-th argument to retrieve}
        {int} {*increment} {address of counter increment}
    }
    {argument in string format}
    {xstrdup()}
    {}
    {getarg.c}
    {

        Function {\em getarg()} can be called to retrieve arguments from the
        stack (e.g., the arguments of a {\em print()} statement) in string
        format. Parameter {\em n} specifies the argument to retrieve: 0 is the
        last pushed argument, 1 is the argument pushed before that, etc..

        Parameter {\em increment} tells the caller whether to start retrieving
        a next argument or not. In the case of a list argument, {\em getarg()}
        sets this flag to 0 while the list is not yet completely processed.

        When a list argument is processed or when the retrieved argument is not
        a list, the flag value is set to 1.

        The return value points to a string duplicate. The caller should free
        this memory when it is no longer needed.

    }
*/

#include "icm-exec.h"

char *getarg (n, flag)
int n;
int *flag;
{
    char
        convbuf [50];
    static unsigned
        listindex;
    register char
        *ret;

    *flag = 1;                              /* assume that done with args */

    if (stack [sp - n].type & e_int)        /* incase of an int.. */
    {
        listindex = 0;
        sprintf (convbuf, "%d", stack [sp - n].vu.intval);
        return (xstrdup (convbuf));
    }

    if (stack [sp - n].type & e_str)        /* incase of a string.. */
    {
        listindex = 0;
        return (xstrdup (stack [sp - n].vu.i->ls.str));
    }

                                            /* incase of a list: */
    if (! stack [sp - n].vu.i->ls.list.size)
    {
        listindex = 0;
        ret = xstrdup (nullstring);
    }
    else
    {
        ret = xstrdup (stack [sp - n].vu.i->ls.list.element [listindex]);
        listindex++;
        if (listindex < stack [sp - n].vu.i->ls.list.size)
            *flag = 0;                      /* if more elements, not done */
        else                                /* with args.. */
            listindex = 0;                  /* otherwise: returnflag = 1, */
    }                                       /* no next elements to get */

    return (ret);
}
