#include "stack.ih"

void stack_pushBP()
{
    Variable tmp;

    intcons_int(&tmp, (int)gs_bp);

    gs_bp = gs_sp;
    stack_push(&tmp);

    intDestructor(&tmp);
}
