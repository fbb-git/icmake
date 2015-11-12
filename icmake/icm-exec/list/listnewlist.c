#include "list.ih"

INTER_ *newlist()
{
    INTER_ *ret = malloc(sizeof(INTER_));
    ret->count = 1;
    memset(&ret->ls, 0, sizeof(LIST_));

    return ret;
}
