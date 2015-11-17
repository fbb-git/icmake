#include "builtin.ih"

void b_dotExtension()
{
    gb_reg = *stringcons_charPtr(rss_getDext(string_charp(stack_top())));
}
