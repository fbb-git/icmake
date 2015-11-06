#include "parser.ih"

/*
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

static INT8 opexit = op_exit;
static INT8 opcall = op_call;

int parser_backend()
{
    if (yynerrs)                            /* backend if no errors */
    {
        printf("\n%u error(s) detected\n", util_nErrors());
        return 1;
    }

    register int idx;
    BIN_HEADER_     hdr;

    util_setString("main");

    idx = symtab_findFun();

    if (idx == -1)
    {
        util_semantic("function 'main()' not defined");
        exit(1);
    }

    hdr.offset[3] = ftell(gp_bin);           /* offset of first instruction */

    hidden_functions();                     /* patchup generated hidden */
                                            /* function calls */

    fseek(gp_bin, 0, SEEK_END);              /* upwind to EOF again */

                                            /* write global vars initializ. */
                                            /* code                         */
    util_out(gp_bin, gp_init.code, gp_init.codelen);

    util_out(gp_bin, &opcall, sizeof(INT8)); /* call main() at its offset */

    UNS16 addr = symtab_funAddress(idx);
    util_out(gp_bin, &addr, sizeof(UNS16));

    util_out(gp_bin, &opexit, sizeof(INT8)); /* generate op_ret at the end */

    strncpy(hdr.version, version, sizeof(hdr.version)); /* set the version */

    hdr.offset[0] = ftell(gp_bin);           /* here the strings start */

                                            /* generate the strings */
    for (idx = 0; idx < gp_nStrings; idx++)
        fprintf(gp_bin, "%s%c", gp_stringTable[idx].string, 0);

    hdr.offset[1] = ftell(gp_bin);           /* here the vars start */
    
    symtab_writeGlobals(gp_bin);             /* write the global variables */

    hdr.offset[2] = ftell(gp_bin);           /* here the filenames start */
    fputs(scanner_filenames(), gp_bin);

    rewind(gp_bin);
                                            /* write the offset info */
    util_out(gp_bin, &hdr, sizeof(BIN_HEADER_));

    return 0;
}
