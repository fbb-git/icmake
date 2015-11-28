#define msgx
#include "parser.ih"

void p_saveYYtext()
{
    free(p_text);
    p_text = rss_strdup(scanner_text());
    msg("%s", p_text);
}
