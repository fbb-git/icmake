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

#include "builtin.ih"

void fun_fgets()
{
    char const *filename = stringStr(top());
    size_t offset = intValue(top() - 1);
    FILE *inf;

    reg = *listConstructor();

    if 
    ( 
        (inf = fopen (filename, "r"))
        &&
        fseek(inf, (long)offset, SEEK_SET) == 0     /* locate the read-pos. */
    )
    {
        char *dest = getLine(inf);

        if (dest)                               /* anything read?           */
        {
            char buffer[20];     
            sprintf (buffer, "%d", (int)ftell(inf));

            listAdd_swallow_cP(&reg, dest);
            listAdd_cP(&reg, buffer);
        }
        fclose (inf);
    }
}

