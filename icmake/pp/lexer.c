/*
\funcref{lexer}{LEXER\_ lexer ()}
    {}
    {read token from the input}
    {error(), directive(), getident()}
    {}
    {lexer.c}
    {
        Function {\em lexer()} processes the input file and depending on the
        information returns a value from the {\em LEXER\_} enumerated type. The
        semantic value of the input is stored in the lexical buffer {\em
        lexbuf}.

        The following types of input are handled within {\em lexer()}, i.e.,
        without returning:

        \begin{itemize}

            \item Newlines lead to the updating of the line counter associated
            with the current file.

            \item Comments (// or /$*$ $*$/) are skipped.

            \item `\#' characters activate function {\em directive()}, which
            processes a preprocessor directive. After the processing of the
            directive, the input is further processed.

        \end{itemize}

        The following types of input lead to termination of {\em lexer()} by
        returning:

        \begin{itemize}

            \item End of file: value {\em l\_eof} is returned.

            \item Spaces or tabs: value {\em l\_space} is returned, while the
            read character is stored in {\em lexbuf[0]}.

            \item Double quotes: {\em l\_string} is returned, while the string
            is stored in {\em lexbuf}. Note that the double quotes are not
            stored in {\em lexbuf}.

            \item Identifiers (see {\em getident()} for a definition): {\em
            l\_ident} is returned, while the identifier name is stored in {\em
            lexbuf}. The identifier is read into the buffer by {\em
            getident()}.

            \item Numbers (series of [0-9]): {\em l\_other} is returned, while
            the read `pseudo-identifier' is stored in {\em lexbuf}.

            \item All other characters: {\em l\_single} is returned, while the
            character is stored in {\em lexbuf[0]}.

        \end{itemize}
    }
*/

#include "icm-pp.h"

LEXER_ lexer ()
{
    register int
        state,
        index,
        ch;

    while (1)
    {
        ch = fgetc (filestack [filesp].f);
        switch (ch)
        {
            case EOF:
		at_firstcol = 1;
                return (l_eof);
            case '\n':
		at_firstcol = 1;
                filestack [filesp].l++;
		lexbuf [0] = '\n';
		return (l_space);
            case ' ':
            case '\t':
		at_firstcol = 0;
                lexbuf [0] = ch;
                return (l_space);
            case '\"':
		at_firstcol = 0;
		if (nostrings)
		{
		    lexbuf [0] = (char) ch;
		    return (l_single);
		}
	    
                index = 0;
                while (1)
                {
                    if ( (ch = fgetc (filestack [filesp].f)) == '\n' )
                        error ("%s: %d: unterminated string, \" expected",
                               filestack [filesp].n, filestack [filesp].l);
                    else if (ch == '\\')
                    {
                        lexbuf [index++] = '\\';
                        if ( (lexbuf [index++] =
                              fgetc (filestack [filesp].f)) == (char) EOF
                           )
                            error ("%s: unterminated string at EOF",
                                filestack [filesp].n);
                    }
                    else if (ch == '\"')
                    {
                        lexbuf [index] = '\0';
                        return (l_string);
                    }
                    else
                        lexbuf [index++] = (char) ch;
                }
            case '/':
		at_firstcol = 0;
                lexbuf [0] = '/';
		if (nocomment)
		    return (l_single);
	    
                if ( (ch = fgetc (filestack [filesp].f)) == '/' )
                {
                    while ( (ch = fgetc (filestack [filesp].f)) != '\n' &&
                            ch != EOF
                          )
                            ;
                    ungetc (ch, filestack [filesp].f);
                    break;
                }
                else if (ch == '*')
                {
                    state = 0;
                    while (state != 2)
                    {
                        if ( (ch = fgetc (filestack [filesp].f)) == '\n')
                        {
                            filestack [filesp].l++;
                            fputc ('\n', outfile);
                        }
                        else if (ch == EOF)
                            error ("%s: %d: unterminated comment block",
                                   filestack [filesp].n, filestack [filesp].l);
                        switch (state)
                        {
                            case 0:
                                if (ch == '*')
                                    state = 1;
                                break;
                            case 1:
                                if (ch == '/')
                                    state = 2;
                                else
                                    state = 0;
                                break;
                        }
                    }
                }
                else
                {
                    ungetc (ch, filestack [filesp].f);
                    return (l_single);
                }
                break;
            case '#':
		if (at_firstcol || !strict_directives)
		{
		    at_firstcol = 0;
		    directive ();
		    at_firstcol = 1;
		}
		else
		{
		    lexbuf [0] = '#';
		    return (l_single);
		}
                break;
            default:
		at_firstcol = 0;
                if (ch == '_' || isalpha (ch))
                {
                    ungetc (ch, filestack [filesp].f);
                    getident (lexbuf);
                    return (l_ident);
                }
                else if (isalnum (ch))
                {
                    index = 0;
                    while (isalnum (ch) || ch == '_')
                    {
                        lexbuf [index++] = (char) ch;
                        ch = fgetc (filestack [filesp].f);
                    }
                    lexbuf [index] = '\0';
                    ungetc (ch, filestack [filesp].f);
                    return (l_other);
                }
                else
                {
                    lexbuf [0] = (char) ch;
                    return (l_single);
                }
        }
    }
}
