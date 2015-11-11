/*
                            A B N O R M A L . C
*/

#include "icmake.ih"

void abnormal_exit(int x)
{
    errors++;
    rss_error("Abnormal ending");
}
