#include "util.ih"

void util_charConst()
{
    yytext[0] = yytext[1];
    yytext[1] = 0;
    util_setString(yytext);
}
