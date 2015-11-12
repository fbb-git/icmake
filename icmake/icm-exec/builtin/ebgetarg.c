/*
\fucref{eb_getArg}{char $*$eb_getArg (\params)}
    {
        {int} {n} {{\em n}-th argument to retrieve}
        {int} {*increment} {address of counter increment}
    }
    {argument in string format}
    {rss_strdup()}
    {}
    {eb_getArg.c}
    {

        Function {\em eb_getArg()} can be called to retrieve arguments from the
        stack (e.g., the arguments of a {\em print()} statement) in string
        format. Parameter {\em n} specifies the argument to retrieve: 0 is the
        last pushed argument, 1 is the argument pushed before that, etc..

        Parameter {\em increment} tells the caller whether to start retrieving
        a next argument or not. In the case of a list argument, {\em eb_getArg()}
        sets this flag to 0 while the list is not yet completely processed.

        When a list argument is processed or when the retrieved argument is not
        a list, the flag value is set to 1.

        The return value points to a string duplicate. The caller should free
        this memory when it is no longer needed.

    }
*/

#include "builtin.ih"

char *eb_getArg(size_t idx, int *flag)
{
    char convbuf [50];

    register char *ret;
    VAR_ *base = top() - idx;

    *flag = 1;                              /* assume that done with args */

    if (typeValue(base) & e_int)            /* incase of an int.. */
    {
        listIndex = 0;
        sprintf (convbuf, "%d", intValue(base));
        return (rss_strdup (convbuf));
    }

    if (typeValue(base) & e_str)            /* incase of a string.. */
    {
        listIndex = 0;
        return rss_strdup(stringStr(base));
    }

                                            /* incase of a list: */
    if (!listSize(base))
    {
        listIndex = 0;
        ret = rss_strdup("");
    }
    else
    {
        ret = rss_strdup(listAt(base, listIndex));
        ++listIndex;
        if (listIndex < listSize(base))
            *flag = 0;                      /* if more builtin_elements, not done */
        else                                /* with args.. */
            listIndex = 0;                  /* otherwise: returnflag = 1, */
    }                                       /* no next builtin_elements to get */

    return (ret);
}




