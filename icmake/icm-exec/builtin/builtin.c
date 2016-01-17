#include "builtin.ih"

void builtin()
{
    if (!getcwd(gb_orgDir, MAX_PATHLEN))
        rss_fatal(0, 0, "getcwd($s) fails"); /* its absolute pathname       */

    gb_argHead = rss_strdup("");
    gb_argTail = rss_strdup("");
    gb_cmdHead = rss_strdup("");
    gb_cmdTail = rss_strdup("");
}

