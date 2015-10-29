#include "builtin.ih"

char *getNr(size_t *idx, char *mid)
{
    char *beyond;
    *idx = strtol(mid + 1, &beyond, 10);
    return beyond;                      /* return the position beyond %<nr> */
}

    
