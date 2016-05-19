#define msg

#include "string.ih"

void stringDestructor(Variable const *var)
{
    if (var_decShared(var) == 0)
    {
        free(var->data->str);
        free(var->data);
    }
}

