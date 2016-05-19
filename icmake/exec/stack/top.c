#include "stack.ih"

Variable *stack_top()
{
    s_testUnderflow();
    return gs_stack + gs_sp - 1;
}
