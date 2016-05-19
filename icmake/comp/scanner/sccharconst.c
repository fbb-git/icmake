#include "scanner.ih"

void sc_charConst()
{
    gs_char[0] = yytext[1];
    util_setString(gs_char);    
}




