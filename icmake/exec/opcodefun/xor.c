/*
\funcref{fun\_xor}{void fun\_xor ()}
    {}
    {}
    {pop(), push()}
    {}
    {funxor.c}
    {
        This function pops two variables and pushes the bitwise xor-ed result 
        of the {\em vu.intval} fields of these variables.  The resulting 
        pushed variable is of type {\em e\_int}.  } */ 

#include "opcodefun.ih"

void fun_xor ()
{
    int rvalue = intValue(top());

    pop();
    intSetValue(top(), intValue(top()) ^ rvalue);
}
