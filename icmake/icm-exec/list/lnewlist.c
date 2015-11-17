#include "list.ih"

TextData *l_newList()                       /* initializes TextData, to     */
{                                           /* assign to a TextData *vu.i   */
    TextData *ret = malloc(sizeof(TextData));
    ret->count = 1;
    memset(&ret->ls, 0, sizeof(List));

    return ret;
}
