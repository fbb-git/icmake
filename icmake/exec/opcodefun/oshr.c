/*
\funcref{fun\_shr}{void fun\_shr ()}
    {}
    {}
    {stack_pop(), stack_push(), rss_fatal()}
    {}
    {funshr.c}
    {
        This function pops two variables and pushes the shift-right result of 
        the {\em intValue} fields of these variables.  The resulting pushed 
        variable is of type {\em e\_int}.  

        It is assumed that the left argument of the expression was pushed 
        first; therefore, the right argument is popped first. 
        
    } 
*/ 

#include "opcodefun.ih"

void o_shr ()
{
    int rvalue = int_value(stack_top());

    stack_pop();
    int_assignInt(stack_top(), int_value(stack_top()) >> rvalue);
}
