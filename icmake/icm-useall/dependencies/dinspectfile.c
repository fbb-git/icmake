#include "dependencies.ih"

void d_inspectFile(int idx, Vector *toDo, int toDoIdx)
{
    char const *hdr = toDo->txt[toDoIdx];

    if (!rss_exists(hdr))
    {
        vmsg(2, "skipping non-existing %s\n", hdr);
        return;
    }
    
    d_inspectGch(idx, hdr);
    
    FILE *file = openFile(toDo->txt[toDoIdx], "r");

    char *line;
    while ((line = getLine(file)))
    {
        d_handleInclude(idx, toDo, line);
        free(line);
    }

    fclose(file);
}
