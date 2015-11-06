#include "util.ih"

void util_setString(char const *txt)
{
    free(gu_lexstring);
    gu_lexstring = xstrdup(txt);
}
