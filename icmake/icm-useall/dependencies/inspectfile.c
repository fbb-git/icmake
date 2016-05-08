#include "dependencies.ih"

void inspectFile(Dependencies *dep, int idx, Vector *toDo, int toDoIdx)
{
    char const *hdr = toDo->txt[toDoIdx];

    if (access(hdr, R_OK) != 0)
    {
        if (oVerbose(dep->options) > 1)
            printf("skipping non-existing %s\n", hdr);
        return;
    }
    
    FILE *file = openFile(toDo->txt[toDoIdx], "r");

//    fprintf(stderr, "\nInspecting %s\n", toDo->txt[toDoIdx]);

    char *line;
    while ((line = getLine(file)))
    {
        handleInclude(dep, idx, toDo, line);
        free(line);
    }

    fclose(file);
}
