#include "process.ih"

void visitSubdirs(Process *process)
{
    FILE *classes = openFile(process->classes, "r");

    char *line;
    while ((line = getLine(classes)))              // get line from CLASSES
    {
        char *class = strtok(line, " \t");

        if (
            class == NULL                              // ignore empty lines or
            ||                                      // lines starting at #, /
            strchr("#/", *class) != NULL
        )   
            continue;

        inspectDir(process, class, class);  // see if headers in subdir 'line'
    }                                       // include headers in d_search
}



