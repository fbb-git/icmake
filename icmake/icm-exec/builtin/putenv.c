/*
\funcref{fun\_putenv}{void fun\_builtin_chDir ()}
    {}
    {}
    {}
    {}
    {funbuiltin_chDir.c}
    {

        This function expects a string to enter in the environment on top of
        the stack.

        Return register {\em reg} is set to type {\em e\_int}. The value of the
        return register is set to 0 if the setting was added to the
        environment.

    }
*/

#include "builtin.ih"
#ifdef M_UNIX      /* sco unix 3.2.4.0 conflicting header files ... */
    extern int putenv(const char *);
#endif

void builtin_putEnv()
{
    gb_reg = *intcons_int
            (
                putenv
                (
                    rss_strdup
                    (
                        string_charp(stack_top())
                    )
                )
            );
}
