#include "icm-pp.h"

void preload (char *symbol, char *value)
{
    strcpy (lexbuf, value);
    insert (symbol);
}
