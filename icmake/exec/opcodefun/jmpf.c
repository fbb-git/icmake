/*
\funcref{fun\_jmp\_false}{void fun\_jmp\_false ()}
    {}
    {}
    {getint16(), istrue()}
    {fun\_jmp\_true(), fun\_jmp()}
    {funjmpf.c}
    {

        This function is executed when an {\em op\_jmp\_false} opcode is read
        in the binary makefile. Following the opcode, an {\em INT16} offset is
        expected. The result of a previous expression is popped and if this
        yields zero, a jump is made relative to the current offset by
        repositioning the file pointer.

    }
*/

#include "opcodefun.ih"

void fun_jmp_false()
{
    register INT16 offs = getint16(infile);

    if (!istrue())
        fseek (infile, (INT32) offs, SEEK_CUR);
}
