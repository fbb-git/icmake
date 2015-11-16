#include "builtin.ih"

void builtin_dotExtension()
{
    gb_reg = *stringcons_charPtr(rss_getDext(string_charp(stack_top())));
}
