#include "util.ih"

void UtilInit()
{
    s_cwd = dirfd(opendir("."));
    resize(&s_vector, 5);
}
