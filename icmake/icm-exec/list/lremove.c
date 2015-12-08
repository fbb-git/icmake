#include "list.ih"

unsigned l_remove(ListVariable *list, char const *txt)
{
    unsigned idx = l_size(list);
    unsigned nRemoved = 0;

    while (idx--)
    {
        char **target = l_element(list) + idx;

        if (strcmp(txt, *target) == 0)
        {
            free(*target);
            *target = 0;            /* set the free ntps pointer to 0 */
            ++nRemoved;
        }
    }
    return nRemoved;
}
