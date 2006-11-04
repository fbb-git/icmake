/*
                            F I L E F O U N . C

    With the MS-DOS implementation the received attribute is compared
    to the request:

    O_FILE:     accepts only A_NORMAL, A_ARCH/A_READ with A_NORMAL accepted
    O_DIR:      accepts only A_SUBDIR
    O_SUBDIR:   accepts only A_SUBDIR, but not the . and ..
    O_ALL:      accepts all

    Not yet supported: O_VOLID:    accepts A_VOLID

*/

#include "icrssdef.h"

char *filefound()
{
    register size_t
        request,
        received;

    received = ifs.find.attrib;             /* use fast registers */
    request = ifs.attrib;

    /* First part: see if request */
    /* matches attribute of entry */

    if                                      /* (list all accepted variants) */
    (
        !                                   /* if not: */
        (
            (
             (request & O_FILE)             /* FILE requested, and */
             &&                             /* an attribute received  */
             !                              /* indicating that it's no file */
             (
                 received &
                 (A_SUBDIR | A_HIDDEN | A_SYSTEM | A_VOLID)
             )
            )
            ||
            (
             (request & (O_SUBDIR | O_DIR)) /* OR: any subdir requested */
             &&                             /* and A_SUBDIR received */
             (received & A_SUBDIR)
            )
            ||
            (
             (request & O_ALL)              /* OR: ALL requested */
             &&                             /* and not volume label received */
             !(received & A_VOLID)
            )
        )
    )
        return (NULL);                      /* then reject the entry */


    /* Second part: O_SUBDIR (overruled by O_ALL / O_DIR)   */
    /*              entries '.' and '..' are rejected       */

    if
    (
        !(request & (O_DIR | O_ALL))        /* not O_DIR / O_ALL requested, */
        &&                                  /* AND */
        (request & O_SUBDIR)                /* clean subdir requested */
        &&                                  /* AND */
        (
            !strcmp(ifs.find.name, ".")     /* . or .. found */
            ||
            !strcmp(ifs.find.name, "..")
        )
    )
        return (NULL);                      /* then reject the entry */

    return (ifs.find.name);                 /* return found name */
}
