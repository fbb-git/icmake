#include "icm-pp.h"

/*
    remove \ at the data's end and return 1 or return 0
*/
int string_continue(register STRING_ *str)
{
    if 
    (
        str->len >= 1 && 
        str->data[str->len - 1] == '\\'
    )
    {
        --str->len;
        return 1;
    }
    return 0;
}
