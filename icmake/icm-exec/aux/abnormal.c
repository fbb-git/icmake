/*
        This function issues an error with the string {\em ''Abnormal
        termination.''} as message. The {\em error()} function thereupon raises
        the {\em error\_occurred} flag.

        This function is attached to abnormal termination by the {\em signal()}
        function.
*/

#include "aux.ih"

void aux_abnormal(int sig, int subcode)
{
    rss_error("Abnormal termination.");
}
