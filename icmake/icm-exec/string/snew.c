
/* #define msg
*/

#include "string.ih"

TextData *s_new(char *cp)
{
    TextData *ret = rss_realloc(NULL, sizeof(TextData));
    ret->nShared = 1;
    ret->str = cp;

    return ret;
}
