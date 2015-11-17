/*
        Function {\em process()} is the main loop of the execution of the
        binary makefile. It is called from {\em main()} when the variables are
        read and when the offsets of the variable section and of the strings
        section are known.

        An opcode is retrieved from the binary makefile and appropriate action
        is taken until an {\em op\_ret} opcode is encountered.
*/

#define msg
/* 
*/

#include "opcodefun.ih"

int opcodefun_process()
{
    register Opcode opcode;

    do
    {
        aux_set(ftell(go_infile));
        opcode = rss_getOpcode(go_infile);

        msg("opcode: 0x%x", opcode);

        if (opcode >= op_hlt || opcode == (Opcode)-1)
        {
            fprintf(stderr, "bad opcode at %s ", aux_offset());
            rss_error("(opcode %s)", rss_hexString(opcode, 2));
        }

        go_pRssFun[opcode]();
    }
    while (opcode != op_exit);

    return go_retVal;
}







