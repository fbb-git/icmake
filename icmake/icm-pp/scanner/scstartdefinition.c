#include "scanner.ih"

void sc_startDefinition()
{
    free(sc_definition);
    sc_definition = 0;
}
