#include "linear.ih"

void linear_add(char const *ident, char const *definition)
{
    if (l_size == l_capacity)
        l_table = rss_realloc(l_table, (l_capacity += 10) * sizeof(Linear));

    l_table[l_size].id = rss_strdup(ident);
    l_table[l_size].definition = l_replaceDefines(rss_strdup(definition));

    ++l_size;
}
