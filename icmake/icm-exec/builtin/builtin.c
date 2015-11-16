#include "builtin.ih"

void builtin()
{
    getcwd(gb_orgDir, MAX_PATHLEN);
    gb_argHead = rss_strdup("");
    gb_argTail = rss_strdup("");
    gb_cmdHead = rss_strdup("");
    gb_cmdTail = rss_strdup("");
}

