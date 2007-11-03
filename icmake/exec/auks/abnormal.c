/*
\funcref{abnormal}{void abnormal ()}
    {
        {int}{sig}{signal number}
        {int}{subcode}{subcode of signal}
    }
    {}
    {}
    {cleanup()}
    {abnormal.c}
    {

        This function issues an error with the string {\em ''Abnormal
        termination.''} as message. The {\em error()} function thereupon raises
        the {\em error\_occurred} flag.

        This function is attached to abnormal termination by the {\em signal()}
        function.

    }
*/

#include "../icm-exec.h"

void abnormal (int sig, int subcode)
{
    error ("Abnormal termination.");
}
