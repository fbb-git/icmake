/*
\funcref{fun\_call}{void fun\_call ()}
    {}
    {}
    {rss_getInt16(), stack_push()}
    {fun\_ret()}
    {funcall.c}
    {

        This function is executed whan an {\em op\_call} opcode is read.
        Following the opcode a 16-bits unsigned value is expected, stating the
        offset of the function to call.

        The offset of the next instruction is pushed as an {\em e\_int}
        variable. Then the file pointer associated with the binary makefile is
        set to the offset of the called function.

    }
*/

#include "opcodefun.ih"

void o_call ()
{
    uint16_t offs = rss_getInt16(go_infile);
    Variable ra = *intcons_int(ftell(go_infile));

    stack_push(&ra);
    stack_pushBP();

    fseek(go_infile, (int32_t)offs, SEEK_SET);
}
