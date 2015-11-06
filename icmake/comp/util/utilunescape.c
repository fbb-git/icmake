#include "util.ih"

char const *util_unescape()
{
    return stresc(gu_lexstring);
}
