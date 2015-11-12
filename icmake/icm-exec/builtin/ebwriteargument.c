#include "builtin.ih"

static char separator[] = {' ', 0};

void eb_writeArgument(void *dest, size_t idx)
{
    int stop;

    do
    {
        char *string = eb_getArg(idx, &stop);

        (*p_destWrite)(dest, string, string + strlen(string));

                                            /* write a separator between */
        if (!stop && *string)               /* list builtin_elements */
            (*p_destWrite)(dest, separator, separator + 1);

        free(string);
    }
    while (!stop);
}

