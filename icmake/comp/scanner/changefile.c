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
            error("Over 10 included files");

        stack[sp].fname = xstrdup(s);       /* save the name of the file */
        stack[sp].former_linenr = yylineno; /* save the line number */

        g_filenames = xrealloc(g_filenames,     /* room for new filename */
                        filenames_len +
                        (slen = strlen(s)) +
                        2);
                                            /* append name */
        sprintf(g_filenames + filenames_len, "%s\n", s);
        filenames_len += slen + 1;          /* new length of string */

        yylineno = 0;                       /* start at new file */
    }
    else
    {
        if (sp == N_FILES - 1)
            error("[%s] Line %d: Include file stack empty", g_sourceName,
                                                        yylineno);
        free(stack[sp].fname);
        yylineno = stack[sp].former_linenr - 1;
        sp++;                               /* free stack element */
    }

    g_sourceName = stack[sp].fname;
}
