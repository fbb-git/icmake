/*
\funcref{fun\_fgets}{void fun\_fgets ()}
    {}
    {}
    {}
    {fun\_gets(), fun\_printf(), fun\_fprintf()}
    {funfgets.c}
    {

        This function reads in a string from a file and returns it in the {\em
        reg} return register as an {\em e\_str} value. The arguments on the
        stack are: the filename and an {\em int offset}, where the read
        operation should start.

        The return value is a list, holding as the first list element the read
        string and as the second element the offset where the reading operation
        ended. The offset and the string are empty (offset 0, string "") when
        the reading operation failed.

    }
*/

#include "icm-exec.h"

void fun_fgets ()
{
    char
        buffer [255];
    register char
        *filename;
    register int
        offset;
    register FILE
        *inf;

    reg = newvar (e_list);
    filename = stack [sp].vu.i->ls.str;
    offset   = stack [sp - 1].vu.intval;

    if ( (inf = fopen (filename, "r"))          &&
         ! fseek (inf, (long) offset, SEEK_SET) &&
         fgets (buffer, 254, inf)
       )
    {
        reg = addtolist (reg, buffer);
        sprintf (buffer, "%d", (int) ftell (inf));
        reg = addtolist (reg, buffer);
        fclose (inf);
    }
}
