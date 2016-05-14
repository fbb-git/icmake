#include "process.ih"

void p_touch(char const *path)
{
    if (!sproc.dry)
        fclose(openFile(path, "w"));

    if (sproc.dry || optVerbose() != 0)
        printf("touch %s\n", path);
}
