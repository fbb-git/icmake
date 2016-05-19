#include "scanner.ih"

void sc_setLineNr()
{
    yylineno = atoi(yytext + 1);
}
