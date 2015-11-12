#include "builtin.h"

void eb_fileWrite(void *dest, char const *begin, char const *end)
{
    fwrite(begin, 1, end - begin, (FILE *)dest);
}

