#include "string.ih"

void string_add(String *lhs, String const *rhs)
{
    char *catstr = rss_strcat(rss_strdup(string_charp(lhs)), string_charp(rhs));

    destructor(lhs);
    stringcons_charPtr(lhs, catstr);

    free(catstr);
}

