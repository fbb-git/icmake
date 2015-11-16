#include "string.ih"

TextData *newstring(char *cp)
{
    TextData *ret = malloc(sizeof(TextData));
    ret->count = 1;
    ret->ls.str = cp;

    return ret;
}
