/*
\funcref{fun\_builtin_fields}{void fun\_builtin_fields ()}
    {}
    {}
    {}
    {fun\builtin_makeList(), addtolist()}
    {funfield.c}
    {

        This function is builtin_executed upon an opcode {\em op\_builtin_fields}. The last
        pushed string is converted to a list, by splitting it according to the
        separators which are found in the one-but-last pushed string.

        When the separator-string is empty, then the string to split is split
        into separate characters.

    }

*/

#include "builtin.ih"

static char buf[2];

void builtin_fields ()
{
    char const *str = string_charp(stack_top());
    char const *sep = string_charp(stack_top() - 1);

    gb_reg = *listcons();

    if (*str)
    {
        char *string = rss_strdup(str);
        char *cp;

        if (*sep)
        {
            if ((cp = strtok(string, sep)))
            {
                do
                {
                    list_add_charPtr(&gb_reg, cp);
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
                list_add_charPtr(&gb_reg, buf);
            }
        }
        free(string);
    }
}





