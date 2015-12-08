/* #define msg
*/

#include "builtin.ih"

void builtin_call(unsigned funIdx)
{
    msg("called for function 0x%x", funIdx);

    gb_pBuiltinFun[funIdx]();
}
