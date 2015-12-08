#include "icmun.ih"

void process()
{
    register Opcode op;
    register unsigned i;
    int32_t oldoffs;
    static char buf[200];

    printf("Binary file statistics:\n"
            "\tstrings           at offset\t0x%s\n" ,
                rss_hexString((unsigned)headerp->offset[0], 4 ));
    printf("\tvariables         at offset\t0x%s\n",
                rss_hexString((unsigned)headerp->offset[1], 4 ));
    printf("\tfilenames         at offset\t0x%s\n",
                rss_hexString((unsigned)headerp->offset[2], 4 ));
    printf("\tfirst instruction at offset\t0x%s\n\n",
                rss_hexString((unsigned)headerp->offset[3], 4 ));

    if (nvar)
    {
        puts("Variable section dump:");
        for (i = 0; i < nvar; i++)
            printf("\tvariable %s: %s\n",
                    rss_hexString(i, 4),
                    varname(var [i].type));
        putchar('\n');
    }

    if (headerp->offset[0] < headerp->offset[1])
    {
        oldoffs = ftell(infile);
        puts("String constants dump:");
        fseek(infile, headerp->offset[0], SEEK_SET);
        while (ftell(infile) < headerp->offset[1])
        {
            rss_fgetz(buf, 199, infile);
            printf("\t\"");
            dumpstring(buf);
            printf("\"\n");
        }
        putchar('\n');
        fseek(infile, oldoffs, SEEK_SET);
    }

    puts("Disassembled code:");
    while ((curoffs =(unsigned)ftell(infile)) <(unsigned)headerp->offset[0] )
    {
        if ((op = rss_getOpcode(infile)) < op_hlt &&
             op != (Opcode)-1
           )
        {
            printf("\t[%s] ", rss_hexString(curoffs, 4));
            printf("%s ", rss_hexString((unsigned)op, 2));
            p_procfun[op]();
        }
        else
            rss_fatal(0, 0, "At offset %s: opcode %s not defined", 
                                rss_hexString(curoffs, 4),
                                rss_hexString((unsigned)op, 2));
    }
    putchar('\n');
}
