#include "list.ih"

TextData *newlist()
{
    TextData *ret = malloc(sizeof(TextData));
    ret->count = 1;
    memset(&ret->ls, 0, sizeof(List));

    return ret;
}
