/*
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
*/

#define msgx

#include "icm-pp.ih"

int main(int argc, char **argv)
{
    options(argc, argv);

    parser(argv);
    parser_parse();

    return rss_nErrors() != 0;
}

