#include "scanner.ih"

static size_t filenames_len;

void sc_changeFile(char *s)               /* name of source file to open */
{
    register int slen;

    if (*s)                                 /* any filename ? */
    {
        if (!gs_fileSp--)                          /* no more entries ? */
            rss_fatal(0, 0, "more than 10 nested #include directives");

                                            /* save the name and line nr. 
                                               of the file */
        gs_fileStack[gs_fileSp].fname = rss_strdup(s); 
        gs_fileStack[gs_fileSp].former_linenr = yylineno;

        gs_filenames = rss_realloc(gs_filenames, /* room for new filename */
                        filenames_len +
                        (slen = strlen(s)) +
                        2);
                                            /* append name */
        sprintf(gs_filenames + filenames_len, "%s\n", s);
        filenames_len += slen + 1;          /* new length of string */

        yylineno = 0;                       /* start at new file */
    }

    util_setSourceName(gs_fileStack[gs_fileSp].fname);
}
