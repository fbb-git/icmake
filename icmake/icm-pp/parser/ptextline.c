#define msg

#include "parser.ih"

void p_textLine(int token)
{
    do
    {
        msg("saw %u, `%s'", token, scanner_text());

        if (token == IDENT)
            p_inspectIdent();
        else
            out(scanner_text());

        token = yylex();
    }
    while (token != '\n' && token != 0);

    out_nl();
}
