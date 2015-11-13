#include "icmun.ih"

int main (int argc, char **argv)
{
    register char *progname;
    register char *infname;
    static char bimext [] = ".bim";

    rss_copyright ("ICMAKE Binary Make File Unassembler", version, release);

    if (argc != 2)
    {
        progname = rss_programName (argv [0]);
        printf ("Usage: %s bimfile\n"
                "where: bimfile - binary makefile (default extension: %s)\n\n"
                , progname, bimext);
        return 2;
    }

    infname = rss_changeExt (argv [1], bimext);

    if (! (infile = fopen (infname, "r")) )
        rss_error ("cannot open %s for reading", infname);

    headerp = rss_readHeader(infile, (size_t)version [0]);

    if ((int16_t)(nvar = rss_getVar(infile, headerp, &var)) == -1 )
        rss_error ("invalid macro file, cannot read variable section");

    process();

    return 0;
}




