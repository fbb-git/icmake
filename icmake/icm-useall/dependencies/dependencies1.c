#include "dependencies.ih"

Dependencies sdep;

void DependenciesCons()
{
    regComp(&sdep.includeRegex,
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

    d_readClasses();                      // assigns 'size'

    sdep.gchPaths = VectorCons();
    resize(sdep.gchPaths, sdep.size);

    sdep.gch = optGch();
    
    if ((sdep.useAll = optUseAll()))
    {
        sdep.useAllPaths = VectorCons();
        resize(sdep.useAllPaths, sdep.size);

        for (int idx = 0; idx != sdep.size; ++idx)
            assign(sdep.useAllPaths, idx, 
                strcatN(3, depDir(idx), "/", sdep.useAll)
            );
    }

    sdep.gchIndicator = initRow(sdep.size);
    sdep.useAllExists = initRow(sdep.size);
    
    d_findDependents();
}




//    printf("gch files must be compiled for: ");
//    for (int idx = 0, end = sdep.size; idx != end; ++idx)
//    {
//        if (sdep.gchIndicator[idx])
//            printf("%s ", at(sdep.dirNames, idx));
//    }
//    printf("\n");
//
//    printf("classes haing USE_ALL files: ");
//    for (int idx = 0, end = sdep.size; idx != end; ++idx)
//    {
//        if (sdep.useAllExists[idx])
//            printf("%s ", at(sdep.dirNames, idx));
//    }
//    printf("\n");







