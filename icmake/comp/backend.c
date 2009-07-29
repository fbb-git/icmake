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

#include "iccomp.h"

static INT8
    opexit = op_exit,
    opcall = op_call;

void backend()
{
    register size_t
        idx;
    BIN_HEADER_
        hdr;

    lexstring = xstrdup("main");
    if ((idx = looksym(&funtab)) == funtab.n_defined)
    {
        semantic("function 'main()' not defined");
        exit(1);
    }

    hdr.offset[3] = ftell(s_bin);           /* offset of first instruction */

    hidden_functions();                     /* patchup generated hidden */
                                            /* function calls */

    fseek(s_bin, 0, SEEK_END);              /* upwind to EOF again */

                                            /* write global vars initializ. */
                                            /* code                         */
    outbin(global_init.code, global_init.codelen);

    outbin(&opcall, sizeof(INT8));          /* call main() at its offset */
    outbin(&funtab.symbol[idx].var.vu.i->count, sizeof(INT16));

    outbin(&opexit, sizeof(INT8));          /* generate op_ret at the end */

    strncpy(hdr.version, version, sizeof(hdr.version));           /* set the version */

    hdr.offset[0] = ftell(s_bin);           /* here the strings start */

                                            /* generate the strings */
    for (idx = 0; idx < n_strings; idx++)
        fprintf(s_bin, "%s%c", stringtab[idx].string, 0);

    hdr.offset[1] = ftell(s_bin);           /* here the vars start */

    for (idx = 0; idx < global.n_defined; idx++)
    {
        global.symbol[idx].var.type &= ~e_var; /* remove 'var' indicator */
        fwrite(&global.symbol[idx].var, 1, sizeof(VAR_), s_bin);
    }

    hdr.offset[2] = ftell(s_bin);           /* here the filenames start */
    fputs(filenames, s_bin);

    rewind(s_bin);
                                            /* write the offset info */
    fwrite(&hdr, sizeof(BIN_HEADER_), 1, s_bin);
}
