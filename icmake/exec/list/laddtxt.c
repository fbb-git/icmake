#include "list.ih"

void l_addText(ListVariable *list, char *txt)
{
    List *p = l_listPtr(list);

    p->element = rss_realloc(p->element, p->size * sizeof(char **));
    p->element[p->size - 1] = txt;
}
