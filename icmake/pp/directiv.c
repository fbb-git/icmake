/*
\funcref{directive}{void directive ()}
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

            \item {\bf \#} {\em [spaces]} {\bf include} {\em [spaces]} {\bf
            "}{\em filename}{\bf "}. When this directive is read, {\em
            pushfile()} is called to start processing the included file.

            Analogous to {\bf C}, an {\bf \#include} $<$...$>$ form is
            supported.

            \item {\bf \#} {\em [spaces]} {\bf define} {\em [spaces]} {\em name}
            {\em [spaces]} {\em [redefinition]}. When this directive is read,
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

static int isdefd (char *id)
{
    register int
    i;

    if ( (i = finddef (id)) < 0 ||
     (!strcmp (defined [i].redef, "0"))
       )
    return (0);
    return (1);
}

static void skipline()
{
    register int ch;

    while ((ch = fgetc (filestack [filesp].f)) != '\n' && ch != EOF)
        ;
    ungetc(ch, filestack[filesp].f);  /* push back that char */
}

static void skipblanks()
{
    register int ch;

    while ((ch = fgetc (filestack [filesp].f)) == ' ' || ch == '\t')
        ;

    ungetc(ch, filestack[filesp].f);      /* push back next char, not ' ' */
}

static void terminate_line(char const *what)
{
    register int ch;

    while ( (ch = fgetc (filestack [filesp].f)) != '\n' )
        if (ch == EOF)
            error ("%s: #%s at end-of-file", filestack[filesp].n, what);

    ungetc (ch, filestack [filesp].f);      /* and push-back non-blank */
}

static void fill_line()
{
    register int index = 0;
    register int ch;
                                    /* read the line-remainder */
    while ((ch = fgetc (filestack [filesp].f)) != '\n' && ch != EOF)
        lexbuf[index++] = ch;

    lexbuf [index] = 0;             /* terminate the line */

    ungetc (ch, filestack [filesp].f);
}

void include_directive()
{
    register int ch;
    register int index;
    register int imdir_used = 0;    /* assume include "..." form */

    skipblanks();

    ch = fgetc(filestack [filesp].f);
    if (ch != '\"' && ch != '<')
        error ("%s: %d: \" or < expected after #include directive",
               filestack [filesp].n, filestack [filesp].l);

    if (ch == '<')                  /* include <...> form? */
        imdir_used++;

    index = 0;
    while ( (ch = fgetc (filestack [filesp].f)) != '\"' && ch != '>')
        if (ch == '\n' || ch == EOF)
            error ("%s: %d: unterminated name after #include directive",
                   filestack [filesp].n, filestack [filesp].l);
        else
            lexbuf [index++] = (char) ch;
    lexbuf [index] = '\0';

    skipline();

    if (output_active)
    {
        if (imdir_used)
        {
            static char dirsep[2] = { DIRSEP, '\0' };
            char filename [_MAX_PATH];

            char *im = xstrdup(imdir);
            char *path = strtok(im, ":");   /* get the first path element */
            while (path)
            {
                strcpy (filename, path);
                strcat (filename, dirsep);
                strcat (filename, lexbuf);

                if (access(filename, R_OK) == 0)
                {
                    pushfile (filename);
                    break;
                }
                /* maybe try again/first using .im extension ? */

                path = strtok(0, ":");
            }
            free(im);

            if (!path)
                error ("cannot find `%s' in `%s'", lexbuf, imdir);
        }
        else
            pushfile (lexbuf);
    }
}

static char idname [200];

static void define_directive()
{
    skipblanks();
    getident (idname);                      /* get the name of the define */
    skipblanks();                           /* skip blanks again */
    fill_line();
    no_comment();                           /* remove comment from lexbuf */

    if (output_active)
        insert (idname);
}

static void ifndef_directive()
{
    skipblanks();
    getident (idname);                      /* get the name of the define */
    terminate_line("ifndef");
    output_active = push_active(!isdefd(idname));
}

static void ifdef_directive()
{
    skipblanks();
    getident (idname);                      /* get the name of the define */
    terminate_line("ifdef");

    output_active = push_active(isdefd(idname));
}

static void else_directive()
{
    terminate_line("else");
    output_active = negate_active();
}

static void endif_directive()
{
    terminate_line("endif");
    output_active = pop_active();
}

void directive ()
{
    register int ch;
                                            /* directive is #! */
    if ((ch = fgetc (filestack [filesp].f)) == '!')
    {                                       /* skip while not \n and not EOF */
        skipline();
        return;                             /* all done here */
    }

    ungetc(ch, filestack[filesp].f);        /* push back the first char which may */
                                            /* be a blank or the first char of a  */
                                            /* directive                          */
                                            
    skipblanks();                           /* eat blanks between # and directive */

    if (! fscanf (filestack [filesp].f, "%s", lexbuf))
        error ("%s: %d: bad preprocessor directive `%s'",
               filestack [filesp].n, filestack [filesp].l, lexbuf);

    if (! strncmp (lexbuf, "include", 7))
        include_directive();
    else if (!strncmp(lexbuf, "define", 6))
        define_directive();
    else if (! strncmp (lexbuf, "ifndef", 6))
        ifndef_directive();
    else if (! strncmp (lexbuf, "ifdef", 5))
        ifdef_directive();
    else if (! strncmp (lexbuf, "else", 4))
        else_directive();
    else if (! strncmp (lexbuf, "endif", 5))
        endif_directive();
    else
        error ("%s: %d: bad preprocessor directive `%s'",
               filestack [filesp].n, filestack [filesp].l, lexbuf);
}
