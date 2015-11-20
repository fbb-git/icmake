#include "var.ih"

uint16_t var_nShared(Variable const *var)
{
    return var->data->nShared;
}
