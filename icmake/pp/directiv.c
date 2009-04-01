/*
\funcref{directive}{void directive()}
    {}
    {}
    {error(), pushfile(), insert()}
    {lexer()}
    {directiv.c}
    {
        {\em directive()} is called from {\em lexer()} when a `\#' character is
        read in the input file. {\em directive()} does not expect to read the
        `\#' character. Three directives are recognized:

        \begin{itemize}

            \item {\bf \#} {\em[spaces]} {\bf include} {\em[spaces]} {\bf
            "}{\em filename}{\bf "}. When this directive is read, {\em
            pushfile()} is called to start processing the included file.

            Analogous to {\bf C}, an {\bf \#include} $<$...$>$ form is
            supported.

            \item {\bf \#} {\em[spaces]} {\bf define} {\em[spaces]} {\em name}
            {\em[spaces]} {\em[redefinition]}. When this directive is read,
            {\em insert()} is called to insert the definition in the symbol
            table. The defined {\em name} is passed to {\em insert()} as
            argument; the redefinition is stored in the lexical buffer {\em
            lexbuf}.

            \item {\bf \#\!} \ldots

            The line containing this directive is skipped. The directive is
            intended to be used on {\sc unix} platforms, where it can be used
            to execute an icmake script.

        \end{itemize}

        Other directives following the `\#' character lead to an error.

    }
*/

#include "icm-pp.h"

static int isdefd(STRING_ *str)
{
    register int i;
    register char *id = str->data;

    return (i = finddef(id)) >= 0 && strcmp(defined[i].redef, "0");
}

static int skipline(void)
{
    register int ch = 0;
    while (1)
    {
        register int previous = ch;

        ch = nextchar();
        if (ch == '\n')
        {
            if (previous == '\\')
                continue;
            pushback('\n');             /* push back the last char */
            return '\n';
        }
        if (ch == EOF)
            return EOF;
    }
}


static void terminate_line(char const *what)
{
    if (skipline() == EOF)
        error("%s: #%s at end-of-file", filestack[filesp].n, what);
}

static void fill_line(void)
{
    register int ch;
                                    /* read the line-remainder */
    lexbuf.len = 0;
    while (1)
    {
        while ((ch = nextchar()) != '\n' && ch != EOF)
            string_append(&lexbuf, ch);

        if (!string_continue(&lexbuf))
            break;
    }

    string_append(&lexbuf, 0);
    pushback(ch);
}

void include_directive(void)
{
    register int ch;
    register int imdir_used = 0;    /* assume include "..." form */

    skipblanks();

    ch = nextchar();
    if (ch != '\"' && ch != '<')
        error("%s: %d: \" or < expected after #include directive",
               filestack[filesp].n, filestack[filesp].l);

    if (ch == '<')                  /* include <...> form? */
        imdir_used++;

    lexbuf.len = 0;
    while ( (ch = nextchar()) != '\"' && ch != '>')
        if (ch == '\n' || ch == EOF)
            error("%s: %d: unterminated name after #include directive",
                   filestack[filesp].n, filestack[filesp].l);
        else
            string_append(&lexbuf, ch);
    string_append(&lexbuf, 0);

    skipline();

    if (output_active)
    {
        if (imdir_used)
        {
            static char dirsep[2] = { DIRSEP, '\0' };
            char filename[_MAX_PATH];

            char *im = xstrdup(imdir);
            char *path = strtok(im, ":");   /* get the first path element */
            while (path)
            {
                strcpy(filename, path);
                strcat(filename, dirsep);
                strcat(filename, lexbuf.data);

                if (access(filename, R_OK) == 0)
                {
                    pushfile(filename);
                    break;
                }
                path = strtok(0, ":");
            }
            free(im);

            if (!path)
                error("cannot find `%s' in `%s'", lexbuf, imdir);
        }
        else
            pushfile(lexbuf.data);
    }
}

static STRING_ idname = {0, 0, NULL};

static void define_directive(void)
{
    getident(&idname);                      /* get the name of the define */
    skipblanks();                           /* skip blanks again */
    fill_line();
    no_comment();                           /* remove comment from lexbuf */

    if (output_active)
        insert(idname.data);
}

static void undef_directive(void)
{
    getident(&idname);                      /* symbol to undef */
    terminate_line("undef");

    if (output_active)
        undef(idname.data);
}

static void ifndef_directive(void)
{
    getident(&idname);                      /* get the name of the define */
    terminate_line("ifndef");
    output_active = push_active(!isdefd(&idname));
}

static void ifdef_directive(void)
{
    getident(&idname);                      /* get the name of the define */
    terminate_line("ifdef");

    output_active = push_active(isdefd(&idname));
}

static void else_directive(void)
{
    terminate_line("else");
    output_active = negate_active();
}

static void endif_directive(void)
{
    terminate_line("endif");
    output_active = pop_active();
}

void directive(void)
{
    register int ch;
                                    /* directive is #! */
    if ((ch = nextchar()) == '!')
    {                               /* skip while not \n and not EOF */
        skipline();
        return;                     /* all done here */
    }

    pushback(ch);                   /* push back the first char which may */
                                    /* be a blank or the first char of a  */
                                    /* directive                          */
                                       
    getident(&lexbuf);

    if (!strncmp(lexbuf.data, "include", 7))
        include_directive();
    else if (!strncmp(lexbuf.data, "define", 6))
        define_directive();
    else if (!strncmp(lexbuf.data, "undef", 5))
        undef_directive();
    else if (!strncmp(lexbuf.data, "ifndef", 6))
        ifndef_directive();
    else if (!strncmp(lexbuf.data, "ifdef", 5))
        ifdef_directive();
    else if (!strncmp(lexbuf.data, "else", 4))
        else_directive();
    else if (!strncmp(lexbuf.data, "endif", 5))
        endif_directive();
    else
        error("%s: %d: bad preprocessor directive `%s'",
               filestack[filesp].n, filestack[filesp].l, &lexbuf.data);
}
