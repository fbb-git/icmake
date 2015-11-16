/*#define msg
*/

#include "int.ih"

IntVariable *intConstructor_i(int value)
{
    static IntVariable ret = {e_int, {0}};

    ret.vu.intval = value;

    return &ret;
}
