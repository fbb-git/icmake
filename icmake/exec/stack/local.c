#include "stack.ih"

VAR_ *local(int index)
{
    return stack + (int)bp + (int16_t)0xc000 - index;
}
