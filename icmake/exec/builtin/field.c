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

#include "builtin.ih"

static char buf[2];

void fun_fields ()
{
    char const *str = stringStr(top());
    char const *sep = stringStr(top() - 1);

    reg = *listConstructor();

    if (*str)
    {
        char *string = xstrdup(str);
        char *cp;

        if (*sep)
        {
            if ((cp = strtok(string, sep)))
            {
                do
                {
                    listAdd_cP(&reg, cp);
                    cp = strtok(NULL, sep);
                }
                while (cp);
            }
        }
        else
        {
            cp = string;
            while (*cp)
            {
                buf[0] = *cp++;
                listAdd_cP(&reg, buf);
            }
        }
        free(string);
    }
}





