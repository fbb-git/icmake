#include "dependencies.ih"

void dReadClasses()
{
    FILE *classes = openFile(optClasses(), "r");

    sdep.d_dirNames = VectorCons();
    add(sdep.d_dirNames, ".");

    char const *cp;
    if ((cp = optParser()))
        add(sdep.d_dirNames, cp);

    if ((cp = optScanner()))
        add(sdep.d_dirNames, cp);

    char *line;
    while ((line = getLine(classes)))               // get line from CLASSES
    {
        char *class = strtok(line, " \t");          // pick the first word

        if (
            class != NULL                           // accept lines not 
            &&                                      // starting at #, /
            strchr("#/", *class) == NULL
        )   
            add(sdep.d_dirNames, class);

        free(line);
    }

    sdep.d_size = vSize(sdep.d_dirNames);

    fclose(classes);
}



