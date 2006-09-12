/*
\funcref{fun\_fields}{void fun\_fields ()}
    {}
    {}
    {}
    {fun\makelist(), addtolist()}
    {funfield.c}
    {

        This function is executed upon an opcode {\em op\_fields}. The last
        pushed string is converted to a list, by splitting it according to the
        separators which are found in the one-but-last pushed string.

        When the separator-string is empty, then the string to split is split
        into separate characters.

    }

*/

#include "icm-exec.h"

void fun_fields ()
{
    register char
        *string,
        *sep,
        *cp;
    char
        buf [2];

    buf [1] = '\0';

    string = stack [sp].vu.i->ls.str;
    sep    = stack [sp - 1].vu.i->ls.str;

    reg = newvar (e_list);

    if (*string)
    {
        string = xstrdup (string);
        if (*sep)
        {
            if ( (cp = strtok (string, sep)) )
            {
                reg = addtolist (reg, cp);
                while ( (cp = strtok (NULL, sep)) )
                    reg = addtolist (reg, cp);
            }
        }
        else
        {
            for (cp = string; *cp; cp++)
            {
                buf [0] = *cp;
                reg = addtolist (reg, buf);
            }
        }
        xrealloc (string, 0);
    }
}
