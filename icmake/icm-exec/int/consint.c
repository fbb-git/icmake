/*#define msg
*/

#include "int.ih"

IntVariable const *intcons_int(int value)
{
    static IntVariable ret = {e_int, {0}};

    ret.vu.intval = value;

    return &ret;
}
