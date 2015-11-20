#include "var.ih"

uint16_t var_decShared(Variable const *var)
{
    return --((Variable *)var)->data->nShared;
}
