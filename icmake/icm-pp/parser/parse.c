
#define msgx

#include "parser.ih"

int parser_parse()
{
    msg("Current status: %u", state_active());

    return yyparse();
}
