#include "list.ih"

void listAdd_cP(ListVariable *list, char const *txt)
{
    incsize(list);
    addtxt(list, rss_strdup(txt));
}
