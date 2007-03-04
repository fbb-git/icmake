/*
\funcref{process}{void process ()}
    {}
    {}
    {getopcode()}
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

    arghead = xstrdup("");
    argtail = xstrdup("");
    cmdhead = xstrdup("");
    cmdtail = xstrdup("");

    do
    {
        curoffs = (size_t)ftell(infile);
        op = getopcode(infile);

        if (op >= op_hlt || op == (OPCODE_)-1)
        {
            fprintf(stderr, "bad opcode at %s ", hexstring(curoffs, 4));
            error("(opcode %s)", hexstring(op, 2));
        }
            procfun[op]();
    }
    while (op != op_exit);
}
