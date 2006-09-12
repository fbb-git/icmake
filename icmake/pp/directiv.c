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

void directive ()
{
    register int
        imdir_used,
        index,
        ch;
    static char
        dirsep [2] = { DIRSEP, '\0' },
        idname [200];
    char
        filename [_MAX_PATH];

                                            /* directive is #! */
    if ((ch = fgetc (filestack [filesp].f)) == '!')
    {                                       /* skip while not \n and not EOF */
        while ((ch = fgetc (filestack [filesp].f)) != '\n' && ch != EOF)
            ;
	ungetc (ch, filestack [filesp].f);  /* push back that char */
	return;				    /* all done here */
    }
    
                                            /* not #!, but maybe '#  ' */
    while (ch == ' ' || ch == '\t')         /* skip all blanks */
        ch = fgetc (filestack [filesp].f);

    ungetc (ch, filestack [filesp].f);      /* push back next char, not ' ' */

    if (! fscanf (filestack [filesp].f, "%s", lexbuf))
        error ("%s: %d: bad preprocessor directive",
               filestack [filesp].n, filestack [filesp].l);

    if (! strncmp (lexbuf, "include", 7))
    {
        imdir_used = 0;                 /* assume include "..." form */
        while ( (ch = fgetc (filestack [filesp].f)) == ' ' ||
                ch == '\t'
              )
            ;
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
        while ( (ch = fgetc (filestack [filesp].f)) != '\n' &&
                ch != EOF)
            ;
        ungetc (ch, filestack [filesp].f);

	if (output_active)
	{
	    if (imdir_used)
	    {
		strcpy (filename, imdir);
		strcat (filename, dirsep);
		strcat (filename, lexbuf);
		pushfile (filename);
	    }
	    else
		pushfile (lexbuf);
	}
    }
    else if (! strncmp (lexbuf, "define", 6))
    {
        while                                   /* define read, skip blanks */
        (
            (ch = fgetc (filestack [filesp].f)) == ' '
            ||
            ch == '\t'
        )
            ;

        ungetc (ch, filestack [filesp].f);      /* push back first non-blank */

        getident (idname);                      /* get the name of the define */

        while                                   /* skip blanks again */
        (
            (ch = fgetc (filestack [filesp].f)) == ' '
            ||
            ch == '\t'
        )
            ;

        ungetc (ch, filestack [filesp].f);      /* and push-back non-blank */

        index = 0;				/* read the line-remainder */
        while
        (
            (ch = fgetc (filestack [filesp].f)) != '\n'
            &&
            ch != EOF
        )
            lexbuf [index++] = (char) ch;

        lexbuf [index] = '\0';			/* terminate the line */

        no_comment();				/* remove comment from lexbuf */

        ungetc (ch, filestack [filesp].f);
	if (output_active)
	    insert (idname);
    }
    else if (! strncmp (lexbuf, "ifndef", 6))
    {
						/* skip blanks */
        while ( (ch = fgetc (filestack [filesp].f)) == ' ' || ch == '\t')
            ;
        ungetc (ch, filestack [filesp].f);      /* push back first non-blank */

        getident (idname);                      /* get the name of the define */

						/* terminate the line */
	while ( (ch = fgetc (filestack [filesp].f)) != '\n' )
	    if (ch == EOF)
		error ("%s: #ifndef at end-of-file",
		       filestack [filesp].n);
        ungetc (ch, filestack [filesp].f);      /* and push-back non-blank */

	output_active = ! isdefd (idname);
    }
    else if (! strncmp (lexbuf, "ifdef", 5))
    {
						/* skip blanks */
        while ( (ch = fgetc (filestack [filesp].f)) == ' ' || ch == '\t')
            ;
        ungetc (ch, filestack [filesp].f);      /* push back first non-blank */

        getident (idname);                      /* get the name of the define */
	
						/* terminate the line */
	while ( (ch = fgetc (filestack [filesp].f)) != '\n' )
	    if (ch == EOF)
		error ("%s: #ifdef at end-of-file",
		       filestack [filesp].n);
        ungetc (ch, filestack [filesp].f);      /* and push-back non-blank */

	output_active = isdefd (idname);
    }
    else if (! strncmp (lexbuf, "else", 4))
    {
						/* terminate the line */
	while ( (ch = fgetc (filestack [filesp].f)) != '\n' )
	    if (ch == EOF)
		error ("%s: #else at end-of-file",
		       filestack [filesp].n);
        ungetc (ch, filestack [filesp].f);      /* and push-back non-blank */
	output_active = !output_active;
    }
    else if (! strncmp (lexbuf, "endif", 5))
    {
						/* terminate the line */
	while ( (ch = fgetc (filestack [filesp].f)) != '\n' )
	    if (ch == EOF)
		error ("%s: #ifdef at end-of-file",
		       filestack [filesp].n);
        ungetc (ch, filestack [filesp].f);      /* and push-back non-blank */
	output_active = 1;
    }
    else
        error ("%s: %d: bad preprocessor directive",
               filestack [filesp].n, filestack [filesp].l);
}
