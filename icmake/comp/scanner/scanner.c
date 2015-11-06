#include "scanner.ih"

void scanner(char const *infile)
{
    if (!(yyin = fopen(infile, "rt")))     /* open text file for parsing */
        error("%s Can't read `%s'", infile);

}
