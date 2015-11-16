#include "list.ih"

void listDestructor(ListVariable *var)
{
    size_t idx;

    if (varDecCount(var) >= 1)
        return;

    for (idx = size(var); idx--; )
        free(element(var)[idx]);

    free(element(var));
}

