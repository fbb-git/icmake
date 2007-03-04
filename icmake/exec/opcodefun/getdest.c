/*
\funcref{getdest}{VAR\_ $*$getdest ()}
    {}
    {pointer to {\em VAR\_} structure}
    {getint16()}
    {}
    {getdest.c}
    {

        This function is called when an opcode is read which is followed by a
        variable number (e.g., {\em op\_push\_var}). The index is read and a
        pointer to a {\em VAR\_} structure is returned; either in the variables
        section or in the stack (relative to {\em bp}).

    }
*/

#include "opcodefun.ih"

VAR_ *getdest()
{
    int index = getint16 (infile);
    return index >= 0 ? var + index : local(index);
}

