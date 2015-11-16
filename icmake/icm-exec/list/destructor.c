#include "list.ih"

void listDestructor(ListVariable *var)
{
    size_t idx;

    if (var_decCount(var) >= 1)
        return;

    for (idx = *l_sizePtr(var); idx--; )
        free(l_element(var)[idx]);

    free(l_element(var));
}

