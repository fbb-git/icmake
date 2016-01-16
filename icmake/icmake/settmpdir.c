#include "icmake.ih"

void setTmpDir()
{
    struct stat buf;

    char pidStr[20];
    snprintf(pidStr, 20, "%u", getpid());

    tmpDir = rss_strcat(
                rss_strjoin(
                    stat("/tmp", &buf) == 0     /* /tmp exists          */
                    &&
                    S_ISDIR(buf.st_mode)        /* and it's a directory */
                    &&
                    (buf.st_mode & S_IRWXO) == S_IRWXO  /* and rwx mode */
                    ?
                        "/tmp"
                    :
                        getenv("HOME"),
                    "/"                         /* trailing / */
                ),
                pidStr                          /* pid as initial filename */
            );
}


        
