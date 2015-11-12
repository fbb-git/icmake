#include "int.h"

INTVAR_ *intCopyCons(INTVAR_ const *other)
{
    static INTVAR_ ret = {e_int, {0}};

    intSetValue(&ret, intValue(other));

    return &ret;
}
