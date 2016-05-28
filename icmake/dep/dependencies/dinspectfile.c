#include "dependencies.ih"

void dInspectFile(int idx, Vector *toDo, int toDoIdx)
{
    char const *hdr = toDo->txt[toDoIdx];

    if (!rss_exists(hdr))
    {
        optMsg(4, "%s does not exist: skipped", hdr);
        return;
    }

    optMsg(4, "%s...", hdr);
    
    dInspectGch(idx, hdr);
    
    FILE *file = openFile(toDo->txt[toDoIdx], "r");

    char *line;
    while ((line = getLine(file)))
    {
        dHandleInclude(idx, toDo, line, hdr);
        free(line);
    }

    fclose(file);
}
