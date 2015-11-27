#define msgx

#include "parser.ih"

void p_pushFile()       /* switch to another file */
{
    char *filename = p_nextFile();

    if (state_active())
    {
        out("#>");
        out(filename);
        out("\n");
    
        scanner_pushFile(filename);
    }

    free(filename);
}

