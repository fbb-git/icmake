#include "builtin.ih"

void b_dotExtension()
{
    stringcons_charPtr(
        eb_releaseReg(),
        rss_getDext(string_charp(stack_top()))
    );
}
