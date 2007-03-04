#include "icm-pp.h"

/*
int 
    push_active(int),       actual activity request
    pop_active(void),       returns previous output_active value
    negate_active(void);    negate the current request

push_active() receives an activity request and combines it with the current
top's d_active value to obtain a new d_active value which is returned as the
new output_active value.

pop_active() removes the current top and returns the popped d_active value

negate_active() changes d_request on top of the stack, and determines and 
returns the new d_active value

construct_active() initializes the stack.

*/

typedef struct
{
    int d_active;               /* output_active of current nesting level */
    int d_request;              /* requested activity level */
} ACTIVESTACK_;

static int sp = 0;
static ACTIVESTACK_ *stack = NULL;

static int active(void)
{
    return stack[sp].d_active = stack[sp - 1].d_active && stack[sp].d_request;
}

void construct_active(void)
{
    stack = malloc(sizeof(ACTIVESTACK_));
    stack->d_active = 1;
    stack->d_request = 0;
}

int negate_active()             /* negate the current request */
{
    stack[sp].d_request = !stack[sp].d_request;
    return active();
}

int pop_active()                /* returns previous output_active value */
{
    if (!sp--)
        error("%s: %d: too many lone #endif directives",
                filestack[filesp].n, filestack[filesp].l);

    return stack[sp].d_active;
}
    
int push_active(int request)    /* actual activity request */
{
    ++sp;

    stack = xrealloc(stack, (sp + 1) * sizeof(ACTIVESTACK_));
    stack[sp].d_request = request;
    return active();
}








