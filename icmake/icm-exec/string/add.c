#include "string.ih"

void string_add(String *lhs, String const *rhs)
{
    char *catstr = rss_strcat(rss_strdup(string_charp(lhs)), string_charp(rhs));

    destructor(lhs);
    *lhs = *stringcons_charPtr(catstr);

    free(catstr);
}

