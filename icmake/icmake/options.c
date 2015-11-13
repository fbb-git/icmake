#define msg

#include "icmake.ih"

    /*
        process all std options or perform -h and -a actions
    */
void options(int argc, char **argv)
{
    char *program = rss_programName(argv[0]);
    char **argPtr = argv + 1;

    if (argc == 1)
        usage(program);

    while (*argPtr)                     /* remove options */        
    {
        if (**argPtr != '-')            /* no option arg: skip & continue */
        {
            ++argPtr;
            continue;
        }

        if (optChars(program, *argPtr, argv))
        {
            inspectFlags(program);
            execArgIdx = argPtr - argv + 1;
            return;
        }
                                        /* remove the -x option argument */
        memmove(argPtr, argPtr + 1, 
                            (argv + argc - argPtr + 1) * sizeof(char *));
    }

    inspectFlags(program);       /* all done: inspect/fine-tune flags */

    if (flags == 0)
        noOptions(argv);
}

#if 0
    void about(char const *p)
    {
        puts("about icmake\n");
    }
    
    
    FLAGS_ flags;
    
    char *temporary;
    char *source_name;
    char *dest_name;
    
    void main(int argc, char **argv)
    {
        int idx = options(argc, argv);
    
        printf("idx: %u flags: %x\n"
                "arguments:\n"
                ,
                idx, flags);
    
        while (*argv)
            puts(*argv++);
    }
#endif




