/*
                                Y Y L E X F I L . C

     Function reading input for yylex() in the standard (file) situation
*/


#include "iccomp.h"

int yylex_file(char *buf, int max_size)
{
    int
        result;

                                            /* try to read from file */
    if ( (result = read( fileno(yyin), buf, (size_t)max_size )) > 0 )
        return (result);                    /* return # bytes read if any */

    if (result == 0)                        /* if none, switch to other fun */
    {
        clear_hidden();                     /* clear existing hidden names */
        yylex_input = yylex_hidden;         /* connect the buffer-reader */

        return (yylex_input(buf, max_size));/* read the hidden source */
    }

    error("read() in flex scanner failed"); /* error when read() fails */
    return (0);                 /* dummy to avoid warning */
}
