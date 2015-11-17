#include "int.h"

IntVariable const *intcons()
{
    static IntVariable ret = {e_int, {0}};
    return &ret;
}
