#include "int.h"

INTVAR_ intCopyCons(INTVAR_ const *other)
{
    INTVAR_ ret = {e_int};

    intSetValue(&ret, intValue(other));

    return ret;
}
