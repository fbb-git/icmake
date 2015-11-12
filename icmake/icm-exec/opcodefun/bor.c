/*
\funcref{fun\_bor}{void fun\_bor ()}
    {}
    {}
    {pop(), push()}
    {}
    {funbor.c}
    {
        This function pops two variables and pushes the bitwise or-ed result 
        of the {\em vu.intval} fields of these variables.  The resulting 
        pushed variable is of type {\em e\_int}.  } */ 

#include "opcodefun.ih"

void fun_bor ()
{
    int rvalue = intValue(top());

    pop();
    intSetValue(top(), intValue(top()) | rvalue);
}
