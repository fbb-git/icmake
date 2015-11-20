#include "string.ih"

void string_reduce(String *str, size_t len)
{
    if (len < strlen(str->data->str))
        str->data->str[len] = 0;
}
