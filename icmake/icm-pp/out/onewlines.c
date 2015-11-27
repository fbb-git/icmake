#define msgx


#include "out.ih"

void o_newLines()
{
    size_t lineNr = scanner_lineNr();

    msg("lineNr: %u, o_nl: %u", lineNr, o_nl);


    if (lineNr - o_nl > 4)
    {
        if (!o_atBOL)
            fputc('\n', o_file);
        fprintf(o_file, "#%u\n", lineNr);
    }
    else
    {
        for ( ; o_nl <= lineNr; ++o_nl)
            fputc('\n', o_file);
    }

    o_space = 0;
    o_nl = 0;
    o_atBOL = 1;
}

