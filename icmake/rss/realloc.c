/*
    {\em rss_realloc()} attempts to reallocate the memory pointed to by {\em
    ptr}. If {\em ptr} is NULL, {\em rss_realloc()} simply behaves like {\em
    malloc()}. When allocation indicates failure, {\em error()} is called
    to terminate the program with an appropriate message.

    The new requested size may be zero. In this case, {\em rss_realloc()}
    frees the memory associated with {\em ptr}.
*/

/* #define msg
*/

#include "rss.ih"

void *rss_realloc (void *ptr, size_t size)
{
    register void *newptr;

    if (! size)
    {
        if (ptr)
            free (ptr);
        return NULL;
    }

    newptr = ptr != NULL ?
                    realloc(ptr, size)
                :
                    malloc (size);

    if (! newptr)
        rss_error ("out of memory");

    return newptr;
}
