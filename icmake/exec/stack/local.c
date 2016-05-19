#include "stack.ih"

Variable *stack_local(int index)
{
    return gs_stack + (int)gs_bp + (int16_t)0xc000 - index;
}
