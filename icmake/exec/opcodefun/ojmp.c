/*
\funcref{fun\_jmp}{void fun\_jmp ()}
    {}
    {}
    {rss_getInt16()}
    {fun\_jmp\_true(), fun\_jmp\_false()}
    {funjmp.c}
    {
        This function is executed when an {\em op\_jmp} opcode is read in the
        binary makefile. Following the opcode, an {\em int16_t} offset is
        expected. An unconditional jump is made relative to the current offset
        by repositioning the file pointer.
    }
*/

#include "opcodefun.ih"

void o_jmp ()
{
    int16_t offs = rss_getInt16(go_infile);
    fseek(go_infile, (int32_t) offs, SEEK_CUR);
}
