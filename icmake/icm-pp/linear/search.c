#include "linear.ih"

Linear const *linear_search(char const *ident)
{
    return lfind(ident, l_table, &l_size, sizeof(Linear), l_compare);
}
