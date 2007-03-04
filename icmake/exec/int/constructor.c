#include "int.h"

INTVAR_ *intConstructor()
{
    static INTVAR_ ret = {e_int, {0}};
    return &ret;
}
