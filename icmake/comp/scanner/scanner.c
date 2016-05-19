#include "scanner.ih"

void scanner(char const *infile)
{
    if (!(yyin = fopen(infile, "rt")))     /* open text file for parsing */
        rss_fatal(0, 0, "%s Can't read `%s'", infile);

}
