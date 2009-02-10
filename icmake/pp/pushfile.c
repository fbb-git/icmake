/*
\funcref{pushfile}{void pushfile (\params)}
    {
        {char} {*name} {file name}
    }
    {}
    {error(), xrealloc(), xstrdup()}
    {popfile()}
    {pushfile.c}
    {
        Function {\em pushfile()} is called whenever an input file should be
        processed. The first time, {\em pushfile()} is called from {\em main()}
        with the name of the main input file as argument. Subsequently, {\em
        pushfile()} may be called from {\em directive()} when an {\em
        \#include} directive is encountered.

        The files to process are kept on a filestack. This array of {\em
        FILESTACK\_} structs is indexed by the variable {\em filesp}: this
        index always points to the currently processed file. The filestack is
        relocatable and grows upward: hence, {\em filesp} is initially --1 and
        is increased to 0 when the first input file is opened.

        The elements of the filestack contain the following fields:

        \begin{itemize}

            \item {\em char $*$n} points to the name of the input file. This is
            an area of allocated memory where a duplicate of the name is
            stored.

            \item {\em FILE $*$f} is the associated file pointer.

            \item {\em int l} is the number of the currently processed line.

        \end{itemize}

        When {\em pushfile()} is called, {\em filesp} is increased by 1 and the
        filestack is reallocated to hold information about the input file.
        Next, the fields of the new stack element are assigned using {\em
        xrealloc()} and {\em fopen()}. When the input file cannot be opened for
        reading, an error occurs.
    }
*/

#include "icm-pp.h"

void pushfile(name)
char *name;
{
    filesp++;

    filestack = xrealloc(filestack, (filesp + 1) * sizeof(FILESTACK_));
    filestack[filesp].n = xstrdup(name);
    if (! (filestack[filesp].f = fopen(name, "r")) )
        error("cannot open #include file %s", name);
    filestack[filesp].l = 1;

    if (! nofileinfo)
    fprintf(outfile, "#%s\n", name);
}
