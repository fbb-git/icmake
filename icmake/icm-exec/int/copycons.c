#include "int.h"

IntVariable *intcopycons(IntVariable const *other)
{
    static IntVariable ret = {e_int, {0}};

    int_assignInt(&ret, int_value(other));

    return &ret;
}
