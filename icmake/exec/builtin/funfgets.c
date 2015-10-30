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
        string, as the second element the final \n (if available), as its
        third element the string OK, EOF or FAIL, and as its fourth element
        the (long) offset value from where the next string must be read. This
        long value is stored as binary value using the host byte order.

    }
*/

#include "builtin.ih"

void fun_fgets()
{
    char const *filename = stringStr(top());
    VAR_ *list = top() - 1;
    FILE *inf;

    reg = *listConstructor();

    char const *status;

                                                /* input not OK */
    if (listSize(list) >= 4 && strcmp(status = listAt(list, 2), "OK") != 0)
    {
        fgetsStatus(status);
        return;
    }

    long offset = listSize(list) == 0 ? 
                        0 
                    : 
                        strtol(listAt(list, 3), 0, 10);
    if 
    (                                       
        (inf = fopen(filename, "r"))
        &&                                      
        (fseek(inf, offset, SEEK_SET) == 0)     /* locate the read-pos. */
    )
    {
        char *dest = getLine(inf);
        
        if (dest)                               /* anything read?           */
            updateFgets(inf, dest);
        else 
            fgetsStatus(feof(inf) ? "EOF" : "FAIL");

        fclose (inf);
        return;
    }

    fgetsStatus("FAIL");
}
