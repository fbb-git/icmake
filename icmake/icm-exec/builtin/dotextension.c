#include "builtin.ih"

void builtin_dotExtension()
{
    reg = *stringcons_charPtr(rss_getDext(string_charp(stack_top())));
}
