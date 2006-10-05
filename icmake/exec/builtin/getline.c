#include "builtin.ih"

#define     bufsize     (200)
#define     buflast     (bufsize - 1)
#define     lastch      (bufsize - 2)

char *getLine(FILE *file)
{
    char *dest = xstrdup("");
    char buffer[bufsize];

    while (1)
    {
        buffer[lastch] = 0;                 /* overwritten by \n or the */
                                            /* last char read of a line */
                                            /* otherwise, the end of the*/
                                            /* line is earlier          */

        if (!fgets(buffer, buflast, file))  /* reading fails          */
            break;

        dest = xstrcat(dest, buffer);       /* append the buffer        */
                                            /* EOLN encountered         */
        if (buffer[lastch] == '\n' || !buffer[lastch])
            break;                          /* end of line at then end  */
                                            /* or earlier               */
    }

    if (*dest)                              /* line read                */
        return dest;

    free(dest);
    return NULL;
}

