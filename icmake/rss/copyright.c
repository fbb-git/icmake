#include "rss.ih"

void rss_copyright(char const *program)
{
    printf("\n"
            "%s by Frank B. Brokken (f.b.brokken@rug.nl)\n"
            "%s V%s, copyright (c) GPL %s.\n"
            "\n",
            program, program, version, release);

}
