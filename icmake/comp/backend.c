/*
                                B A C K E N D . C

        version
        offset of the string constant-area  (INT32)
        offset of the variable area         (INT32)
        offset of the strings area          (INT32)
        offset of the first instruction     (INT32)

        code                                (first byte is first instruction)
        ascii-z string constant area
        variables
        filenames
*/

#include "main.ih"

static INT8 opexit = op_exit;
static INT8 opcall = op_call;

void backend()
{
    register int idx;
    BIN_HEADER_     hdr;

    g_lexstring = xstrdup("main");

    idx = symtab_funIdx();
    if (idx == -1)
    {
        semantic("function 'main()' not defined");
        exit(1);
    }

    hdr.offset[3] = ftell(g_bin);           /* offset of first instruction */

    hidden_functions();                     /* patchup generated hidden */
                                            /* function calls */

    fseek(g_bin, 0, SEEK_END);              /* upwind to EOF again */

                                            /* write global vars initializ. */
                                            /* code                         */
    outbin(g_init.code, g_init.codelen);

    outbin(&opcall, sizeof(INT8));          /* call main() at its offset */

    outbin(symtab_funAddress(idx), sizeof(INT16));

    outbin(&opexit, sizeof(INT8));          /* generate op_ret at the end */

    strncpy(hdr.version, version, sizeof(hdr.version)); /* set the version */

    hdr.offset[0] = ftell(g_bin);           /* here the strings start */

                                            /* generate the strings */
    for (idx = 0; idx < g_nStrings; idx++)
        fprintf(g_bin, "%s%c", g_stringtab[idx].string, 0);

    hdr.offset[1] = ftell(g_bin);           /* here the vars start */
    
    symtab_writeGlobals(g_bin);             /* write the global variables */

    hdr.offset[2] = ftell(g_bin);           /* here the g_filenames start */
    fputs(g_filenames, g_bin);

    rewind(g_bin);
                                            /* write the offset info */
    fwrite(&hdr, sizeof(BIN_HEADER_), 1, g_bin);
}
