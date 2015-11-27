#include "linear.ih"

void linear_show()
{
    printf("Defined symbols: %u\n", l_size);

    Linear const *item = l_table;
    Linear const *end = l_table + l_size;

    for ( ; item != end; ++item)
        printf("    %20s: `%s'\n", item->id, item->definition);
}
