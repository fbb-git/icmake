#include "int.h"

IntVariable *intCopyCons(IntVariable const *other)
{
    static IntVariable ret = {e_int, {0}};

    intSetValue(&ret, intValue(other));

    return &ret;
}
