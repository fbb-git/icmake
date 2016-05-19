/*
    This function sorts the list of variable {\em v}. The same variable,
    after sorting, is returned.
*/

#include "list.ih"

static int compelement(void const *s1, void const *s2)
{
    return strcmp(*(char const * const *)s1, *(char const * const *)s2);
}

void list_sort(ListVariable *list)
{
    qsort(l_element(list), *l_sizePtr(list), sizeof(char *), compelement);
}
