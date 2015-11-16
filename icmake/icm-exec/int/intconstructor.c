#include "int.h"

IntVariable *intConstructor()
{
    static IntVariable ret = {e_int, {0}};
    return &ret;
}
