/*
\funcref{fun\_getpid}{void fun\_getpid ()}
    {}
    {}
    {newvar()}
    {}
    {fungetpi.c}
    {

	The process ID number is returned as an {\em e\_int} variable. 
	Under MS-DOS, this number is set to the paragraph of the PSP. Under 
	UNIX, the true process ID number is returned.

    }
*/

#include "builtin.ih"

void fun_getpid ()
{
    reg.type = e_int;
    reg.vu.intval = (INT16)
#ifndef MSDOS
	getpid ();
#else
	_psp;
#endif	    
}
