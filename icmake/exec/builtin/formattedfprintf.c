#include "builtin.ih"

size_t formattedFprintf(FILE *out, size_t start)
{
    p_destWrite = fileWrite;
    return formatter(out, start);
}

