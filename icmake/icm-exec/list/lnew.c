#include "list.ih"

TextData *l_new()                       /* initializes TextData, empty list */
{
    TextData *ret = rss_realloc(NULL, sizeof(TextData));
    memset(&ret, 0, sizeof(TextData));

    ret->nShared = 1;

    return ret;
}
