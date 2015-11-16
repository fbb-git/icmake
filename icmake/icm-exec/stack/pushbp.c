#include "stack.ih"


void stack_pushBP()
{
    Variable idx = *intcons_int((int)gs_bp);

    gs_bp = gs_sp;
    stack_push(&idx);
}
