#include "list.ih"

void addtxt(LISTVAR_ *list, char const *txt)
{
    LIST_ *p = &list(list);

    p->element = xrealloc(p->element, p->size * sizeof(char **));
    p->element[p->size - 1] = xstrdup(txt);
}
