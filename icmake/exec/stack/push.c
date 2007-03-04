#include "stack.ih"

#include "../int/int.h"
#include "../string/string.h"

static  size_t stackSize;

VAR_   *stack;

size_t  sp;
size_t  bp;


void push(VAR_ const *varEl)
{
    if (sp >= stackSize)
    {
        stackSize += 50;
        stack = xrealloc(stack, stackSize * sizeof(VAR_));
    }
    stack[sp++] = *copyCons(varEl);
}
