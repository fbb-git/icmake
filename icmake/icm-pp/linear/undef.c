#include "linear.ih"

int linear_undef(char const *ident)
{
    Linear const *item = linear_search(ident);

    if (item == NULL)
        return 0;

    *item->id = 0;
    free(item->definition);

    return 1;
}
