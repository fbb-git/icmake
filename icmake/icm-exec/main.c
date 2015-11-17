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
    ListVariable const *list = listcons_charPtrPtr(environ);
    stack_push(list);
    listDestructor(list);

            // second main arg: argv
    list = listcons_size_charPtrPtr(argc, argv);
    stack_push(list);
    listDestructor(list);

                // first main arg: argc
    IntVariable const *nArgs = intcons_int(argc - 1);
    stack_push(nArgs);
    intDestructor(nArgs);

    return opcodefun_process();
}

