/*
\funcref{process}{void process (\params)}
    {
        {LEXER\_} {token} {input token to process}
    }
    {}
    {popfile(), finddef()}
    {lexer()}
    {process.c}
    {
        Function {\em process()} is called from {\em main()} with as argument
        the token as read by {\em lexer()}. Depending on the token, several
        actions are performed by {\em process()}:

        \begin{itemize}

            \item Token {\em l\_eof} signals the end of the processed file.
            {\em popfile()} is called to close the file etc..

            \item Token {\em l\_ident} signals an identifer. {\em process()}
            scans the symbol table {\em defined} to check if the identifier was
            redefined; if so, the redefinition string is written to the output
            file. If not, the identifer itself is written to the output file.

            \item All other tokens signal `ordinary' input. The sematic value
            of the tokens, as stored by {\em lexer()} in the buffer {\em
            lexbuf}, is written to the output file.

        \end{itemize}
    }
*/

#include "icm-pp.h"

void process(LEXER_ token)
{
    register int
        i;

    switch (token)
    {
        case l_eof:
            if (! output_active)
                error("%s: end-of-file inside #if(n)def",
                   filestack[filesp].n);
            popfile();
        break;

        case l_space:
            fputc(lexbuf.data[0], outfile);
        break;

        case l_string:
            if (output_active)
            {
                fputc('\"', outfile);
                fputs(lexbuf.data, outfile);
                fputc('\"', outfile);
            }
        break;

        case l_single:
            if (output_active)
                fputc(lexbuf.data[0], outfile);
        break;

        case l_ident:
            if (output_active)
            {
                if ( (i = finddef(lexbuf.data)) != -1 )
                    fputs(defined[i].redef, outfile);
                else
                    fputs(lexbuf.data, outfile);
            }
        break;

        case l_other:
            if (output_active)
                fputs(lexbuf.data, outfile);
        break;
    }
}
