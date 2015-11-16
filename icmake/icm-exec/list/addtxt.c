#include "list.ih"

void addtxt(ListVariable *list, char *txt)
{
    List *p = &list(list);

    p->element = rss_realloc(p->element, p->size * sizeof(char **));
    p->element[p->size - 1] = txt;
}
