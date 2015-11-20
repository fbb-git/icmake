/*
\funcref{fun\_shl}{void fun\_shl ()}
    {}
    {}
    {stack_pop(), stack_push(), rss_error()}
    {}
    {funshl.c}
    {
        This function pops two variables and pushes the shift-left result of 
        the {\em intValue} fields of these variables.  The resulting pushed 
        variable is of type {\em e\_int}.  

        It is assumed that the left argument of the expression was pushed 
        first; therefore, the right argument is popped first. 
        
    } 
*/ 

#include "opcodefun.ih"

void o_shl ()
{
    int rvalue = int_value(stack_top());

    stack_pop();
    int_assignInt(stack_top(), int_value(stack_top()) << rvalue);
}


