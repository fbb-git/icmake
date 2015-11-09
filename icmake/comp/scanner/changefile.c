#include "scanner.ih"

#define     N_FILES 11

static struct
{
    int former_linenr;
    char *fname;
}
    stack[N_FILES];

static size_t filenames_len;
static size_t sp = N_FILES;

void change_file(char *s)               /* name of source file to open */
{
    register int
        slen;

    if (*s)                                 /* any filename ? */
    {
        if (!sp--)                          /* no more entries ? */
            rss_error("Over 10 included files");

        stack[sp].fname = rss_strdup(s);       /* save the name of the file */
        stack[sp].former_linenr = yylineno; /* save the line number */

        gs_filenames = rss_realloc(gs_filenames,     /* room for new filename */
                        filenames_len +
                        (slen = strlen(s)) +
                        2);
                                            /* append name */
        sprintf(gs_filenames + filenames_len, "%s\n", s);
        filenames_len += slen + 1;          /* new length of string */

        yylineno = 0;                       /* start at new file */
    }
    else
    {
        if (sp == N_FILES - 1)
            rss_error("[%s] Line %d: Include file stack empty", util_sourceName(),
                                                        yylineno);
        free(stack[sp].fname);
        yylineno = stack[sp].former_linenr - 1;
        sp++;                               /* free stack element */
    }

    util_setSourceName(stack[sp].fname);
}
