#ifndef INCLUDED_DEPENDENCIES_
#define INCLUDED_DEPENDENCIES_

#include <regex.h>
#include <sys/stat.h>

#include "../options/options.h"
#include "../vector/vector.h"

typedef struct
{
    Options *options;
    regex_t includeRegex;

    Vector *dirNames;   // names of directories, first is main's dir. as "."
    int size;

    struct stat gchStat;
    int gchStatOK;
    char *gch;              // path of a gch file
    int rm;                 // rm old or implied gch files
    char const *useAll;     // touch useAll files

    int *gchIndicator;      // indicators of gch files to recompile
    int *useAllIndicator;   // indicators of touched useAllFiles

    int **dependent;    // X-table of dependencies: the column classes depend 
                        // on the row classes.

} Dependencies;

Dependencies *DependenciesCons(Options *options);

inline int size(Dependencies const *dep)
{
    return dep->size;
}

inline char const *dDir(Dependencies const *dep, int idx)
{
    return at(dep->dirNames, idx);
}

inline int const *dependent(Dependencies const *dep, int idx)
{
    return dep->dependent[idx];
}

#endif




