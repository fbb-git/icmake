/*#define msg
*/

#include "builtin.ih"

static char separator[] = {' ', 0};

void eb_writeArgument(void *dest, size_t idx)
{
    int stop;

    do
    {
        char *string = eb_getArg(idx, &stop);

        (*gb_pDestWrite)(dest, string, string + strlen(string));

                                            /* write a separator between */
        if (!stop && *string)               /* list b_elements */
            (*gb_pDestWrite)(dest, separator, separator + 1);

        free(string);
    }
    while (!stop);
}

