/*
\funcref{fun\_system}{void fun\_system ()}
    {}
    {}
    {}
    {fun\_exec()}
    {funsyste.c}
    {

        This function expects a system string as last pushed {\em e\_str}
        value. The string is executed through a {\em system()} call (if this
        fails, an error is issued).

    }
*/

#include "icm-exec.h"

void fun_system ()
{
    register char
        *sys;					/* cmd string */
    register int
    	ret,					/* system() return */
    	mode;					/* P_CHECK wanted? */

    mode = stack [sp].vu.intval;		/* get mode arg */
    sys = stack [sp - 1].vu.i->ls.str;		/* get cmd string */

    if (echo)					/* re-echo if requested */
        puts (sys);
    fflush (stdout);

#ifdef MSDOS
    _heapmin ();				/* max memory under DOS */
#endif
    
    ret = system (sys);				/* do system call */
    if (ret && P_CHECKMODE (mode))		/* terminate upon failure? */
        error ("system - failure of system call (status %d)", ret);
        
    reg.type = e_int;				/* return result as */
    reg.vu.intval = ret;			/* e_int */
}
