
/* #define msg
*/

#include "stack.ih"

#include "../int/int.h"
#include "../string/string.h"

static  size_t stackSize;

void stack_push(Variable const *varEl)
{
    if (gs_sp >= stackSize)
    {
        stackSize += 50;
        gs_stack = rss_realloc(gs_stack, stackSize * sizeof(Variable));
    }

    copycons(gs_stack + gs_sp++, varEl);
}




