#include "dependencies.ih"

void readClasses(Dependencies *dep)
{
    FILE *classes = openFile(oClasses(dep->options), "r");

    dep->dirNames = VectorCons();
    add(dep->dirNames, ".");

    char const *cp;
    if (cp = oParser(dep->options))
        add(dep->dirNames, cp);

    if (cp = oScanner(dep->options))
        add(dep->dirNames, cp);

    char *line;
    while (line = getLine(classes))                // get line from CLASSES
    {
        char *class = strtok(line, " \t");          // pick the first word

        if (
            class != NULL                           // accept lines not 
            &&                                      // starting at #, /
            strchr("#/", *class) == NULL
        )   
            add(dep->dirNames, class);

        free(line);
    }

    dep->size = vSize(dep->dirNames);

    fclose(classes);
}



