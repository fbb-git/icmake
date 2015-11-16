#include "list.ih"

void list_add_charPtr(ListVariable *list, char const *txt)
{
    l_incSize(list);
    l_addText(list, rss_strdup(txt));
}
