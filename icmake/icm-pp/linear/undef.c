#include "linear.ih"

int linear_undef(char const *ident)
{
    Linear *item = (Linear *)linear_search(ident);

    if (item == NULL)
        return 0;

    free(item->id);                         // free the item to undef
    free(item->definition);

    --l_size;                               // reduce the size

    if (l_table + l_size != item)           // not the last item was removed:
    {
        item->id = l_table[l_size].id;                  // store the last item
        item->definition = l_table[l_size].definition;  // at the free spot
    }

    return 1;
}
