#include "builtin.ih"

void builtin_getCwd()
{
    getcwd(gb_orgDir, MAX_PATHLEN);
}

