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

#include "builtin.ih"

char *getarg (size_t n, int *flag)
{
    char
        convbuf [50];
    static size_t
        listindex;
    register char
        *ret;
    VAR_ *base = top() - n;
    *flag = 1;                              /* assume that done with args */

    if (typeValue(base) & e_int)            /* incase of an int.. */
    {
        listindex = 0;
        sprintf (convbuf, "%d", intValue(base));
        return (xstrdup (convbuf));
    }

    if (typeValue(base) & e_str)            /* incase of a string.. */
    {
        listindex = 0;
        return xstrdup(stringStr(base));
    }

                                            /* incase of a list: */
    if (!listSize(base))
    {
        listindex = 0;
        ret = xstrdup("");
    }
    else
    {
        ret = xstrdup(listAt(base, listindex));
        listindex++;
        if (listindex < listSize(base))
            *flag = 0;                      /* if more elements, not done */
        else                                /* with args.. */
            listindex = 0;                  /* otherwise: returnflag = 1, */
    }                                       /* no next elements to get */

    return (ret);
}




