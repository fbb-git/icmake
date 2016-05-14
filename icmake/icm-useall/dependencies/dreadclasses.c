#include "dependencies.ih"

void d_readClasses()
{
    FILE *classes = openFile(optClasses(), "r");

    sdep.dirNames = VectorCons();
    add(sdep.dirNames, ".");

    char const *cp;
    if (cp = optParser())
        add(sdep.dirNames, cp);

    if (cp = optScanner())
        add(sdep.dirNames, cp);

    char *line;
    while (line = getLine(classes))                // get line from CLASSES
    {
        char *class = strtok(line, " \t");          // pick the first word

        if (
            class != NULL                           // accept lines not 
            &&                                      // starting at #, /
            strchr("#/", *class) == NULL
        )   
            add(sdep.dirNames, class);

        free(line);
    }

    sdep.size = vSize(sdep.dirNames);

    fclose(classes);
}



