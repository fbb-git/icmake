/*
    This function is called when an opcode is read which is followed by a
    variable number (e.g., {\em op\_push\_var}). The index is read and a
    pointer to a {\em VAR\_} structure is returned; either in the variables
    section or in the stack (relative to {\em bp}).
*/

/*#define msg
*/

#include "opcodefun.ih"

VAR_ *getdest()
{
    int index = rss_getInt16(infile);

    return index >= 0 ? var + index : local(index);
}

