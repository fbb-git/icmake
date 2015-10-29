#include "builtin.ih"

static char separator[] = {' ', 0};

void writeArgument(void *dest, size_t idx, int *stop)
{
    char *string = getarg(idx, stop);

    stringWrite(dest, string, string + strlen(string));

    if (typeValue(top() - idx) & e_list && *string && *stop == 0)
        stringWrite(dest, separator, separator + 1);

    free(string);
}

