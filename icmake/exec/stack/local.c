#include "stack.ih"

VAR_ *local(int index)
{
    return stack + (int)bp + (INT16)0xc000 - index;
}
