#include "parser.ih"

void hidden_functions(void)
{
    long eof;
    register int funIdx;

    if (!gp_hidden_called)
        return;                             /* no hidden calls: nothing to do */

    eof = ftell(gp_bin);                     /* remember the eof position */
                                            /* go to begin of code */
    fseek(gp_bin, sizeof(BinHeader), SEEK_SET);

    while (ftell(gp_bin) < eof)            /* continue until code processed */
    {
        if (next_call())                  /* find function call */
        {
            funIdx = -rss_getInt16(gp_bin);    /* get the address (toggled sign) */

            if (funIdx >= 0)              /* hidden function */
            {                             /* reset to patchup */
                fseek(gp_bin, -(long)sizeof(int16_t), SEEK_CUR);

                util_setString(gp_hiddenFun[funIdx].name);

                                            /* update the function's address */
                symtab_writeFunAddress(gp_bin, funIdx);
                fseek(gp_bin, 0, SEEK_CUR);  /* ready to read again */
            }
        }
    }
}

