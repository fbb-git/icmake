#include "process.ih"

void tryChdir(char const *subdir)
{
    if (chdir(subdir) != 0)                 // change to requested dir
    {
        printf("can't cd to `%s'\n", subdir);
        exit(1);
    }
}
