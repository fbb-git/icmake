#include "builtin.h"

void fileWrite(void *dest, char const *begin, char const *end)
{
    fwrite((FILE *)dest, begin, end - begin);
}

