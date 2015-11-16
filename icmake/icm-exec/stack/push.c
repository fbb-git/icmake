/*#define msg
*/

#include "stack.ih"

#include "../int/int.h"
#include "../string/string.h"

static  size_t stackSize;

Variable   *stack;

size_t  sp;
size_t  bp;


void push(Variable const *varEl)
{
    if (sp >= stackSize)
    {
        stackSize += 50;
        stack = rss_realloc(stack, stackSize * sizeof(Variable));
    }

    stack[sp++] = *copyCons(varEl);
}
