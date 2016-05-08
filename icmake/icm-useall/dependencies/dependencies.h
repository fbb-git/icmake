#ifndef INCLUDED_DEPENDENCIES_
#define INCLUDED_DEPENDENCIES_

#include <regex.h>

#include "../options/options.h"
#include "../vector/vector.h"

typedef struct
{
    Options *options;
    regex_t includeRegex;

    Vector *dirNames;        // names of directories, first is main's dir. as "."
    int size;

    int **dependsOn;    // X-table of dependencies: the row class requires the
                        // entries in the columns: if gch files of classes in
                        // the columns is refreshed, then the current gch file
                        // must also be refreshed.
} Dependencies;

Dependencies *DependenciesCons(Options *options);
        
#endif
