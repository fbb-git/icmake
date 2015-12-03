#include "parser.ih"

int yyerror(char *s)
{
    if (scanner_eof())
        rss_fatal(p_filename, scanner_lastLineNr(),
                    "Unexpected end of file");

    rss_error(filestack_tos()->filename, scanner_lineNr(), 
                "Syntax error at `%s'", 
                scanner_text());

    return 0;
}

