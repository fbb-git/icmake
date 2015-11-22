#include "scanner.ih"

void sc_popFile()
{
    if (gs_fileSp == N_FILES - 1)
        rss_error("[%s] Line %d: Include file stack empty", util_sourceName(),
                                                        yylineno);
    free(gs_fileStack[gs_fileSp].fname);
    yylineno = gs_fileStack[gs_fileSp].former_linenr - 1;
    gs_fileSp++;                               /* free stack element */

    util_setSourceName(gs_fileStack[gs_fileSp].fname);
}
