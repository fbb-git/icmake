/*
                                O P T I O N S . C
*/

#include "icmake.h"

int options (char **argv, int *argc)
{
    register int
        c;
    char
        *cp;
    char
        pid_string[30];                     /* used with -x */

    while ((c = getopt(argc, argv)) != -1)
    {
        switch (c)
        {
            case 'a':
                about();
            break;

            case 'b':
                flags |= f_blunt;
            break;

            case 'c':
                flags |= f_compiler;
            break;

            case 'i':
                flags |= f_icmake;          /* flag icmake taken literally  */
                if (!(source_name = getoptval(argc, argv)))
                    error("-i requires source-filename");
                return getoptindex();       /* and return the index of args */
                                            /* to icm-exec */
            case 'p':
                flags |= f_preprocessor;
            break;

            case 'q':
                flags |= f_quiet;           /* no banner */
            break;

            case 't':
                flags |= f_tmpbim | f_icmake; /* flag use temporary bimfile  */

                if (!(cp = getoptval(argc, argv)))
                    error("-t requires temporary bim-filename");

                while (*cp == ' ')          /* skip initial blanks in optval*/
                    cp++;

                                            /* build pid-string */
                sprintf(pid_string, "%d", getpid());
                                            /* destination with pid-extension */
                dest_name = xstrdup(change_ext(cp, pid_string));
                                            
                strcat(pid_string, "a");    /* temp. pim-file extension */
                temporary = xstrdup(change_ext(cp, pid_string));

                source_name = argv[1];
            return getoptindex() + 1;       /* index of remaining args */
                                            /* + 1 for the extra arg on the */
                                            /* #!/...-x... line */

            case '-':
                return getoptindex();       /* return index of args to icm-exec
                                            */
        }
    }
    return *argc;
                                            /* return index of args to icm-exec
                                            */
}

/*
int flags;

void main(int argc, char **argv)
{
    options(argv, &argc);

    printf("flags: %x\n"
            "arguments:\n"
            ,
            flags);
    while (argc--)
        puts(*argv++);
}
*/
