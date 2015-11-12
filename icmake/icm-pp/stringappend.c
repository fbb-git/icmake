#include "icm-pp.h"

int string_append(register STRING_ *str, register int ch)
{
    if (str->len == str->size)
        str->data = rss_realloc(str->data, str->size += STRING_BLOCK); 

    str->data[str->len++] = ch;
    return ch;
}
