#include "icmun.h"

void fun_push_strconst ()
{
    UNS16
        offs;
    register char
        *str;

    offs = (UNS16) getint16 (infile);
    if ( (str = getstring (infile, headerp->offset[0], offs)) == (char *) -1 )
        error ("cannot get string, opcode at %s", hexstring (curoffs, 4));

    dumpint (offs);
    printf ("push string \"");
    dumpstring (str);
    puts ("\"");
    
    free (str);
}
