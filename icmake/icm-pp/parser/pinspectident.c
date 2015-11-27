#define msg

#include "parser.ih"

void p_inspectIdent()
{
    char const *ident = scanner_text();
    Linear const *item = linear_search(ident);

    if (item != NULL)
    {
        msg("%s found as %s", ident, item->definition);
    }
    else
    {
        msg("%s not found", ident);
    }
    out(item == NULL ? ident : item->definition);
}
