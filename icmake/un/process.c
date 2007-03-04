#include "icmun.h"

void process ()
{
    register OPCODE_ op;
    register size_t i;
    INT32 oldoffs;
    static char buf [200];

    printf ("Binary file statistics:\n"
            "\tstrings           at offset\t%s\n" ,
                hexstring((size_t)headerp->offset[0], 4 ));
    printf ("\tvariables         at offset\t%s\n",
                hexstring((size_t)headerp->offset[1], 4 ));
    printf ("\tfilenames         at offset\t%s\n",
                hexstring((size_t)headerp->offset[2], 4 ));
    printf ("\tfirst instruction at offset\t%s\n\n",
                hexstring((size_t)headerp->offset[3], 4 ));

    if (nvar)
    {
        puts ("Variable section dump:");
        for (i = 0; i < nvar; i++)
            printf ("\tvariable %s: %s\n",
                    hexstring (i, 4),
                    varname (var [i].type));
        putchar ('\n');
    }

    if (headerp->offset[0] < headerp->offset[1])
    {
        oldoffs = ftell (infile);
        puts ("String constants dump:");
        fseek (infile, headerp->offset[0], SEEK_SET);
        while (ftell (infile) < headerp->offset[1])
        {
            fgetz (buf, 199, infile);
            printf ("\t\"");
            dumpstring (buf);
            printf ("\"\n");
        }
        putchar ('\n');
        fseek (infile, oldoffs, SEEK_SET);
    }

    puts ("Disassembled code:");
    while ( (curoffs = (size_t)ftell (infile)) < (size_t)headerp->offset[0] )
    {
        if ( (op = getopcode (infile)) < op_hlt &&
             op != (OPCODE_)-1
           )
        {
            printf ("\t[%s] ", hexstring(curoffs, 4));
            printf ("%s ", hexstring ((size_t)op, 2));
            procfun [op] ();
        }
        else
        {
            fprintf (stderr, "bad opcode at %s", hexstring(curoffs, 4));
            error ("(opcode %s)", hexstring((size_t)op, 2));
        }
    }
    putchar ('\n');
}
