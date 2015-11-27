#include "linear.ih"

int l_compare(const void *ident, const void *item)
{
    return strcmp(ident, ((Linear *)item)->id);
}
