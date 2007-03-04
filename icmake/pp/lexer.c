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

            \item Numbers (series of[0-9]): {\em l\_other} is returned, while
            the read `pseudo-identifier' is stored in {\em lexbuf}.

            \item All other characters: {\em l\_single} is returned, while the
            character is stored in {\em lexbuf[0]}.

        \end{itemize}
    }
*/

#include "icm-pp.h"

LEXER_ lexer()
{
    register int
        state,
        ch;

    while (1)
    {
        ch = nextchar();
        switch (ch)
        {
            case EOF:
                at_firstcol = 1;
            return l_eof;

            case '\n':
                at_firstcol = 1;
                filestack[filesp].l++;
                lexbuf.len = 0;
                string_append(&lexbuf, '\n');
            return l_space;

            case ' ':
            case '\t':
                at_firstcol = 0;
                lexbuf.len = 0;
                string_append(&lexbuf, ch);
            return l_space;

            case '\"':
                lexbuf.len = 0;
                at_firstcol = 0;
                if (nostrings)
                {
                    string_append(&lexbuf, ch);
                    return l_single;
                }
        
                while (1)
                {
                    ch = nextchar();
                    switch (ch)
                    {
                        case '\n':
                            if (string_continue(&lexbuf))
                                break;
                        error("%s: %d: unterminated string, \" expected",
                               filestack[filesp].n, filestack[filesp].l);

                        case EOF:
                        error("%s: unterminated string at EOF",
                               filestack[filesp].n);

                        case '\\':
                            string_append(&lexbuf, ch);
                            ch = nextchar();
                            if (ch == '\n')
                                pushback(ch);
                            else if (ch != EOF)
                                string_append(&lexbuf, ch);
                        break;
                            
                        case '"':
                            string_append(&lexbuf, 0);
                        return l_string;

                        default:
                            string_append(&lexbuf, ch);
                        break;
                    }
                }
            /* NOT REACHED */
    
            case '/':
                at_firstcol = 0;
                lexbuf.len = 0;
                string_append(&lexbuf, '/');
                if (nocomment)
                    return l_single;
        
                if ((ch = nextchar()) == '/')
                {
                    while ((ch = nextchar()) != '\n' && ch != EOF)
                        ;
                    pushback(ch);
                    break;
                }
                else if (ch == '*')
                {
                    state = 0;
                    while (state != 2)
                    {
                        if ((ch = nextchar()) == '\n')
                        {
                            filestack[filesp].l++;
                            fputc('\n', outfile);
                        }
                        else if (ch == EOF)
                            error("%s: %d: unterminated comment block",
                                   filestack[filesp].n, filestack[filesp].l);

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
                    pushback(ch);
                    return l_single;
                }
            break;

            case '#':
                if (at_firstcol || !strict_directives)
                {
                    at_firstcol = 0;
                    directive();
                    at_firstcol = 1;
                }
                else
                {
                    lexbuf.len = 0;
                    string_append(&lexbuf, '#');
                    return l_single;
                }
            break;

            default:
                at_firstcol = 0;
                if (ch == '_' || isalpha(ch))
                {
                    pushback(ch);
                    getident(&lexbuf);
                    return l_ident;
                }
                else if (isalnum(ch))
                {
                    lexbuf.len = 0;
                    while (isalnum(ch) || ch == '_')
                    {
                        string_append(&lexbuf, ch);
                        ch = nextchar();
                    }
                    string_append(&lexbuf, 0);
                    pushback(ch);
                    return l_other;
                }
                else
                {
                    lexbuf.len = 0;
                    string_append(&lexbuf, ch);
                    return l_single;
                }
        }
    }
}
