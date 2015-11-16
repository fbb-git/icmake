#include "int.h"

IntVariable *intcons()
{
    static IntVariable ret = {e_int, {0}};
    return &ret;
}
