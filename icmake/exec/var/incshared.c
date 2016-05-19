#include "var.ih"

void var_incShared(Variable *var)
{
    ++var->data->nShared;
}
