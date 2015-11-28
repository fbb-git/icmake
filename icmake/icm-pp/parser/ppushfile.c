#define msgx

#include "parser.ih"

void p_pushFile()       /* switch to another file */
{
    char const *filename = p_nextFile();

    msg("%s", filename);


    if (state_active())
    {
        out("#>");
        out(filename);
        out("\n");
    
        scanner_pushFile(filename);
    }
}

