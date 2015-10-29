#include "builtin.ih"

void printarg(FILE *out, size_t idx, int *newelement)
{
    char *string = getarg(idx, newelement);

    fputs(string, out);
    if (typeValue(top() - idx) & e_list && *string && *newelement == 0)
        putc(' ', out);

    free(string);
}

