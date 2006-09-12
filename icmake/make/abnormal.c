/*
                            A B N O R M A L . C
*/

#include "icmake.h"

void abnormal_exit(int x)
{
    errors++;
    error("Abnormal ending");
}
