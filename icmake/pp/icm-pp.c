/*
\funcref{main}{void main (\params)}
    {
        {int} {argc} {argument count}
        {char} {**argv} {pointer to array of argument strings}
    }
    {}
    {error(), pushfile(), lexer(), process()}
    {}
    {icm-pp.c}
    {
        Function {\em main()} checks if two arguments are present on the
        invoking command line. If not, an error occurs.

        The environment variable {\em IM} is inspected to ensure that
        included files are searched from this directory. When not set,
        included files are searched in the current directory.

        Next the input- and output files are opened. The input file is opened
        using function {\em pushfile()}. The output file is pointed to by {\em
        FILE $*$outfile}.

        To process the input, function {\em lexer()} is called and its return
        value is passed to {\em process()}. This is repeated until the
        filestack pointer {\em filesp}(increased by {\em pushfile()},
        decreased by {\em popfile()}) indicates that the file stack is empty.
    }
*/


#include "icm-pp.h"

int main(int argc, char **argv)
{
    register char
        *progname;
    register int
    i,
    dump_symbols = 0,
    load_symbols = 1;

    progname = program_name(argv[0]);
    
    while (argc > 1 && *argv[1] == '-')
    {
        if (! strcmp(argv[1], "-nocomment"))
            nocomment++;
        else if (! strcmp(argv[1], "-define"))
        {
            if (argc < 3)
            error("missing symbol after \"-define\"");
            preload(argv[2], "1");
            argv++;
            argc--;
        }
        else if (! strcmp(argv[1], "-nostrings"))
            nostrings++;
        else if (! strcmp(argv[1], "-nostdsymbols"))
            load_symbols = 0;
        else if (! strcmp(argv[1], "-strictdirectives"))
            strict_directives++;
        else if (! strcmp(argv[1], "-nofileinfo"))
            nofileinfo++;
        else if (! strcmp(argv[1], "-dumpsymbols"))
            dump_symbols++;
        else 
            error("no such flag \"%s\" recognized", argv[1]);
    
        argv++;
        argc--;
    }

    if (load_symbols)
    loadsym();                          /* platform specific #define's */

    if (dump_symbols)
    {
        printf("%s: loaded symbols:\n", progname);
        for (i = 0; i < ndefined; i++)
            printf("    %s[%s]\n", defined[i].ident, defined[i].redef);
    }
    
    if (argc != 3)
    {
        copyright("ICMAKE Preprocessor", version, release);

        printf("%s%s%s%s",
            "This program is run as a child process of icmake.\n"
            "Usage: ",
                progname,
            "[flags] inputfile outputfile\n"
            "where:\n"
            "       flags       - optional flags, which may be:\n"
            "           -define SYM      : defines SYM having value \"1\"\n"
            "           -nocomment       : suppresses comment deletion\n"
            "           -nofileinfo      : suppresses generation of "
                                "filename info\n"
            "           -nostdsymbols    : don't load predefined symbols "
                                "(UNIX etc.)\n",
    
            "           -nostrings       : suppresses string parsing\n"
            "           -strictdirectives: #-directives must start "
                                "at column 1\n"
            "           -dumpsymbols     : show loaded symbols\n"
            "       inputfile   - makefile in text format\n"
                    "       outputfile  - result of preprocessing\n"
            "\n");
        return 1;
    }

    if (!(imdir = getenv("IM")) )
        imdir = ".";

    if (!(outfile = fopen(argv[2], "w")) )
        error("cannot open input file %s", argv[2]);

    pushfile(argv[1]);
    construct_active();

    while (filesp >= 0)
        process(lexer());

    return 0;
}
