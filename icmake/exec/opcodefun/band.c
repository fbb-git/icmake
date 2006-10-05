/*
\funcref{fun\_band}{void fun\_band ()}
    {}
    {}
    {pop(), push()}
    {}
    {funband.c}
    {
        This function pops two variables and pushes the bitwise and-ed result 
        of the {\em vu.intval} fields of these variables.  The resulting 
        pushed variable is of type {\em e\_int}.  } */ 

#include "opcodefun.ih"

void fun_band ()
{
    int rvalue = intValue(top());

    pop();
    intSetValue(top(), intValue(top()) & rvalue);
}
