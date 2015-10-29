#include "builtin.ih"

char *getNr(size_t *idx, char *ptr)     /* ptr points at <nr> of %<nr>  */
{
    char *beyond;
    *idx = strtol(ptr, &beyond, 10);
    return beyond;                      /* return the position beyond <nr>  */
}

    
