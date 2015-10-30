/*
\funcref{sortlist}{VAR\_ sortlist (\params)}
    {
        {VAR\_} {v} {variable holding list to sort}
    }
    {variable holding sorted list}
    {}
    {}
    {sortlist.c}
    {

        This function sorts the list of variable {\em v}. The same variable,
        after sorting, is returned.

    }
*/

#include "list.ih"

static int compelement (void const *s1, void const *s2)
{
    return (strcmp (*(char const * const *)s1, *(char const * const *)s2));
}

void listSort(LISTVAR_ *list)
{
    qsort (element(list), size(list), sizeof(char *), compelement);
}
