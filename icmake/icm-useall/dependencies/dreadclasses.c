#include "dependencies.ih"

void d_readClasses()
{
    FILE *classes = openFile(optClasses(), "r");

    s_Dependencies.dirNames = VectorCons();
    add(s_Dependencies.dirNames, ".");

    char const *cp;
    if (cp = optParser())
        add(s_Dependencies.dirNames, cp);

    if (cp = optScanner())
        add(s_Dependencies.dirNames, cp);

    char *line;
    while (line = getLine(classes))                // get line from CLASSES
    {
        char *class = strtok(line, " \t");          // pick the first word

        if (
            class != NULL                           // accept lines not 
            &&                                      // starting at #, /
            strchr("#/", *class) == NULL
        )   
            add(s_Dependencies.dirNames, class);

        free(line);
    }

    s_Dependencies.size = vSize(s_Dependencies.dirNames);

    fclose(classes);
}



