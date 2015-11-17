/* #define msg
*/

#include "builtin.ih"

void builtin_call(size_t funIdx)
{
    msg("called for function 0x%x", funIdx);

    gb_pBuiltinFun[funIdx]();
}
