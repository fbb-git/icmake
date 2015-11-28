#include "parser.ih"

int yyerror(char *s)
{
    if (scanner_eof())
        rss_fatal(filestack_tos()->filename, scanner_lineNr(),
                    "Unexpected end of file");

    rss_error(filestack_tos()->filename, scanner_lineNr(), 
                "Syntax error at `%s'", 
                scanner_text());

    return 0;
}

