/*
        Function {\em process()} is the main loop of the execution of the
        binary makefile. It is called from {\em main()} when the variables are
        read and when the offsets of the variable section and of the strings
        section are known.

        An opcode is retrieved from the binary makefile and appropriate action
        is taken until an {\em op\_ret} opcode is encountered.
*/

#include "opcodefun.ih"

void opcodefun_process()
{
    register OPCODE_ opcode;

    arghead = rss_strdup("");
    argtail = rss_strdup("");
    cmdhead = rss_strdup("");
    cmdtail = rss_strdup("");

    do
    {
        curoffs = (size_t)ftell(infile);
        opcode = rss_getOpcode(infile);

        if (opcode >= op_hlt || opcode == (OPCODE_)-1)
        {
            fprintf(stderr, "bad opcode at %s ", rss_hexString(curoffs, 4));
            rss_error("(opcode %s)", rss_hexString(opcode, 2));
        }
        p_procfun[opcode]();
    }
    while (opcode != op_exit);
}







