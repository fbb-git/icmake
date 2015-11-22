/*
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
*/

#define msg
/* 
*/

#include "icm-pp.h"

static size_t nlCount = 0;

static void newLines()
{
/*
    if (nlCount != 0)
    {
        fputc('\n', outfile);

        if (nlCount >= 5)
            fprintf(outfile, "\n#%u\n", filestack[filesp].lineNr);
        else
        {
            while (nlCount--)
                fputc('\n', outfile);
        }
    
        nlCount = 0;
    }
*/
}    


void process(LEXER_ token)
{
    register int i;

    switch (token)
    {
        case l_eof:
            if (! output_active)
                rss_error("%s: end-of-file inside #if(n)def",
                   filestack[filesp].filename);
            nlCount = 0;
            popfile();
        break;

        case l_space:
            fputc(lexbuf.data[0], outfile);
/*    
        {
            int ch = lexbuf.data[0];

            if (ch == '\n')
                ++nlCount;
            else
            {
                newLines();
                fputc(ch, outfile);
            }
        }
*/
        break;

        case l_string:
            if (output_active)
            {
                newLines();
                fputc('\"', outfile);
                fputs(lexbuf.data, outfile);
                fputc('\"', outfile);
            }
        break;

        case l_single:
            if (output_active)
            {
                newLines();
                fputc(lexbuf.data[0], outfile);
            }
        break;

        case l_ident:
            if (output_active)
            {
                newLines();
                if ( (i = finddef(lexbuf.data)) != -1 )
                    fputs(defined[i].redef, outfile);
                else
                    fputs(lexbuf.data, outfile);
            }
        break;

        case l_other:
            if (output_active)
            {
                newLines();
                fputs(lexbuf.data, outfile);
            }
        break;
    }
}


