/*
    This function is executed when an {\em op\_call\_rss} opcode is
    encountered in the binary makefile. Following this opcode a function
    index is expected (an {\em char} value), indicating the function number
    to call (see the enumeration type {\em FUNNR\_} in the file {\em
    icrss.h}).

    If the index indicates a non-existing function, i.e., when the index
    exceeds or equals {\em f\_hlt}, an error occurs. Else, the indicated
    built in function is called (see the {\em builtinfun} array of function
    pointers, files {\em opcodefun.ih} and {\em data.c}).
*/

/* #define msg
*/

#include "opcodefun.ih"

void o_callRss()
{
    size_t funIdx = (size_t)rss_getOpcode(go_infile);

    if (funIdx >= f_hlt)
        rss_fatal(0, 0, "unknown rss function call at %s", aux_offset());

    msg("calling builtin function 0x%x", funIdx);

    builtin_call(funIdx);
}
