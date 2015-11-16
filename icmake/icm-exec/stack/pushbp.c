#include "stack.ih"


void pushBP()
{
    Variable idx = *intConstructor_i((int)bp);

    bp = sp;
    push(&idx);
}
