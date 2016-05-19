/*
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
*/

#include "builtin.ih"

char *eb_getArg(unsigned idx, int *flag)
{
    char convbuf [50];

    register char *ret;
    Variable *base = stack_top() - idx;

    *flag = 1;                              /* assume that done with args */

    if (var_type(base) & e_int)            /* incase of an int.. */
    {
        gb_listIndex = 0;
        sprintf (convbuf, "%d", int_value(base));
        return (rss_strdup (convbuf));
    }

    if (var_type(base) & e_str)            /* incase of a string.. */
    {
        gb_listIndex = 0;
        return rss_strdup(string_charp(base));
    }

                                            /* incase of a list: */
    if (!list_size(base))
    {
        gb_listIndex = 0;
        ret = rss_strdup("");
    }
    else
    {
        ret = rss_strdup(list_at(base, gb_listIndex));
        ++gb_listIndex;
        if (gb_listIndex < list_size(base))
            *flag = 0;                      /* if more b_elements, not done */
        else                                /* with args.. */
            gb_listIndex = 0;                  /* otherwise: returnflag = 1, */
    }                                       /* no next b_elements to get */

    return (ret);
}




