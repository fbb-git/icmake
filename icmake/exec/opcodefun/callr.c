/*
\funcref{fun\_call\_rss}{void fun\_call\_rss ()}
    {}
    {}
    {error(), getopcode()}
    {}
    {funcallr.c}
    {

        This function is executed when an {\em op\_call\_rss} opcode is
        encountered in the binary makefile. Following this opcode a function
        index is expected (an {\em char} value), indicating the function number
        to call (see the enumeration type {\em FUNNR\_} in the file {\em
        icrss.h}).

        If the index indicates a non-existing function, i.e., when the index
        exceeds or equals {\em f\_hlt}, an error occurs. Else, the indicated
        built in function is called (see the {\em builtinfun} array of function
        pointers, files {\em opcodefun.ih} and {\em data.c}).
    }
*/

#include "opcodefun.ih"

void fun_call_rss ()
{
    size_t funnr = (size_t)getopcode (infile);

    if (funnr >= f_hlt)
        error ("unexisting rss function call at %s", hexstring(curoffs, 4));

    builtin(funnr);
}
