#define msgx

#include "scanner.ih"

FILE *sc_pushFile(char const *filename)
{
    msg("push %s", filename);
    filestack_push(yylineno, filename);
    msg("done");
    yylineno = 1;

    return yyin = filestack_tos()->file;
}
