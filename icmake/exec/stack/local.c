#include "stack.ih"

VAR_ *local(INT16 index)
{
    return stack + (INT16)bp + (INT16)0xc000 - index;
}
