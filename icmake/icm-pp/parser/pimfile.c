#define msgx

#include "parser.ih"

static char buffer[MAX_PATHLEN];

char *p_IMfile()
{
    char *filename = p_getIMname();
    msg("looking for IM file `%s'", filename);

    char *im = rss_strdup(p_im);
    char *path = strtok(im, ":");           /* get the first path element */

    while (path)
    {
        strcpy(buffer, path);
        strcat(buffer, filename);

        if (access(buffer, R_OK) == 0)      /* return the 1st readable file */
        {
            free(filename);
            free(im);

            return rss_strdup(buffer);
        }

        path = strtok(NULL, ":");           /* not found: next IM element */
    }

    rss_error("can't find `%s' in IM directories (%s)", filename, p_im);

    free(filename);
    free(im);

    return NULL;                            /* to satisfy the compiler */
}


