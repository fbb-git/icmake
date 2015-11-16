/*
    With the MS-DOS implementation the received attribute is compared
    to the request:

    IS_FILE:     accepts only NORMAL_FILE, ARCHIVED/A_READ with NORMAL_FILE accepted
    IS_DIR:      accepts only SUBDIR
    IS_SUBDIR:   accepts only SUBDIR, but not the . and ..
    IS_ALL:      accepts all

    Not yet supported: O_VOLID:    accepts VOLUME_ID

*/

#include "rss.ih"

char *rs_fileFound()
{
    register size_t
        request,
        received;

    received = gr_ifs.find.attrib;             /* use fast registers */
    request = gr_ifs.attrib;

    /* First part: see if request */
    /* matches attribute of entry */

    if                                      /* (list all accepted variants) */
    (
        !                                   /* if not: */
        (
            (
             (request & IS_FILE)             /* FILE requested, and */
             &&                             /* an attribute received  */
             !                              /* indicating that it's no file */
             (
                 received &
                 (SUBDIR | HIDDEN_FILE | SYSTEM_FILE | VOLUME_ID)
             )
            )
            ||
            (
             (request & (IS_SUBDIR | IS_DIR)) /* OR: any subdir requested */
             &&                             /* and SUBDIR received */
             (received & SUBDIR)
            )
            ||
            (
             (request & IS_ALL)              /* OR: ALL requested */
             &&                             /* and not volume label received */
             !(received & VOLUME_ID)
            )
        )
    )
        return (NULL);                      /* then reject the entry */


    /* Second part: IS_SUBDIR (overruled by IS_ALL / IS_DIR)   */
    /*              entries '.' and '..' are rejected       */

    if
    (
        !(request & (IS_DIR | IS_ALL))        /* not IS_DIR / IS_ALL requested, */
        &&                                  /* AND */
        (request & IS_SUBDIR)                /* clean subdir requested */
        &&                                  /* AND */
        (
            !strcmp(gr_ifs.find.name, ".")     /* . or .. found */
            ||
            !strcmp(gr_ifs.find.name, "..")
        )
    )
        return (NULL);                      /* then reject the entry */

    return (gr_ifs.find.name);                 /* return found name */
}
