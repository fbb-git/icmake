#include "out.ih"

void o_eof()
{
    if (!o_atBOL)
        fputc('\n', o_file);

    fprintf(o_file, "#\n");

    o_space = 0;
    o_nl = 0;
    o_atBOL = 1;
}
