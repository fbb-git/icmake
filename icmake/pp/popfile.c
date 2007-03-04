/*
\funcref{popfile}{void popfile ()}
    {}
    {}
    {}
    {pushfile()}
    {popfile.c}
    {
        Function {\em popfile()} is called from {\em process()} when the
        currently processed file is at end-of-file. This is indicated
        by the {\em lexer()} return value {\em l\_eof}.

        {\em popfile()} closes the file pointer associated with the processed
        file and decreases the filestack pointer {\em filesp}. See {\em
        pushfile()} for a description of the filestack.

        If the processed file is a file which is included by an {\em \#include}
        directive, then a `\#' character is written to the output file. This
        signals the next pass of {\em icmake}, the compiler, that an included
        file ends. If the filestack is empty; i.e., when the processed file is
        the main file, no `\#' is written to the output file.
    }
*/

#include "icm-pp.h"

void popfile()
{
    fclose(filestack[filesp].f);
    filesp--;

    if (! nofileinfo && filesp != -1)
        fprintf(outfile, "\n#\n");
}
