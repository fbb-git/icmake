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

static int nblanks;
static int ntabs;
static int nlCount;

static size_t putch(size_t count, int ch)
{
    for (; count--; )
        fputc(ch, outfile);
    return 0;
}

static void whiteSpace()
{
    if (nlCount != 0)
    {
        if (nlCount >= 5)
        {
            fprintf(outfile, "\n#%u\n", filestack[filesp].lineNr);
            nlCount = 0;
        }
        else
            nlCount = putch(nlCount, '\n');
        nblanks = 0;
        ntabs = 0;
    }
    else
    {
        nblanks = putch(nblanks, ' ');
        ntabs = putch(ntabs, '\t');
    }
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
        {
            switch (lexbuf.data[0])
            {
                case ' ':
                    ++nblanks;
                break;
                case '\t':
                    ++ntabs;
                break;
                case '\n':
                    nblanks = 0;
                    ntabs = 0;
                    ++nlCount;
                break;
            }
        }
        break;

        case l_string:
            if (output_active)
            {
                whiteSpace();
                fputc('\"', outfile);
                fputs(lexbuf.data, outfile);
                fputc('\"', outfile);
            }
        break;

        case l_single:
            if (output_active)
            {
                whiteSpace();
                fputc(lexbuf.data[0], outfile);
            }
        break;

        case l_ident:
            if (output_active)
            {
                whiteSpace();
                if ( (i = finddef(lexbuf.data)) != -1 )
                    fputs(defined[i].redef, outfile);
                else
                    fputs(lexbuf.data, outfile);
            }
        break;

        case l_other:
            if (output_active)
            {
                whiteSpace();
                fputs(lexbuf.data, outfile);
            }
        break;
    }
}







