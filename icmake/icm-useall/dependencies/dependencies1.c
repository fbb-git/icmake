#include "dependencies.ih"

Dependencies *DependenciesCons(Options *options)
{
    Dependencies *dep = rss_realloc(0, sizeof(Dependencies));

    dep->options = options;

    regComp(&dep->includeRegex,
            "^[ \\t]*#include[ \\t]*\""     // #include "
                        "(\\.\\./)?"        // #1:   ../          (opt)
                        "(([^/\"]+)/)?"     // #2, #3: ((class)/) (opt)
                        "([^/\"]+)"         // #4:  (whatever)
                        "\"");              // "

    // #include "../class/whatever"     - numbered sub-patterns
    //           <1><--2->        
    //              <-3-> <--4-->

    // #include "whatever"              - include a local header -> toDo
    //                                    (#1: NULL #2: NULL  #3: NULL,  #4)

    // #include "class/whatever"        - include nested  header (fm main)
    //                                    (#1: NULL $2        #3         #4)

    // #include "../class/whatever"     - include another class's header
    //                                    (#1       #2        #3         #4)

    // #include "../whatever"           - include a main-header
    //                                    (#1       #2: NULL  #3: NULL   #4)

    readClasses(dep);                   // assigns 'size'

    dep->rm = oRm(dep->options);
    dep->useAll = oUseAll(dep->options);
    dep->gch = rss_realloc(0, MAX_PATHLEN);

    dep->gchIndicator = allocRow(dep->size);
    dep->useAllIndicator = allocRow(dep->size);

    findDependents(dep);

//    printf("gch files must be compiled for: ");
//    for (int idx = 0, end = dep->size; idx != end; ++idx)
//    {
//        if (dep->gchIndicator[idx])
//            printf("%s ", at(dep->dirNames, idx));
//    }
//    printf("\n");
//
//    printf("classes haing USE_ALL files: ");
//    for (int idx = 0, end = dep->size; idx != end; ++idx)
//    {
//        if (dep->useAllIndicator[idx])
//            printf("%s ", at(dep->dirNames, idx));
//    }
//    printf("\n");

    return dep;
}







