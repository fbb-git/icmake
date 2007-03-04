/*
\funcref{fun\_call}{void fun\_call ()}
    {}
    {}
    {getint16(), push()}
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

void fun_call ()
{
    UNS16 offs = getint16(infile);
    VAR_ ra = *intConstructor_i(ftell(infile));

    push(&ra);
    pushBP();

    fseek(infile, (INT32)offs, SEEK_SET);
}
