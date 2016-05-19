#include "dependencies.ih"

Dependencies sdep;

void DependenciesCons()
{
    regComp(&sdep.d_includeRegex,
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

    dReadClasses();                      // assigns 'size'

    sdep.d_gchPaths = VectorCons();
    resize(sdep.d_gchPaths, sdep.d_size);

    sdep.d_gch = optGch();
    
    if ((sdep.d_useAll = optUseAll()))
    {
        sdep.d_useAllPaths = VectorCons();
        resize(sdep.d_useAllPaths, sdep.d_size);

        for (int idx = 0; idx != sdep.d_size; ++idx)
            assign(sdep.d_useAllPaths, idx, 
                strcatN(3, depDir(idx), "/", sdep.d_useAll)
            );
    }

    sdep.d_gchIndicator = initRow(sdep.d_size);
    sdep.d_useAllExists = initRow(sdep.d_size);
    
    dFindDependents();
}




//    printf("gch files must be compiled for: ");
//    for (int idx = 0, end = sdep.d_size; idx != end; ++idx)
//    {
//        if (sdep.d_gchIndicator[idx])
//            printf("%s ", at(sdep.d_dirNames, idx));
//    }
//    printf("\n");
//
//    printf("classes haing USE_ALL files: ");
//    for (int idx = 0, end = sdep.d_size; idx != end; ++idx)
//    {
//        if (sdep.d_useAllExists[idx])
//            printf("%s ", at(sdep.d_dirNames, idx));
//    }
//    printf("\n");







