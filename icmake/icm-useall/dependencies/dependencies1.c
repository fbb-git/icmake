#include "dependencies.ih"

Dependencies s_Dependencies;

void DependenciesCons()
{
    regComp(&s_Dependencies.includeRegex,
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

    resize(s_Dependencies.gchPaths, s_Dependencies.size);

    s_Dependencies.rm = optRm();
    s_Dependencies.useAll = optUseAll();

    s_Dependencies.gchIndicator = allocRow(s_Dependencies.size);
    s_Dependencies.useAllIndicator = allocRow(s_Dependencies.size);
    
    d_findDependents();
}




//    printf("gch files must be compiled for: ");
//    for (int idx = 0, end = s_Dependencies.size; idx != end; ++idx)
//    {
//        if (s_Dependencies.gchIndicator[idx])
//            printf("%s ", at(s_Dependencies.dirNames, idx));
//    }
//    printf("\n");
//
//    printf("classes haing USE_ALL files: ");
//    for (int idx = 0, end = s_Dependencies.size; idx != end; ++idx)
//    {
//        if (s_Dependencies.useAllIndicator[idx])
//            printf("%s ", at(s_Dependencies.dirNames, idx));
//    }
//    printf("\n");







