/*
\funcref{fun\_jmp}{void fun\_jmp ()}
    {}
    {}
    {getint16()}
    {fun\_jmp\_true(), fun\_jmp\_false()}
    {funjmp.c}
    {
        This function is executed when an {\em op\_jmp} opcode is read in the
        binary makefile. Following the opcode, an {\em INT16} offset is
        expected. An unconditional jump is made relative to the current offset
        by repositioning the file pointer.
    }
*/

#include "opcodefun.ih"

void fun_jmp ()
{
    INT16 offs = getint16(infile);
    fseek(infile, (INT32) offs, SEEK_CUR);
}
