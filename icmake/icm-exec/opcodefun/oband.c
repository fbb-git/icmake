/*
\funcref{fun\_band}{void fun\_band ()}
    {}
    {}
    {stack_pop(), stack_push()}
    {}
    {funband.c}
    {
        This function pops two variables and pushes the bitwise and-ed result 
        of the {\em vu.intval} fields of these variables.  The resulting 
        pushed variable is of type {\em e\_int}.  } */ 

#include "opcodefun.ih"

void o_band ()
{
    int rvalue = int_value(stack_top());

    stack_pop();
    int_assignInt(stack_top(), int_value(stack_top()) & rvalue);
}
