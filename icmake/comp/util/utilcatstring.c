#include "util.ih"

void util_catString(char const *txt)
{
    gu_lexstring = xstrcat(gu_lexstring, txt);
}
