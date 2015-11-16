#include "stack.ih"


void stack_popBP()
{
    while (gs_sp - 1 != gs_bp)
        stack_pop();

    gs_bp = int_value(stack_top());            /* restore old gs_bp   */
    stack_pop();
}
