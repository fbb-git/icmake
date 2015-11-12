/*
\funcref{process}{void process ()}
    {}
    {}
    {rss_getOpcode()}
    {}
    {process.c}
    {
        Function {\em process()} is the main loop of the execution of the
        binary makefile. It is called from {\em main()} when the variables are
        read and when the offsets of the variable section and of the strings
        section are known.

        An opcode is retrieved from the binary makefile and appropriate action
        is taken until an {\em op\_ret} opcode is encountered.
    }
*/

#include "opcodefun.ih"

void process ()
{
    register OPCODE_ op;

    arghead = rss_strdup("");
    argtail = rss_strdup("");
    cmdhead = rss_strdup("");
    cmdtail = rss_strdup("");

    do
    {
        curoffs = (size_t)ftell(infile);
        op = rss_getOpcode(infile);

        if (op >= op_hlt || op == (OPCODE_)-1)
        {
            fprintf(stderr, "bad opcode at %s ", rss_hexString(curoffs, 4));
            rss_error("(opcode %s)", rss_hexString(op, 2));
        }
        p_procfun[op]();
    }
    while (op != op_exit);
}

