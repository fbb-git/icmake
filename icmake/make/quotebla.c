/*
                                Q U O T E B L A . C
*/

#include "icmake.h"

void quote_blanks(char **args)
{
    char
        *arg;                               /* pointer to modified arg  */

    while (*args)                           /* as long as there are args */
    {
        if (strchr(*args, ' '))             /* if the arg contains a blank */
        {                                   /* arg to become: "arg" */
            arg = xrealloc(NULL, 2 + 1 + strlen(*args));
            arg[0] = '"';                   /* assign first " */
            strcpy(arg + 1, *args);         /* move in the argument */
            strcat(arg, "\"");              /* add trailing " */
            *args = arg;                    /* reassign pointer to new arg */
        }
        args++;                             /* next argument */
    }
}
