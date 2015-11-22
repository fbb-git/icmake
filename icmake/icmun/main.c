#include "icmun.ih"

int main (int argc, char **argv)
{
    register char const *progname = rss_programName(argv[0]);
    static char bimext [] = ".bim";

    rss_copyright (progname);

    if (argc != 2)
    {
        printf ("Usage: %s bimfile\n"
                "where: bimfile - binary makefile (default extension: %s)\n\n"
                , progname, bimext);
        return 2;
    }

    register char *infname = 
                    rss_exists(argv[1]) ? 
                        argv[1] 
                    :
                        rss_changeExt(argv[1], bimext);

    if (! (infile = fopen(infname, "r")) )
        rss_error("cannot open %s for reading", infname);

    headerp = rss_readHeader(infile, (size_t)version [0]);

    if ((int16_t)(nvar = rss_getVar(&var, infile, headerp)) == -1 )
        rss_error("invalid macro file, cannot read variable section");

    process();

    return 0;
}




