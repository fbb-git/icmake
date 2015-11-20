/*
\funcref{fun\_bor}{void fun\_bor ()}
    {}
    {}
    {stack_pop(), stack_push()}
    {}
    {funbor.c}
    {
        This function pops two variables and pushes the bitwise or-ed result 
        of the {\em intValue} fields of these variables.  The resulting 
        pushed variable is of type {\em e\_int}.  } */ 

#include "opcodefun.ih"

void o_bor ()
{
    int rvalue = int_value(stack_top());

    stack_pop();
    int_assignInt(stack_top(), int_value(stack_top()) | rvalue);
}
