/*#define msg
*/

#include "int.ih"

INTVAR_ *intConstructor_i(int value)
{
    static INTVAR_ ret = {e_int, {0}};

    ret.vu.intval = value;

    return &ret;
}
