#include "process.ih"

void p_touch(char const *path)
{
    if (!s_Process.dry)
        fclose(openFile(path, "w"));

    if (s_Process.dry || optVerbose() != 0)
        printf("touch %s\n", path);
}
