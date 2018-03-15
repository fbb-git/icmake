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
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &ga_termios);

    rss_fatal(0, 0, "Abnormal termination.");
}
