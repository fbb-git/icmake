#include "icm-pp.h"

void preload(char *symbol, char *value)
{
    lexbuf.len = strlen(value) + 1;
    if (lexbuf.size < lexbuf.len)
        lexbuf.data = xrealloc(lexbuf.data, lexbuf.size = lexbuf.len);

    strcpy(lexbuf.data, value);
    insert(symbol);
}
