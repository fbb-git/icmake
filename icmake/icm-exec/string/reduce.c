#include "string.ih"

void string_reduce(String *str, unsigned len)
{
    if (len < strlen(str->data->str))
        str->data->str[len] = 0;
}
