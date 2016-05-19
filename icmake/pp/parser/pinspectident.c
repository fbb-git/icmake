#define msgx

#include "parser.ih"

void p_inspectIdent()
{
    char const *ident = scanner_text();
    Linear const *item = linear_search(ident);

    out(item == NULL ? ident : item->definition);
}
