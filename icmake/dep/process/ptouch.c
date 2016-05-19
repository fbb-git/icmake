#include "process.ih"

void pTouch(char const *path)
{
    if (sproc.d_go == GO)
        fclose(openFile(path, "w"));

    optMsg(1, "touch %s", path);
}
