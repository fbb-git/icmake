#include "main.ih"

void hidden_functions(void)
{
    long eof;
    register int fun;

    if (!g_hidden_called)
        return;                             /* no hidden calls: nothing to do */

    eof = ftell(g_bin);                     /* remember the eof position */
                                            /* go to begin of code */
    fseek(g_bin, sizeof(BIN_HEADER_), SEEK_SET);

    while (ftell(g_bin) < eof)              /* continue until code processed */
    {
        if (next_call())                    /* find function call */
        {
            fun = -getint16(g_bin);         /* get the address (toggled sign) */
            if (fun >= 0)                   /* hidden function */
            {                               /* reset to patchup */
                fseek(g_bin, -(long)sizeof(INT16), SEEK_CUR);

                g_lexstring = xstrdup(g_hiddenFun[fun].name);

                                            /* update the function's address */
                outbin(symtabFunAddr(), sizeof(INT16));
                fseek(g_bin, 0, SEEK_CUR);  /* ready to read again */
            }
        }
    }
}

