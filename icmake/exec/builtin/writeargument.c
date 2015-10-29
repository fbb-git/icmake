#include "builtin.ih"

static char separator[] = {' ', 0};

void writeArgument(void *dest, size_t idx, int *stop)
{
    char *string = getarg(idx, stop);

    (*p_destWrite)(dest, string, string + strlen(string));

    free(string);

                                            /* at a list: write a separator */
    if (typeValue(top() - idx) & e_list && *string && !*stop)
        (*p_destWrite)(dest, separator, separator + 1);
}

