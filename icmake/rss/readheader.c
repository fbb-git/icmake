/*
        Function {\em rss_readHeader()} attempts to read the header in a binary
        makefile and checks the major version numbers of the makefile and the
        program. When the header cannot be read or when the versions do not
        match, an error is issued. {\em rss_readHeader()} expects to be called
        prior to any reading from the binary file: the file pointer is not
        repositioned before or after the header processing.

        The return value points to a static {\em BIN\_HEADER\_} struct which is
        filled with information. The fields of the return value are:

        \begin{itemize}

            \item {\em ret$\rightarrow$version} : a string of four characters
            stating the version of the binary makefile. The string is {\bf not}
            terminated by `$\backslash$0'.

            \item {\em ret$\rightarrow$offset[0]} : an {\em int32_t} value
            stating the offset of the strings area.

            \item {\em ret$\rightarrow$offset[1]} : an {\em int32_t} value
            stating the offset of the variables area.

            \item {\em ret$\rightarrow$offset[2]} : an {\em int32_t} value
            stating the offset of the filenames area.

        \end{itemize}

        The strings area is present when the offset of this area is smaller
        than the offset of the variables area. The strings are represented as
        {\em ascii-z} strings.

        The variables area is present when the offset of this area is smaller
        than the offset of the filenames area. The variables are {\em VAR\_}
        structs.

        The filenames area is always present. The filenames are represented as
        `$\backslash$n'-terminated strings.
*/

#include "rss.ih"

static BinHeader header;

BinHeader *rss_readHeader(FILE *f, size_t v)
{
    struct stat buffer;
    int idx;
    int32_t f_size;
    
    if (! fread(&header, sizeof (BinHeader), 1, f) )
        rss_error("cannot read header from binary file, corrupted?");

    if ((size_t)header.version[0] % 100 < v % 100)
        rss_error(
            "The binary file was created with an older version of icmake.\n"
            "Remake the binary file.");
    else if ((size_t)header.version[0] < v )
        fprintf(stderr, "The binary file was created with an older version "
                "of icmake.\n"
                "It is advised to recompile the original script.\n");
    else if ((size_t)header.version[0] > v)
        rss_error("This program does not support the version which is indicated"
               " by the binary\n"
               "file. Upgrade to a newer `icmake' version.");

    fstat(fileno(f), &buffer);
    f_size = buffer.st_size;
    
    for (idx = 0; idx != 4; ++idx)
    {
        if (header.offset[idx] >= f_size)
            rss_error("invalid .bim file, corrupted?");
    }

    return &header;
}
