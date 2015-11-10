/*
        This function is attached to the `at-exit' list by {\em main()}.
*/

#include "../icm-exec.h"

void cleanup()
{
    if (bimname)
    { 
        fclose(infile);
        unlink(bimname); 
    } 
}
