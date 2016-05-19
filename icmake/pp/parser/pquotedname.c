#include "parser.ih"

char const *p_quotedName(char *name)
{
    name[strlen(name) - 1] = 0;             /* remove the last character */

    return name;
}
