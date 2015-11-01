#include "parser.ih"

void entervar()
{
    enter();
    g_entertab->symbol[g_entertab->n_defined - 1].var.type |= e_var;
}
