/*
    The {\em main()} function opens the binary makefile, reads the offsets
    of the variables and strings sections, calls {\em getvar()} to retrieve
    the variables, pushes {\em argc}, {\em argv} and {\em envp}
    onto the {\em icmake}
    stack and then calls {\em process()} to execute the makefile.

    The exit value of {\em main()} is held in the global variable {\em
    retval} (see also {\em fun\_ret()}).

    Function {\em cleanup()} is attached to the `at-exit' list for DOS
    systems. This is necessary so that the startup working directory is
    restored. For UNIX systems, no {\em atexit()} list is created.
*/

#define msg
/* 
*/

#include "icm-exec.ih"

int main(int argc, char **argv)
{
    if (argc == 1)
        usage(argv[0]);

    argv = aux_testRmBim(&argc, argv);

    builtin();                  /* prepare builtin data */

    opcodefun_setInfile(argv[1]);

    atexit(cleanup);

    signal(SIGINT, (void (*)(int))aux_abnormal);

    opcodefun_setGlobalVariables();

            // third main arg: environ
    ListVariable *list = listcons_charPtrPtr(environ);
    stack_push(list);
    listDestructor(list);

// FBB    {
// FBB        ListVariable env = *listcons();
// FBB
// FBB        aux_environ2list(&env);
// FBB        stack_push(&env);             /* envp: 3rd arg of main() */
// FBB        listDestructor(&env);
// FBB    }

            // second main arg: argv
    list = listcons_size_charPtrPtr(argc, argv);
    stack_push(list);
    listDestructor(list);

// FBB     {
// FBB         ListVariable args = *listcons_size_charPtrPtr((size_t)argc, argv);
// FBB         stack_push(&args);            /* argv: 2nd arg of main() */
// FBB         listDestructor(&args);
// FBB     }

                // first main arg: argc
    IntVariable *nArgs = intcons_int(argc - 1);
    stack_push(nArgs);
    intDestructor(nArgs);

//    {
//        IntVariable nArgs = *intcons_int(argc - 1);
//        stack_push(&nArgs);           /* argc: 1st arg of main() */
//    }

    return opcodefun_process();
}

