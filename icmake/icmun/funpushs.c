#include "icmun.ih"

void fun_push_strconst ()
{
    uint16_t
        offs;
    register char
        *str;

    offs = (uint16_t) rss_getInt16 (infile);
    if ( 
        (str = rss_getString (infile, headerp->offset[0], offs)) 
        == (char *) -1 
    )
        rss_fatal(0, 0, "cannot get string, opcode at %s", 
                        rss_hexString (curoffs, 4));

    dumpint (offs);
    printf ("push string \"");
    dumpstring (str);
    puts ("\"");
    
    free (str);
}
