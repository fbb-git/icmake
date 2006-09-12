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

#include "icm-exec.h"

void fun_call ()
{
    VAR_
        tmp;
    UNS16
        offs;

    offs = (UNS16) getint16 (infile);

    tmp.type = e_int;
    tmp.vu.intval = (unsigned) ftell (infile);
    push (tmp);

    fseek (infile, (INT32) offs, SEEK_SET);

    tmp.vu.intval = bp;
    push (tmp);
    bp = sp;
}
