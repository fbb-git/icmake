#include "int.h"

INTVAR_ intConstructor_i(int value)
{
    INTVAR_ ret = {e_int, {value}};

    return ret;
}
