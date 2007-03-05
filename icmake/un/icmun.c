#include "icmun.h"

int main (int argc, char **argv)
{
    register char
        *progname,
        *infname;
    static char
        bimext [] = ".bim";

    copyright ("ICMAKE Binary Make File Unassembler", version, release);

    if (argc != 2)
    {
        progname = program_name (argv [0]);
        printf ("Usage: %s bimfile\n"
                "where: bimfile - binary makefile (default extension: %s)\n\n"
            , progname, bimext);
        return 2;
    }

    infname = xstrdup(change_ext (argv [1], bimext));

    if (! (infile = fopen (infname, READBINARY)) )
        error ("cannot open %s for reading", infname);

    headerp = readheader(infile, (size_t)version [0]);

    if ((INT16)(nvar = getvar (infile, headerp, &var)) == -1 )
        error ("invalid macro file, cannot read variable section");

    process ();

    return 0;
}
