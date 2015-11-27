#include "linear.ih"

int linear_undef(char const *ident)
{
    Linear const *item = linear_search(ident);

    if (item == NULL)
        return 0;

    memcpy((Linear *)item, item + 1, 
            (l_size - (item + 1 - l_table)) * sizeof(Linear));

    --l_size;
    return 1;
}
